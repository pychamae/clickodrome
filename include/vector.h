#ifndef             _VECTOR_

#define             _VECTOR_

#include            <stdbool.h>
#include            <stddef.h>

typedef struct      s_vector
{
    void            *data_array;
    size_t          sizeof_data;
    size_t          array_capacity;
    size_t          data_count;
    bool            is_view;
}                   t_vector;

t_vector            *_efvector_new(size_t           elem_size,
                                   size_t           initial_capacity);
#define             efvector_new(type, icap) _efvector_new(sizeof(type), (icap));
size_t              efvector_clear(t_vector         *vec);
size_t              efvector_delete(t_vector        *vec);
void                *efvector_push(t_vector         *vec,
                                   const void       *data);
void                efvector_pop_back(t_vector      *vec);
t_vector            *efvector_view(t_vector         *vec,
                                   size_t           start,
                                   size_t           len);
#define             efvector_at(vector, position, type) &((type*)(vector)->data_array)[(position)]
void                *efmemcpy(void                  *dest,
                              const void            *src,
                              size_t                n);
t_vector            *efvector_realloc(t_vector      *vec,
                                      size_t        new_nb_element);
void                init_new_vector(size_t          elem_size,
                                    size_t          initial_capacity,
                                    t_vector        *new_vector);
t_vector            *efvector_new_view(size_t       elem_size,
                                       size_t       initial_capacity);
void                *get_data(t_vector              *vec,
                              size_t                position);

#endif
