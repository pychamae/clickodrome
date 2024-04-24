#ifndef			__GUI_H__

#define			__GUI_H__

#include		"vector.h"
#include		"div.h"
#include		"draw.h"
#include		"label.h"
#include		<lapin.h>

typedef	enum		e_type
  {
    BUTTON = 0,
    TEXTBOX,
    LABEL,
    PICTURE
  }			t_type;


typedef struct		s_component
{
  void			*component;
  t_type		type;
}			t_component;

typedef struct		s_gui
{
  const char		*conf_file;
  t_vector		*components;
  t_component		focus_element;
  t_vector		*divs;
}			t_gui;

t_gui			*efnew_gui(const char			*file);
void			efdelete_gui(t_gui			*gui);

void			efload_conf_gui(t_gui			*gui);
void			efinteract_gui(t_gui			*ck,
				       const char		*type,
				       const char		*div_name,
				       const char		*obj_name,
				       ...);
void			efevent_gui(t_bunny_event const		*event,
				    void			*data);
void			efrefresh_gui(t_gui			*gui);
void			efdisplay_gui(t_gui			*ck,
				      t_bunny_pixelarray	*px);
void			efadd_button_gui(t_gui			*gui,
				     const char			*name,
				     t_bunny_position		pos,
				     t_bunny_size		size,
				     const char			*text,
				     t_bunny_color		*font_color,
				     t_bunny_color		*hover_color,
				     t_bunny_color		*bg,
				     t_vector		        *functions);
void			efadd_label_gui(t_gui			*gui,
				    t_bunny_position		pos,
				    const char			*name,
				    t_bunny_size		size,
				    const char			*text,
				    t_bunny_color		*font_color,
				    t_bunny_color		*bg);
void			efadd_text_box_gui(t_gui		*gui,
				       const char		*name,
				       t_bunny_position		pos,
				       t_bunny_size		size,
				       const char		*text,
				       t_bunny_color		*font_color,
				       t_bunny_color		*bg,
				       t_vector			*functions);
void			efadd_picture_gui(t_gui			*gui,
				      const char		*name,
				      t_bunny_position		pos,
				      t_bunny_size		size,
				      const char		*filename);
void			efadd_timer_gui(t_gui			*gui,
				    const char			*name,
				    t_vector			*functions);

#endif //		__GUI_H__
