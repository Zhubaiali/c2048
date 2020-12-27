#include <stdio.h>
#include <stdlib.h>
#include <conio.h>//control input output

void StartGame(){}
void InsertANumber(){}
void Output(){}
int MoveLeft(){return 1;}
int MoveRight(){return 1;}
int MoveUp(){return 1;}
int MoveDown(){return 1;}

int main()
{
    int key1,key2,step=0,moved;
    StartGame();
    InsertANumber();
    InsertANumber();
    Output();
    while(1)
    {
        key1=getch();
        if(key1)
        {
            key2=getch();//捕获方向键，按两次
        }
        switch(key2)
        {
            case 75:moved=MoveLeft();break;
            case 77:moved=MoveRight();break;
            case 72:moved=MoveUp();break;
            case 80:moved=MoveDown();break;
        }
        if(moved)
        {
             InsertANumber();
             printf("移动步数：%d\n",++step);
             Output();
        }
    }
    return 0;
}
