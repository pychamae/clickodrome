#ifndef			__TIMER_H__

#define			__TIMER_H__

typedef struct	        s_timer
{
  const char		*name;
  t_vector		*functions;
}			t_timer;

t_timer		*efnew_timer(const char		*name,
			     const char		*text,
			     t_vector		*functions);
void			efdelete_timer(t_timer		*timer);


#endif	//		__TIMER_H__
