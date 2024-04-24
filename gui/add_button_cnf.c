#include "gui.h"

void efnew_button_gui_cnf(t_bunny_configuration *cnf,t_gui *gui)
{
  t_button *button;
  t_bunny_position pos;
  t_bunny_size size;
  char *name;
  char *text;
  t_bunny_color color;
  t_bunny_color bg;
  t_bunny_color hover_color;
  t_vecteur *function;
  pos = efget_pos_cnf(cnf);
  size = efget_size_cnf(cnf);
  bunny_configuration_getf(cnf,&name,"components.name");
  bunny_configuration_getf(cnf,&text,"components.text");
  color = efget_color_cnf(cnf,"font_color");
  bg = efget_color_cnf(cnf,"bg");
  hover_color = efget_color_cnf(cnf,"hover_color");
  bunny_configuration_getf(cnf,&func1,"components.functions[1]");
  bunny_configuration_getf(cnf,&func2,"components.functions[2]");
  void *(*func_ptr)(char *text);
  function = efvector_new(func_ptr,0);
  button = efnew_button(pos,size,name,text,font_color,bg,function);
  if (button == NULL)
    return(NULL);
  efvector_push(gui->div->buttons,button);
  efvector_push(gui->components,&gui->div->buttons);
  efvector_view(gui->div->buttons);
  efvector_view(gui->components);
}

