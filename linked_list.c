#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
}*head;
void ins(int ele){
struct node *nn;
nn = (struct node*)malloc(sizeof(struct node));
nn -> data = ele;
nn -> next = head;
head = nn;
}
void dis(){
if(head){
    struct node *p = head;
    printf("\n");
    while(p)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}
}
int main(){
int x;
for(x = 100; x >= 10; x-=10)
    ins(x);
dis();
return 0;
}
