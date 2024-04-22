#include            "vector.h"
#include            <stdlib.h>

t_vector            *efvector_new_view(size_t        elem_size,
                                      size_t        initial_capacity)
{
    t_vector        *new_vector;

    new_vector = malloc(sizeof(t_vector));
    if (!new_vector)
        return(NULL);
    init_new_vector(elem_size, initial_capacity, new_vector);
    return(new_vector);
}
