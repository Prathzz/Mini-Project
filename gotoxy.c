#include "record.h"
COORD coord = {0,0};
void gotoxy(int xcoordinate,int ycoordinate)
{
    coord.X = xcoordinate;
    coord.Y = ycoordinate;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}