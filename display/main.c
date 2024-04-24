#include		"clickodrome.h"

int			main(int		argc,
			     char		**argv)
{
  t_program		*prog;

  if (argc != 2)
    {
      perror("argument invalide");
      return (-1);
    }
  prog->gui = efnew_gui(argv[1]);
  bunny_set_event_response(efevent_gui);
  bunny_set_loop_main_function(loop_function);
  bunny_set_display_function(display_function);
  bunny_loop(prog->win, 60, prog);
}
