#include "div.h"
t_div			*efnew_div(const char			*name,
				   t_bunny_position		pos,
				   t_bunny_size			size)
{
  t_divs divs;

  divs.name = name;
  divs.pos = pos;
  divs.size = size;
  divs.in_div = false;
  divs.labels = efvector_new(labels, 3);
  divs.buttons = efvector_new(buttons, 3);
  divs.texte_boxes = efvector_new(texte_boxes, 3);
  divs.pictures = efvector_new(pictures, 3);
  divs.timer = efvector_new(timer, 3);
}
