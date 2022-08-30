#include "str_funcs.h"

/*
 * -----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 * |    |  A  |  B  |  C  |  D  | \0  |     |     |     |     |     |     |                              
 * -----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 * len =   1  -> 2  -> 3  -> 4  -> ^
 *                                 |
 *                            END OF CYCLE     
 */
size_t strlen_f(const char *str)
{
        size_t len = 0;

        for (len = 0; str[len] != '\0'; len++)
                ;

        return len;
}

/*
 * -----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 * |    |  A  |  B  |  C  |  D  | \0  |     |     |     |     |     |     |                              
 * -----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 *                                                                            
 *                                                                            
 *                                                                            
 *                                                                            
 *                                                                            
 */

char *strchr_f(const char *str, int target)
{
        int i = 0;

        while (*str != target)
                str++;

        return (char *) str;
}


char *strcpy_f(char *dest, const char *src)
{
        int i = 0;

        for (i = 0; src[i] != '\0'; i++)
                dest[i] = src[i];

        dest[i] = '\0';

        return dest;
}

int strcmp_f(const char *lhs, const char *rhs)
{
        int lhs_len = strlen(lhs);
        int rhs_len = strlen(rhs);
        
        int len = (lhs_len > rhs_len) ? rhs_len : lhs_len;

        int i = 0;
        
        for (i = 0; i < len && lhs[i] == rhs[i]; i++) {
               ;
        }

        if (lhs[i] - rhs[i] > 0)
                return 1;
        else if (lhs[i] - rhs[i] < 0)
                return -1;
        else return 0;
}

char *strcat_f(char *dest, const char *src)
{
        int size_dest = strlen(dest);
        int size_src = strlen(src);
        int i = 0;
        int j = 0;

        for (i = size_dest, j = 0; j <= size_src; i++, j++)
                dest[i] = src[j];

        return dest;
}

