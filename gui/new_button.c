
void efnew_button(t_bunny_configuration *cnf,t_gui *gui,t_vecteur *vec,int i)
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
  bunny_configuration_getf(cnf,&pos.x,"components[i].pos[0]");
  bunny_configuration_getf(cnf,&pos.y,"components[i].pos[1]");
  bunny_configuration_getf(cnf,&pos.z,"components[i].pos[2]");
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
  bunny_configuration_getf(cnf,&func1,"components[i].hover_color[2]");
  bunny_configuration_getf(cnf,&func2,"components[i].hover_color[2]");
  void *(*func_ptr)(char *text);
  function = efvector_new(func_ptr,0);
  button = efnew_button(pos,size,name,text,font_color,bg,function);
  efvector_push(gui->div->buttons,button);
  efvector_push(gui->components,&gui->div->buttons);
}
