#include            "vector.h"

void                *efvector_push(t_vector         *vec,
                                   const void       *data)
{
    if (vec->data_count >= vec->array_capacity)
      vec = efvector_realloc(vec, vec->array_capacity * 2);
    efmemcpy(&((char*)vec->data_array)[vec->data_count * vec->sizeof_data], data, vec->sizeof_data);
    vec->data_count += 1;
    return(&((char *)vec->data_array)[(vec->data_count - 1) * vec->sizeof_data]);
}
