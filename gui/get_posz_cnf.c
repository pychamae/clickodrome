#include "gui.h"

t_zposition efget_posz_cnf(t_bunny_configuration *cnf)
{
  t_zposition pos;
  if (cnf == NULL)
    {
      pos.x = 400;
      pos.y = 400;
      pos.z = -1;
      return (pos);
    }
  bunny_configuration_getf(cnf,&pos.x,"components.pos[0]");
  bunny_configuration_getf(cnf,&pos.y,"components.pos[1]");
  bunny_configuration_getf(cnf,&pos.z,"components.pos[2]");
  return(pos);
}

