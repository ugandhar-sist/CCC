#include <stdio.h>
int main(){
int x = 10, *p;
char y = 'a', *c;
p=&x;
c = &y;
printf("%d %c",*p,*c);
return 0;
}
