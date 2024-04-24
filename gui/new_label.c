#include "gui.h"

void efnew_label(t_bunny_configuration *cnf,t_gui *gui,int i)
{
  t_label *label;
  t_bunny_position pos;
  t_bunny_size size;
  char *name;
  char *text;
  t_bunny_color color;
  t_bunny_color bg;

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
  label = efnew_label(pos,size,name,text,font_color,bg);
  if (label == NULL)
    return(NULL);
  efvector_push(gui->div->labels,label);
  efvector_push(gui->components,&gui->div->labels);
  efvector_view(gui->div->labels);
  efvector_view(gui->components);
}
