//---------------------------------------------------------------------------

#include <clx.h>
#include <iostream.h>
#include <conio.h>
#include <math.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
void main(int argc, char* argv[])
{
 double x,y,z,w;
 cout <<"x=0.4e4, y=-0.875, z=-0.475e-3"<<endl;
 cout <<"x=";
 cin >> x;
 cout <<"y=";
 cin >> y;
 cout <<"z=";
 cin >> z;
 w=pow(fabs(cos(x)-cos(y)),1+2*pow(sin(y),2))*(1+z+pow(z,2)/2+pow(z,3)/3+pow(z,4)/4);
 cout <<"w="<<w<<endl;

 getch();
}
//---------------------------------------------------------------------------
