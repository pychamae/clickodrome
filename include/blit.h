#ifndef		__BLIT_H__

#define		__BLIT_H__

#include	<lapin.h>


struct		t_blit
{
  t_bunny_position	shift;
  t_bunny_position	src_pos;
  t_bunny_position	target_pos;
  t_bunny_position	final_pos;
  t_bunny_position	clip;
  int			src_limit;
  int			target_limit;
  t_bunny_position	size_dest;
  bool		is_x_reverse;
  bool		is_y_reverse;
};


#endif //	__BLIT_H__
