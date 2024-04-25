#include "gui.h"

void			efdisplay_gui(t_gui			*ck,
				      t_bunny_pixelarray	*px)
{
  size_t count;

  count =0;
  while (count < ck->divs->data_count)
    {
      efdisplay_div(efvector_at(gui->divs, count, t_div), px);
      count++;
    }
}
