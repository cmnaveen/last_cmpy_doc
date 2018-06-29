#include<stdio.h>
int main()
{
char *p = "a";
char *q = "a";

if(p == q)
printf("%x---%x\n",p,q);
else
    printf("\n--------\n");
printf("%x---%x\n",p,q);

return 0;
}
