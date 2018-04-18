#include <stdio.h>
#include <stdlib.h>


struct btreenode{

    struct btreenode *leftchild;
    int data;
    struct btreenode *rightcihld;

};

void insert(struct btreenode **,int);
void inorder(struct btreenode *);

int main(){

    struct btreenode *bt;
    bt =NULL;
    int array[10];
    int i;
    printf("Agac Ogelerini Giriniz\n");
    for(i=0;i<=9;i++)
        scanf("%d",&array[i]);

    for(i =0; i<=9;i++)
        insert(&bt,array[i]);
    inorder (bt);

    for( i = 0 ; i<=9;i++)
        printf("%d , ",array[i]);


        return 0;

}



void insert(struct btreenode **sr, int num){

    if (*sr ==NULL){

        *sr =malloc (sizeof(struct btreenode));

        (*sr) -> leftchild =NULL;
        (*sr) -> data =num;
        (*sr) -> rightcihld =NULL;
    }else{

        if(num <(*sr)->data)
            insert(&((*sr)->leftchild),num);
        else
            insert(&((*sr)->rightcihld),num);
    }

}

void inorder (struct btreenode *sr){

    if(sr !=NULL){

        inorder(sr ->leftchild);
        printf("%d\t",sr->data);
        inorder(sr-> rightcihld);

    }

}