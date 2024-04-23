#include                "vector.h"

int                     main()
{
    t_vector            *vec;
    int                 data[10] = {1,2,4,8,16,32,64,128,256,512};
    int                 i = 0;
    t_vector            *vect;

    vec = efvector_new(int, 10);
    printf("Taille d’un element = %ld\nCapacité en element = %ld\nNombre d’éléments contenu = %ld\nis_view est %d\n", \
           vec->sizeof_data, vec->array_capacity, vec->data_count, vec->is_view);
    printf("\nle nombre d'element supprimer est clear = %ld\n", \
           efvector_clear(vec));
    printf("\nle nombre d'element supprimer avec delete est = %ld\n",   \
           efvector_delete(vec));
    vec = efvector_new(0, 10);
    while (i < 10)
        {
            efvector_push(vec, &data[i]);
            printf("le nombre a la position %d est %d   implementer avec push\n", \
                   i, ((int*)vec->data_array)[i]);
            i ++;
        }
    i = 10;
    putchar('\n');
    while (i > 5)
        {
            efvector_pop_back(vec);
            printf("le nombre a la position %ld est %d   supprimer avec pop_back\n", \
                   vec->data_count, ((int*)vec->data_array)[vec->data_count]);
            i --;
        }
    efvector_pop(vec, 3);
    printf("\nla valeur a la position %d est %d\n", 3, efvector_at(vec, 3, int));
    vect = efvector_view(vec, 2, 2);
    printf("0 = %d 1 = %d\n",efvector_at(vect, 0, int), \
           efvector_at(vect, 1, int));
    printf("\nle nombre d'element supprimer avec delete est = %ld\n",   \
           efvector_delete(vect));
    printf("\nle nombre d'element supprimer avec delete est = %ld\n",   \
           efvector_delete(vec));
}

