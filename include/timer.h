#ifndef			__TIMER_H__

#define			__TIMER_H__

typedef struct	        s_timer
{
  size_t		last_time;
  size_t		delai;
  char			*name;
  t_vector		*functions;
}			t_timer;

t_timer		*efnew_timer(const char				*name,
			     size_t				delai,
			     t_vector				*functions);
void		efdelete_timer(t_timer				*timer);
void		efrefresh_timer(t_timer				*timer);


#endif	//		__TIMER_H__
