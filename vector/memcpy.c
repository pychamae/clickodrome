#include    <stddef.h>

void        *efmemcpy(void        *dest,
                      const void  *src,
                      size_t      n)
{
    char    *c_dest;
    char    *c_src;
    size_t  i;

    c_dest = (char *) dest;
    c_src = (char *) src;
    i = 0;
    while (i < n)
        {
            c_dest[i] = c_src[i];
            i += 1;
        }
    return(dest);
}
