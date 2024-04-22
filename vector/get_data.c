#include            "vector.h"

void                *get_data(t_vector      *vec,
                              size_t        position)
{
    position *= vec->sizeof_data;
    return(&((char *)vec->data_array)[position]);
}
