#include        "vector.h"

void            init_new_vector(size_t      elem_size,
                                size_t      initial_capacity,
                                t_vector    *new_vector)
{
    new_vector->sizeof_data = elem_size;
    new_vector->array_capacity = initial_capacity;
    new_vector->data_count = 0;
    new_vector->is_view = false;
}

