#include            "draw.h"

void                eftext(t_bunny_zpixelarray		*pix,
                           t_bunny_pixelarray		*font,
                           t_zposition			pos,
                           const char			*str)
{
    int             i;
    int             x;

    x = pos.x;
    i = 0;
    while (str[i] != '\0')
        {
            if (str[i] == '\n')
                {
                    pos.x = x;
                    pos.y += 15;
                }
            else
                {
                    efletter(pix, font, pos, str[i]);
                    pos.x += 12;
                }
            i ++;
        }
}
