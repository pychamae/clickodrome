#ifndef			__TIMER_H__

#define			__TIMER_H__

typedef struct	        s_timer
{
  const char		*name;
  t_vector		*functions;
}			t_timer;

t_timer		*efnew_timer(const char		*name,
			     const char		*text,
			     t_bunny_color		*font_color,
			     t_bunny_color		*bg);
void			efdelete_timer(t_timer		*timer);


#endif	//		__TIMER_H__
