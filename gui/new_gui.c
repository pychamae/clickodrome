#include "gui.h"

t_gui *efnew_gui(const char *file)
{
  t_bunny_configuration *cnf;
  t_bunny_configuration *div;
  t_bunny_configuration *components;
  t_gui *gui;
  char *divname;
  t_zposition pos;
  t_bunny_size size;
  char *type;
  int i;
  int j;
  int nbr_divs;
  void *(*func_ptr)(void *text);
  cnf = bunny_open_configuration(file,NULL);
  if (cnf == NULL)
    {
      puts("Failed to open file");
      return(NULL);
    }
  i = 0;
  nbr_divs = bunny_configuration_childrenf(cnf,"[]");

  div = bunny_configuraton_start(cnf);
  while (div != bunny_configuration_end(cnf))
    {
      bunny_configuration_getf(div,&divname,"");
      pos = get_posz_cnf(div);
      bunny_configuration_getf(div,&size,"size");
      efnew_div(divname,pos,size);
      efadd_div(gui,pos,size,divname);
      i = 0;
      while (bunny_configuration_getf(div, &components, "components[%d]", i))
	{
	  bunny_configuration_getf(cnf,&type,"components[%d].type",i);
	  if(type == "button")
	    {
	      efadd_button_cnf(components,gui,j);
	    }
	  if(type == "label")
	    {
	      efadd_label_cnf(components,gui,j);
	    }
	  if(type == "text_box)")
	    {
	      efadd_text_box_cnf(components,gui,j);
	    }
	  if(type == "picture")
	    {
	      efadd_picture_cnf(components,gui,j);
	    }
	  i = i + 1;
	}
      div = bunny_configuration_next(div);
    }
}
