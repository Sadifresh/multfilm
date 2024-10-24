#include "TXLib.h"

void drawFon()
{

}


int main()
{
txCreateWindow (800, 600);



    //фон
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle(0,0,800,600);

    //солнце
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle(275,120,50);

    //облако
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse(505,95,690,145);

    //дом
    txSetColor (TX_WHITE);
    txSetFillColor (TX_YELLOW);
    txRectangle (210, 220+170, 380, 390+170);
    POINT stena[4] = {{380, 390+170}, {515, 290+170}, {515, 130+170}, {380,220+170}};
    txPolygon (stena, 4);

    txSetFillColor (TX_RED);
    POINT kr[3] = {{210, 220+170}, {300, 120+170}, {380, 220+170}};
    txPolygon (kr, 3);
    POINT skat[4] = {{300, 120+170}, {450, 60+170}, {515 ,130+170}, {380,220+170}};
    txPolygon (skat, 4);






txTextCursor (false);
return 0;
}

