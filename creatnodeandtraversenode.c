#include<stdio.h>
#include<stdlib.h>
int main (){
    struct node{
        char a[20];
        struct node *next;
    }*head,*tail;
    head=tail=NULL;
    while(1){
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        temp->next=NULL;
        scanf("%s",temp->a);
        if(temp->a[0]=='0'){
            break;
        }
        else{
            if(head==NULL){
                head=tail=temp;
                continue;
            }
            else{
                tail->next=temp;
                tail=temp;
                
            }
        }
        free(temp);
    
     

    }
    struct node *current=head;
    while(current!=NULL){
        printf("%s ",current->a);
        current=current->next;
    }
 //what are you fucking doing
 //this is a trial for git commit -a -m
}