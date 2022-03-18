#include <stdio.h>
#include <stdlib.h>

int main()
{
      int a=6;
    int *p, *q;
      printf(" a %p\n " , p=a);
//   nie dziala printf("%p", *p=&a);
// nie dziala   printf("%p", &p=q);
       printf("d %p\n  ", p=&q);
       printf("e %p\n  ", p=*&q);
       printf("f %p\n  ", p=q);
       printf("g %p\n ", p=*q);
    // nie dziala printf("%p", *p=q);
  // nie dziala  printf("%p", *p=*q);
     return 0;
}
