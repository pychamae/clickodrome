#ifndef			__GUI_H__

#define			__GUI_H__

#include		"vector.h"
#include		"div.h"

#include		<lapin.h>

typedef struct		s_gui
{
  const char		*conf_file;
  t_vector		components;
  t_vector		divs;
}			t_gui;

t_gui			*efnew_gui(const char			*file);
void			efdelete_gui(t_gui			*gui);
void			efload_conf_gui(t_gui			*gui);
void			efinteract_gui(t_gui			*ck,
				       const char		*type,
				       const char		*div_name,
				       const char		*obj_name,
				       ...);
void			efdisplay_gui(t_gui			*ck,
				      t_bunny_pixelarray	*px);

#endif //		__GUI_H__
