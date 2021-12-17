#include<stdio.h>
int main()
{
int res, res1, res2, res3;
res = 1 || 1;
res1 = 1 || 0;
res2 = 0 || 1;
res3 = 0 || 0;
printf("The OR resut is = %d\n", res);
printf("The OR result is =%d\n", res1);
printf("The OR result is =%d\n", res2);
printf("The OR result is =%d\n", res3);
return 0;
}