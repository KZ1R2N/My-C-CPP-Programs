#include <stdio.h> #include<stdlib.h>

int sz = 0;

struct node
{

    int data;
    struct node *link;
};

struct node *head, *tail = NULL;

void Print_list(struct node *ptr)
{

    int cnt = 0;
    if (ptr == NULL)
    {

        printf("List is empty\n\n");
        return;
    }

    struct node *temp = ptr;

    while (temp != NULL)
    {

        cnt++;

        // printf("\nInside while\n");

        printf(" %d. Value = %d\n", cnt, temp->data);
        temp = temp->link;
    }

    printf("\nTotal values = %d\n", cnt);
    printf("\n");
    return;
}

struct node *insert(struct node *ptr)
{

    struct node *current = malloc(sizeof(struct node));

    int pos;
    printf("\nEnter a value : ");
    scanf("%d", &current->data);

    printf("Enter the position : ");
    scanf("%d", &pos);

    if (pos > sz + 1 || pos <= 0)
    {

        printf("Can't inserted in the given position\n\n");
        return ptr;
    }

    if (ptr == NULL || pos == 1)
    {

        current->link = ptr;
        sz++;
        printf("Inserted successfully\n\n");
        return current;
    }

    struct node *temp = ptr;

    int tpos = pos;

    pos--;
    while (--pos)
        temp = temp->link;

    current->link = temp->link;
    temp->link = current;

    sz++;
    printf("Inserted successfully\n\n");
    if (tpos == 1)
        return temp;
    else
        return ptr;
}

void Delete(struct node *ptr)
{

    if (ptr == NULL)

    {
        printf("List is empty\n\n");
        return;
    }

    int num;
    printf("Enter the value you'd like to delete: ");
    scanf("%d", &num);
    struct node *temp = ptr;
    struct node *current = temp->link;

    if (ptr->data == num)
    {

        ptr = ptr->link;
        free(temp);
        printf("Deleted successfully\n\n");
        sz--;
        return;
    }

    while (1)
    {

        if (current->data == num)
        {

            temp->link = current->link;
            free(current);
            printf("Value (%d) Deleted successfully\n\n", num);
            sz--;
            return;
        }

        temp = current;
        current = current->link;
    }
}

void search(struct node *ptr)
{

    struct node obj;
    int data, flag = 0;
    printf("Insert a value for search : ");
    scanf("%d", &data);

    ptr = ptr->link;

    while (ptr != NULL)
    {

        if (ptr->data == data)
        {

            printf("Value %d is in the linked-list\n\n", data);
            flag = 1;
            return;
        }
    }

    if (flag == 0)
        printf("\n%d not found\n", data);
}

void sortList()
{

    struct node *current = head, *index = NULL;
    int temp;

    if (head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {

            index = current->link;

            while (index != NULL)
            {

                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->link;
            }
            current = current->link;
        }
    }
}

int main()
{

    struct node *ptr;

    ptr = NULL;
    int choice;

    while (1)
    {

        printf("\n\n1 for print ...\n");
        printf("2 for insert value...\n");
        printf("3 for search a value...\n");
        printf("4 delete a value...\n");
        printf("5 for sort...\n-> ");

        scanf("%d", &choice);

        if (choice == 1)
        {

            printf("Values of the linked-list\n\n");

            Print_list(ptr);
        }

        else if (choice == 2)
        {

            printf("\n\tInsertion\n");
            ptr = insert(ptr);
        }

        else if (choice == 3)
        {

            printf("\n\tSearching\n\n");
            search(ptr);
        }

        else if (choice == 4)
        {

            printf("\n\tDeletion\n\n");
            Delete(ptr);
        }

        else if (choice == 5)
        {

            printf("\n\tSorting\n\n");
            sortList();
        }

        else
        {

            printf("\nWrong Input!\n");
            fflush(stdin);
        }
    }

    return 0;
}
