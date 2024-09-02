#include<stdio.h>
int main(){
int a[10] = {10,20,30,40},*p;
p = a;
for(int i = 0; i<4;i++){
    printf("%d %p\n", *(p+i), (p+i));
    printf("%d %p\n", a[i], &a[i]);
}
return 0;
}
