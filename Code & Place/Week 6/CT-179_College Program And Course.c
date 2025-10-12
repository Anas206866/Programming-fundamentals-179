//College Program And Courses
#include <stdio.h>

int main() {
    int program, year;   // Variables to store program type and year

    // Ask user to select program type
    printf("Enter Program Type:\n");
    printf("1 = Computer Science\n");
    printf("2 = Electrical Engineering\n");
    printf("Enter your choice: ");
    scanf("%d", &program);

    // Outer switch for program selection
    switch (program) {
        case 1:  // Computer Science program
            printf("You selected Computer Science.\n");
            
            // Ask for the year inside Computer Science program
            printf("Enter Year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Enter your choice: ");
            scanf("%d", &year);

            // Nested switch for Computer Science years
            switch (year) {
                case 1:
                    printf("Courses for Computer Science - First Year:\n");
                    printf("1. Introduction to Programming\n");
                    printf("2. Mathematics I\n");
                    printf("3. Computer Fundamentals\n");
                    break;
                case 2:
                    printf("Courses for Computer Science - Second Year:\n");
                    printf("1. Data Structures\n");
                    printf("2. Operating Systems\n");
                    printf("3. Database Systems\n");
                    break;
                default:
                    printf("Invalid year for Computer Science.\n");
            }
            break;

        case 2:  // Electrical Engineering program
            printf("You selected Electrical Engineering.\n");

            // Ask for the year inside Electrical Engineering program
            printf("Enter Year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Enter your choice: ");
            scanf("%d", &year);

            // Nested switch for Electrical Engineering years
            switch (year) {
                case 1:
                    printf("Courses for Electrical Engineering - First Year:\n");
                    printf("1. Basic Circuits\n");
                    printf("2. Engineering Mathematics\n");
                    printf("3. Physics for Engineers\n");
                    break;
                case 2:
                    printf("Courses for Electrical Engineering - Second Year:\n");
                    printf("1. Electronics\n");
                    printf("2. Signals and Systems\n");
                    printf("3. Electrical Machines\n");
                    break;
                default:
                    printf("Invalid year for Electrical Engineering.\n");
            }
            break;

        default:
            printf("Invalid program type.\n");
    }

    return 0;  // End of program
}

