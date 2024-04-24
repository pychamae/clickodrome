#include "gui.h"

void efnew_label_cnf(t_bunny_configuration *cnf,t_gui *gui)
{
  t_label *label;
  t_bunny_position pos;
  t_bunny_size size;
  char *name;
  char *text;
  t_bunny_color color;
  t_bunny_color bg;
  t_component comp;

  pos = get_pos_cnf(cnf);
  size = get_size_cnf(cnf);
  bunny_configuration_getf(cnf,&name,"components.name");
  bunny_configuration_getf(cnf,&text,"components.text");
  bg = get_color_cnf(cnf,"bg");
  hover_color = get_color_cnf(cnf,"hover_color");
  label = efnew_label(pos,size,name,text,font_color,bg);
  if (label == NULL)
    return(NULL);
  comp.component = &gui->div->labels;
  comp.type = 2;
  efvector_push(gui->div->labels,label);
  efvector_push(gui->components,comp);
  efvector_view(gui->div->labels);
  efvector_view(gui->components);
}
