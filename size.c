#include <stdio.h>
int main(){
char x = 'w', y[] = "ww", z = "WW";
printf("%d\n", sizeof(x));
printf("%d\n", sizeof(y));
printf("%d\n", sizeof(z));
printf("%d\n", sizeof('w'));
printf("%d\n", sizeof("WW"));
}
