//Coursework regarding Si Stebbins order of decks

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











