#include		"label.h"
#include		"draw.h"

t_label			*efnew_label(t_bunny_zpixelarray	*zpx,
				     t_bunny_pixelarray		*font,
				     t_zposition		zpos,
				     t_bunny_size		size,
				     const char			*name,
				     const char			*text,
				     t_bunny_color		*font_color,
				     t_bunny_color		*bg)
{
  t_bunny_zposition	pos_end;

  if (*font_color != NULL)
    {
      pos_end.x = zpos.x + size.x;
      pos_end.y = zpos.y + size.y;
      pos_end.z = zpos.z;
      draw_rectangle(zpx, pos, pos_end, font_color[0]);
    }
  eftext(zpx, font, zpos, text);
}
