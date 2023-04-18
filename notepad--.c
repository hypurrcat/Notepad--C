/*
NOTEPAD--
A Free Open Source "TEXT EDITOR"
                    [NOW PORTED TO C!]

Dom G. 2023
*/

// Last Updated: 4/17/2023

// Libraries
#include <stdio.h>
#include <string.h>

// Constants
    // The current program version
double PROGVERSION = 1.0;
    // Standard string length
#define STD_STRLEN 500
    // Standard line length for user input. Idk if this is a crash-worthy num or not
int STD_LINELEN = 1000;
    // Start string constant
char STARTWORD[5] = "START";
    // Break case string
char BREAKCASESTR[STD_STRLEN] = "Notepad--, please exit this program. I am done typing my file now.";


// Function Proto/Init
void printTitle();
void typingProg();

// Main Program
int main()
{
    // Init. variables
    int started = 0;
    char startedStr[STD_STRLEN];

    // Display Title
        // function: printTitle
    printTitle();

    // Display welcome message
    printf("Please enter the word START to start having extreme amounts of fun.\n");
    printf("You can't type start. This is case sensitive. This is by design. Feature not bug.\n\n");

    // Start prompting to start program
    while (started != 1)
    {
        // Prompt for "START" string
        printf("Do you want to start?: ");
        scanf("%s", startedStr);

        // Check initially whether the input is EXACTLY "START" or not.
        // If not, loop until it is.
        if (strcmp(startedStr, STARTWORD) == 0)
        {
            // Set started to true if "START" was entered
            started = 1;
        }
        else
        {
            // Print "error message"
            printf("THAT IS NOT 'START'!!!! TYPE IT RIGHT OR YOU WONT EVER GET TO SEE YOUR FAMILY AGAIN.\n");
        }
    }
    // Call writing function
    typingProg();

    // End Program
        // Return 0
    return 0;
}

void printTitle()
{
    // Just print the title. Done in separate function for cleanliness in main.
        // function: printf
    printf("======================================================\n");
    printf("eeeee eeeee eeeee eeee eeeee eeeee eeeee\n");
    printf("8   8 8  88   8   8    8   8 8   8 8   8\n");
    printf("8e  8 8   8   8e  8eee 8eee8 8eee8 8e  8   #### #### \n");
    printf("88  8 8   8   88  88   88    88  8 88  8\n");
    printf("88  8 8eee8   88  88ee 88    88  8 88ee8\n");
    printf("======================================================\n");
    // The version number will also be printed below
    printf("                                                 v%.1f\n\n", PROGVERSION);
}

void typingProg()
{
    // Init variables
    char currentLine[STD_LINELEN];
    char allLines[STD_LINELEN][STD_LINELEN];
    int iter = 0;
    char filename[STD_STRLEN];

    // Print break condition
    printf("\n\n\n");
    printf("You can now start typing. To finish your file, please type this exact phrase (excluding quotation marks):\n");
    printf("\"Notepad--, please exit this program. I am done typing my file now.\"\n");
    printf("\n\n");

    // Consume the newline character left in the input buffer
    fgets(currentLine, STD_LINELEN, stdin);

    // Prime loop
    fgets(currentLine, STD_LINELEN, stdin);

    // Main type/write loop
    while(1)
    {
        // Remove newline character from input string
        currentLine[strcspn(currentLine, "\n")] = 0;

        // Place current string/line written into 2d string array
        strcpy(allLines[iter], currentLine);

        // Increase iteration count
        iter++;

        // Check if user entered the break case string
        if (strcmp(currentLine, BREAKCASESTR) == 0)
        {
            // Break the loop if the break case string was entered
            break;
        }

        // Get input
        fgets(currentLine, STD_LINELEN, stdin);
    }

    // Get file name
    printf("Enter file name to output to (ENDING IN YOUR FILE EXTENSION): ");
    scanf("%s", filename);

    // Open file for writing
    FILE* fp = fopen(filename, "w");

    // Write each line to file
    for (int i = 0; i < iter - 1; i++)
    {
        fprintf(fp, "%s\n", allLines[i]);
    }

    // Close file
    fclose(fp);
}