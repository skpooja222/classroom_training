#include<stdio.h>
int main()
{
    int band, bor, bxor, lsh, rsh;
    band = 150 & 139;
    bor = 150 | 139;
    bxor = 150 ^ 139;
    lsh = 150 << 3;
    rsh = 150 >> 3;
    printf("150 & 139 = %d\n", band);
    printf("150 | 139 = %d\n", bor);
    printf("150 ^ 139 = %d\n", bxor);
    printf("150 << 3 = %d\n", lsh);
    printf("150 >> 3 = %d\n", rsh);
    return 0;

}