#include "TXLib.h"
using namespace std;

void paintTreasure (int x, int y);
void paintPlayingField ();
void Random_1(int xTreasure, int yTreasure);

const int row=4;
const int col=4;
int matrix[row][col] = {0};

int main ()
{
    int x=175;
    int y=400;
    int xPos;
    int yPos;
    int xTreasure;
    int yTreasure;
    int Move;
    bool win=false;

    //const int row=4;
    //const int col=4;
    //int matrix[row][col] = {0};

    txCreateWindow (500, 600);
    txSetColor (TX_BLACK);
    cout << "Hello dear friend !!! Imagine you were on an island with a treasure and must find it!" << endl;
    cout << "How many moves can you find a treasure (from 1 to 16)?" << endl;
    cin >> Move;
    cout << "Good luck to you!" << endl;
    paintPlayingField ();
    Random_1(xTreasure, yTreasure);

    RECT area1 = { 50, 150, 150, 250};
    RECT area2 = { 150, 150, 250, 250};
    RECT area3 = { 250, 150, 350, 250};
    RECT area4 = { 350, 150, 450, 250};
    RECT area5 = { 50, 250, 150, 350};
    RECT area6 = { 150, 250, 250, 350};
    RECT area7 = { 250, 250, 350, 350};
    RECT area8 = { 350, 250, 450, 350};
    RECT area9 = { 50, 350, 150, 450};
    RECT area10 = { 150, 350, 250, 450};
    RECT area11 = { 250, 350, 350, 450};
    RECT area12 = { 350, 350, 450, 450};
    RECT area13 = { 50, 450, 150, 550};
    RECT area14 = { 150, 450, 250, 550};
    RECT area15 = { 250, 450, 350, 550};
    RECT area16 = { 350, 450, 450, 550};

    while ((txMouseButtons() != 3) && (Move>0) && (win=false))
    {
        if (txMouseButtons() & 1)
        {
            if (In (txMousePos(), area1))
                {
                    //1
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=0;
                    yPos=0;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area2))
                {
                    //2
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=0;
                    yPos=1;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area3))
                {
                    //3
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=0;
                    yPos=2;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area4))
                {
                    //4
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=0;
                    yPos=3;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area5))
                {
                    //5
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=1;
                    yPos=0;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area6))
                {
                    //6
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=1;
                    yPos=1;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area7))
                {
                    //7
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=1;
                    yPos=2;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area8))
                {
                    //8
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=1;
                    yPos=3;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area9))
                {
                    //9
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=2;
                    yPos=0;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area10))
                {
                    //10
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=2;
                    yPos=1;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area11))
                {
                    //11
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=2;
                    yPos=2;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area12))
                {
                    //12
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=2;
                    yPos=3;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area13))
                {
                    //13
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=3;
                    yPos=0;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area14))
                {
                    //14
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=3;
                    yPos=1;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area15))
                {
                    //15
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=3;
                    yPos=2;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

            if (In (txMousePos(), area16))
                {
                    //16
                    txClear();
                    paintPlayingField ();
                    txSleep(0);
                    xPos=3;
                    yPos=3;
                    Move=Move-1;
                    if (matrix[xPos][yPos]=1)
                    {
                        win=true;
                    }
                }

        }
    }

    if (win=true)
    {
        txSetFillColor (TX_BLACK);
        txRectangle (0, 0, 500, 600);
        txSetColor (TX_WHITE);
        txTextOut (50, 50, "You won!!! Congratulations!");
        paintTreasure (x, y);
    }
    else
    {
        txSetFillColor (TX_BLACK);
        txRectangle (0, 0, 500, 600);
        txSetColor (TX_WHITE);
        txTextOut (50, 50, "You did not find the treasure! Do not worry! You can try playing again!");
    }

}

void paintTreasure (int x, int y)
{
    txSetColor (TX_YELLOW, 5);
    txLine (x, y, x, y+100);
    txLine (x, y, x-100, y-50);
    txLine (x-100, y-50, x-150, y+20);
    txLine (x-150, y+20, x, y+100);
    txLine (x, y, x+250, y-150);
    txLine (x+150, y-200, x-100, y-50);
    txLine (x+150, y-200, x+250, y-150);
    txLine (x+250, y-150, x+300, y-80);
    txLine (x+300, y-80, x, y+100);
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

void Random_1(int xTreasure, int yTreasure)
{
    srand( time( 0 ) );
    xTreasure = 1 + rand() % 4 ;
    yTreasure = 1 + rand() % 4 ;
    system("pause");
    matrix[xTreasure][yTreasure] = 1;
}
