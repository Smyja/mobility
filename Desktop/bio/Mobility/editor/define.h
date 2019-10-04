#include<stdio.h>
#include"C:\\CRYSTAL PROGRAMS\\Mobility\\library\\dll.h"
int csize1,csize2,xpos,ypos,in=0,nline=0,thm1=65,thm2=50,thm3=65,thm4=50,pcount=0,len,len2,cp1,cp2,mpo2,mpo1,seek,mode=0,ctrl=0;
char script[1000000],hold[1000000],script1[1000],script2[10],nlin[100],save[1000],open[1000],mood[100];
COLORREF fon;
BOOL write=TRUE;
RECT rc;
HBRUSH brush;
HPEN hp;
HMENU hm;
HFONT hf;
HICON hi;
HBITMAP hb,sub;
FILE *fi;
HDC hdc,hgc,hbc;
OPENFILENAME ofn;
PAINTSTRUCT ps;
#define NEW 4

void transrect(HDC hdc,int x,int y,int xd,int yd){
	MoveToEx(hdc,x,y,NULL); LineTo(hdc,xd,y);
	MoveToEx(hdc,xd,y,NULL); LineTo(hdc,xd,yd);
	MoveToEx(hdc,x,yd,NULL); LineTo(hdc,xd,yd);
	MoveToEx(hdc,x,yd,NULL); LineTo(hdc,x,y);
}
