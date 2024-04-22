#ifndef			__LABEL_H__

#define			__LABEL_H__

typedef struct	        s_label
{
  t_bunny_position	pos;
  t_bunny_size		size;
  const char		*name;
  const char		*text;
  t_bunny_color		*font_color;
  t_bunny_color		*bg;
}			t_label;

t_label			*efnew_label(t_bunny_position	pos,
				     t_bunny_size	size,
				     const char		*name,
				     const char		*text,
				     t_bunny_color	*font_color,
				     t_bunny_color	*bg);
void			efdelete_label(t_label		*label);


#endif	//		__LABEL_H__
