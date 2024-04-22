#include            "vector.h"
#include            <stdlib.h>

size_t              efvector_clear(t_vector     *vec)
{
    size_t          len;

    len = vec->data_count;
    if (vec->is_view)
        return(0);
    vec->data_count = 0;
    return (len);
}
