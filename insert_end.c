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
void del(){ // for deleting the first most element.
if(head){
    struct node *t=head;
    head = head -> next;
    free(t);
}
}
void ins_end(int ele){
if(!head) {ins(ele);}
else{
    struct node *nn, *p=head;
    nn = (struct node*)malloc(sizeof(struct node));
    nn->data = ele;
    nn->next = NULL;

    while(p->next)
        p = p->next;
    p->next = nn;

}
}
int main(){
int x;
for(x = 100; x >= 10; x-=10)
    ins(x);
dis();
del();
ins(890);
ins_end(890);
dis();
return 0;
}
