#include <stdio.h>
#include <conio.h>
char ch;
void check(char, char);
char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
void gameName()
{
    printf("\n\t\t\t Tic Tac Game:");
}
void show()
{
    printf("\n\n\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n", a[0], a[1], a[2]);
    printf("\t\t\t---|---|---\n ");
    printf("\t\t\t %c | %c | %c \n", a[3], a[4], a[5]);
    printf("\t\t\t---|---|---\n ");
    printf("\t\t\t %c | %c | %c \n", a[6], a[7], a[8]);
    printf("\t\t\t---|---|---\n ");
}
void inputSymbol()
{
    printf("\n\tplayer 1 symbol : x :");
    printf("\n\tplayer 2 symbol : 0 :");
}
void start()
{
    char pa;
    printf("\nEnter who will Start the game: player 1 or player 2\n");
    scanf("%c", &pa);
}
void play()
{
    char p, s;
    printf("\nEnter the position and symbole for the player:\n");
    fflush(stdin);
    scanf("%c", &p);
    fflush(stdin); //  do input buffer empty so we can etner another value
    scanf("%c", &s);
    check(p, s);
}
void check(char P, char S)
{
    int i;
    for (i = 0; i <= 8; i++)
    {
        if (a[i] == P)
        {
            a[i] = S;
        }
    }
}
int end()
{
    if (a[0] == 'x' && a[3] == 'x' && a[6] == 'x' || a[1] == 'x' && a[4] == 'x' && a[7] == 'x' || a[2] == 'x' && a[5] == 'x' && a[8] == 'x' || a[0] == 'x' && a[1] == 'x' && a[2] == 'x' || a[3] == 'x' && a[4] == 'x' && a[5] == 'x' || a[6] == 'x' && a[7] == 'x' && a[8] == 'x' || a[0] == 'x' && a[4] == 'x' && a[8] == 'x' || a[2] == 'x' && a[4] == 'x' && a[6] == 'x')
    {
        return 100;
    }
    else if (a[0] == '0' && a[3] == '0' && a[6] == '0' || a[1] == '0' && a[4] == '0' && a[7] == '0' || a[2] == '0' && a[5] == '0' && a[8] == '0' || a[0] == '0' && a[1] == '0' && a[2] == '0' || a[3] == '0' && a[4] == '0' && a[5] == '0' || a[6] == '0' && a[7] == '0' && a[8] == '0' || a[0] == '0' && a[4] == '0' && a[8] == '0' || a[2] == '0' && a[4] == '0' && a[6] == '0')
    {
        return 200;
    }
    else
    {
        return 300;
    }
}
int main()
{
    // printf("Enter two char:\n");
    // char a, b;
    // scanf("%c", &a);
    // fflush(stdin);
    // scanf("%c", &b);
    // printf("a %c b %c", a, b);
    int k;
    gameName();
    show();
    inputSymbol();
    start();
    play();
label: // label is used as if no one can win the game than it came to label
       //  clrscr();
    show();
    play();
    k = end();
    // clrscr();
    show();
    if (k == 100)
    {
        printf("\nplayer 1 won:");
    }
    else if (k == 200)
    {
        printf("\nplayer 2 won");
    }
    else
    {
        goto label;
    }
    printf("\n Do you want to play again: enter y for for Yes and n for No:");
    fflush(stdin);
    scanf("%c", &ch);
    if (ch == 'y' || ch == 'Y')
    {
        a[0] = '1';
        a[1] = '2';
        a[2] = '3';
        a[3] = '4';
        a[4] = '5';
        a[5] = '6';
        a[6] = '7';
        a[7] = '8';
        a[8] = '9';
        goto label;
    }

    getch();
}