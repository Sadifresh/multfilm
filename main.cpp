#include "TXLib.h"

void drawFon()
{
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle(0,0,800,600);
}

void drawSun(int x)
{
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle(x,120,50);
}

void drawCloud(int x)
{
//x=455
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse(x+505-455,95,x+690-455,145);
    txEllipse(x+455-455,100,x+560-455,140);
    txEllipse(x+625-455,95,x+730-455,140);
    txEllipse(x+510-455,70,x+670-455,120);
}
void drawCloud2(int x)
{
 //x=455
 txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txEllipse(x-70+455,30,x-160+455,100);
    txEllipse(x-125+455,30,x-210+455,90);
    txEllipse(x-10+455,30,x-100+455,100);
    txEllipse(x-60+455,10,x-170+455,70);
}
void drawhouse()
{
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
}

void drawboll()
{
    txSetColor (TX_WHITE);
    txSetFillColor (TX_YELLOW);
    txLine(370,210,370,350);
}

int main()
{
txCreateWindow (800, 600);

    int xSun=-100;
    int xCloud=1000;
    int xCloud2=1000;

    while(xSun<900)
    {
        txBegin();
        drawFon();
        drawSun(xSun);
        drawCloud(xCloud);
        drawCloud2(xCloud);
        drawhouse();
        txEnd();

        xSun += 2;
        xCloud -= 2;
        txSleep(10);
    }

    while(xCloud>-500)
    {
        txBegin();
        drawFon();
        drawSun(xSun);
        drawCloud(xCloud);
        drawhouse();
        txEnd();


        xCloud -= 2;
        txSleep(10);
    }






txTextCursor (false);
return 0;
}

