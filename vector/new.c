#include        "vector.h"
#include        <stdlib.h>

t_vector        *_efvector_new(size_t       elem_size,
                               size_t       initial_capacity)
{
    t_vector    *new_vector;

    new_vector = malloc(sizeof(t_vector));
    if (!new_vector)
        return(NULL);
    new_vector->data_array = malloc(elem_size * initial_capacity);
    if (!new_vector->data_array)
        return(NULL);
    init_new_vector(elem_size, initial_capacity, new_vector);
    return(new_vector);
}
