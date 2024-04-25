#include		"picture.h"

t_picture               *efnew_picture(t_zposition		pos,
				       t_bunny_size             size,
				       const char               *name,
				       const char               *filename)
{
  t_picture		*pict;

  if ((pict = malloc(sizeof(t_picture))) == NULL)
    {
      perror("malloc new_picture");
      return (NULL);
    }
  if ((pict->name = malloc(strlen(name))) == NULL)
    {
      free(pict);
      perror("malloc new_picture_name");
      return (NULL);
    }
  if ((pict->img = bunny_load_pixelarray(filename)) == NULL)
    {
      free(pict->name);
      free(pict);
      perror("malloc new_picture_img");
      return (NULL);
    }
  strcpy(pict->name, name);
  pict->size = size;
  pict->pos = pos;
  return (pict);
}
