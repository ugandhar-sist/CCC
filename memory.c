#include <stdio.h>
int main(){
int *p;
p = (int* )malloc(sizeof(int));
*p = 20;
printf("%d %p", *p, p);
free(p);
return 0;
}
