#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <float.h>

int main() {
//Q11    
    printf("Data Type        Size   Format Specifier  Range\n");
    printf("char             %d     %%c %%c            %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char    %d     %%u %%u            0 to %u\n", sizeof(unsigned char), UCHAR_MAX);
    printf("short            %d     %%hd %%hu          %d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short   %d     %%hu %%hu          0 to %u\n", sizeof(unsigned short), 0, USHRT_MAX);
    printf("int              %d     %%d %%u            %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int     %d     %%u %%u            0 to %u\n", sizeof(unsigned int), 0, UINT_MAX);
    printf("long             %d     %%ld %%lu          %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long    %d     %%lu %%lu          0 to %lu\n", sizeof(unsigned long), 0UL, ULONG_MAX);

//Q12
    printf("float            %d     %%f %%e %%E %%g   %e to %e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double           %d     %%f %%e %%E %%g   %e to %e\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("long double      %d     %%Lf %%Le %%LE %%Lg %Le to %Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
    return 0;
}