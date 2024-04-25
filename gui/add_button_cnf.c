#include "gui.h"

void efadd_button_cnf(t_bunny_configuration *cnf,t_gui *gui)
{
  int i;
  int j;
  i = 0;
  void *link;
  t_button *button;
  t_bunny_position pos;
  t_bunny_size size;
  char *name;
  char *text;
  char *lib;
  t_bunny_color color;
  t_bunny_color bg;
  t_bunny_color hover_color;
  t_component comp;
  t_vector *function;

  pos = efget_pos_cnf(cnf);
  size = efget_size_cnf(cnf);
  bunny_configuration_getf(cnf,&name,"components.name");
  bunny_configuration_getf(cnf,&text,"components.text");
  color = efget_color_cnf(cnf,"font_color");
  bg = efget_color_cnf(cnf,"bg");
  hover_color = efget_color_cnf(cnf,"hover_color");
  j = bunny_configuration_casesf(cnf,"components.functions");

  if (j > 0)
    {
      bunny_configuration_getf(cnf,&lib,"components.functions[0]");
      link = dlopen(lib, RTLD_NOW); // lib needs to contain path to the library
    }
  function = efnew_vector(void (*func_ptr)(void),j);
  while (i <  j)
    {
      bunny_configuration_getf(cnf,&func,"components.functions[%d]",i);
      func_ptr = dlsym(link,func);
      efpush_vector(function,func_ptr);
      i++;
    }

  button = efnew_button(pos,size,name,text,font_color,bg,function);
  if (button == NULL)
    return(NULL);
  comp.component = &gui->div->buttons;
  comp.type = 0;
  efvector_push(gui->div->buttons,button);
  efvector_push(gui->components,comp);
  efvector_push(gui->libs,link);
}

