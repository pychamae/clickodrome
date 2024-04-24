#include "gui.h"

void efget_pos_cnf(t_bunny_configuration *cnf)
{
  t_bunny_position pos;
  bunny_configuration_getf(cnf,&pos.x,"components.pos[0]");
  bunny_configuration_getf(cnf,&pos.y,"components.pos[1]");
  if (pos == NULL)
    {
      pos.x = 400;
      pos.y = 400;
      return (pos);
    }
  return(pos);
}
