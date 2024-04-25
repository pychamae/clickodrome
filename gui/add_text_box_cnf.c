#include "gui.h"

void efadd_text_box_cnf(t_bunny_configuration *cnf,t_gui *gui)
{
  int i;
  int j;
  i = 0;
  t_text_box *text_box;
  t_bunny_position pos;
  t_bunny_size size;
  char *name;
  char *text;
  t_bunny_color color;
  t_bunny_color bg;
  t_vector *function;
  t_component comp;
  pos = get_pos_cnf(cnf);
  size = get_size_cnf(cnf);
  bunny_configuration_getf(cnf,&name,"components.name");
  bunny_configuration_getf(cnf,&text,"components.text");
  color = get_color_cnf(cnf,"font_color");
  bg = get_color_cnf(cnf,"font_color");

  j = bunny_configuration_casesf(cnf,"components.functions");

  if (j > 0)
    {
      bunny_configuration_getf(cnf,&lib,"components.functions[0]");
      link = dlopen(lib, RTLD_NOW); // lib needs to contain path to the library
    }
  function = efnew_vector(void (*func_ptr)(char *),j);
  while (i <  j)
    {
      bunny_configuration_getf(cnf,&func,"components.functions[%d]",i);
      func_ptr = dlsym(link,func);
      efpush_vector(function,func_ptr);
      i++;
    }

  text_box = efnew_text_box(pos,size,name,text,font_color,bg,function);
  comp.component = &gui->div->text_boxes;
  comp.type = 1;
  if (text_box == NULL)
    return(NULL);
  efvector_push(gui->div->text_boxes,text_box);
  efvector_push(gui->components,comp);
  efvector_push(gui->libs,link);
}
