#include <stdio.h>  
int main() 
{
    int ID, password;   // Declare integer variables for ID and password

    // Ask the user to enter their ID
    printf("Please Enter Your ID:\n ");
    scanf("%d", &ID);   // ? Fixed: Added missing '%' in "%d"

    // Outer switch to check the entered ID
    switch (ID) 
    { 
        case 500:   // If ID is 500
            printf("Enter your password:\n ");
            scanf("%d", &password);   // Read the password entered by the user

            // Inner switch to check the password
            switch (password) 
            {
                case 000:   // If password is 000
                    printf("Welcome Dear Programmer\n");
                    break;   // Exit from inner switch

                default:    // If password is not 000
                    printf("Incorrect password\n"); 
                    break;
            }
            break;   // Exit outer switch if ID is 500

        default: 
            // If ID is not 500
            printf("Incorrect ID\n"); 
            break;
    }
	return 0;   
}

