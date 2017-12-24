#include <stdio.h>
#include <conio.h>
void printpattern();
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int main()
{
    printpattern();
    input();
    win_lose();
    return 0;
}
void printpattern()
{   printf("\t\n\n\tTic Tac Toe\n\n");
    printf("\tPlayer 1 (X)  -  Player 2 (O)\n\n\n");

    printf("\t          |          |          \n");
    printf("\t     %c    |    %c     |    %c     \n",square[1],square[2],square[3]);
    printf("\t          |          |          \n");
    printf("\t__________|__________|__________\n");
    printf("\t          |          |          \n");
    printf("\t     %c    |     %c    |    %c     \n",square[4],square[5],square[6]);
    printf("\t          |          |          \n");
    printf("\t__________|__________|__________\n");
    printf("\t          |          |          \n");
    printf("\t     %c    |    %c     |    %c     \n",square[7],square[8],square[9]);
    printf("\t          |          |          \n");
}
void input()
{ int i,count=1,pos;
 for(i=1;i<10;i++)
 {
     if(count%2==0)
     {
         printf("\nPlayer 2:Enter your position ");
         scanf("%d",&pos);
         square[pos]='0';
         printpattern();
     }
     else
     {
         printf("\nPlayer 1:Enter your position ");
         scanf("%d",&pos);
         square[pos]='X';
         printpattern();
     }
     count++;
 }
}
void win_lose()
{
    if((square[1]==square[2]==square[3])||(square[4]==square[5]==square[6])||(square[7]==square[8]==square[9])||(square[1]==square[4]==square[7])||(square[2]==square[5]==square[8])||(square[3]==square[6]==square[9])||(square[1]==square[5]==square[9])||(square[3]==square[5]==square[7]) )
       {
         printf("you win");
       }
    else
    {
        printf("you lose");
    }

}
