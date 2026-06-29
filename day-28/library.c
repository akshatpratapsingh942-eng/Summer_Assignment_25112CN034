#include <stdio.h>

struct Book 
{
    int id;
    char title[50];
    char author[50];
    int issued;      // 0 = Available, 1 = Issued
};

int main() 
{
    struct Book book[100];
    int n = 0, choice, id, i, found;

    do 
    {
        printf("\n LIBRARY MANAGEMENT SYSTEM \n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &book[n].id);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", book[n].title);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", book[n].author);

            book[n].issued = 0;
            n++;

            printf("Book added successfully.\n");
            break;

        case 2:
            if(n == 0) 
            {
                printf("No books available.\n");
            } else {
                printf("\n-------------------------------------------------------------\n");
                printf("ID\tTitle\t\tAuthor\t\tStatus\n");
                printf("-------------------------------------------------------------\n");

                for(i = 0; i < n; i++) 
                {
                    printf("%d\t%s\t\t%s\t\t%s\n",
                           book[i].id,
                           book[i].title,
                           book[i].author,
                           book[i].issued ? "Issued" : "Available");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) 
            {
                if(book[i].id == id) 
                {
                    printf("\nBook Found\n");
                    printf("Book ID : %d\n", book[i].id);
                    printf("Title   : %s\n", book[i].title);
                    printf("Author  : %s\n", book[i].author);
                    printf("Status  : %s\n",
                           book[i].issued ? "Issued" : "Available");
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Book not found.\n");
            break;

        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) 
            {
                if(book[i].id == id) 
                {
                    if(book[i].issued == 0) 
                    {
                        book[i].issued = 1;
                        printf("Book issued successfully.\n");
                    } else 
                    {
                        printf("Book is already issued.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Book not found.\n");
            break;

        case 5:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);

            found = 0;

            for(i = 0; i < n; i++) 
            {
                if(book[i].id == id) 
                {
                    if(book[i].issued == 1) 
                    {
                        book[i].issued = 0;
                        printf("Book returned successfully.\n");
                    } else {
                        printf("Book is already available.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Book not found.\n");
            break;

        case 6:
            printf("Thank you! Exiting Library Management System.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}