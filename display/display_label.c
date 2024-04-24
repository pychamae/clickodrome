#include		"label.h"
#include		"draw.h"

void                    efdisplay_label(t_label                 *label,
					t_bunny_zpixelarray     *zpx,
					t_bunny_pixelarray	*font)
{
  t_zposition		pos_end;

  if (font_color != NULL)
    {
      pos_end.x = label->pos.x + label->size.x;
      pos_end.y = label->pos.y + label->size.y;
      pos_end.z = label->pos.z;
      draw_rectangle(zpx, label->pos, pos_end, label->font_color[0]);
    }
  eftext(zpx, font, label->pos, label->text);
  pos.y -= 12;
  eftext(zpx, font, label->pos, label->name);
}
