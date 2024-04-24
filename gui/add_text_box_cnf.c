#include "gui.h"

void efnew_text_box_cnf(t_bunny_configuration *cnf,t_gui *gui)
{
  t_text_box *text_box;
  t_bunny_position pos;
  t_bunny_size size;
  char *name;
  char *text;
  t_bunny_color color;
  t_bunny_color bg;
  t_vecteur *function;
  pos = get_pos_cnf(cnf);
  size = get_size_cnf(cnf);
  bunny_configuration_getf(cnf,&name,"components.name");
  bunny_configuration_getf(cnf,&text,"components.text");
  color = get_color_cnf(cnf,"font_color");
  bg = get_color_cnf(cnf,"font_color");
  bunny_configuration_getf(cnf,&func1,"components.functions[1]");
  bunny_configuration_getf(cnf,&func2,"components.functions[2]");
  void *(*func_ptr)(char *text);
  function = efvector_new(func_ptr,0);
  text_box = efnew_text_box(pos,size,name,text,font_color,bg,function);
  if (text_box == NULL)
    return(NULL);
  efvector_push(gui->div->text_boxes,text_box);
  efvector_push(gui->components,&gui->div->text_boxes);
  efvector_view(gui->div->text_boxes);
  efvector_view(gui->components);
}
