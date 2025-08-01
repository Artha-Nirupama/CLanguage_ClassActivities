#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void winnerCheck(int randNum,int guestNum);
int randGen();
int userInput();

int main(){
    printf("✊🤚✌---Rock Paper Scissors---✊🤚✌\n");
    int randNum=randGen();
    int guestNum=userInput();

    winnerCheck(randNum,guestNum);

    return 0;
}
int randGen(){

    srand(time(NULL));

    return (rand()%3)+1;
}
int userInput()
{
    int guestNums=0;
    do
    {
        printf("Pick One Bellow(1,2,3):\n");
        printf("1.Rock\n");
        printf("2.Paper\n");
        printf("3.Scissors\n");
        scanf("%d",&guestNums);
    } while (guestNums>3 || guestNums<1);
    
    return guestNums;
}
void winnerCheck(int randNum,int guestNum){
    if (guestNum==randNum)
    {
        printf("Tie try agin!");
    }
    else
    {
        if (guestNum==1 && randNum==2)
        {
            printf("You Loss!Rock Deffited from the Paper!");
        }
        else if (guestNum==1 && randNum==3)
        {
            printf("You Win!Rock Deffited the Scissors!");
        }
        else if (guestNum==2 && randNum==1)
        {
            printf("You Win!Paper Deffited the Rock!");
        }
        else if (guestNum==2 && randNum==3)
        {
            printf("You Loss!Paper Deffited from the Scissors!");
        }
        else if (guestNum==3 && randNum==1)
        {
            printf("You Loss!Rock Deffited the Scissors!");
        }
        else
        {
            printf("You Win!Paper Deffited from the Scissors!");
        }
    }   
}