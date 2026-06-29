#include <stdio.h>
#include <string.h>

struct Ticket 
{
    int seatNo;
    char name[50];
    int booked;   
};

int main() 
{
    struct Ticket ticket[10];
    int i, choice, seat, found;

   
    for(i = 0; i < 10; i++) 
    {
        ticket[i].seatNo = i + 1;
        ticket[i].booked = 0;
        strcpy(ticket[i].name, "");
    }

    do 
    {
        printf("\n TICKET BOOKING SYSTEM \n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Display Booked Tickets\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

        case 1:
            printf("\nAvailable Seats:\n");
            for(i = 0; i < 10; i++) {
                if(ticket[i].booked == 0)
                    printf("Seat %d\n", ticket[i].seatNo);
            }
            break;

        case 2:
            printf("Enter Seat Number (1-10): ");
            scanf("%d", &seat);

            if(seat < 1 || seat > 10) 
            {
                printf("Invalid seat number.\n");
                break;
            }

            if(ticket[seat-1].booked == 1) 
            {
                printf("Seat already booked.\n");
            } else 
            {
                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", ticket[seat-1].name);

                ticket[seat-1].booked = 1;
                printf("Ticket booked successfully.\n");
            }
            break;

        case 3:
            printf("Enter Seat Number to Cancel: ");
            scanf("%d", &seat);

            if(seat < 1 || seat > 10) 
            {
                printf("Invalid seat number.\n");
                break;
            }

            if(ticket[seat-1].booked == 0) 
            {
                printf("Seat is already available.\n");
            } else 
            {
                ticket[seat-1].booked = 0;
                strcpy(ticket[seat-1].name, "");
                printf("Ticket cancelled successfully.\n");
            }
            break;

        case 4:
            found = 0;
            printf("\nBooked Tickets:\n");
            printf("---------------------------------------\n");
            printf("Seat No\tPassenger Name\n");
            printf("---------------------------------------\n");

            for(i = 0; i < 10; i++) 
            {
                if(ticket[i].booked == 1) 
                {
                    printf("%d\t%s\n", ticket[i].seatNo, ticket[i].name);
                    found = 1;
                }
            }

            if(found == 0)
                printf("No tickets booked.\n");
            break;

        case 5:
            printf("Thank you for using the Ticket Booking System.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}