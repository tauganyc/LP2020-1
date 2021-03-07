#include <stdio.h>
int main(void)
{
int a,b;
scanf("%i",&a);
scanf("%i",&b);
if(a>b)
{
  printf("%i %i\n" ,b,a);
}
else{
  printf("%i %i\n" ,a,b);
}
return 0;
}