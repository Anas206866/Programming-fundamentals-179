#include <stdio.h>   

int main(void)
{
    int dep, spe;   // Declare variables: 'dep' for department, 'spe' for specialization

    // Display the purpose of the program
    printf("This program will tell you your department based on your input.\n");

    // Ask user to choose their department
    printf("\nEnter your department:\n");
    printf("1. BCIT\n");
    printf("2. Software Engineering\n");
    printf("3. Electrical Engineering\n");
    printf("Your choice: ");
    scanf("%d", &dep);  // Read user's department choice

    // Switch statement to determine department based on user's input
    switch (dep)
    {
        case 1:
            printf("\nYour department is BCIT.\n");

            // Ask user to choose their specialization under BCIT
            printf("Select your specialization:\n");
            printf("1. CSCY\n");
            printf("2. CSDS\n");
            printf("3. CSGA\n");
            printf("4. CSAI\n");
            printf("Your choice: ");
            scanf("%d", &spe);  // Read user's specialization choice

            // Nested switch statement to determine specialization
            switch (spe)
            {
                case 1:
                    printf("Your specialization is CSCY.\n");
                    break;
                case 2:
                    printf("Your specialization is CSDS.\n");
                    break;
                case 3:
                    printf("Your specialization is CSGA.\n");
                    break;
                case 4:
                    printf("Your specialization is CSAI.\n");
                    break;
                default:
                    // If user enters an invalid specialization number
                    printf("Invalid specialization choice.\n");
            }
            break;

        case 2:
            // If user chooses Software Engineering department
            printf("Your department is Software Engineering.\n");
            break;

        case 3:
            // If user chooses Electrical Engineering department
            printf("Your department is Electrical Engineering.\n");
            break;

        default:
            // If the user enters an invalid department number
            printf("Invalid department choice.\n");
    }
	return 0;  
}

