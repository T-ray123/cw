/*You should write a program that represents a deck of cards as an array of 52
elements. Each element should be a structure that holds the suit and value of
the card.
• Populate your deck initially as a new deck sorted by suit (H,C,D,S) and then
within each suit, sorted by value (assume aces are low, i.e. have a value of 1).
• Print out this deck.
*/


/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cards, deck [52];

char value;
char suit = 'H'; 'C'; 'D';'S';

int main()
{
  for(i=0;i<13;i++)
  {
     while (i <52)
      {
          if( i > 39)

          {
             printf('S');
          }
          else if (i > 26) {
            printf('D');
          }
          else if (i>13) {
            printf('C');

          }
          else (i>0);
          printf('H');
          printf("Enter your result : " , i % 13);
          i=i+1
      }

  }

}
}
*/
/*
1. You should write a program that represents a deck of cards as an array of 52
elements. Each element should be a structure that holds the suit and value of
the card.
• Populate your deck initially as a new deck sorted by suit (H,C,D,S) and then
within each suit, sorted by value (assume aces are low, i.e. have a value of 1).
• Print out this deck.

2. Extend the program to prompt the user for a card number in the deck (starting with 1 being the ﬁrst card)and then print the card at that position in the following format:
The card at position n is 3C.
Where n is the position the user enters. In the case of a picture card use the numbers 11, 12, 13 to represent Jacks, Queens and Kings respectively. • Further extend the program to prompt the user for a card number in the deck (starting with 1 being the ﬁrst card) and then print the cards at the position immediately before and immediately after the speciﬁed position. You should use the following format:
The card in the position before n is 3C. The card in the position after n is 5C.
Note: Think carefully about what happens if n is 1 or n is 52. You should assume a circular deck.
*/

/*#include <stdint.h>
#include <stdio.h>
#define cards 52
#define suits cards / 13
#define values cards / 4

typedef struct
{
    uint8_t suit;
    uint8_t value;
} deck_t;

void deck_populate(deck_t deck[])
{
    char suit[] = {'H', 'C', 'D', 'S'};

    for (size_t i = 0; i < suits; i++) // Creating two for loops. //
        //The first one is to iterate the suit, and the second one is to iterate the value we are dealing with.//
    {
        for (size_t j = 0; j < values; j++)
        {
            deck[(i * values) + j].suit = suit[i];
            deck[(i * values) + j].value = j + 1;
        }
    }
}

void deck_print(deck_t deck[])
{
    for (size_t i = 0; i < cards; i++)
    {
        printf("%d%c\n", deck[i].value, deck[i].suit);
    }
}
 // Populating the deck and prompting the user to enter value. Converting with atoi function to prevent the error, when compiling.//
main()
{
    deck_t deck[cards];
    deck_populate(deck);
    deck_print(deck);
    char str [10];
    printf("Enter your number: ") ;
    scanf("%s",str);
    int val = atoi(str);

printf("The card at position %d is %d %c\n", val, deck[val].value, deck[val].suit);
}

void question_2(deck_t deck[])
{
    char str[10];
    scanf("%s", str);
    size_t pos = atoi(str) - 1;
    printf("The card at position %s is %d of %c\n", str, deck[pos].value, deck[pos].suit);

    //shoot the person that wrote this
    printf("Cards above:\n");
    for (size_t i = pos + 1; i < cards; i++)
    {
        printf("%d of %c\n", deck[i].value, deck[i].suit);
    }
    printf("Cards below:\n");
    if (pos == 0)
    {
        return;
    }
    for (long long i = pos - 1; i >= 0; i--)
    {
        printf("%d of %c\n", deck[i].value, deck[i].suit);
    }
}


/*
Extend the program to prompt the user for a card number in the deck (starting with 1 being the ﬁrst card)and then print the card at that position in the following format:
The card at position n is 3C.
Where n is the position the user enters. In the case of a picture card use the numbers 11, 12, 13 to represent Jacks, Queens and Kings respectively. • Further extend the program to prompt the user for a card number in the deck (starting with 1 being the ﬁrst card) and then print the cards at the position immediately before and immediately after the speciﬁed position. You should use the following format:
The card in the position before n is 3C. The card in the position after n is 5C.
Note: Think carefully about what happens if n is 1 or n is 52. You should assume a circular deck.

*/

#include <stdint.h>
#include <stdio.h>

#define suits 4
#define values 13
#define cards 52

typedef struct
{
    uint8_t suit;
    uint8_t value;
} deck_t;
current_value;

void deck_populate(deck_t deck[])
{
    char suit[] = {'D', 'H', 'S', 'C'};

    for (size_t i = 0; i < suits; i++)
    {
        for (size_t j = 0; j < values; j++)
        {
            deck[(i * values) + j].suit = suit[i];
            deck[(i * values) + j].value = j + 1;
        }
    }
}

void deck_print(deck_t deck[])

{
    printf("Printing deck : \n");
    for (size_t i = 0; i < cards; i++)
    {

        printf("%d %c\n", deck[i].value, deck[i].suit);
    }
}

void question_1(deck_t deck[])
{
    char str[10];
    printf("Enter a number ");
    scanf("%s", str);
    size_t pos = atoi(str) - 1;
    printf("The card at position %s is %d %c\n", str, deck[pos].value, deck[pos].suit);
}

void question_2(deck_t deck[])
{
    char str[10];
    printf("Please enter a number : ");
    scanf("%s", str);
    size_t pos = atoi(str) - 1;
    printf("The card at position %s is %d %c\n", str, deck[pos].value, deck[pos].suit);


    printf("The card after is :\n");
    for (size_t i = pos + 1; i < cards;i--)
    {
        printf("%d %c\n", deck[i].value, deck[i].suit);
    }
    printf("The card at position  before is :\n", pos);
    if (pos == 0)
    {
        return;
    }
    else if (pos==1)
    {
        printf("The card at position %s is %d %c\n", str, deck[pos].value, deck[pos].suit);
    }
    else if (pos==52)
        printf("The card at position %s is %d %c\n", str, deck[pos].value, deck[pos].suit);

    for (long i = pos - 1; i >= 0; i--)
    {
        printf("%d %c\n", deck[i].value, deck[i].suit);
    }
}
/*void question_3(deck_t deck[])
{
while(1) //this is considered true
{
uint8_t suits = 0;
for(int i = 0; i < cards; i++)
{
    if(i % 4 == 0)
    {
        deck[i].suit = 'D';
    }
    else if(i % 4 == 1)
    {
        deck[i].suit = 'C';
    }
    else if(i % 4 == 2)
    {
        deck[i].suit = 'H';
    }
    else
    {
        deck[i].suit = 'S';
    }
    deck[i].value = current_value;
    current_value = (current_value + 3) % values;

}
void question_3_numb(deck_t,deck[])
{
    int numb = [13]= {1,4,7,10,13,3,6,9,12,2,5,8,11};
   for (numb=0; numb<13; numb++)
   {
       if (deck.[i]suit = 'H')
       {
           counter++[numb];
       }
       else if (deck.[i]suit = 'C')
        counter++[numb]
   }
}*/
main()
{
    deck_t deck[cards];

    deck_populate(deck);
    deck_print(deck);

    question_1(deck);
    question_2(deck);
}











