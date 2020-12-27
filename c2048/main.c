#include <stdio.h>
#include <stdlib.h>
#include <conio.h>//control input output
#include "board.h"
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
