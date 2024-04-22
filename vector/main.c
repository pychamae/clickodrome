#include        "dprintf.h"
#include        "vector.h"
#include        <stdlib.h>
#include        <string.h>
#include        <unistd.h>

int main(void)
{
    /*    t_vector        *test;
    t_vector        *test_projection;
    int             tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t          i;

    test = _efvector_new(sizeof(int), 10);
    i = 0;
    while (i < 10)
        {
            efvector_push(test, (void *)&tab[i]);
            i += 1;
        }
    i = 0;
    while (i < test->data_count)
        {
            stu_dprintf(1, "Elem n°%d : %d(/%d)\n", i, *efvector_at(test, i, int), test->data_count);
            if ((i + 1) != *efvector_at(test, i, int))
                stu_dprintf(1, "\nErreur !!\n");
            i += 1;
        }
    efvector_pop_back(test);
    i = 0;
    while (i < test->data_count)
        {
            stu_dprintf(1, "Elem n°%d : %d(/%d)\n", i, *efvector_at(test, i, int), test->data_count);
            if ((i + 1) != *efvector_at(test, i, int))
                stu_dprintf(1, "\nErreur !!\n");
            i += 1;
        }
    test_projection = efvector_view(test, 5, 4);
    i = 0;
    while (i < test_projection->data_count)
        {
            stu_dprintf(1, "projection n°%d : %d(/%d)\n",
                        i, *efvector_at(test_projection, i, int), test->data_count);
            if ((i + 1) != *efvector_at(test, i, int))
                stu_dprintf(1, "\nErreur !!\n");
            i += 1;
        }
    stu_dprintf(1, "Projection supprimé : %d\n", efvector_delete(test_projection));
    stu_dprintf(1, "test supprimé : %d\n", efvector_delete(test));
    */
    t_vector            *test;
    t_vector            *colum1;
    t_vector            *colum2;
    t_vector            *colum3;
    char                *text;

    text = malloc(sizeof(char) * 10);
    test = _efvector_new(sizeof(t_vector), 3);
    colum1 = _efvector_new(sizeof(char) * 10, 3);
    colum2 = _efvector_new(sizeof(char) * 10, 3);
    colum3 = _efvector_new(sizeof(char) * 10, 3);

    strcpy(text, "02");
    efvector_push(colum1, text);
    text[0] = '1';
    efvector_push(colum2, text);
    text[0] = '2';
    efvector_push(colum3, text);
    text[0] = '3';
    efvector_push(colum1, text);
    text[0] = '4';
    efvector_push(colum2, text);
    text[0] = '5';
    efvector_push(colum3, text);
    text[0] = '6';
    efvector_push(colum1, text);
    text[0] = '5';
    efvector_push(colum2, text);
    text[0] = '6';
    efvector_push(colum3, text);
    text[0] = '0';

    efvector_push(test, colum1);
    efvector_push(test, colum2);
    efvector_push(test, colum3);

    for (int y = 0; y < 3; ++y)
        {
            for (int x = 0; x < 3; ++x)
                {
                    stu_dprintf(1, "%s", efvector_at(efvector_at(test, x, t_vector), y * 10, char));
                    if (x + 1 != 3)
                        write(1, ",", 1);
                }
            if (y + 1 != 3)
                write(1, "\n", 1);
        }

    efvector_delete(test);
    efvector_delete(colum1);
    efvector_delete(colum2);
    efvector_delete(colum3);
    free(text);
}
