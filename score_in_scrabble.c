#include <stdio.h>
#include <string.h>

// Program for counting points scored in a Scrabble game

void main()
{
    int points = 0;
    printf("Enter word: ");
    char text[100];
    scanf("%s", text);

        char d1[] = "AEIOULNRSTaeioulnrst";
        char d2[] = "DGdg";
        char d3[] = "BCMPbcmp";
        char d4[] = "FHVWYfhvwy";
        char d5[] = "Kk";
        char d8[] = "JXjx";
        char d10[] = "QZqz";

        for (int n = 0; n < strlen(text); n++)
        {
            for (int a = 0; a < strlen(d1); a++)
            {
                if (text[n] == d1[a])
                {
                    points++;
                }

            }
            for (int a = 0; a < strlen(d2); a++)
            {
                if (text[n] == d2[a])
                {
                    points += 2;
                }

            }
            for (int a = 0; a < strlen(d3); a++)
            {
                if (text[n] == d3[a])
                {
                    points += 3;
                }

            }
            for (int a = 0; a < strlen(d4); a++)
            {
                if (text[n] == d4[a])
                {
                    points += 4;
                }

            }
            for (int a = 0; a < strlen(d5); a++)
            {
                if (text[n] == d5[a])
                {
                    points += 5;
                }

            }
            for (int a = 0; a < strlen(d8); a++)
            {
                if (text[n] == d8[a])
                {
                    points += 8;
                }

            }
            for (int a = 0; a < strlen(d10); a++)
            {
                if (text[n] == d10[a])
                {
                    points += 10;
                }

            }
        }
    printf("You got: %d points", points);

}