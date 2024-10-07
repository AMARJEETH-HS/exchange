#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=10; 
    head->link=NULL;
     
    struct node *second=malloc(sizeof(struct node));
    second->data=13;
    second->link=NULL;
    head->link=second;

      struct node *third=malloc(sizeof(struct node));
    third->data=14;
    third->link=NULL;
    second->link=third;

    printf("%d\n",head->data);
    printf("%d\n",head->link->data);
    printf("%d\n",head->link->link->data);

    }

