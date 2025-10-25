#include <stdio.h>   
int main()
{
    char isFever, isFlu, isCough;  // Declare three character variables to store user input (Y/N)

    printf("Covid-19 Predictor\n");  // Display program title

    // Ask user if they have fever
    printf("You have fever? (Y/N): ");
    scanf(" %c", &isFever); // Note: space before %c removes newline issue from previous input

    // Ask user if they have flu
    printf("You have flu? (Y/N): ");
    scanf(" %c", &isFlu);

    // Ask user if they have cough
    printf("You have cough? (Y/N): ");
    scanf(" %c", &isCough);

    // Check all three symptoms — if all are yes (Y or y), predict infection
    if ((isFever == 'Y' || isFever == 'y') &&
        (isFlu == 'Y' || isFlu == 'y') &&
        (isCough == 'Y' || isCough == 'y'))
    {
        printf("You are infected.\n");
    }
    // Check for fever only
    else if (isFever == 'Y' || isFever == 'y')
    {
        printf("You have fever only.\n");
    }
    // Check for flu only
    else if (isFlu == 'Y' || isFlu == 'y')
    {
        printf("You have flu only.\n");
    }
    // Check for cough only
    else if (isCough == 'Y' || isCough == 'y')
    {
        printf("You have cough only.\n");
    }
    // If none of the above, user is healthy
    else
    {
        printf("You are alright.\n");
    }
	return 0;  
}

