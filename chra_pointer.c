#include <stdio.h>
int main(){
char x[] = "SIMPLE", *c;
int *p;
p = x;
c = x;
printf("%c %p\n", *(p+1), (p+1));
printf("%c %p\n", *(c+1), (c+1));
}
