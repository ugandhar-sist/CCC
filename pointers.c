#include <stdio.h>
int main(){
int x,*p;
x = 10;
p = &x;
printf("%d %p",*p,p);
return 0;
}
