#include "gui.h"

t_gui efnew_gui(const char *file)
{
  t_bunny_configuration *cnf;
  t_gui *gui;
  char *divname;
  char *type;
  int i;
  int j;
  size_t nbr_divs;
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
	  if(type = BUTTON)
	    {
	      bunny_configuration_getf(cnf,&pos.x,"components[i].pos[0]");
	      bunny_configuration_getf(cnf,&pos.y,"components[i].pos[1]");
	      bunny_configuration_getf(cnf,&pos.z,"components[i].pos[2]");
	      bunny_configuration_getf(cnf,&size.width,"components[i].size[0]");
	      bunny_configuration_getf(cnf,&size.height,"components[i].size[1]");
	      bunny_configuration_getf(cnf,&name,"components[i].name");
	      bunny_configuration_getf(cnf,&text,"components[i].text");
	      bunny_configuration_getf(cnf,&color,"components[i].font_color[0]");
	      bunny_configuration_getf(cnf,&color,"components[i].font_color[1]");
	      bunny_configuration_getf(cnf,&color,"components[i].font_color[2]");
	      bunny_configuration_getf(cnf,&bg,"components[i].bg[0]");
	      bunny_configuration_getf(cnf,&bg,"components[i].bg[1]");
	      bunny_configuration_getf(cnf,&bg,"components[i].bg[2]");
	      bunny_configuration_getf(cnf,&hover_color,"components[i].hover_color[0]");
	      bunny_configuration_getf(cnf,&hover_color,"components[i].hover_color[1]");
	      bunny_configuration_getf(cnf,&hover_color,"components[i].hover_color[2]");
	      bunny_configuration_getf(cnf,&func1,"components[i].hover_color[2]");
	      bunny_configuration_getf(cnf,&func2,"components[i].hover_color[2]");

	    }
	}
    }
}
