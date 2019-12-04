#include "TXLib.h"
using namespace std;

void paintTreasure (int x, int y);
void paintPlayingField ();

int main ()
{
    int x=175;
    int y=400;
    int Move;

    txCreateWindow (500, 600);
    paintPlayingField ();
    txSetColor (TX_BLACK, 5);
    txTextOut (5, 30, "Hello dear friend !!! Imagine you were on an island with a treasure and must find it!");
    txTextOut (5, 60, "How many moves can you find a treasure (from 1 to 16)?");
    cin >> Move;
    txTextOut (5, 120, "Good luck to you!");

    struct Treasure
    {
        RECT place;
    };

    Treasure array[4][4];
    int a = rand()%2;//состояние
    int i = rand()%4 + 1;
    int j = rand()%4 + 1;
    int pointX = 50;
    int pointY = 150;
    array[i][j].place = {pointX+100*j, pointY+100*i, pointX+100*j+100, pointY+100*i+100};

    do
    {
        if (txMouseButtons() & 1)
        {
            while (Move>=0)
            {
                if ((In(txMousePos(), array[i][j].place)) && (Move != 0))
                {
                    txSetFillColor (TX_BLACK);
                    txRectangle (0, 0, 500, 600);
                    txSetColor (TX_WHITE);
                    txTextOut (50, 50, "You won!!! Congratulations!");
                    paintTreasure (x, y);
                }

                else if (Move != 0)
                {
                    Move = Move - 1;
                }

                else if (Move = 0)
                {
                    txSetFillColor (TX_BLACK);
                    txRectangle (0, 0, 500, 600);
                    txSetColor (TX_WHITE);
                    txTextOut (50, 50, "You did not find the treasure! Do not worry! You can try playing again!");
                }

            }
        }
    }

}  /*TODO: показывает 5 ошибок со знаками:
   expected 'while'  before  '}' token;
   expected '('  before  '}' token;
   expected primary-expression before '}' token;
   expected ')'  before  '}' token;
   expected ';'  before  '}' token;*/

void paintTreasure (int x, int y)
{
    txSetColor (RGB(204, 153, 0), 5);
    txSetFillColor (RGB(255, 255, 0));
    txLine (x, y, x, y+100);
    txLine (x, y, x-100, y-50);
    txLine (x-100, y-50, x-150, y+20);
    txLine (x-150, y+20, x, y+100);
    txLine (x, y, x+250, y-150);
    txLine (x+150, y-200, x-100, y-50);
    txLine (x+150, y-200, x+250, y-150);
    txLine (x+250, y-150, x+300, y-80);
    txLine (x+300, y-80, x, y+100);
    txFloodFill (x, y-50);
    txFloodFill (x+50, y);
    txFloodFill (x-50, y);
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

