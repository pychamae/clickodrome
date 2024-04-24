#include		"label.h"

void                    efdelete_label(t_label                  *label)
{
  if (label != NULL)
    free(label);
}
