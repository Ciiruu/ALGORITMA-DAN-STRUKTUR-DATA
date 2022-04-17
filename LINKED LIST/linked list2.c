#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
void awal()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n aman cok");
    }
    else
    {
        printf("masukkan data: \n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\ndata berhasil disimpan di node awal\n");
    }
}
void akhir()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n aman cok");
    }
    else
    {
        printf(" masukkan data: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("berhasil disimpan di NODE Akhir\n");
        }
        else
        {
            temp = head;
            while (temp->next = NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("berhasil disimpan\n");
        }
    }
}
void sembarang()
{
    int i, lokasi, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("masukan data: ");
        scanf("%d", &item);
        ptr->data = item;
        printf("mau simpan dimana oi: ");
        scanf("%d", &lokasi);
        temp = head;
        for (i = 0; i < lokasi; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("tiddak dapat disimpan");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNODE berhasil disimpan\n");
    }
}
void lihat()
{

    {
        struct node *ptr;
        ptr = head;
        if (ptr == NULL)
        {
            printf("tidak ada data");
        }
        else
        {
            printf(" data yang tersimpan: ");
            while (ptr != NULL)
            {
                printf("%d - ", ptr->data);
                ptr = ptr->next;
            }
            printf("\n");
        }
    }
}

int main()
{
    int pilihan = 0;
    while (pilihan != 5) // 5 utk explicit
    {
        printf(" ==== MENU LINKED LIST ====");
        printf("\n ==========================");
        printf("\n 1. input data di node awal\n 2. input data di node akhir \n 3. input data di node sembarang\n 4. lihat data dlm linked list\n 5. hapus NODE\n 6. keluar");
        printf("\n pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            awal();
            break;

        case 2:
            akhir();
            break;

        case 3:
            sembarang();
            break;

        case 4:
            lihat();
            break;

            // case 5:
            //     hapus();
            //     break;

        case 6:
            exit(0);
            break;

        default:
            printf("silahkan masukkan pilihanmu");
            break;
        }
    }
}