#include "gui.h"

t_gui efnew_gui(const char *file)
{
  t_bunny_configuration *cnf;
  t_gui *gui;
  char *divname;
  char *type;
  int i;
  int j;
  int nbr_divs;
  cnf = bunny_open_configuration(file,NULL);
  if (cnf == NULL)
    {
      puts("Failed to open file");
      return(0);
    }
  gui->conf_file = file;
  i = 0;
  nbr_divs = bunny_configuration_casesf(cnf,"divName");
  while(i < nbr_divs)
    {
      bunny_configuration_getf(cnf,&divname,"divName");
      bunny_configuration_getf(cnf,&pos,"divName");
      bunny_configuration_getf(cnf,&size,"divName");
      efadd_div(gui,pos,size,divname);
      while(j < nbr_comp)
	{
	  bunny_configuration_getf(cnf,&type,"components[i].type");
	  if(type == "button")
	    {
	      efnew_button(cnf,gui,i);
	    }
	  if(type == "label")
	    {
	      efnew_label(cnf,gui,i);
	    }
	}
    }
}
