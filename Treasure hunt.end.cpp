#include <stdlib.h>
#include <string>
#include "TXLib.h"
#include <ctime>

using namespace std;

void paintTreasure (int x, int y);
void paintPlayingField ();

int main ()
{
    int x;
    int y;
    int i;
    int j;
    int pointX;
    int pointY;

    txCreateWindow (500, 600);

    paintPlayingField ();
    txSetColor (TX_BLACK, 5);
    txTextOut (10, 30, "Hello dear friend !!! Imagine you were on an island with");
    txTextOut (10, 50, "a treasure and must find it!");
    txTextOut (10, 70, "Good luck to you!");

    struct Treasure
    {
        RECT place;
    };

    Treasure array[4][4];
    srand(time(NULL));
    for (int a=0; a<1; a++)
        for (int b=0; b<1; b++)
        {
            i = rand()%4;
            j = rand()%4;
            pointX = 50;
            pointY = 150;
            array[i][j].place = {pointX+100*j, pointY+100*i, pointX+100*j+100, pointY+100*i+100};
        }

    while (txMouseButtons() !=3)
    {
        if (txMouseButtons() & 1)
        {
            if (In(txMousePos(), array[i][j].place))
            {
                txClear ();
                paintPlayingField ();
                txSetColor (TX_BLACK, 5);
                txTextOut (10, 30, "Hello dear friend !!! Imagine you were on an island with");
                txTextOut (10, 50, "a treasure and must find it!");
                txTextOut (10, 70, "Good luck to you!");
                txTextOut (50, 120, "You won!!! Congratulations!");
                x=pointX+100*j+35;
                y=pointY+100*i+50;
                paintTreasure (x, y);
                txSleep (5000);
            }

            else
            {
                txSetColor (TX_BLACK);
                txTextOut (300, 120, "You missed!");
            }
        }
    }

}

void paintTreasure (int x, int y)
{
    txSetColor (RGB(204, 153, 0));
    txSetFillColor (RGB(255, 255, 0));
    txLine (x, y, x, y+10*2);
    txLine (x, y, x-10*2, y-5*2);
    txLine (x-10*2, y-5*2, x-15*2, y+2*2);
    txLine (x-15*2, y+2*2, x, y+10*2);
    txLine (x, y, x+25*2, y-15*2);
    txLine (x+15*2, y-20*2, x-10*2, y-5*2);
    txLine (x+15*2, y-20*2, x+25*2, y-15*2);
    txLine (x+25*2, y-15*2, x+30*2, y-8*2);
    txLine (x+30*2, y-8*2, x, y+10*2);
    txFloodFill (x, y-5*2);
    txFloodFill (x+5*2, y);
    txFloodFill (x-5*2, y);
}

void paintPlayingField ()
{
    txSetColor (TX_BLACK);
    txSetFillColor (RGB (240, 255, 15));
    txRectangle (0, 0, 500, 600);
    txSetFillColor (RGB (90, 45, 15));
    txRectangle (50, 150, 450, 550);
    txLine (150, 150, 150, 550);
    txLine (250, 150, 250, 550);
    txLine (350, 150, 350, 550);
    txLine (50, 250, 450, 250);
    txLine (50, 350, 450, 350);
    txLine (50, 450, 450, 450);
}
