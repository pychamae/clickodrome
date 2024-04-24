#include "div.h"
size_t			efdelete_div(t_div			*div)
{
  size_t size;

  size = efvector_delete(divs->labels);
  size = size + efvector_delete(divs->buttons);
  size = size + efvector_delete(divs->text_boxes);
  size = size + efvector_delete(divs->pictures);
  size = size + efvector_delete(divs->timer);
  size = size + efvector_delete(div);
  return(size);
}
