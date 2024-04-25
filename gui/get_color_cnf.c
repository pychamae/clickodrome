#include "gui.h"

t_bunny_color efget_color_cnf(t_bunny_configuration *cnf,char *name);
{
  t_bunny_color color;
  bunny_configuration_getf(cnf,&color.ARGB[1],"components.%s[0]",name);
  bunny_configuration_getf(cnf,&color.ARGB[2],"components.%s[1]",name);
  bunny_configuration_getf(cnf,&color.ARGB[3],"components.%s[2]",name);
  if (color == NULL)
    {
      color.full = PINK;
      return (color);
    }
  return (color);
}
