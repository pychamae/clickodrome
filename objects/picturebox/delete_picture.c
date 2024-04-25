#include		"picture.h"

void                    efdisplay_picture(t_picture             *picture)
{
  if (picture == NULL)
    return;
  free(picture->name);
  free(picture->img);
  free(picture);
}
