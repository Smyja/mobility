int cs,cs1,mx,my;
LRESULT CALLBACK ANIMATION(HWND anime, UINT MAssage, WPARAM wqaram, LPARAM lqParam) {
	switch(MAssage) {
	case WM_CREATE:{

		break;
	}

case WM_SIZE:{
	cs=LOWORD(lqParam); cs1=HIWORD(lqParam); ValidateRect(anime,NULL); InvalidateRect(anime,NULL,TRUE);
	break;
}
case WM_PAINT:{
hqcc=BeginPaint(anime,&pe);
hqc=CreateCompatibleDC(hqcc);
hqy=CreateCompatibleBitmap(hqcc,cs,cs1);
SelectObject(hqc,hqy);
brush=CreateSolidBrush(RGB(20,20,20));	SetRect(&rc,0,cs1-25,cs,0); FillRect(hqc,&rc,brush);
hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hqc,hf);  SetBkMode(hqc,TRANSPARENT);
mx=15; my=15; 
for(int a=0;a<scrno-1;a++){
RoundRect(hqc,mx,my,mx+70,my+70,7,7); sprintf(how,"Screen %d",a+1); SetRect(&rc,mx,my,mx+70,my+70); DrawText(hqc,how,-1,&rc,DT_CENTER|DT_VCENTER); mx+=85;
if(mx>=cs){ mx=15; my+=85; }
}
RoundRect(hqc,mx,my,mx+70,my+70,7,7); MoveToEx(hqc,mx+20,my+35,NULL); LineTo(hqc,mx+50,my+35); MoveToEx(hqc,mx+35,my+20,NULL); LineTo(hqc,mx+35,my+50);

brush=CreateSolidBrush(RGB(48,48,48));	SetRect(&rc,0,cs1-25,cs,cs1); FillRect(hqc,&rc,brush);

 SetTextColor(hqc,RGB(255,255,255));
SetRect(&rc,10,cs1-20,cs,cs1); DrawText(hqc,"Animation",-1,&rc,NULL); 
SetRect(&rc,85,cs1-20,cs,cs1); DrawText(hqc,"Select",-1,&rc,NULL); 
DeleteObject(hf);
BitBlt(hqcc,0,0,cs,cs1,hqc,0,0,SRCCOPY);
DeleteDC(hqc);
DeleteObject(hqy);
EndPaint(anime,&pe);
	break;
}
case WM_LBUTTONDOWN:{
mpo1=LOWORD(lqParam);
mpo2=HIWORD(lqParam);
if(mpo1>15&&mpo2>15&&mpo2<cs1-25){ thm3=0;
	for(int u=15,y=15;y<mpo2;u+=85,thm3++){
	if(thm3>scrno){ break; }
	if(u>=mpo1&&y>=mpo2-85){  break; } 
		if(u>=cs){ y+=85; u=15; } thm5=y; thm6=u;
	}
if(thm5+85<mpo2){ thm3=0; }
if(thm6+85<mpo1){ thm3=0; }
if(thm3==scrno){ scrno++; ValidateRect(anime,NULL); InvalidateRect(hwnd,NULL,TRUE); break; }
	
}	
	break;
}

	case WM_ERASEBKGND:{
		return 1;
		break;
	}
	case WM_DESTROY:{
	
		break;
	}
	
	default:
	return DefWindowProc(anime, MAssage, wqaram, lqParam);
	}
	return 0;
}

void animate(){
	HINSTANCE hInstancex;
	MSG msgx;
	WNDCLASSEX wcx;
	memset(&wcx,0,sizeof(wcx));
	wcx.cbSize		 = sizeof(WNDCLASSEX);
	wcx.lpfnWndProc	 = ANIMATION;
	wcx.hInstance	 = hInstancex;
	wcx.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wcx.lpszClassName = "WindowClassq";
	wcx.hIcon		 = LoadIcon(GetModuleHandle(NULL), "ICO");
	wcx.hIconSm		 = LoadIcon(GetModuleHandle(NULL), "ICO");
	wcx.lpszMenuName  = NULL;
RegisterClassEx(&wcx);
	anime = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClassq","Moblity Pace-Cetter24",WS_VISIBLE|WS_POPUPWINDOW|WS_CAPTION|WS_MAXIMIZEBOX|WS_THICKFRAME,csize1/2-270,csize2/2-180,540,360,hwnd,NULL,hInstancex,NULL);	
	}
	
//camera
void shwcamera(float pos1,float pos2,float pos3,float an1,float an2,float an3,float fov,float nearr,float farr,float xr,float yr,float pers,float red,float green,float blue,float skid){
if(xr>yr){ yr=yr/xr; vx=200; vy=200*yr; }else{ xr/=yr; vy=200; vx=200*xr; }
sdepth(TRUE);
can1=cos(an1+1.57); san1=sin(an1+1.57);
can2=cos(an3); san2=sin(an3);
can3=cos(an2+4.712); san3=sin(an2+4.712);
minr=0.5;
viewport(vx,vy,100,-3000);
if(skid==2){ clearbitx(RGB(red,green,blue)); }
setrender(TRUE);
setshade(NULL);
//image
sdepth(FALSE);
if(skid==1){
cleardept();
sprite[0].x=0; sprite[0].y=0; sprite[0].z=-600;
sprite[1].x=0; sprite[1].y=vy+1; sprite[1].z=-600;
sprite[2].x=vx; sprite[2].y=vy+1; sprite[2].z=-600;
sprite[3].x=vx; sprite[3].y=0; sprite[3].z=-600;
spitt[0].x=0; spitt[0].y=1; 
spitt[1].x=0; spitt[1].y=0; 
spitt[2].x=1; spitt[2].y=0; 
spitt[3].x=1; spitt[3].y=1; 
polymagezx(sprite,NULL,spitt,4,NULL,255,imag,512,512);
}
//skybox
if(skid==0){
cleardept(); sdepth(TRUE);
sprite[0].x=-302; sprite[0].y=302; sprite[0].z=-300;
sprite[1].x=-302; sprite[1].y=-302; sprite[1].z=-300;
sprite[2].x=302; sprite[2].y=-302; sprite[2].z=-300;
sprite[3].x=302; sprite[3].y=302; sprite[3].z=-300;
for(int a=0;a<4;a++){
//x
dist[0].x=sprite[a].x; dist[0].y=(sprite[a].y*can1)-(sprite[a].z*san1 ); dist[0].z=(sprite[a].y*san1)+(sprite[a].z*can1 ); 
//y
sprite[a].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[a].y=dist[0].y; sprite[a].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[a].x*can3)-(sprite[a].y*san3); dist[0].y=(sprite[a].x*san3)+(sprite[a].y*can3); dist[0].z=sprite[a].z;
//adjust
sprite[a].x=dist[0].x*minr; sprite[a].y=dist[0].y*minr; sprite[a].z=dist[0].z;  sprite[a].x+=(vx/2); sprite[a].y+=(vy/2);

}
spitt[0].x=0; spitt[0].y=0; 
spitt[1].x=1; spitt[1].y=0; 
spitt[2].x=1; spitt[2].y=1; 
spitt[3].x=0; spitt[3].y=1; 
polymagezx(sprite,NULL,spitt,4,NULL,255,sky1[0],512,512);
//SECOND
sprite[0].x=-302; sprite[0].z=-302; sprite[0].y=-300;
sprite[1].x=-302; sprite[1].z=302; sprite[1].y=-300;
sprite[2].x=302; sprite[2].z=302; sprite[2].y=-300;
sprite[3].x=302; sprite[3].z=-302; sprite[3].y=-300;
for(int a=0;a<4;a++){
//x
dist[0].x=sprite[a].x; dist[0].y=(sprite[a].y*can1)-(sprite[a].z*san1 ); dist[0].z=(sprite[a].y*san1)+(sprite[a].z*can1 ); 
//y
sprite[a].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[a].y=dist[0].y; sprite[a].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[a].x*can3)-(sprite[a].y*san3); dist[0].y=(sprite[a].x*san3)+(sprite[a].y*can3); dist[0].z=sprite[a].z;
//adjust
sprite[a].x=dist[0].x*minr; sprite[a].y=dist[0].y*minr; sprite[a].z=dist[0].z;  sprite[a].x+=(vx/2); sprite[a].y+=(vy/2);

}
spitt[0].x=0; spitt[0].y=0; 
spitt[1].x=1; spitt[1].y=0; 
spitt[2].x=1; spitt[2].y=1; 
spitt[3].x=0; spitt[3].y=1; 
polymagezx(sprite,NULL,spitt,4,NULL,255,sky1[1],512,512);
//third
sprite[0].y=302; sprite[0].z=-302; sprite[0].x=-300;
sprite[1].y=302; sprite[1].z=302; sprite[1].x=-300;
sprite[2].y=-302; sprite[2].z=302; sprite[2].x=-300;
sprite[3].y=-302; sprite[3].z=-302; sprite[3].x=-300;
for(int a=0;a<4;a++){
//x
dist[0].x=sprite[a].x; dist[0].y=(sprite[a].y*can1)-(sprite[a].z*san1 ); dist[0].z=(sprite[a].y*san1)+(sprite[a].z*can1 ); 
//y
sprite[a].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[a].y=dist[0].y; sprite[a].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[a].x*can3)-(sprite[a].y*san3); dist[0].y=(sprite[a].x*san3)+(sprite[a].y*can3); dist[0].z=sprite[a].z;
//adjust
sprite[a].x=dist[0].x*minr; sprite[a].y=dist[0].y*minr; sprite[a].z=dist[0].z;  sprite[a].x+=(vx/2); sprite[a].y+=(vy/2);

}
spitt[0].x=1; spitt[0].y=1; 
spitt[1].x=0; spitt[1].y=1; 
spitt[2].x=0; spitt[2].y=0; 
spitt[3].x=1; spitt[3].y=0; 
polymagezx(sprite,NULL,spitt,4,NULL,255,sky1[2],512,512);
//fourth
sprite[0].x=-302; sprite[0].z=302; sprite[0].y=300;
sprite[1].x=-302; sprite[1].z=-302; sprite[1].y=300;
sprite[2].x=302; sprite[2].z=-302; sprite[2].y=300;
sprite[3].x=302; sprite[3].z=302; sprite[3].y=300;
for(int a=0;a<4;a++){
//x
dist[0].x=sprite[a].x; dist[0].y=(sprite[a].y*can1)-(sprite[a].z*san1 ); dist[0].z=(sprite[a].y*san1)+(sprite[a].z*can1 ); 
//y
sprite[a].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[a].y=dist[0].y; sprite[a].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[a].x*can3)-(sprite[a].y*san3); dist[0].y=(sprite[a].x*san3)+(sprite[a].y*can3); dist[0].z=sprite[a].z;
//adjust
sprite[a].x=dist[0].x*minr; sprite[a].y=dist[0].y*minr; sprite[a].z=dist[0].z;  sprite[a].x+=(vx/2); sprite[a].y+=(vy/2);

}
spitt[0].x=0; spitt[0].y=0; 
spitt[1].x=1; spitt[1].y=0; 
spitt[2].x=1; spitt[2].y=1; 
spitt[3].x=0; spitt[3].y=1; 
polymagezx(sprite,NULL,spitt,4,NULL,255,sky1[4],512,512);
//fifth
sprite[0].y=302; sprite[0].z=302; sprite[0].x=300;
sprite[1].y=302; sprite[1].z=-302; sprite[1].x=300;
sprite[2].y=-302; sprite[2].z=-302; sprite[2].x=300;
sprite[3].y=-302; sprite[3].z=302; sprite[3].x=300;
for(int a=0;a<4;a++){
//x
dist[0].x=sprite[a].x; dist[0].y=(sprite[a].y*can1)-(sprite[a].z*san1 ); dist[0].z=(sprite[a].y*san1)+(sprite[a].z*can1 ); 
//y
sprite[a].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[a].y=dist[0].y; sprite[a].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[a].x*can3)-(sprite[a].y*san3); dist[0].y=(sprite[a].x*san3)+(sprite[a].y*can3); dist[0].z=sprite[a].z;
//adjust
sprite[a].x=dist[0].x*minr; sprite[a].y=dist[0].y*minr; sprite[a].z=dist[0].z;  sprite[a].x+=(vx/2); sprite[a].y+=(vy/2);

}
spitt[0].x=0; spitt[0].y=0; 
spitt[1].x=1; spitt[1].y=0; 
spitt[2].x=1; spitt[2].y=1; 
spitt[3].x=0; spitt[3].y=1; 
polymagezx(sprite,NULL,spitt,4,NULL,255,sky1[3],512,512);
//sixth
sprite[0].x=-302; sprite[0].y=-302; sprite[0].z=300;
sprite[1].x=-302; sprite[1].y=302; sprite[1].z=300;
sprite[2].x=302; sprite[2].y=302; sprite[2].z=300;
sprite[3].x=302; sprite[3].y=-302; sprite[3].z=300;
for(int a=0;a<4;a++){
//x
dist[0].x=sprite[a].x; dist[0].y=(sprite[a].y*can1)-(sprite[a].z*san1 ); dist[0].z=(sprite[a].y*san1)+(sprite[a].z*can1 ); 
//y
sprite[a].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[a].y=dist[0].y; sprite[a].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[a].x*can3)-(sprite[a].y*san3); dist[0].y=(sprite[a].x*san3)+(sprite[a].y*can3); dist[0].z=sprite[a].z;
//adjust
sprite[a].x=dist[0].x*minr; sprite[a].y=dist[0].y*minr; sprite[a].z=dist[0].z;  sprite[a].x+=(vx/2); sprite[a].y+=(vy/2);

}
spitt[0].x=0; spitt[0].y=0; 
spitt[1].x=1; spitt[1].y=0; 
spitt[2].x=1; spitt[2].y=1; 
spitt[3].x=0; spitt[3].y=1; 
polymagezx(sprite,NULL,spitt,4,NULL,255,sky1[5],512,512);
cleardept();
}
//end skybox
sdepth(TRUE);
viewport(vx,vy,farr,nearr);

vc=0;
setshade(FLAT);

lin=RGB(255,255,255);
//start here
fin=0; vc=0; innu=0; ojn=0; tvc=0; finz=0; trc=0; trg=0; tra=0; trm=0; trss=-1;  thm9=0; thm8=0;
for(int i=0;i<=fcon;i++){
if(ges[i]==-4){ innu=0; trg=i; trss++; i++; }
if(ges[i]==-5){ innu=1; trg=i; trss++; i++;  }
if(ges[i]==-10){ tinz=ges[i+1]-1; if(tinz<200){ xinz=xhit[tinz]; yinz=yhit[tinz]; }else{ 
xinz=xhit[tinz]; yinz=yhit[tinz];
GetBitmapBits(hbix[tinz-200],sizeof(bitex[200]),&bitex[200]); tinz=200;  } i+=2; 	}
if(ges[i]==-16){ transs=ges[i+1]-1; trm=i; i+=1; }
if(ges[i]==-19){ thm9=0; }
if(ges[i]==-20){ thm9=1; }
if(ges[i]==-21){ thm8=0; }
if(ges[i]==-22){ thm8=1; }
if(ges[i]==-23){ thm9=2; }
if(fin==1&&innu==0&&ges[i]){

if(ges[i]==-8){  tvc=0; i++;
{ 
for(0;i<fcon;i++){
if(ges[i]<0){ break; }
	spitt[tvc].x=tyes[ges[i]-1]; spitt[tvc].y=txes[ges[i]-1]; tvc++;
} 
}
}
if(ges[i]==-25){  nvc=0; i++;
for(0;i<fcon;i++){
if(ges[i]<0){ break; }
	spont[nvc].x=(normy[ges[i]-1])*scx; spont[nvc].y=(normx[ges[i]-1])*scx; spont[nvc].z=(normz[ges[i]-1])*scx;

spont[nvc].x-=piv1; spont[nvc].y-=piv2; spont[nvc].z-=piv3; 
//z
dist[0].x=(spont[nvc].x*ran3)-(spont[nvc].y*rnd3); dist[0].y=(spont[nvc].x*rnd3)+(spont[nvc].y*ran3); dist[0].z=spont[nvc].z;
//y
spont[nvc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); spont[nvc].y=dist[0].y; spont[nvc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//x
dist[0].x=spont[nvc].x; dist[0].y=(spont[nvc].y*ran1)-(spont[nvc].z*rnd1 ); dist[0].z=(spont[nvc].y*rnd1)+(spont[nvc].z*ran1 );

spont[nvc].x=dist[0].x+piv1; spont[nvc].y=dist[0].y+piv2; spont[nvc].z=dist[0].z+piv3;
//othee
//x
dist[0].x=spont[nvc].x; dist[0].y=(spont[nvc].y*can1)-(spont[nvc].z*san1 ); dist[0].z=(spont[nvc].y*san1)+(spont[nvc].z*can1 ); 
//y
spont[nvc].x=(dist[0].x*can2)+(dist[0].z*san2); spont[nvc].y=dist[0].y; spont[nvc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(spont[nvc].x*can3)-(spont[nvc].y*san3); dist[0].y=(spont[nvc].x*san3)+(spont[nvc].y*can3); dist[0].z=spont[nvc].z;
//adjust
spont[nvc].x=dist[0].x; spont[nvc].y=dist[0].y; spont[nvc].z=dist[0].z; 
	
	nvc++;
}
}

 if(ges[i]==-2){
if(clr1==0){ thm3=0; if(transs<250){thm3=1; } if(tra>=20000){ thm3=0; } if(thm3==0){  if(CLAS==0){ if(thm8==0){ polygonzx(sprite,spont,vc,lin,transs); } }else{ conlinez(sprite,vc,wire,transs,FALSE); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,wire,transs,TRUE);  }}
else{ thm3=0; for(int s=0;s<vc;s++){ thm3+=sprite[s].z;  } thm3/=vc; tranv[tra]=thm3; transb[tra]=trm; transg[tra]=trg; trangn[tra]=trss; transp[tra]=trc; tra++; }
}
 else{ conlinez(sprite,vc,wire,255,TRUE); }
if(ojn==1){ sdepth(FALSE); conlinez(sprite,vc,RGB(255,150,50),transs,TRUE); sdepth(TRUE); }  vc=0; finz=0; tvc=0;
}
else{

	if(ges[i]>0&&finz==0){
sprite[vc].x=(xes[ges[i]-1]+trans1[trss])*scx/100; sprite[vc].y=(yes[ges[i]-1]+trans2[trss])*scy/100; sprite[vc].z=(zes[ges[i]-1]+trans3[trss])*scz/100; 
sprite[vc].x-=piv1+trans1[trss]; sprite[vc].y-=piv2+trans2[trss]; sprite[vc].z-=piv3+trans3[trss]; 

//z
dist[0].x=(sprite[vc].x*ran3)-(sprite[vc].y*rnd3); dist[0].y=(sprite[vc].x*rnd3)+(sprite[vc].y*ran3); dist[0].z=sprite[vc].z;
//y
sprite[vc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*ran1)-(sprite[vc].z*rnd1 ); dist[0].z=(sprite[vc].y*rnd1)+(sprite[vc].z*ran1 );

sprite[vc].x=dist[0].x+piv1+trans1[trss]; sprite[vc].y=dist[0].y+piv2+trans2[trss]; sprite[vc].z=dist[0].z+piv3+trans3[trss];


sprite[vc].z-=pos3; sprite[vc].y-=pos2; sprite[vc].x-=pos1;
sprite[vc].x*=15; sprite[vc].y*=15; sprite[vc].z*=15;
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
 sprite[vc].x=dist[0].x*(3); sprite[vc].y=dist[0].y*(3); sprite[vc].z=dist[0].z;   
 sprite[vc].x+=vx/2; sprite[vc].y+=vy/2; 
  thm3=sprite[vc].z; if(thm3>fov){thm3=fov; }  
if(pers==1){ w=(fov)*(sprite[vc].x-(vx/2)); w/=((fov)-thm3); sprite[vc].x=w+(vx/2);	w=(fov)*(sprite[vc].y-(vy/2)); w/=((fov)-thm3); sprite[vc].y=w+(vy/2);   }
   sprite[vc].z/=(scz/100.0)*0.5; sprite[vc].z+=farr;
vc++;
}
}
}
if(ges[i]==-9){  if(clr1==0){ thm3=0; if(transs<250){thm3=1; } if(tra>=20000){ thm3=0; } if(thm3==0){ if(thm8==0){ polymagezx(sprite,spont,spitt,vc,lin,transs,bitex[tinz],xinz,yinz); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,RGB(0,0,0),transs,TRUE); } }
else{ thm3=0; for(int s=0;s<vc;s++){ thm3+=sprite[s].z;  } thm3/=vc; tranv[tra]=thm3; transb[tra]=trm; transg[tra]=trg; trangn[tra]=trss; transp[tra]=trc; tra++; }
  } else{ conlinez(sprite,vc,wire,255,TRUE); }
if(ojn==1){ sdepth(FALSE); conlinez(sprite,vc,RGB(255,150,50),transs,TRUE); sdepth(TRUE);  } tvc=0; vc=0; finz=0; }
if(ges[i]==-24){  piv1=ges[i+1]/1000.0; piv2=ges[i+2]/1000.0; piv3=ges[i+3]/1000.0;  i+=3; }
if(ges[i]==-1){ fin=1; vc=0; trc=i;  }
if(ges[i]==-2){ fin=0; }
if(ges[i]==-3){  i++; cr=ges[i]; i++; cg=ges[i]; i++; cb=ges[i]; lin=RGB(cr,cg,cb); }
if(ges[i]==-7){ ojn=1; }
if(ges[i]==-6){ ojn=0; }
if(ges[i]==-11){  i++; scx=ges[i]; i++; scy=ges[i]; i++; scz=ges[i];  }
if(ges[i]==-12){  i++; ran1=cos( ges[i]*3.143/180.0 ); rnd1=sin( ges[i]*3.143/180.0 ); i++;
ran2=cos( ges[i]*3.143/180.0 ); rnd2=sin( ges[i]*3.143/180.0 ); i++;
ran3=cos( ges[i]*3.143/180.0 ); rnd3=sin( ges[i]*3.143/180.0 );  }
if(ges[i]==-13){ setshade(FLAT);   }
if(ges[i]==-14){ setshade(NULL);   }
if(ges[i]==-26){ setshade(GOURAUD);  }
if(ges[i]==-17){ CLAS=0; }
if(ges[i]==-18){ CLAS=1; }
}
//end here
//alpha
sdepth(TRUE);
	for(int j=0;j<tra;j++){
	for(trg=j+1;trg<tra;trg++){
	if(tranv[j]>tranv[trg]){
trc=tranv[j]; tranv[j]=tranv[trg]; tranv[trg]=trc;
trc=transp[j]; transp[j]=transp[trg]; transp[trg]=trc;
trc=transg[j]; transg[j]=transg[trg]; transg[trg]=trc;
trc=transb[j]; transb[j]=transb[trg]; transb[trg]=trc;
trc=trangn[j]; trangn[j]=trangn[trg]; trangn[trg]=trc;
		}	}	}
		
for(int z=0;z<tra;z++){
fin=0; vc=0; innu=0; ojn=0; tvc=0; finz=0; lin=RGB(255,255,255); thm9=0; thm8=0;
for(int i=transg[z];i<fcon;i++){
if(ges[i]==-4){ innu=0; i++;  }
if(ges[i]==-5){ innu=1;  i++;  }
if(ges[i]==-19){ thm9=0; }
if(ges[i]==-20){ thm9=1; }
if(ges[i]==-21){ thm8=0; }
if(ges[i]==-22){ thm8=1; }
if(ges[i]==-23){ thm9=2; }
if(ges[i]==-10){ tinz=ges[i+1]-1; if(tinz<200){ xinz=xhit[tinz]; yinz=yhit[tinz]; }else{ 
xinz=xhit[tinz]; yinz=yhit[tinz];
GetBitmapBits(hbix[tinz-200],sizeof(bitex[200]),&bitex[200]); tinz=200;  } i+=2; 	}
if(ges[i]==-16){ transs=ges[i+1]-1; i+=1; break; }
if(ges[i]==-3){  i++; cr=ges[i]; i++; cg=ges[i]; i++; cb=ges[i]; lin=RGB(cr,cg,cb); }
if(ges[i]==-7){ ojn=1; }
if(ges[i]==-6){ ojn=0; }
if(ges[i]==-11){  i++; scx=ges[i]; i++; scy=ges[i]; i++; scz=ges[i];  }
if(ges[i]==-12){  i++; ran1=cos( ges[i]*3.143/180.0 ); rnd1=sin( ges[i]*3.143/180.0 ); i++;
ran2=cos( ges[i]*3.143/180.0 ); rnd2=sin( ges[i]*3.143/180.0 ); i++;
ran3=cos( ges[i]*3.143/180.0 ); rnd3=sin( ges[i]*3.143/180.0 );   }
if(ges[i]==-13){ setshade(FLAT); break;  }
if(ges[i]==-14){ setshade(NULL); break; }
if(ges[i]==-26){ setshade(GOURAUD);  break; }
if(ges[i]==-17){ CLAS=0; }
if(ges[i]==-18){ CLAS=1; }
if(ges[i]==-1){ break; }
if(ges[i]==-24){  piv1=ges[i+1]/1000.0; piv2=ges[i+2]/1000.0; piv3=ges[i+3]/1000.0;  i+=3; }
}

for(int i=transb[z];i<fcon;i++){
if(ges[i]==-4){ innu=0; i++;  }
if(ges[i]==-5){ innu=1;  i++;  }
if(ges[i]==-19){ thm9=0; }
if(ges[i]==-20){ thm9=1; }
if(ges[i]==-21){ thm8=0; }
if(ges[i]==-22){ thm8=1; }
if(ges[i]==-23){ thm9=2; }
if(ges[i]==-10){ tinz=ges[i+1]-1; if(tinz<200){ xinz=xhit[tinz]; yinz=yhit[tinz]; }else{ 
xinz=xhit[tinz]; yinz=yhit[tinz];
GetBitmapBits(hbix[tinz-200],sizeof(bitex[200]),&bitex[200]); tinz=200;  } i+=2; 	}
if(ges[i]==-16){ transs=ges[i+1]-1; i+=1; }
if(ges[i]==-3){  i++; cr=ges[i]; i++; cg=ges[i]; i++; cb=ges[i]; lin=RGB(cr,cg,cb); }
if(ges[i]==-7){ ojn=1; }
if(ges[i]==-6){ ojn=0; }
if(ges[i]==-11){  i++; scx=ges[i]; i++; scy=ges[i]; i++; scz=ges[i];  }
if(ges[i]==-12){  i+=3; }
if(ges[i]==-13){ setshade(FLAT);  }
if(ges[i]==-14){ setshade(NULL);  }
if(ges[i]==-26){ setshade(GOURAUD);  }
if(ges[i]==-17){ CLAS=0; }
if(ges[i]==-18){ CLAS=1; }
if(ges[i]==-1){  break; }
if(ges[i]==-24){  piv1=ges[i+1]/1000.0; piv2=ges[i+2]/1000.0; piv3=ges[i+3]/1000.0;  i+=3; }
}
  trss=trangn[z];
for(int y=0,i=transp[z];y<fcon;i++,y++){
if(fin==1&&innu==0){
if(ges[i]==-8){  tvc=0; i++;
{ 
for(0;i<fcon;i++){
if(ges[i]<0){ break; }
	spitt[tvc].x=tyes[ges[i]-1]; spitt[tvc].y=txes[ges[i]-1]; tvc++;
} 
}
}
if(ges[i]==-25){  nvc=0; i++;
for(0;i<fcon;i++){
if(ges[i]<0){ break; }
	spont[nvc].x=(normy[ges[i]-1])*scx; spont[nvc].y=(normx[ges[i]-1])*scx; spont[nvc].z=(normz[ges[i]-1])*scx;

spont[nvc].x-=piv1; spont[nvc].y-=piv2; spont[nvc].z-=piv3; 
//z
dist[0].x=(spont[nvc].x*ran3)-(spont[nvc].y*rnd3); dist[0].y=(spont[nvc].x*rnd3)+(spont[nvc].y*ran3); dist[0].z=spont[nvc].z;
//y
spont[nvc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); spont[nvc].y=dist[0].y; spont[nvc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//x
dist[0].x=spont[nvc].x; dist[0].y=(spont[nvc].y*ran1)-(spont[nvc].z*rnd1 ); dist[0].z=(spont[nvc].y*rnd1)+(spont[nvc].z*ran1 );

spont[nvc].x=dist[0].x+piv1; spont[nvc].y=dist[0].y+piv2; spont[nvc].z=dist[0].z+piv3;
//othee
//x
dist[0].x=spont[nvc].x; dist[0].y=(spont[nvc].y*can1)-(spont[nvc].z*san1 ); dist[0].z=(spont[nvc].y*san1)+(spont[nvc].z*can1 ); 
//y
spont[nvc].x=(dist[0].x*can2)+(dist[0].z*san2); spont[nvc].y=dist[0].y; spont[nvc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(spont[nvc].x*can3)-(spont[nvc].y*san3); dist[0].y=(spont[nvc].x*san3)+(spont[nvc].y*can3); dist[0].z=spont[nvc].z;
//adjust
spont[nvc].x=dist[0].x; spont[nvc].y=dist[0].y; spont[nvc].z=dist[0].z; 


	
	nvc++;
}
}

 if(ges[i]==-2){ if(clr1==0){   if(CLAS==0){ if(thm8==0){ polygonzx(sprite,spont,vc,lin,transs); } }else{ conlinez(sprite,vc,wire,transs,FALSE); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,wire,transs,TRUE);  } } 
 else{ conlinez(sprite,vc,wire,255,TRUE); } 
if(ojn==1){ sdepth(FALSE); conlinez(sprite,vc,RGB(255,150,50),transs,TRUE); sdepth(TRUE); }  vc=0; finz=0; tvc=0; break; }
else{

	if(ges[i]>0&&finz==0){
sprite[vc].x=(xes[ges[i]-1]+trans1[trss])*scx/100; sprite[vc].y=(yes[ges[i]-1]+trans2[trss])*scy/100; sprite[vc].z=(zes[ges[i]-1]+trans3[trss])*scz/100; 
sprite[vc].x-=piv1+trans1[trss]; sprite[vc].y-=piv2+trans2[trss]; sprite[vc].z-=piv3+trans3[trss]; 
//z
dist[0].x=(sprite[vc].x*ran3)-(sprite[vc].y*rnd3); dist[0].y=(sprite[vc].x*rnd3)+(sprite[vc].y*ran3); dist[0].z=sprite[vc].z;
//y
sprite[vc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*ran1)-(sprite[vc].z*rnd1 ); dist[0].z=(sprite[vc].y*rnd1)+(sprite[vc].z*ran1 );

sprite[vc].x=dist[0].x+piv1+trans1[trss]; sprite[vc].y=dist[0].y+piv2+trans2[trss]; sprite[vc].z=dist[0].z+piv3+trans3[trss];


sprite[vc].z-=pos3; sprite[vc].y-=pos2; sprite[vc].x-=pos1;
sprite[vc].x*=15; sprite[vc].y*=15; sprite[vc].z*=15;
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
 sprite[vc].x=dist[0].x*(3); sprite[vc].y=dist[0].y*(3); sprite[vc].z=dist[0].z;   
 sprite[vc].x+=vx/2; sprite[vc].y+=vy/2; 
  thm3=sprite[vc].z; if(thm3>fov){thm3=fov; } 
if(pers==1){ w=(fov)*(sprite[vc].x-(vx/2)); w/=((fov)-thm3); sprite[vc].x=w+(vx/2);	w=(fov)*(sprite[vc].y-(vy/2)); w/=((fov)-thm3); sprite[vc].y=w+(vy/2);   }
   sprite[vc].z/=(scz/100.0)*0.5; sprite[vc].z+=farr;
vc++;
}
}
}
if(ges[i]==-9){ if(clr1==0){  if(thm8==0){ polymagezx(sprite,spont,spitt,vc,lin,transs,bitex[tinz],xinz,yinz); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,RGB(0,0,0),transs,TRUE); }  } else{ conlinez(sprite,vc,wire,255,TRUE); } 
if(ojn==1){ sdepth(FALSE); conlinez(sprite,vc,RGB(255,150,50),transs,TRUE); sdepth(TRUE);  } tvc=0; vc=0; finz=0; break; }
if(ges[i]==-1){ fin=1; vc=0; }
if(ges[i]==-2){ fin=0; }
}

}
//alpha end
showscreen(hfc,pistx+10,65,vx,vy);
clearview();
}
