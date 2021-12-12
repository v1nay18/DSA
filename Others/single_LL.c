#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head(struct node *first)
{
    while (1)
    {
        printf("ENTER 1 TO INSERT AT BEGNING \n");
        printf("ENTER 2 TO INSERT AT THE END \n");
        printf("ENTER 3 TO INSERT BEFORE A GIVEN NUMBER \n");
        printf("ENTER 4 TO INSERT AFTER A GIVEN NUMBER \n");
        printf("ENTER 5 TO EXIT \n");
        int n;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            printf("enter the element \n");
            int x;
            scanf("%d", &x);
            struct node *temp;
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = x;
            if (first == NULL)
            {
                temp->next = NULL;
                first = temp;
                break;
            }
            temp->next = first;
            first = temp;
            break;
        }
        case 2:
        {
            struct node *tail;
            tail = first;
            int n;
            printf("enter the element \n");
            scanf("%d", &n);
            struct node *temp;
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = n;
            temp->next = NULL;
            if (first == NULL)
            {
                first = temp;
                break;
            }
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            tail->next = temp;
            break;
        }
        case 3:
        {
            struct node *tail;
            printf("enter the number before which you want add another number in linklist \n");
            int previous;
            scanf("%d", &previous);
            tail = first;
            if (tail == NULL)
            {
                printf("node is empty \n");
                break;
            }
            if (tail->data == previous)
            {
                struct node *temp;
                temp = (struct node *)malloc(sizeof(struct node));
                printf("enter the number which you want to add in link list");
                int dataa;
                scanf("%d", &dataa);
                temp->data = dataa;
                temp->next = first;
                first = temp;
                break;
            }
            while (tail->next->data != previous)
            {
                tail = tail->next;
                if (tail->next == NULL)
                {
                    printf("entered number is not found in the link list");
                    break;
                }
            }
            if (tail->next == NULL)
            {
                break;
            }
            printf("enter the number which you want to add in link list");
            int dataa;
            scanf("%d", &dataa);
            struct node *temp;
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = dataa;
            temp->next = tail->next;
            tail->next = temp;
            break;
        }
        case 4:
        {
            struct node *tail;
            printf("enter the number after which you want add another number in linklist \n");
            int previous;
            scanf("%d", &previous);
            tail = first;
            if (tail == NULL)
            {
                printf("linl list is empty \n");
                break;
            }
            while (tail->data != previous)
            {
                tail = tail->next;
                if (tail->next == NULL)
                {
                    break;
                }
            }
            if (tail->next == NULL)
            {
                if (tail->data == previous)
                {
                    int dataa;
                    printf("enter the number which you want to add in link list");
                    scanf("%d", &dataa);
                    struct node *temp;
                    temp = (struct node *)malloc(sizeof(struct node));
                    temp->data = dataa;
                    temp->next = NULL;
                    tail->next = temp;
                    break;
                }
                printf("enter data is not found in the link list \n");
                break;
            }
            int dataa;
            printf("enter the number which you want to add in link list");
            scanf("%d", &dataa);
            struct node *temp;
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = dataa;
            temp->next = tail->next;
            tail->next = temp;
            break;
        }
        case 5:
            printf("*MAIN MENUE*");
            return (first);
        }
    }
}
struct node *deletee(struct node *first)
{
    while (1)
    {
        printf("ENTER 1 TO DELETE ONE NODE FROM BEGNING \n ENTER 2 FOR DELETE FROM END \n ENTER 3 TO DELETE SPECIFIC ELEMENT \n");
        printf("ENTER 4 TO RETURN TO THE MAIN MENUE");
        int n;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            struct node *fir;
            fir = first;
            first = first->next;
            fir->next = NULL;
            free(fir);
            break;
        }
        case 2:
        {
            struct node *tempp;
            tempp = first;
            while (tempp->next->next != NULL)
            {
                tempp = tempp->next;
            }
            struct node *p = tempp->next;
            free(p);
            tempp->next = NULL;
            break;
        }
        case 3:
        {
            struct node *temp;
            struct node *t;
            temp = first;
            t = first;
            printf("enter the number which you want to delete");
            int n;
            scanf("%d", &n);
            if (t->data == n)
            {
                t = t->next;
                first = t;
                break;
            }
            while (temp->next->data != n)
            {
                temp = temp->next;
                if (temp->next->next == NULL)
                {
                    break;
                }
            }
            if (temp->next->next == NULL)
            {
                if (temp->next->data == n)
                {
                    temp->next = NULL;
                    break;
                }
                printf("entered number is not found in th link list");
                break;
            }
            t->next = temp->next;
            temp->next = NULL;
            free(temp);
            break;
        }
        case 4:
        {
            return first;
        }
        }
    }
}
void search(struct node *first)
{
    printf("enter the number which is to be search");
    int n;
    scanf("%d", &n);
    struct node *temp = first;
    while (temp != NULL)
    {
        if (temp->data == n)
        {
            printf("%d ispresent int the list \n", n);
            break;
        }
        temp = temp->next;
    }
    printf("entered numbewr is not present");
}
void noOFnode(struct node *first)
{
    struct node *temp = first;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("number of nodes = %d", count);
}
int main()
{
    struct node *z;
    struct node *first;
    first = (struct node *)malloc(sizeof(struct node));
    first = NULL;
    while (1)
    {
        printf("ENTER 1 INSERT \n");
        printf("ENTER 2 DELETE \n");
        printf("ENTER 3 TO SEARCH \n");
        printf("ENTER 4 COUNT NUMBER OF NODES \n");
        printf("ENTER 5 TO DISPLAY THE LINK LIST");
        printf("ENTER 6 TO EXIT");
        int n;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            z = head(first);
            first = z;
            break;
        case 2:
            z = deletee(first);
            first = z;
            break;
        case 3:
            search(first);
            printf("\n");
            break;
        case 4:
            noOFnode(first);
            printf("\n");
            break;
        case 5:
        {
            z = first;
            while (z != NULL)
            {
                printf("%d ", z->data);
                z = z->next;
            }
            printf("\n");
            break;
        }
        case 6:
        {
            printf("*EXIT");
            return 0;
        }
        }
    }
}
// single_LL