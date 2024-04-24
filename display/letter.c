#include                "label.h"

void                    efletter(t_bunny_zpixelarray    *pix,
                                 t_bunny_pixelarray     *font,
                                 t_zposition		*pos,
				 t_bunny_color		*col,
                                 char                   c)
{
  t_bunny_clipable	tmp;
  t_bunny_position	posk;

  if (pix->z[pos->x + pos->y * pix->px->clipable.buffer.width] > pos->z)
    {
      bunny_clipable_copy(&tmp, &font->clipable);
      font->clipable.clip_x_position = c * 10;
      font->clipable.clip_y_position = 0;
      font->clipable.clip_width = 10;
      posk.x = pos->x;
      posk.y = pos->y;
      blit(pix->px, font, &posk, col);

      bunny_clipable_copy(&font->clipable, &tmp);
    }
  return;
}
