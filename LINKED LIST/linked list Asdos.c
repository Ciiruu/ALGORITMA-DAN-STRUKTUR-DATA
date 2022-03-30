#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct tnode
    {
        int x;
        struct tnode* next;
    };


    struct tnode *head=NULL,*curr=NULL, *node=NULL;
    int i,j,inputan,*index;
    printf("Masukkan banyaknya inputan: ");
    scanf("%d",&j);

    

    for (i=0; i<j; i++)
    
    {

        printf("index[%d] = ",i,index[i]);
        scanf("%d",&inputan);
        node = (struct tnode *)malloc (sizeof(struct tnode));
        node -> x = inputan;

        if (head == NULL)
        {
			head = node;
            curr = node;
        }
        else
        {
            curr -> next = node;
            curr = node;
        }
    }

    curr -> next = NULL;
    curr = head;

    printf("Nilai yang telah diinput: ");
    while (curr != NULL)
    {
        printf("%d ", curr ->x );
        curr = curr -> next;
    }

    printf("\n");
}