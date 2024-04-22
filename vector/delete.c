#include        "vector.h"
#include        <stdlib.h>

size_t          efvector_delete(t_vector        *vec)
{
    size_t      del_elem;

    del_elem = efvector_clear(vec);
    if (vec->is_view == false)
        free(vec->data_array);
    free(vec);
    return(del_elem);
}
