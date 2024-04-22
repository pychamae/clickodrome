#include            "vector.h"
t_vector            *efvector_view(t_vector         *vec,
                                   size_t           start,
                                   size_t           len)
{
    t_vector        *view;

    view = efvector_new_view(vec->sizeof_data, len);
    view->is_view = true;
    view->data_array = &((char*)vec->data_array)[start * vec->sizeof_data];
    view->data_count = len;
    return(view);
}
