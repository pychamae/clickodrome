#include "gui.h"

void efnew_picture_cnf(t_bunny_configuration *cnf,t_gui *gui)
{
  t_picture *picture;
  t_bunny_position pos;
  t_bunny_size size;
  char *name;
  char *filename;

  pos = get_pos_conf(cnf);
  size = get_size_conf(cnf);
  bunny_configuration_getf(cnf,&name,"components.name");
  bunny_configuration_getf(cnf,&text,"components.filename");
  picture = efnew_picture(pos,size,name,filename);
  if (picture == NULL)
    return(NULL);
  efvector_push(gui->div->pictures,picture);
  efvector_push(gui->components,&gui->div->pictures);
  efvector_view(gui->div->pictures);
  efvector_view(gui->components);
}
