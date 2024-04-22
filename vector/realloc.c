#include        "vector.h"
#include        <stdlib.h>

t_vector        *efvector_realloc(t_vector          *vec,
                                  size_t            new_nb_element)
{
    void        *temp;
    void        *new_data;

    temp = vec->data_array;
    new_data = malloc(new_nb_element * vec->sizeof_data);
    if (new_nb_element < vec->array_capacity)
        efmemcpy(new_data, temp, (new_nb_element * vec->sizeof_data));
    else
        efmemcpy(new_data, temp, (vec->array_capacity * vec->sizeof_data));
    free(temp);
    vec->data_array = new_data;
    vec->array_capacity = new_nb_element;
    return(vec);
}
