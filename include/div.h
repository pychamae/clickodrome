#ifndef		__DIV_H__

#define		__DIV_H__

#include	"vector.h"

#include	<lapin.h>

typedef struct		s_div
{
  const char		*name;
  t_bunny_position	pos;  // pos top left
  t_bunny_size		size;
  t_vector		*labels;
  t_vector		*buttons;
  t_vector		*text_boxes;
  t_vector		*pictures;
  t_vector		*timer;
}			t_div;

t_div			*efnew_div(const char			*name,
				   t_bunny_position		pos,
				   t_bunny_size			size);
void			efdelete_div(t_div			*div);
void			efdisplay_div(t_div			*div,
				      t_bunny_pixelarray	*px);
void			efadd_button(t_div			*div,
				     const char			*name,
				     t_bunny_position		pos,
				     t_bunny_size		size,
				     const char			*text,
				     t_bunny_color		*font_color,
				     t_bunny_color		*hover_color,
				     t_bunny_color		*bg,
				     t_vector		        *functions);
void			efadd_label(t_div			*div,
				    t_bunny_position		pos,
				    const char			*name,
				    t_bunny_size		size,
				    const char			*text,
				    t_bunny_color		*font_color,
				    t_bunny_color		*bg);
void			efadd_text_boxes(t_div			*div,
					 const char		*name,
					 t_bunny_position	pos,
					 t_bunny_size		size,
					 const char		*text,
					 t_bunny_color		*font_color,
					 t_bunny_color		*bg,
					 t_vector		*functions);
void			efadd_picture(t_div			*div,
				      const char		*name,
				      t_bunny_position		pos,
				      t_bunny_size		size,
				      const char		*filename);
void			efadd_timer(t_div			*div,
				    const char			*name,
				    t_vector			*functions);

#endif //	__DIV_H__
