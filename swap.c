#include <stdio.h>
int main(){
char A[4] = "RAM", B[4], *p, *q;
p = B;
q = A;
while(*p++ = *q++);
printf("%s",B);
return 0;
}
