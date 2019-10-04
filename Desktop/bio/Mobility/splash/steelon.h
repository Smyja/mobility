#include<stdio.h>
#include<windows.h>
#include<math.h>

#define FLAT 10001
#define PHONG 10002
#define GOURAUD 10003

BYTE bit[4000000];
float dept[1000000],deptx[1000000],depty[1000000];
HDC hgc;
BOOL depth=FALSE,FOG=FALSE,RENDER;
COLORREF FOGCOLOR;
float FOGINT;
int xv,yv,meetx,meety,meetz,maxv=0,meetzf;
HBITMAP hb;
WORD shading;

void initsteel(HDC hdc,HWND hwnd){
	hdc=GetDC(hwnd);
}

void endsteel(HDC hdc,HWND hwnd){
	ReleaseDC(hwnd,hdc);
}

struct vector{
	float x;
	float y;
};

struct vectorz{
	float x;
	float y;
	float z;
};

void setrender(BOOL REND){
RENDER=REND;	
}

void polygonz(vectorz *vt,int no,COLORREF rgb,int alpha);

void setfog(BOOL fog,COLORREF rgb,float intensity){
FOG=fog; FOGCOLOR=rgb; FOGINT=intensity;
}

void sdepth(BOOL res){
	depth=res;
}

void setshade(WORD mode){
	shading=mode;
}

void viewport(int xv,int yv,int zv,int zf){
	meetx=xv;
	meety=yv;
	meetz=zv;
	meetzf=zf;
	maxv=meetx*meety;
}

void showscreen(HDC hdc,int xp,int yp,int xv,int yv){
	hgc=CreateCompatibleDC(hdc);
	hb=CreateCompatibleBitmap(hdc,meetx,meety);
	SelectObject(hgc,hb);
	SetBitmapBits(hb,sizeof(bit),&bit); 
	StretchBlt(hdc,xp,yp,xv,yv,hgc,0,0,meetx,meety,SRCCOPY);
}

void clear(){
	DeleteObject(hb);
	DeleteDC(hgc);
}

void clearview(){
	DeleteObject(hb); RENDER=FALSE;
	DeleteDC(hgc); 
	xv=0; yv=0; meetx=0; meety=0; meetz=0; meetzf=0;
}

void cleardepth(){
	memset(dept,-400000,(meetx*meety));
}

void clearbitx(COLORREF rgb){ RENDER=FALSE;
int r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb); 
	for(int a=0,c=0;a<(maxv*4);a+=4,c++){
		bit[a]=b;
		bit[a+1]=g;
		bit[a+2]=r;
		dept[c]=-400000;
	}

}

void clearbit(COLORREF rgb){ RENDER=FALSE;
	DeleteObject(hb); DeleteDC(hgc); xv=0; yv=0; meetx=0; meety=0; meetzf=0; meetz=0;	int r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb);
	for(int a=0,c=0;a<(maxv*4);a+=4,c++){
		bit[a]=b;
		bit[a+1]=g;
		bit[a+2]=r;
		dept[c]=-400000;
	}

}

void colordot(int x,int y,COLORREF rgb,int alpha){
if(x>=0&&x<meetx&&y>=0&&y<meety){
	int des=meetx*(y),r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb); des+=x; des*=4;
int rg=bit[des+1],rb=bit[des],ra=bit[des+2],solv;
if(RENDER){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); bit[des]=solv;
	solv=(g*alpha/255)+((rg*(255-alpha))/255); bit[des+1]=solv;	
	solv=(r*alpha/255)+((ra*(255-alpha))/255); bit[des+2]=solv;
deptx[des/4]=x; depty[des/4]=y;
}
	dept[des/4]=(meetz*2); 
}
}

void colordotz(int x,int y,int z,COLORREF rgb,int alpha){
	if(x>=0&&x<meetx&&y>=0&&y<meety&&z<meetz&&z>meetzf){
	int des=meetx*(y),r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb);; des+=x; des*=4;
int rg=bit[des+1],rb=bit[des],ra=bit[des+2],solv,solv1,solv2;
	if(depth==FALSE&&RENDER){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); bit[des]=solv;
	solv=(g*alpha/255)+((rg*(255-alpha))/255); bit[des+1]=solv;	
	solv=(r*alpha/255)+((ra*(255-alpha))/255); bit[des+2]=solv;
	}
	else{
		if(z>=dept[des/4]){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); 
	solv1=(g*alpha/255)+((rg*(255-alpha))/255); 	
	solv2=(r*alpha/255)+((ra*(255-alpha))/255); 	
if(FOG==TRUE){ float fall=(z+meetz); if(z<(meetzf)){ fall=0; } fall/=(meetz*2); fall=1-fall; fall*=255*FOGINT;
solv=(GetBValue(FOGCOLOR)*fall/255)+((solv*(255-fall))/255); 
solv1=(GetGValue(FOGCOLOR)*fall/255)+((solv1*(255-fall))/255); 	
solv2=(GetRValue(FOGCOLOR)*fall/255)+((solv2*(255-fall))/255);
}
if(RENDER){ bit[des]=solv; bit[des+1]=solv1; bit[des+2]=solv2; deptx[des/4]=x; depty[des/4]=y; }
dept[des/4]=z;	}
	}
	}
}

void line(float x,float y,float xd,float yd,COLORREF rgb,int alpha){
int ch=0;
float slope=1,cept;
if(x<0&&xd<0){ ch=1; }
if(x>meetx&&xd>meetx){ ch=1; }
if(y<0&&yd<0){ ch=1; }
if(y>meety&&yd>meety){ ch=1; }
if(ch==0){
if(x<0&&xd>0){	cept=0-x; cept/=(xd-x); slope=cept*(yd-y); slope+=y; y=slope; x=0; }
if(x>meetx&&xd<meetx){	cept=meetx-x; cept/=(xd-x); slope=cept*(yd-y); slope+=y; y=slope; x=meetx; }
if(y<0&&yd>0){	cept=0-y; cept/=(yd-y); slope=cept*(xd-x); slope+=x; x=slope; y=0; }
if(y>meety&&yd<meety){	cept=meety-y; cept/=(yd-y); slope=cept*(xd-x); slope+=x; x=slope;  y=meety; }
}
if(ch==0){
	float xinc,yinc,ara,xl=abs(xd-x),yl=abs(yd-y),xs1=x,ys1=y;
int des,r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb),rg,rb,ra,solv,inn=0,xs=x,ys=y,solv1,solv2;
if(xl>yl){ xinc=1; yinc=yl/xl; ara=xl; } else{ yinc=1; xinc=xl/yl; ara=yl; }
if(xd<x){ xinc=0-xinc; } if(yd<y){ yinc=0-yinc; }
for(int a=0;a<=ara;a++){
if(inn==1){ if(xs<0||xs>meetx||ys<0||ys>meety){ break; } }
if(xs>=0&&xs<meetx&&ys>=0&&ys<meety){
	des=meetx*(ys); des+=xs; des*=4;
int rg=bit[des+1],rb=bit[des],ra=bit[des+2],solv;
if(RENDER){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); bit[des]=solv;
	solv=(g*alpha/255)+((rg*(255-alpha))/255); bit[des+1]=solv;	
	solv=(r*alpha/255)+((ra*(255-alpha))/255); bit[des+2]=solv;
 deptx[des/4]=x; depty[des/4]=y;
}
	dept[des/4]=(meetz*2);
inn=1; }
	xs1+=xinc; ys1+=yinc; xs=xs1; ys=ys1; 
}
}
 }

void linez(float x,float y,float z,float xd,float yd,float zd, COLORREF rgb,int alpha){
int ch=0;
float slope=1,cept;
if(x<0&&xd<0){ ch=1; }
if(x>meetx&&xd>meetx){ ch=1; }
if(y<0&&yd<0){ ch=1; }
if(y>meety&&yd>meety){ ch=1; }
if(z<(meetzf)&&zd<(meetzf)){ ch=1; }
if(z>meetz&&zd>meetz){ ch=1; }
if(ch==3){
if(x<0&&xd>0){	cept=0-x; cept/=(xd-x); slope=cept*(yd-y); slope+=y; y=slope; slope=cept*(zd-z); slope+=z; z=slope;  x=0; }
if(x>meetx&&xd<meetx){	cept=meetx-x; cept/=(xd-x); slope=cept*(yd-y); slope+=y; y=slope; slope=cept*(zd-z); slope+=z; z=slope;  x=meetx; }
if(y<0&&yd>0){	cept=0-y; cept/=(yd-y); slope=cept*(xd-x); slope+=x; x=slope; slope=cept*(zd-z); slope+=z; z=slope;  y=0; }
if(y>meety&&yd<meety){	cept=meety-y; cept/=(yd-y); slope=cept*(xd-x); slope+=x; x=slope; slope=cept*(zd-z); slope+=z; z=slope;  y=meety; }
if(z<meetzf&&zd>meetzf){	cept=meetzf-z; cept/=(zd-z); slope=cept*(xd-x); slope+=x; x=slope; slope=cept*(yd-y); slope+=y; y=slope;  z=meetzf; }
if(z>meetz&&zd<meetz){	cept=meetz-z; cept/=(zd-z); slope=cept*(xd-x); slope+=x; x=slope; slope=cept*(yd-y); slope+=y; y=slope;  z=meetz; }
}
if(ch==0){
	float xinc,yinc,ara,xl=abs(xd-x),yl=abs(yd-y),zl=abs(z-zd),zinc,zs1=z,xs1=x,ys1=y,fall;
int des,r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb),rg,rb,ra,solv,inn=0,xs=x,ys=y,zs=z,solv1,solv2;
if(xl>yl){ xinc=1; yinc=yl/xl;  zinc=zl/xl; ara=xl; } else{ yinc=1; xinc=xl/yl;  zinc=zl/yl; ara=yl; }
if(xd<x){ xinc=0-xinc; } if(yd<y){ yinc=0-yinc; } if(zd<z){ zinc=0-zinc; }
for(int a=0;a<=ara;a++){
if(inn==1){ if(xs<0||xs>meetx||ys<0||ys>meety||zs<(meetzf)||zs>meetz){ break; } }
	if(xs>=0&&xs<meetx&&ys>=0&&ys<meety&&zs<meetz&&zs>meetzf){
	des=meetx*(ys); des+=xs; des*=4;
rg=bit[des+1]; rb=bit[des]; ra=bit[des+2];
	if(depth==FALSE&&RENDER){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); bit[des]=solv;
	solv=(g*alpha/255)+((rg*(255-alpha))/255); bit[des+1]=solv;	
	solv=(r*alpha/255)+((ra*(255-alpha))/255); bit[des+2]=solv;
	}
	else{
		if(zs>=dept[des/4]){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); 
	solv1=(g*alpha/255)+((rg*(255-alpha))/255); 	
	solv2=(r*alpha/255)+((ra*(255-alpha))/255); 	
if(FOG==TRUE){  fall=(zs+meetz); if(zs<(meetzf)){ fall=0; } fall/=(meetz*2); fall=1-fall; fall*=255*FOGINT;
solv=(GetBValue(FOGCOLOR)*fall/255)+((solv*(255-fall))/255); 
solv1=(GetGValue(FOGCOLOR)*fall/255)+((solv1*(255-fall))/255); 	
solv2=(GetRValue(FOGCOLOR)*fall/255)+((solv2*(255-fall))/255);
}
if(RENDER){ bit[des]=solv; bit[des+1]=solv1; bit[des+2]=solv2; deptx[des/4]=xs; depty[des/4]=ys; }
dept[des/4]=zs;		}
	}
inn=1;	}
	xs1+=xinc; ys1+=yinc; zs1+=zinc; xs=xs1; ys=ys1; zs=zs1;
}
}	
}


void bspine(vectorz *vet,COLORREF rgb,int alpha,int skip){
float t=0,pt1,pt2,pt3,pt4,pt5,pt6,qt1,qt2,qt3,qt4,dist,inc;
int x,y,x1,y1,rech=0;
dist=pow((vet[0].x-vet[1].x),2)+pow((vet[0].y-vet[1].y),2); dist=sqrt(dist);
inc=(vet[1].x-vet[0].x); inc/=inc; inc/=dist; inc*=skip;
for(0;t<=1;0){
	pt1=((1-t)*vet[0].x)+(t*vet[1].x);
	pt2=((1-t)*vet[0].y)+(t*vet[1].y);
	pt3=((1-t)*vet[1].x)+(t*vet[2].x);
	pt4=((1-t)*vet[1].y)+(t*vet[2].y);
	pt5=((1-t)*vet[2].x)+(t*vet[3].x);
	pt6=((1-t)*vet[2].y)+(t*vet[3].y);
	qt1=((1-t)*pt1)+(t*pt3);
	qt2=((1-t)*pt2)+(t*pt4);
	qt3=((1-t)*pt3)+(t*pt5);
	qt4=((1-t)*pt4)+(t*pt6);
if(rech==0){ x=((1-t)*qt1)+(t*qt3); y=((1-t)*qt2)+(t*qt4); rech=1; }
else{ x1=((1-t)*qt1)+(t*qt3); y1=((1-t)*qt2)+(t*qt4); line(x,y,x1,y1,rgb,alpha); x=x1; y=y1; }
	t+=inc; 
} 
}

void qspine(vectorz *vet,COLORREF rgb,int alpha,int skip){
float t=0,pt1,pt2,pt3,pt4,qt1,qt2,dist,inc;
int x,y,x1,y1,rech=0;
dist=pow((vet[0].x-vet[1].x),2)+pow((vet[0].y-vet[1].y),2); dist=sqrt(dist);
inc=(vet[1].x-vet[0].x); inc/=inc; inc/=dist; inc*=skip;
for(0;t<=1;0){
	pt1=((1-t)*vet[0].x)+(t*vet[1].x);
	pt2=((1-t)*vet[0].y)+(t*vet[1].y);
	pt3=((1-t)*vet[1].x)+(t*vet[2].x);
	pt4=((1-t)*vet[1].y)+(t*vet[2].y);
	qt1=((1-t)*pt1)+(t*pt3);
	qt2=((1-t)*pt2)+(t*pt4);
if(rech==0){ x=qt1; y=qt2; rech=1; }
else{ x1=qt1; y1=qt2; line(x,y,x1,y1,rgb,alpha); x=x1; y=y1; }
	t+=inc; 
} 	
}

void bspinez(vectorz *vet,COLORREF rgb,int alpha,int skip){
float t=0,pt1,pt2,pt3,pt4,pt5,pt6,qt1,qt2,qt3,qt4,dist,ys,ys1,xs,xs1,inc,ptx1,ptx2,ptx3,qtx,qtx1;
int x,y,x1,y1,rech=0,z,z1;
dist=pow((vet[0].x-vet[1].x),2)+pow((vet[0].y-vet[1].y),2)+pow((vet[0].z-vet[1].z),2); dist=sqrt(dist);
inc=(vet[1].x-vet[0].x); inc/=inc; inc/=dist; inc*=skip;
for(0;t<=1;0){
	pt1=((1-t)*vet[0].x)+(t*vet[1].x);
	pt2=((1-t)*vet[0].y)+(t*vet[1].y);
	ptx1=((1-t)*vet[0].z)+(t*vet[1].z);
	pt3=((1-t)*vet[1].x)+(t*vet[2].x);
	pt4=((1-t)*vet[1].y)+(t*vet[2].y);
	ptx2=((1-t)*vet[0].z)+(t*vet[1].z);
	pt5=((1-t)*vet[2].x)+(t*vet[3].x);
	pt6=((1-t)*vet[2].y)+(t*vet[3].y);
	ptx3=((1-t)*vet[0].y)+(t*vet[1].y);
	qt1=((1-t)*pt1)+(t*pt3);
	qt2=((1-t)*pt2)+(t*pt4);
	qtx=((1-t)*ptx1)+(t*ptx2);
	qt3=((1-t)*pt3)+(t*pt5);
	qt4=((1-t)*pt4)+(t*pt6);
	qtx1=((1-t)*ptx2)+(t*ptx3);
if(rech==0){ x=((1-t)*qt1)+(t*qt3); y=((1-t)*qt2)+(t*qt4); z=((1-t)*qtx)+(t*qtx1);  rech=1; }
else{ x1=((1-t)*qt1)+(t*qt3); y1=((1-t)*qt2)+(t*qt4); z1=((1-t)*qtx)+(t*qtx1); linez(x,y,z,x1,y1,z1,rgb,alpha); x=x1; y=y1; z=z1; }
	t+=inc; 
} 
}

void qspinez(vectorz *vet,COLORREF rgb,int alpha,int skip){
float t=0,pt1,pt2,pt3,pt4,ptx,ptx2,qt1,qt2,qtx,dist,inc;
int x,y,x1,y1,rech=0,z,z1;
dist=pow((vet[0].x-vet[1].x),2)+pow((vet[0].y-vet[1].y),2)+pow((vet[0].z-vet[1].z),2); dist=sqrt(dist);
inc=(vet[1].x-vet[0].x); inc/=inc; inc/=dist; inc*=skip;
for(0;t<=1;0){
	pt1=((1-t)*vet[0].x)+(t*vet[1].x);
	pt2=((1-t)*vet[0].y)+(t*vet[1].y);
	ptx=((1-t)*vet[0].z)+(t*vet[1].z);
	pt3=((1-t)*vet[1].x)+(t*vet[2].x);
	pt4=((1-t)*vet[1].y)+(t*vet[2].y);
	ptx2=((1-t)*vet[1].z)+(t*vet[2].z);
	qt1=((1-t)*pt1)+(t*pt3);
	qt2=((1-t)*pt2)+(t*pt4);
	qtx=((1-t)*ptx)+(t*ptx2);
if(rech==0){ x=qt1; y=qt2; z=qtx; rech=1; }
else{ x1=qt1; y1=qt2; z1=qtx; linez(x,y,z,x1,y1,z1,rgb,alpha); x=x1; y=y1; z=z1; }
	t+=inc; 
} 		
}

void polygon(vectorz *vt,int no,COLORREF rgb,int alpha){
int con=1;
int ch=0;
float slope=1,cept,xinc,yinc,ara,xl,yl,xs1,ys1;
int des,r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb),rg,rb,ra,solv,inn=0,xs,ys,solv1,solv2;
	vt[no]=vt[0];
int xmin=vt[0].x,xmax=xmin,ymin=vt[0].y,ymax=ymin;
float join[100],xm,xr,xh,diff,diffy;
int jc=0,temp,j,k,xpo;
for(int a=0;a<no;a++){ if(vt[a].x>xmax){ xmax=vt[a].x; } if(vt[a].x<xmin){ xmin=vt[a].x; } if(vt[a].y>ymax){ ymax=vt[a].y; } if(vt[a].y>ymax){ ymax=vt[a].y; } }
xpo=xmin; if(xpo<0){ xpo=0; }
if(con==1){
for(0;xpo<=xmax;xpo++){
if(xpo>meetx){ break; }
if(xpo>xmax){ break; }
jc=0;
for(int a=0;a<no;a++){
if(vt[a].x>vt[a+1].x){ xm=vt[a].x; xr=vt[a+1].x; }else{ xr=vt[a].x; xm=vt[a+1].x; }
if(xr<xpo&&xm>=xpo){ xh=(xpo-vt[a].x)/(vt[a+1].x-vt[a].x); 
join[jc]=(vt[a+1].y-vt[a].y)*xh; join[jc]+=vt[a].y; 
jc++;
}
}
for(j=0;j<jc;j++){
	for(k=j+1;k<jc;k++){
	if(join[j]>join[k]){
temp=join[j]; join[j]=join[k]; join[k]=temp;
		}	}	}
for(int y=0;y<jc;y+=2){ ch=0;
if(xpo<0){ ch=1; }
if(xpo>meetx){ ch=1; }
if(join[y]<0&&join[y+1]<0){ ch=1; }
if(join[y]>meety&&join[y+1]>meety){ ch=1; }
if(ch==0){
if(join[y]<0&&join[y+1]>0){	y=0; }
if(join[y]>meety&&join[y+1]<meety){	y=meety; }
}
if(ch==0){
	xl=0; yl=abs(join[y+1]-join[y]); xs1=xpo,ys1=join[y];
inn=0; xs=xs1; ys=ys1;
if(xl>yl){ xinc=1; yinc=yl/xl; ara=xl; } else{ yinc=1; xinc=xl/yl; ara=yl; }
if(xpo<xpo){ xinc=0-xinc; } if(join[y+1]<join[y]){ yinc=0-yinc; }
for(int a=0;a<=ara;a++){
if(inn==1){ if(xs<0||xs>meetx||ys<0||ys>meety){ break; } }
if(xs>=0&&xs<meetx&&ys>=0&&ys<meety){
	des=meetx*(ys); des+=xs; des*=4;
int rg=bit[des+1],rb=bit[des],ra=bit[des+2],solv;
	if(RENDER){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); bit[des]=solv;
	solv=(g*alpha/255)+((rg*(255-alpha))/255); bit[des+1]=solv;	
	solv=(r*alpha/255)+((ra*(255-alpha))/255); bit[des+2]=solv;
deptx[des/4]=xs; depty[des/4]=ys;
}
	dept[des/4]=(meetz*2); 
inn=1; }
	xs1+=xinc; ys1+=yinc; xs=xs1; ys=ys1; 
}	}	}	}	}
}

void polygonz(vectorz *vt,int no,COLORREF rgb,int alpha){
{
int ch=0;
float slope=1,cept,xinc,yinc,ara,xl,yl,xs1,ys1,fall,distx=1;
float dist,litpx=meetx/2,litpy=meety/2,dot,vnx,vnx2,vnx3,t,tinc;
int des,r,g,b,rg,rb,ra,solv=0,inn=0,xs,ys,solv1=0,solv2=0;
vt[no]=vt[0];
int jc=0,temp,j,k,tim,xpo;
int xmin=vt[0].x,xmax=xmin,ymin=vt[0].y,ymax=ymin,zs;
float join[100],link[100],xm,xr,xh,diff,diffy,zl,zinc,zs1,diu,shd[100],sha[100];
r=GetRValue(rgb); g=GetGValue(rgb); b=GetBValue(rgb);
for(int a=0;a<no;a++){ if(vt[a].y>0&&vt[a].y<meety){ solv=1; } if(vt[a].y<0){ solv1=1; } if(vt[a].y>0){ solv2=1; } if(vt[a].z>meetz&&vt[a].y<meetzf){ fall=1; } if(vt[a].z<meetz){ xl=1; } if(vt[a].z>meetzf){ yl=1; }
 if(vt[a].x>xmax){ xmax=vt[a].x; } if(vt[a].x<xmin){ xmin=vt[a].x; } if(vt[a].y>ymax){ ymax=vt[a].y; } if(vt[a].y>ymax){ ymax=vt[a].y; } 
}
if(xl==1&&yl==1){ fall=1; }
if(solv1==1&&solv2==1){ solv=1; }
xpo=xmin; if(xpo<0){ xpo=0; }
if(xmin<0&&xmax<0){ solv=0; } if(xmin>meetx&&xmax>meetx){ solv=0; }
if(solv==1&&fall==1){


if(shading==FLAT){
vnx=((vt[1].y-vt[0].y)*(vt[2].z-vt[1].z))-((vt[1].z-vt[0].z)*(vt[2].y-vt[1].y));
vnx2=((vt[1].z-vt[0].z)*(vt[2].x-vt[1].x))-((vt[1].x-vt[0].x)*(vt[2].z-vt[1].z));
vnx3=((vt[1].x-vt[0].x)*(vt[2].y-vt[1].y))-((vt[1].y-vt[0].y)*(vt[2].x-vt[1].x));
dot=(vnx*litpx)+(vnx2*litpy);
dist=((litpx*litpx)+(litpy*litpy)); dist=sqrt(dist);
distx=((vnx*vnx)+(vnx2*vnx2)+(vnx3*vnx3)); distx=sqrt(distx); dist=dist*distx; distx=dot/dist;  distx+=1; distx/=2; if(distx<0){ distx=0; } if(distx>1){ distx=1; }
}
if(shading==GOURAUD){ 
for(int z=0;z<no;z++){
vnx=(vt[z].y*vt[z+1].z)-(vt[z].z*vt[z+1].y);
vnx2=(vt[z].z*vt[z+1].y)-(vt[z].x*vt[z+1].z);
vnx3=(vt[z].z*vt[z+1].x)-(vt[z].y*vt[z+1].x);
dot=(vnx*litpx)+(vnx2*litpy);
dist=((litpx*litpx)+(litpy*litpy)); dist=sqrt(dist);
distx=((vnx*vnx)+(vnx2*vnx2)+(vnx3*vnx3)); distx=sqrt(distx); dist=dist*distx; distx=dot/dist;  distx+=1; distx/=2; if(distx<0){ distx=0; } if(distx>1){ distx=1; }
shd[z]=distx; 
} shd[no]=shd[0]; 
}


for(0;xpo<=xmax;xpo++){
if(xpo>meetx){ break; }
if(xpo>xmax){ break; }
jc=0;
for(int a=0;a<no;a++){
if(vt[a].x>vt[a+1].x){ xm=vt[a].x; xr=vt[a+1].x; }else{ xr=vt[a].x; xm=vt[a+1].x; }
if(xr<xpo&&xm>=xpo){ xh=(xpo-vt[a].x)/(vt[a+1].x-vt[a].x); 
join[jc]=(vt[a+1].y-vt[a].y)*xh; join[jc]+=vt[a].y; 
link[jc]=(vt[a+1].z-vt[a].z)*xh; link[jc]+=vt[a].z; 
sha[jc]=(shd[a+1]-shd[a])*xh; sha[jc]+=shd[a]; 
jc++;
}
}
for(j=0;j<jc;j++){
	for(k=j+1;k<jc;k++){
	if(join[j]>join[k]){
temp=join[j]; join[j]=join[k]; join[k]=temp;
tim=link[j]; link[j]=link[k]; link[k]=tim;
tim=sha[j]; sha[j]=sha[k]; sha[k]=tim;
		}	}	}
for(int y=0;y<jc;y+=2){ ch=0; 
if(xpo<0){ ch=1; }
if(xpo>meetx){ ch=1; }
if(join[y]<0&&join[y+1]<0){ ch=1; }
if(join[y]>meety&&join[y+1]>meety){ ch=1; }
if(link[y]<(meetzf)&&link[y+1]<(meetzf)){ ch=1; }
if(link[y]>meetz&&link[y+1]>meetz){ ch=1; }
if(ch==0){
xl=0; yl=abs(join[y+1]-join[y]); zl=abs(link[y]-link[y+1]);  zs1=link[y];  xs1=xpo; ys1=join[y];
inn=0; zs=link[y]; xs=xpo; ys=join[y]; 
if(xl>yl){ xinc=1; yinc=yl/xl;  zinc=zl/xl; ara=xl; } else{ yinc=1; xinc=xl/yl;  zinc=zl/yl;  ara=yl; }
if(join[y+1]<join[y]){ yinc=0-yinc; } if(link[y+1]<link[y]){ zinc=0-zinc; } 
for(int a=0;a<=ara;a++){
if(inn==1){ if(xs<0||xs>meetx||ys<0||ys>meety||zs<(meetzf)||zs>meetz){ break; } }
	if(xs>=0&&xs<meetx&&ys>=0&&ys<meety&&zs<meetz&&zs>meetzf){
	des=meetx*(ys); des+=xs; des*=4;
rg=bit[des+1]; rb=bit[des]; ra=bit[des+2];
	if(depth==FALSE&&RENDER){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); bit[des]=solv*distx;
	solv=(g*alpha/255)+((rg*(255-alpha))/255); bit[des+1]=solv*distx;	
	solv=(r*alpha/255)+((ra*(255-alpha))/255); bit[des+2]=solv*distx;
	}
	else{
		if(zs>=dept[des/4]){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); 
	solv1=(g*alpha/255)+((rg*(255-alpha))/255); 	
	solv2=(r*alpha/255)+((ra*(255-alpha))/255); 	
if(FOG==TRUE){  fall=(zs+meetz); if(zs<(meetzf)){ fall=0; } fall/=(meetz*2); fall=1-fall; fall*=255*FOGINT;
solv=(GetBValue(FOGCOLOR)*fall/255)+((solv*(255-fall))/255); 
solv1=(GetGValue(FOGCOLOR)*fall/255)+((solv1*(255-fall))/255); 	
solv2=(GetRValue(FOGCOLOR)*fall/255)+((solv2*(255-fall))/255);
}
if(RENDER){ bit[des]=solv*distx; bit[des+1]=solv1*distx; bit[des+2]=solv2*distx; deptx[des/4]=xs; depty[des/4]=ys; }
dept[des/4]=zs;		}
	}
inn=1;	}
	xs1+=xinc; ys1+=yinc; zs1+=zinc; xs=xs1; ys=ys1; zs=zs1; t+=tinc;
}	}	}	}	
} }
}

void conline(vectorz *vt,int no,COLORREF rgb,int alpha,BOOL connect){
vt[no]=vt[0];
int ch=0;
float slope=1,cept;
float xinc,yinc,ara,xl,yl,xs1,ys1;
int des,r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb),rg,rb,ra,solv,inn=0,xs,ys,solv1,solv2;
int con=no-1; if(connect){ con=no; }
for(int a=0;a<con;a++){ ch=0;
if(vt[a].x<0&&vt[a+1].x<0){ ch=1; }
if(vt[a].x>meetx&&vt[a+1].x>meetx){ ch=1; }
if(vt[a].y<0&&vt[a+1].y<0){ ch=1; }
if(vt[a].y>meety&&vt[a+1].y>meety){ ch=1; }
if(ch==0){
if(vt[a].x<0&&vt[a+1].x>0){	cept=0-vt[a].x; cept/=(vt[a+1].x-vt[a].x); slope=cept*(vt[a+1].y-vt[a].y); slope+=vt[a].y; vt[a].y=slope; vt[a].x=0; }
if(vt[a].x>meetx&&vt[a+1].x<meetx){	cept=meetx-vt[a].x; cept/=(vt[a+1].x-vt[a].x); slope=cept*(vt[a+1].y-vt[a].y); slope+=vt[a].y; vt[a].y=slope; vt[a].x=meetx; }
if(vt[a].y<0&&vt[a+1].y>0){	cept=0-vt[a].y; cept/=(vt[a+1].y-vt[a].y); slope=cept*(vt[a+1].x-vt[a].x); slope+=vt[a].x; vt[a].x=slope; vt[a].y=0; }
if(vt[a].y>meety&&vt[a+1].y<meety){	cept=meety-vt[a].y; cept/=(vt[a+1].y-vt[a].y); slope=cept*(vt[a+1].x-vt[a].x); slope+=vt[a].x; vt[a].x=slope;  vt[a].y=meetx; }
}
if(ch==0){
	xl=abs(vt[a+1].x-vt[a].x); yl=abs(vt[a+1].y-vt[a].y); xs1=vt[a].x; ys1=vt[a].y;
inn=0; xs=vt[a].x; ys=vt[a].y; 
if(xl>yl){ xinc=1; yinc=yl/xl; ara=xl; } else{ yinc=1; xinc=xl/yl; ara=yl; }
if(vt[a+1].x<vt[a].x){ xinc=0-xinc; } if(vt[a+1].y<vt[a].y){ yinc=0-yinc; }
for(int a=0;a<=ara;a++){
if(inn==1){ if(xs<0||xs>meetx||ys<0||ys>meety){ break; } }
if(xs>=0&&xs<meetx&&ys>=0&&ys<meety){
	des=meetx*(ys); des+=xs; des*=4;
int rg=bit[des+1],rb=bit[des],ra=bit[des+2],solv;
if(RENDER){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); bit[des]=solv;
	solv=(g*alpha/255)+((rg*(255-alpha))/255); bit[des+1]=solv;	
	solv=(r*alpha/255)+((ra*(255-alpha))/255); bit[des+2]=solv;
deptx[des/4]=xs; depty[des/4]=ys;
}
	dept[des/4]=(meetz*2); 
inn=1; }
	xs1+=xinc; ys1+=yinc; xs=xs1; ys=ys1; 
}
}
 } 
}

void conlinez(vectorz *vt,int no,COLORREF rgb,int alpha,BOOL connect){
vt[no]=vt[0];
int ch=0,zs;
float slope=1,cept;
float xinc,yinc,ara,xl,yl,xs1,ys1,zs1,zl,zinc,fall;
int des,r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb),rg,rb,ra,solv,inn=0,xs,ys,solv1,solv2;
int con=no-1; if(connect){ con=no; }
for(int a=0;a<con;a++){ ch=0;
if(vt[a].x<0&&vt[a+1].x<0){ ch=1; }
if(vt[a].x>meetx&&vt[a+1].x>meetx){ ch=1; }
if(vt[a].y<0&&vt[a+1].y<0){ ch=1; }
if(vt[a].y>meety&&vt[a+1].y>meety){ ch=1; }
if(ch==100){
if(vt[a].x<0&&vt[a+1].x>0){	cept=0-vt[a].x; cept/=(vt[a+1].x-vt[a].x); slope=cept*(vt[a+1].y-vt[a].y); slope+=vt[a].y; vt[a].y=slope; slope=cept*(vt[a+1].z-vt[a].z); slope+=vt[a].z; vt[a].z=slope; vt[a].x=0; }
if(vt[a].x>meetx&&vt[a+1].x<meetx){	cept=meetx-vt[a].x; cept/=(vt[a+1].x-vt[a].x); slope=cept*(vt[a+1].y-vt[a].y); slope+=vt[a].y; vt[a].y=slope; slope=cept*(vt[a+1].z-vt[a].z); slope+=vt[a].z; vt[a].z=slope; vt[a].x=meetx; }
if(vt[a].y<0&&vt[a+1].y>0){	cept=0-vt[a].y; cept/=(vt[a+1].y-vt[a].y); slope=cept*(vt[a+1].x-vt[a].x); slope+=vt[a].x; vt[a].x=slope; slope=cept*(vt[a+1].z-vt[a].z); slope+=vt[a].z; vt[a].z=slope; vt[a].y=0; }
if(vt[a].y>meety&&vt[a+1].y<meety){	cept=meety-vt[a].y; cept/=(vt[a+1].y-vt[a].y); slope=cept*(vt[a+1].x-vt[a].x); slope+=vt[a].x; vt[a].x=slope;  slope=cept*(vt[a+1].z-vt[a].z); slope+=vt[a].z; vt[a].z=slope; vt[a].y=meetx; }
if(vt[a].z<meetzf&&vt[a+1].z>meetzf){	cept=meetzf-vt[a].z; cept/=(vt[a+1].z-vt[a].z); slope=cept*(vt[a+1].x-vt[a].x); slope+=vt[a].x; vt[a].x=slope; slope=cept*(vt[a+1].y-vt[a].y); slope+=vt[a].y; vt[a].y=slope;  vt[a].z=meetzf; }
if(vt[a].z>meetz&&vt[a+1].z<meetz){	cept=meetz-vt[a].z; cept/=(vt[a+1].z-vt[a].z); slope=cept*(vt[a+1].x-vt[a].x); slope+=vt[a].x; vt[a].x=slope; slope=cept*(vt[a+1].y-vt[a].y); slope+=vt[a].y; vt[a].y=slope;  vt[a].z=meetz; }
}
if(ch==0){
	xl=abs(vt[a+1].x-vt[a].x); yl=abs(vt[a+1].y-vt[a].y); xs1=vt[a].x; ys1=vt[a].y; zl=abs(vt[a].z-vt[a+1].z); zs1=vt[a].z; 
inn=0; xs=xs1; ys=ys1; zs=zs1;
if(xl>yl){ xinc=1; yinc=yl/xl;  zinc=zl/xl; ara=xl; } else{ yinc=1; xinc=xl/yl;  zinc=zl/yl; ara=yl; }
if(vt[a+1].x<vt[a].x){ xinc=0-xinc; } if(vt[a+1].y<vt[a].y){ yinc=0-yinc; } if(vt[a+1].z<vt[a].z){ zinc=0-zinc; }
for(int a=0;a<=ara;a++){
if(inn==1){ if(xs<0||xs>meetx||ys<0||ys>meety||zs<(meetzf)||zs>meetz){ break; } }
	if(xs>=0&&xs<meetx&&ys>=0&&ys<meety&&zs<meetz&&zs>meetzf){
	des=meetx*(ys); des+=xs; des*=4;
rg=bit[des+1]; rb=bit[des]; ra=bit[des+2];
	if(depth==FALSE&&RENDER){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); bit[des]=solv;
	solv=(g*alpha/255)+((rg*(255-alpha))/255); bit[des+1]=solv;	
	solv=(r*alpha/255)+((ra*(255-alpha))/255); bit[des+2]=solv;
	}
	else{
		if(zs>=dept[des/4]-1){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); 
	solv1=(g*alpha/255)+((rg*(255-alpha))/255); 	
	solv2=(r*alpha/255)+((ra*(255-alpha))/255); 	
if(FOG==TRUE){  fall=(zs+meetz); if(zs<(meetzf)){ fall=0; } fall/=(meetz*2); fall=1-fall; fall*=255*FOGINT;
solv=(GetBValue(FOGCOLOR)*fall/255)+((solv*(255-fall))/255); 
solv1=(GetGValue(FOGCOLOR)*fall/255)+((solv1*(255-fall))/255); 	
solv2=(GetRValue(FOGCOLOR)*fall/255)+((solv2*(255-fall))/255);
}
if(RENDER){ bit[des]=solv; bit[des+1]=solv1; bit[des+2]=solv2; deptx[des/4]=xs; depty[des/4]=ys; }
dept[des/4]=zs;		}
	}
inn=1;	}
	xs1+=xinc; ys1+=yinc; zs1+=zinc; xs=xs1; ys=ys1; zs=zs1;
}
}
}
}

void graystyle(){
float average;
	for(int a=0;a<(meetx*meety*4);a+=4){
	average=bit[a]+bit[a+1]+bit[a+2]; average/=3; bit[a]=average; 	bit[a+1]=average; bit[a+2]=average; 
	}
}

void negative(){
	for(int a=0;a<(meetx*meety*4);a+=4){
	bit[a]=255-bit[a]; 	bit[a+1]=255-bit[a+1]; bit[a+2]=255-bit[a+2]; 
	}
}
void blur(){ int des;
	for(int a=0,b=0;b<meety;a++){
des=b*meetx; des+=a; des*=4;
bit[des]*=0.25; bit[des+1]*=0.25; bit[des+2]*=0.25; 
if(b-1>0){ des=(b-1)*meetx; des+=a; des*=4; bit[des]*=0.125; bit[des+1]*=0.125; bit[des+2]*=0.125; }
if(b+1<meety){ des=(b+1)*meetx; des+=a; des*=4; bit[des]*=0.125; bit[des+1]*=0.125; bit[des+2]*=0.125; }
if(a-1>0){ des=(b)*meetx; des+=(a-1); des*=4; bit[des]*=0.125; bit[des+1]*=0.125; bit[des+2]*=0.125; }
if(a+1<meetx){ des=(b)*meetx; des+=(a+1); des*=4; bit[des]*=0.125; bit[des+1]*=0.125; bit[des+2]*=0.125; }
if(a-1>0&&b-1>0){ des=(b-1)*meetx; des+=(a-1); des*=4; bit[des]*=0.0625; bit[des+1]*=0.0625; bit[des+2]*=0.0625; }
if(a+1<meetx&&b-1>0){ des=(b-1)*meetx; des+=(a+1); des*=4; bit[des]*=0.0625; bit[des+1]*=0.0625; bit[des+2]*=0.0625; }
if(a+1<meetx&&b+1<meety){ des=(b+1)*meetx; des+=(a+1); des*=4; bit[des]*=0.0625; bit[des+1]*=0.0625; bit[des+2]*=0.0625; }
if(a-1>0&&b+1<meety){ des=(b+1)*meetx; des+=(a-1); des*=4; bit[des]*=0.0625; bit[des+1]*=0.0625; bit[des+2]*=0.0625; }
	if(a>=meetx){ b++; a=-1; }
	}
}

void sharp(){ int des,ret=0,get=0,bet=0;
	for(int a=0,b=0;b<meety;a++){ 
des=b*meetx; des+=a; des*=4; ret=bit[des+2]; get=bit[des+1]; bet=bit[des];
bet+=(bit[des]*-15); get+=(bit[des+1]*-15); ret+=(bit[des+2]*-15); 
if(b-1>0){ des=(b-1)*meetx; des+=a; des*=4; bet+=(bit[des]*2); get+=(bit[des+1]*2); ret+=(bit[des+2]*2); }
if(b+1<meety){ des=(b+1)*meetx; des+=a; des*=4; bet+=(bit[des]*2); get+=(bit[des+1]*2); ret+=(bit[des+2]*2);  }
if(a-1>0){ des=(b)*meetx; des+=(a-1); des*=4; bet+=(bit[des]*2); get+=(bit[des+1]*2); ret+=(bit[des+2]*2);  }
if(a+1<meetx){ des=(b)*meetx; des+=(a+1); des*=4; bet+=(bit[des]*2); get+=(bit[des+1]*2); ret+=(bit[des+2]*2); }
if(a-1>0&&b-1>0){ des=(b-1)*meetx; des+=(a-1); des*=4; bet+=(bit[des]*2); get+=(bit[des+1]*2); ret+=(bit[des+2]*2);  }
if(a+1<meetx&&b-1>0){ des=(b-1)*meetx; des+=(a+1); des*=4; bet+=(bit[des]*2); get+=(bit[des+1]*2); ret+=(bit[des+2]*2);  }
if(a+1<meetx&&b+1<meety){ des=(b+1)*meetx; des+=(a+1); des*=4; bet+=(bit[des]*2); get+=(bit[des+1]*2); ret+=(bit[des+2]*2);  }
if(a-1>0&&b+1<meety){ des=(b+1)*meetx; des+=(a-1); des*=4; bet+=(bit[des]*2); get+=(bit[des+1]*2); ret+=(bit[des+2]*2);  }
bit[des]=bet; bit[des+1]=get; bit[des+2]=ret; 
	if(a>=meetx){ b++; a=-1; }
	}
}

void limage(float x,float y,float tex,float tey,float xd,float yd,float tedx,float tedy,COLORREF rgb,int alpha,BYTE *byt,int size1x,int size1y){
int ch=0;
float slope=1,cept;
if(x<0&&xd<0){ ch=1; }
if(x>meetx&&xd>meetx){ ch=1; }
if(y<0&&yd<0){ ch=1; }
if(y>meety&&yd>meety){ ch=1; }
if(ch==0){
if(x<0&&xd>0){	cept=0-x; cept/=(xd-x); slope=cept*(yd-y); slope+=y; y=slope; x=0; }
if(x>meetx&&xd<meetx){	cept=meetx-x; cept/=(xd-x); slope=cept*(yd-y); slope+=y; y=slope; x=meetx; }
if(y<0&&yd>0){	cept=0-y; cept/=(yd-y); slope=cept*(xd-x); slope+=x; x=slope; y=0; }
if(y>meety&&yd<meety){	cept=meety-y; cept/=(yd-y); slope=cept*(xd-x); slope+=x; x=slope; y=meety; }
}
if(ch==0){ 
float t=0,tinc,dist,diff=xd-x,diffy=yd-y,ditf=tedx-tex,dity=tedy-tey,diss;
int xp,yp,txp,typ,r;
dist=((x-xd)*(x-xd))+((y-yd)*(y-yd)); dist=sqrt(dist); 
tinc=1; tinc/=dist;
if(tinc!=0){ for(0;t<=1;0){
diss=diff*t; xp=x+diss; diss=diffy*t; yp=y+diss;
diss=ditf*t; txp=tex+diss; diss=dity*t; typ=tey+diss; 
if(txp>size1x){ for(int y=0;y<10;0){ txp-=size1x; if(txp<=size1x){ break; } } } 
if(typ>size1y){ for(int y=0;y<10;0){ typ-=size1y; if(typ<=size1y){ break; } } } 
if(txp<0){ for(int y=0;y<10;0){ txp+=size1x; if(txp>=0){ break; } } } 
if(typ<0){ for(int y=0;y<10;0){ typ+=size1y; if(typ>=0){ break; } } } typ-=size1y-1;
r=typ*size1x; r+=txp; r*=4; ; rgb=RGB(byt[r+2],byt[r+1],byt[r]);
colordot(xp,yp,rgb,alpha);
	t+=tinc;
} } } }


void limagez(float x,float y,float z,float tex,float tey,float xd,float yd,float zd,float tedx,float tedy,COLORREF rgb,int alpha,BYTE *byt,int size1x,int size1y,float fact){
int ch=0;
float cept;
if(x<0&&xd<0){ ch=1; }
if(x>meetx&&xd>meetx){ ch=1; }
if(y<0&&yd<0){ ch=1; }
if(y>meety&&yd>meety){ ch=1; }
if(z<(meetzf)&&zd<(meetzf)){ ch=1; }
if(z>meetz&&zd>meetz){ ch=1; }

if(ch==0){ 
float t=0,tinc,dist,diff=xd-x,diffy=yd-y,diffi=zd-z,ditf=tedx-tex,dity=tedy-tey,diss;
int xp,yp,zp,r,txp,typ;
dist=((x-xd)*(x-xd))+((y-yd)*(y-yd))+((z-zd)*(z-zd)); dist=sqrt(dist); 
tinc=1; tinc/=dist;

{
if(y<0&&yd>0){	cept=0-y; cept/=(diffy+1); t=cept; }
if(y>meety&&yd<meety){	cept=meety-y; cept/=(diffy+1); t=cept; }
}

if(tinc!=0){ for(0;t<=1;0){ 
diss=diff*t; xp=x+diss; diss=diffy*t; yp=y+diss; diss=diffi*t; zp=z+diss;
diss=ditf*t; txp=tex+diss; diss=dity*t; typ=tey+diss;  typ=size1y-(typ+1); 
if(txp<0){ for(int y=0;y<10;0){ txp+=size1x; if(txp>0){ break; } } } 
if(typ<0){ for(int y=0;y<10;0){ typ+=(size1y); if(typ>0){ break; } } }
if(txp>size1x){ for(int y=0;y<10;0){ txp-=(size1x); if(txp<=size1x){ break; } } } 
if(typ>size1y){ for(int y=0;y<10;0){ typ-=(size1y); if(typ<=size1y){ break; } } }

r=typ*size1x; r+=txp; r*=4; if(r<0){ r=0; } if(r>(size1x*4*size1y)){ r=(size1x*4*size1y); }
rgb=RGB(byt[r+2]*fact,byt[r+1]*fact,byt[r]*fact);
colordotz(xp,yp,zp,rgb,alpha);
	t+=tinc;
} } } }

void polymage(vectorz *vt,vectorz *text,int no,COLORREF rgb,int alpha,BYTE *bts,int size1x,int size1y){
int con=0;
	vt[no]=vt[0]; text[no]=text[0];
int xmin=vt[0].x,xmax=xmin,ymin=vt[0].y,ymax=ymin;
float join[100],txt[100],tyt[100],xm,xr,xh,diff,diffy;
int jc=0,temp,j,k,xpo,tim;
for(int a=0;a<no;a++){ text[a].x*=size1x; text[a].y*=size1y; if(vt[a].x>0&&vt[a].x<meetx&&vt[a].y>0&&vt[a].y<meety){ con=1; } if(vt[a].x>xmax){ xmax=vt[a].x; } if(vt[a].x<xmin){ xmin=vt[a].x; } if(vt[a].y>ymax){ ymax=vt[a].y; } if(vt[a].y>ymax){ ymax=vt[a].y; } }
text[no].x*=size1x; text[no].y*=size1y;
xpo=xmin; if(xpo<0){ xpo=0; }
if(con==1){
for(0;xpo<=xmax;xpo++){
if(xpo>meetx){ break; }
if(xpo>xmax){ break; }
jc=0;
for(int a=0;a<no;a++){
if(vt[a].x>vt[a+1].x){ xm=vt[a].x; xr=vt[a+1].x; }else{ xr=vt[a].x; xm=vt[a+1].x; }
if(xr<xpo&&xm>=xpo){ 
xh=(xpo-vt[a].x)/(vt[a+1].x-vt[a].x); 
join[jc]=(vt[a+1].y-vt[a].y)*xh; join[jc]+=vt[a].y; 
txt[jc]=(text[a+1].y-text[a].y)*xh; txt[jc]+=text[a].y; 
tyt[jc]=(text[a+1].x-text[a].x)*xh; tyt[jc]+=text[a].x; 
jc++;
}
}
for(j=0;j<jc-2;j++){
	for(k=j+1;k<jc;k++){
	if(join[j]>join[k]){
temp=join[j]; join[j]=join[k]; join[k]=temp;
tim=txt[j]; txt[j]=txt[k]; txt[k]=tim;
tim=tyt[j]; tyt[j]=txt[k]; tyt[k]=tim;
		}	}	} 
for(int y=0;y<jc;y+=2){ limage(xpo,join[y],tyt[y],txt[y],xpo,join[y+1],tyt[y+1],txt[y+1],rgb,alpha,bts,size1x,size1y); }
}
}
}

void polymagez(vectorz *vt,vectorz *text,int no,COLORREF rgb,int alpha,BYTE *bts,int size1x,int size1y){
int con=0,ch=0;
	vt[no]=vt[0]; text[no]=text[0];
int xmin=vt[0].x,xmax=xmin,ymin=vt[0].y,ymax=ymin,mk=0,ml=0,mj=0;
float join[100],link[100],txt[100],tyt[100],xm,xr,xh,diff,diffy,ret=1;
int jc=0,temp,j,k,xpo,tim;
for(int a=0;a<no;a++){ text[a].x*=size1x; text[a].y*=size1y; if(vt[a].y>0&&vt[a].y<meety){ con=1; } if(vt[a].y<0){ diff=1; } if(vt[a].y>0){ diffy=1; } if(vt[a].z>meetz&&vt[a].y<meetzf){ mk=1; } if(vt[a].z<meetz){ mj=1; } if(vt[a].z>meetzf){ ml=1; }
if(vt[a].x>xmax){ xmax=vt[a].x; } if(vt[a].x<xmin){ xmin=vt[a].x; } if(vt[a].y>ymax){ ymax=vt[a].y; } if(vt[a].y>ymax){ ymax=vt[a].y; } }
 text[no]=text[0];
 if(mj==1&&ml==1){ mk=1; }
 if(diff==1&&diffy==1){ con=1; }
xpo=xmin; if(xpo<0){ xpo=0; } 
if(xmin<0&&xmax<0){ con=0; } if(xmin>meetx&&xmax>meetx){ con=0; }
if(con==1&&mk==1){
	if(shading==FLAT){
int red=GetRValue(rgb),green=GetGValue(rgb),blue=GetBValue(rgb);
float dist,litpx=meetx/2,litpy=meety/2,litpz=0,dot,vnx,vnx2,vnx3,distx;
vnx=((vt[1].y-vt[0].y)*(vt[2].z-vt[1].z))-((vt[1].z-vt[0].z)*(vt[2].y-vt[1].y));
vnx2=((vt[1].z-vt[0].z)*(vt[2].x-vt[1].x))-((vt[1].x-vt[0].x)*(vt[2].z-vt[1].z));
vnx3=((vt[1].x-vt[0].x)*(vt[2].y-vt[1].y))-((vt[1].y-vt[0].y)*(vt[2].x-vt[1].x));
dot=(vnx*litpx)+(vnx2*litpy)+(vnx3*litpz);
dist=((litpx*litpx)+(litpy*litpy)); dist=sqrt(dist);
distx=((vnx*vnx)+(vnx2*vnx2)+(vnx3*vnx3)); distx=sqrt(distx); dist=dist*distx; distx=dot/dist;  distx+=1; distx/=2; if(distx<0){ distx=0; } if(distx>1){ distx=1; }
ret=distx; }
for(0;xpo<=xmax;xpo++){
if(xpo>meetx){ break; }
if(xpo>xmax){ break; }
jc=0;
for(int a=0;a<no;a++){
if(vt[a].x>vt[a+1].x){ xm=vt[a].x; xr=vt[a+1].x; }else{ xr=vt[a].x; xm=vt[a+1].x; }
if(xr<xpo&&xm>=xpo){ xh=(xpo-vt[a].x)/(vt[a+1].x-vt[a].x); 
join[jc]=(vt[a+1].y-vt[a].y)*xh; join[jc]+=vt[a].y; 
link[jc]=(vt[a+1].z-vt[a].z)*xh; link[jc]+=vt[a].z;  
txt[jc]=(text[a+1].y-text[a].y)*xh; txt[jc]+=text[a].y; 
tyt[jc]=(text[a+1].x-text[a].x)*xh; tyt[jc]+=text[a].x; 
jc++;
}
}
for(j=0;j<jc;j++){
	for(k=j+1;k<jc;k++){
	if(join[j]>join[k]){
temp=join[j]; join[j]=join[k]; join[k]=temp;
tim=link[j]; link[j]=link[k]; link[k]=tim;
tim=txt[j]; txt[j]=txt[k]; txt[k]=tim;
tim=tyt[j]; tyt[j]=tyt[k]; tyt[k]=tim;
		}	}	}
	float t=0,tinc,dist,diff=0,diffy,diffi,ditf,dity,diss,cept,fall;
int xp,yp,zp,r,txp,typ,inn,des,ra,rg,rb,solv,solv1,solv2,g,b;
for(int y=0;y<jc;y+=2){ inn=0; t=0;
ch=0;
if(xpo>meetx){ ch=1; }
if(join[y]<0&&join[y+1]<0){ ch=1; }
if(join[y]>meety&&join[y+1]>meety){ ch=1; }
if(link[y]<(meetzf)&&link[y+1]<(meetzf)){ ch=1; }
if(link[y]>meetz&&link[y+1]>meetz){ ch=1; }
if(join[y]==join[y+1]){ ch=1; }
if(ch==0){

diffy=join[y+1]-join[y]; diffi=link[y+1]-link[y]; ditf=tyt[y+1]-tyt[y]; dity=txt[y+1]-txt[y];
dist=(diffy*diffy)+(diffi*diffi); dist=sqrt(dist);
tinc=1; tinc/=dist; 
if(tinc!=0){ for(int w=0;w<1000;w++){ if(t>=1){ break; } 
xp=xpo; diss=diffy*t; yp=join[y]+diss; diss=diffi*t; zp=link[y]+diss;
diss=ditf*t; txp=tyt[y]+diss; diss=dity*t; typ=txt[y]+diss; 
if(txp<0){ for(int yap=0;yap<10;0){ txp+=size1x; if(txp>0){ break; } } } 
if(typ<0){ for(int yap=0;yap<10;0){ typ+=(size1y); if(typ>0){ break; } } }
if(txp>size1x){ for(int yap=0;yap<10;0){ txp-=(size1x); if(txp<=size1x){ break; } } } 
if(typ>size1y){ for(int yap=0;yap<10;0){ typ-=(size1y); if(typ<=size1y){ break; } } }
typ=size1y-(typ+1); 
r=typ*size1x; r+=txp; r*=4;
if(r>=0&&r<=(size1y*size1x*4)){
rgb=RGB(bts[r+2]*ret,bts[r+1]*ret,bts[r]*ret);
//color
if(inn==1){ if(xp<0||xp>meetx||yp<0||yp>meety||zp<(meetzf)||zp>meetz){ break; } }
if(xp>=0&&xp<meetx&&yp>=0&&yp<meety&&zp<meetz&&zp>meetzf){
	des=meetx*(yp),r=GetRValue(rgb),g=GetGValue(rgb),b=GetBValue(rgb);; des+=xp; des*=4;
rg=bit[des+1]; rb=bit[des]; ra=bit[des+2];
	if(depth==FALSE&&RENDER){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); bit[des]=solv;
	solv=(g*alpha/255)+((rg*(255-alpha))/255); bit[des+1]=solv;	
	solv=(r*alpha/255)+((ra*(255-alpha))/255); bit[des+2]=solv;
	}
	else{
		if(zp>=dept[des/4]){
	solv=(b*alpha/255)+((rb*(255-alpha))/255); 
	solv1=(g*alpha/255)+((rg*(255-alpha))/255); 	
	solv2=(r*alpha/255)+((ra*(255-alpha))/255); 	
if(FOG==TRUE){ float fall=(zp+meetz); if(zp<(meetzf)){ fall=0; } fall/=(meetz*2); fall=1-fall; fall*=255*FOGINT;
solv=(GetBValue(FOGCOLOR)*fall/255)+((solv*(255-fall))/255); 
solv1=(GetGValue(FOGCOLOR)*fall/255)+((solv1*(255-fall))/255); 	
solv2=(GetRValue(FOGCOLOR)*fall/255)+((solv2*(255-fall))/255);
}
if(RENDER){ bit[des]=solv; bit[des+1]=solv1; bit[des+2]=solv2; deptx[des/4]=xp; depty[des/4]=yp; }
dept[des/4]=zp;	}
	}
	}
//end
}
	t+=tinc;
} } } 

}
}
}
}


