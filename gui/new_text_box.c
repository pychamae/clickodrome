#include "gui.h"

void efnew_text_box(t_bunny_configuration *cnf,t_gui *gui,int i)
{
  t_text_box *text_box;
  t_bunny_position pos;
  t_bunny_size size;
  char *name;
  char *text;
  t_bunny_color color;
  t_bunny_color bg;
  t_vecteur *function;
  bunny_configuration_getf(cnf,&pos.x,"components[i].pos[0]");
  bunny_configuration_getf(cnf,&pos.y,"components[i].pos[1]");
  bunny_configuration_getf(cnf,&size.width,"components[i].size[0]");
  bunny_configuration_getf(cnf,&size.height,"components[i].size[1]");
  bunny_configuration_getf(cnf,&name,"components[i].name");
  bunny_configuration_getf(cnf,&text,"components[i].text");
  bunny_configuration_getf(cnf,&color.ARGB[1],"components[i].font_color[0]");
  bunny_configuration_getf(cnf,&color.ARGB[2],"components[i].font_color[1]");
  bunny_configuration_getf(cnf,&color.ARGB[3],"components[i].font_color[2]");
  bunny_configuration_getf(cnf,&bg.ARGB[1],"components[i].bg[0]");
  bunny_configuration_getf(cnf,&bg.ARGB[2],"components[i].bg[1]");
  bunny_configuration_getf(cnf,&bg.ARGB[3],"components[i].bg[2]");
  bunny_configuration_getf(cnf,&hover_color.ARGB[1],"components[i].hover_color[0]");
  bunny_configuration_getf(cnf,&hover_color.ARGB[2],"components[i].hover_color[1]");
  bunny_configuration_getf(cnf,&hover_color.ARGB[3],"components[i].hover_color[2]");
  bunny_configuration_getf(cnf,&func1,"components[i].functions[1]");
  bunny_configuration_getf(cnf,&func2,"components[i].functions[2]");
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
