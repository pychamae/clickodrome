#include		"timer.h"

void            efrefresh_timer(t_timer                         *timer)
{
  double	time;

  time = bunny_get_current_time();
  if (time - delai > timer->last_time)
}
