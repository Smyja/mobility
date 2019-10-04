#include <windows.h>
#include "define.h"

LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
	case WM_PAINT:{
	hdc=BeginPaint(hwnd,&ps);
	hfc=CreateCompatibleDC(hdc);
	hb1=CreateCompatibleBitmap(hdc,csize1,csize2);
	SelectObject(hfc,hb1);
if(plane==0){
	sub=LoadBitmap(GetModuleHandle(NULL),lay);
	hbc=CreateCompatibleDC(hdc);
	SelectObject(hbc,sub);
	BitBlt(hfc,7,10,500,375,hbc,0,0,SRCCOPY);
	DeleteObject(sub);
	sub=LoadBitmap(GetModuleHandle(NULL),lay);
	SelectObject(hbc,sub);
	BitBlt(hfc,267,10,500,375,hbc,0,0,SRCCOPY);
	DeleteObject(sub);
	sub=LoadBitmap(GetModuleHandle(NULL),"BIT");
	SelectObject(hbc,sub);
	BitBlt(hfc,13,240,567,375,hbc,0,0,SRCCOPY);
	DeleteDC(hbc); DeleteObject(sub);
	
}
	if(plane==1){
SetRect(&rc,0,0,csize1,csize2);
	brush=CreateSolidBrush(RGB(114,114,114));
	FillRect(hfc,&rc,brush);
	DeleteObject(brush);
SetRect(&rc,0,60,25,csize2-30);
brush=CreateSolidBrush(RGB(62,62,62));
FillRect(hfc,&rc,brush);
SetRect(&rc,csize1-22,60,csize1,csize2-30);
FillRect(hfc,&rc,brush);
DeleteObject(brush);
 pilot(hfc);
align();
	hf=CreateFont(15,7,900,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
	SelectObject(hfc,hf); SetTextColor(hfc,RGB(0,0,0)); SetBkMode(hfc,TRANSPARENT);
	TextOut(hfc,3,csize2/2,"Project",7);
	TextOut(hfc,3,csize2/2-70,"Scene",5);
	TextOut(hfc,3,csize2/2+90,"Materials",9);
	TextOut(hfc,csize1-18,csize2/2,"Groups",6);
	TextOut(hfc,csize1-18,csize2/2+59,"Events",6);
	TextOut(hfc,csize1-18,csize2/2-65,"Pivot",5);
	TextOut(hfc,csize1-18,csize2/2+130,"Physics",7);
	DeleteObject(hf);
	hp=CreatePen(PS_SOLID,0,RGB(150,150,150));
	SelectObject(hfc,hp);
	MoveToEx(hfc,pistx-3,60,NULL);
	LineTo(hfc,pistx-3,csize2-30);
	MoveToEx(hfc,csize1-penx+2,60,NULL);
	LineTo(hfc,csize1-penx+2,csize2-30);
	DeleteObject(hp);
group(); 
	SetRect(&rc,0,csize2-30,csize1,csize2);
	brush=CreateSolidBrush(RGB(70,70,70));
	FillRect(hfc,&rc,brush);
	SetRect(&rc,0,0,csize1,60);
	FillRect(hfc,&rc,brush);
	DeleteObject(brush);
hp=CreatePen(PS_SOLID,1,RGB(20,20,20));
brush=CreateSolidBrush(RGB(58,58,58));
SelectObject(hfc,hp); SelectObject(hfc,brush);
RoundRect(hfc,290,20,430,40,7,7);
RoundRect(hfc,csize1/2-60,7,csize1/2+62,49,7,7);
SetRect(&rc,294,22,420,38);	DrawText(hfc,scenelab,-1,&rc,NULL);
DeleteObject(brush); DeleteObject(hp);
hi=LoadIcon(GetModuleHandle(NULL),"ICO18"); DrawIcon(hfc,420,22,hi); DeleteObject(hi);

hi=LoadIcon(GetModuleHandle(NULL),"ICO1"); DrawIcon(hfc,csize1/2-15,12,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO12"); DrawIcon(hfc,csize1/2-55,12,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO13"); DrawIcon(hfc,csize1/2+25,12,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO11"); DrawIcon(hfc,25,12,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO9"); DrawIcon(hfc,60,11,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO10"); DrawIcon(hfc,95,11,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO6"); DrawIcon(hfc,130,11,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO14"); DrawIcon(hfc,185,11,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO15"); DrawIcon(hfc,225,11,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO7"); DrawIcon(hfc,csize1-85,11,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO8"); DrawIcon(hfc,csize1-50,11,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"BONE"); DrawIcon(hfc,csize1-120,11,hi); DeleteObject(hi);

Rectangle(hfc,csize1-390,5,csize1-310,55);
{
	Rectangle(hfc,csize1-385,10,csize1-375,20);
	Rectangle(hfc,csize1-385,25,csize1-375,35);
	Rectangle(hfc,csize1-385,40,csize1-375,50);
	
hp=CreatePen(PS_SOLID,1,RGB(255,255,255));
brush=CreateSolidBrush(RGB(255,255,255));
SelectObject(hfc,hp); SelectObject(hfc,brush);
if(sky==0){ Rectangle(hfc,csize1-382,13,csize1-378,17); }
if(sky==1){ Rectangle(hfc,csize1-382,28,csize1-378,32); }
if(sky==2){ Rectangle(hfc,csize1-382,43,csize1-378,47); }
DeleteObject(hp); DeleteObject(brush);


}
TextOut(hfc,csize1-360,7,"Skybox",6);
TextOut(hfc,csize1-360,22,"Image",5);
TextOut(hfc,csize1-360,37,"None",4);

hp=CreatePen(PS_SOLID,1,RGB(20,20,20));
brush=CreateSolidBrush(RGB(58,58,58));
SelectObject(hfc,hp); SelectObject(hfc,brush);


RoundRect(hfc,csize1-300,21,csize1-150,30,7,7);
Rectangle(hfc,csize1-295,33,csize1-230,50);
Rectangle(hfc,csize1-220,33,csize1-155,50);
DeleteObject(brush); DeleteObject(hp);

hp=CreatePen(PS_SOLID,1,RGB(150,150,150));
brush=CreateSolidBrush(RGB(200,200,255));
SelectObject(hfc,hp); SelectObject(hfc,brush);

thm3=scale*(csize1-penx-pistx)/100.0;
thm5=146*scale/100.0;
RoundRect(hfc,csize1-298,23,csize1-(298)+(thm5),28,7,7);

DeleteObject(brush);
SelectObject(hfc,GetStockObject(NULL_BRUSH));
Rectangle(hfc,csize1-(298-thm5-8),17,csize1-(298-thm5+8),33);
DeleteObject(brush); DeleteObject(hp); DeleteObject(hf);

sprintf(how,"%f",scale);
SetRect(&rc,csize1-293,34,csize1-232,48);	DrawText(hfc,how,-1,&rc,NULL);
sprintf(how,"%f",thm3);
SetRect(&rc,csize1-218,34,csize1-157,48);	DrawText(hfc,how,-1,&rc,NULL);
}
	BitBlt(hdc,0,0,csize1,csize2,hfc,0,0,SRCCOPY);
	DeleteDC(hfc); DeleteObject(hb1);
	EndPaint(hwnd,&ps);
		break;
	}
	case WM_MOUSEMOVE:{
		mpo1=LOWORD(lParam);
		mpo2=HIWORD(lParam);
move();
if(mpo1>75&&mpo1<pistx-30&&mpo2>75&&mpo2<95&&selen==2){ if(sili==0){ sili=1; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);  } }else{ if(sili==1){ sili=0; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);  } }
	if(mpo2>60&&mpo2<csize2-30&&mpo1>pistx-8&&mpo1<pistx+2&&size==0&&dr1==0&&drz1==0&&drj1==0){ size=1; hc=LoadCursor(NULL,IDC_SIZEWE); SetCursor(hc);	}
	else if(mpo2>60||mpo2<csize2-30||mpo1>pistx-8||mpo1<pistx+2){ if(size==1&&dr1==0&&drz1==0&&drj1==0){ size=0; hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc);  } }
	if(mpo2>60&&mpo2<csize2-30&&mpo1>csize1-penx-2&&mpo1<csize1-penx+6&&size==0&&dr1==0&&drz1==0&&drj1==0&&phm1==0){ size=2; hc=LoadCursor(NULL,IDC_SIZEWE); SetCursor(hc);	}
	else if(mpo2>60||mpo2<csize2-30||mpo1>csize1-penx-2||mpo1<csize1-penx+6){ if(size==2&&dr1==0&&drz1==0&&drj1==0){ size=0; hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc);  } }
	if(size==3){ pistx=mpo1; if(pistx<270){ pistx=270; } if((csize1-penx-pistx)<300){  pistx=(csize1-penx-300); } CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
	if(size==4){ penx=(csize1-mpo1); if((csize1-penx-pistx)<300){ penx=csize1-pistx-300; } if(penx<270){  penx=270; } CLEAN=TRUE;  ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
	if(size==5){
	if(shf==0){
	if(mpo1>fm1+2){ ang1-=0.1; if(ang1<0){ ang1=6.28; } }else if(mpo1<fm1-2){ ang1+=0.1; if(ang1>6.28){ ang1=0; } }
	if(mpo2>fm2+2){ ang2+=0.1; if(ang2>6.28){ ang2=0; } }else if(mpo2<fm2-2){ ang2-=0.1; if(ang2<0){ ang2=6.28; } }
}
else{
	if(pivt==0){
	if(mpo1>fm1){ tranx+=(mpo1-fm1); }else if(mpo1<fm1){ tranx-=(fm1-mpo1); }
	if(mpo2>fm2){ trany+=(mpo2-fm2); }else if(mpo2<fm2){ trany-=(fm2-mpo2); }
}
else{
if(mpo1>fm1){ tranx+=(mpo1-fm1); }else if(mpo1<fm1){ tranx-=(fm1-mpo1); }
if(mpo2>fm2){ trany+=(mpo2-fm2); }else if(mpo2<fm2){ trany-=(fm2-mpo2); }
	
}

}	CLEAN=TRUE;  ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }

if(mpo1>40&&mpo1<pistx-50&&mpo2>135&&mpo2<((impc))&&selen==1){
	ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); drmz=1;
}
else{
if(drmz>0){ ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); drmz=-1;  }
}

if(mpo1>40&&mpo1<pistx-25&&mpo2>80&&mpo2<drk3&&selen==2){ 	drk1=(mpo2-105)/17; drk1+=1; if(drk1!=drm4){ drm4=drk1; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); } }
else{
	if(drm4!=0){ drm4=0;  ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
}
	
fm1=mpo1; fm2=mpo2;
		break;
	}

	case WM_LBUTTONUP:{ thm6=0; mup=0; ReleaseCapture(); dr1=0; drz1=0; drj1=0; phm1=0; 	if(dr!=0&&dr1==0){ dr=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); ReleaseCapture(); } if(drz!=0&&drz1==0){ drz=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); ReleaseCapture(); }  	if(dr!=0&&dr1==0){ dr=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); ReleaseCapture(); } if(drj!=0&&drj1==0){ drj=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); ReleaseCapture(); }
if(phm!=0&&phm1==0){ phm=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); ReleaseCapture(); } 	
	if(size==3){ size=1; ReleaseCapture(); }
		if(size==4){ size=2; ReleaseCapture(); }
	if(size==5&&dr1==0){ size=0; ReleaseCapture(); hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }
		break;
	}
	case WM_LBUTTONDOWN:{ DestroyWindow(POP); DestroyWindow(POP1);
if(mpo1>csize1-120&&mpo1<csize1-90&&mpo1>11&&mpo2<32){ BONE(); }
if(drm4!=0){
	for(int a=drm3,b=0;a<strlen(projs);a++){
		how[b]=projs[a]; b++;
		if(projs[a+1]=='\n'){ how[b]=0;  break; }
	}
if(mpo1>pistx-60&&mpo1<pistx-60+10){ 
for(0;drm3>0;drm3--){ if(projs[drm3]=='\n'){ break; } }
for(pc1=0;pc1<drm3;pc1++){ how[pc1]=projs[pc1]; } how[pc1]=0; pc1++;
for(0;pc1<strlen(projs);pc1++){ if(projs[pc1]=='\n'){ break; } } pc1++;
for(pc2=0;pc1<strlen(projs);pc2++,pc1++){ how1[pc2]=projs[pc1]; } how1[pc2]=0;
sprintf(projs,"%s%s",how,how1); ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,NULL);
}else{ ShellExecute(hwnd,"OPEN",how,NULL,NULL,SW_SHOW); }
}
if(mpo1>pistx-50&&mpo1<pistx-20&&drm!=0&&selen==1){
int c=drm1,d=0,b,e=strlen(asset),f;
for(0;c>0;c--){
	if(asset[c-1]=='\n'){ break; }
} f=c-1;
for(int a=c;a<e;a++){
	if(asset[a]=='\n'){ d=1;
	for(b=a+1;b<e;b++,c++){
		asset[c]=asset[b];
	}
	break; }
} if(d==1){ f=c-f; asset[e-f]=0;  } else{ asset[f+1]=0;  }
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
extend(); loading();
	if(size==1){ size=3; SetCapture(hwnd); }
	if(size==2){ size=4; SetCapture(hwnd);  }
	if(mpo2>pisty+5&&mpo2<csize2-55&&mpo1>pistx+6&&mpo1<(csize1-penx)&&size==0&&dr1==0){
		size=5; SetCapture(hwnd); hc=LoadCursor(GetModuleHandle(NULL),"CUR"); SetCursor(hc);
	}
	if(mpo1>0&&mpo1<25&&mpo2<csize2/2+95&&mpo2>csize2/2+20&&selen!=1){ selen=1; 
	ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
	if(mpo1>0&&mpo1<25&&mpo2<csize2/2-65&&mpo2>csize2/2-120&&selen!=0){ selen=0; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
	if(mpo1>0&&mpo1<25&&mpo2<csize2/2+5&&mpo2>csize2/2-55&&selen!=2){ selen=2; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
	
	if(mpo1>35&&mpo1<pistx-15&&mpo2>77&&mpo2<100&&selen==1){
	ofn.hwndOwner=hwnd;
	ofn.Flags=OFN_EXPLORER|OFN_HIDEREADONLY|OFN_FILEMUSTEXIST;
	ofn.lpstrDefExt="obj";
	ofn.lpstrFile=open;
	ofn.lStructSize=sizeof(ofn);
	ofn.nMaxFile=MAX_PATH;
	ofn.lpstrFilter="Wavefront Obj (*.obj)\0*.obj\0\0";
if(	GetOpenFileName(&ofn)){
sprintf(how,"%s\\",path);
sprintf(how1,"%s",open);
for(int a=strlen(how1);a>0;a--){
	if(how1[a]=='.'){	how1[a+1]='m'; how1[a+2]='t'; how1[a+3]='l'; 	}
}
	shgf.wFunc=FO_COPY;
	shgf.pFrom="_____";
	shgf.pTo=how;
	shgf.hwnd=hwnd;
	shgf.fFlags=FOF_SILENT|FOF_RENAMEONCOLLISION|FOF_NOCONFIRMATION|FOF_NOERRORUI|FOF_NOCONFIRMMKDIR;
	SHFileOperation(&shgf);

shgf.hwnd=hwnd;
shgf.wFunc=FO_COPY;
shgf.fFlags=FOF_SILENT|FOF_RENAMEONCOLLISION|FOF_NOCONFIRMATION|FOF_NOERRORUI|FOF_NOCONFIRMMKDIR;
shgf.pTo=how;
shgf.pFrom=open;
SHFileOperation(&shgf);

shgf.hwnd=hwnd;
shgf.wFunc=FO_COPY;
shgf.fFlags=FOF_SILENT|FOF_RENAMEONCOLLISION|FOF_NOCONFIRMATION|FOF_NOERRORUI|FOF_NOCONFIRMMKDIR;
shgf.pTo=how;
shgf.pFrom=how1;
SHFileOperation(&shgf);
FOCUS(hwnd);
}
	 }
if(mpo1>csize1/2-55&&mpo1<csize1/2-55+30&&mpo2>10&&mpo2<40){ pausemotion(); }
if(mpo1>csize1/2+25&&mpo1<csize1/2+25+30&&mpo2>10&&mpo2<40){ SendMessage(playd,WM_CLOSE,1,0); }
if(mpo1>csize1/2-15&&mpo1<csize1/2+15&&mpo2>10&&mpo2<40){ if(pn==FALSE){	pn=TRUE;
for(int a=0,k=0;a<strlen(scene[0]);a++){ if(scene[0][a]=='('){ k++; } if(k>=defcam){ 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px1=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px2=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px3=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px4=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px5=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px6=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px8=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px9=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px10=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px11=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px7=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px12=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px13=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px14=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px15=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px16=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px17=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px18=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==')'){ how1[g]=0; break;}} px19=atof(how1);
break; } } 
play(px1,px2,px3,px4,px5,px6,px7,px8,px9,px10,px11,px12,px13,px14,px15,px16,px17,px18,px19); } else{ playmotion(); } }

//camera
if(onedit==1){
onedit=0;  int row=0;
for(int y=0;y<dedit;y++){ how[y]=scene[0][y]; row=y; } how[row+1]=0;
for(int y=medit,u=0;y<strlen(scene[0]);y++,u++){ how1[u]=scene[0][y]; row=u; } how1[row+1]=0;
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse);
sprintf(scene[0],"%s%f%s",how,thm3,how1);
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==2){
onedit=0;  int row=0;
for(int y=0;y<dedit;y++){ how[y]=scene[0][y]; row=y; } how[row+1]=0;
for(int y=medit,u=0;y<strlen(scene[0]);y++,u++){ how1[u]=scene[0][y]; row=u; } how1[row+1]=0;
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse)/180.0*3.142;
sprintf(scene[0],"%s%f%s",how,thm3,how1);
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==3){
onedit=0;  int row=0;
for(int y=0;y<dedit;y++){ how[y]=scene[0][y]; row=y; } how[row+1]=0;
for(int y=medit,u=0;y<strlen(scene[0]);y++,u++){ how1[u]=scene[0][y]; row=u; } how1[row+1]=0;
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); if(thm3>100){ thm3=100; } if(thm3<10){ thm3=10; }
sprintf(scene[0],"%s%f%s",how,thm3,how1);
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==4){
onedit=0;  int row=0;
for(int y=0;y<dedit;y++){ how[y]=scene[0][y]; row=y; } how[row+1]=0;
for(int y=medit,u=0;y<strlen(scene[0]);y++,u++){ how1[u]=scene[0][y]; row=u; } how1[row+1]=0;
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse);  if(thm3<10){ thm3=10; }
sprintf(scene[0],"%s%f%s",how,thm3,how1);
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==5){
onedit=0;  
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); trans3[pc1]=thm3-(ges[CLAS+2]/1000.0);
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==6){
onedit=0;  
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); trans2[pc1]=thm3-(ges[CLAS+1]/1000.0);
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==7){
onedit=0;  
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); trans1[pc1]=thm3-(ges[CLAS]/1000.0);
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==8){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); ges[pc1]=thm3;
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==9){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); ges[pc1]=thm3*100.0;
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==10){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); ges[pc1]=thm3*255.0; if(ges[pc1]>255){ ges[pc1]=255; } if(ges[pc1]<0){ ges[pc1]=0; }
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==11){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
int z=0,m=0;
for(z=0;z<pc2;z++){ how[z]=hlop[z]; } how[z]=0;
for(z=z1+1;z<strlen(hlop);z++){ how1[m]=hlop[z]; m++; } how1[m]=0;
sprintf(hlop,"%s%s%s",how,freeuse,how1); hnd1=strlen(hlop);
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==12){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
int z=0,m=0;
for(z=0;z<pc2;z++){ how[z]=scene[0][z]; } how[z]=0;
for(z=z1+1;z<strlen(scene[0]);z++){ how1[m]=scene[0][z]; m++; } how1[m]=0;
sprintf(scene[0],"%s%s%s",how,freeuse,how1); 
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==13){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
scale=atof(freeuse);
if(scale>100){ scale=100; } if(scale<0){ scale=0; }
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}
if(onedit==14){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
scale=atof(freeuse)/(csize1-penx-pistx)*100.0 ;
if(scale>100){ scale=100; } if(scale<0){ scale=0; }
DestroyWindow(editT); CLEAN=TRUE;
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
}

if(mpo2>34&&mpo2<48&&mpo1>csize1-293&&mpo1<csize1-232){
sprintf(how,"%f",scale ); 
onedit=13;     editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-293,34,61,13,hwnd,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); }
if(mpo2>34&&mpo2<48&&mpo1>csize1-218&&mpo1<csize1-157){
sprintf(how,"%f",scale*(csize1-penx-pistx)/100.0 ); 
onedit=14;     editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-218,34,61,13,hwnd,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); }

if(mpo1>40&&mpo1<pistx-50&&mpo2>85&&mpo2<jua+30&&selen==0){
	for(int r=0;r<impc1;r++){
if(mpo2>=camp[r]&&mpo2<=camp[r]+280&&cam[r]==1){
if(mpo2>camp[r]+35&&mpo2<camp[r]+35+15&&mpo1>65&&mpo1<130){ 
for(int y=0,q=0;y<strlen(scene[0]);y++){ if(q>r){ dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=1; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,66,camp[r]+35+8,63,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+52&&mpo2<camp[r]+52+15&&mpo1>65&&mpo1<130){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>0){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=1; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,66,camp[r]+52+8,63,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+69&&mpo2<camp[r]+69+15&&mpo1>65&&mpo1<130){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>1){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=1; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,66,camp[r]+69+8,63,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+103&&mpo2<camp[r]+103+15&&mpo1>65&&mpo1<130){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>2){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=2; thm3=atof(how)*180.0/3.142; sprintf(how,"%f",thm3); editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,66,camp[r]+103+8,63,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+120&&mpo2<camp[r]+120+15&&mpo1>65&&mpo1<130){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>3){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=2; thm3=atof(how)*180.0/3.142; sprintf(how,"%f",thm3); editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,66,camp[r]+120+8,63,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+137&&mpo2<camp[r]+137+15&&mpo1>65&&mpo1<130){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>4){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=2; thm3=atof(how)*180.0/3.142; sprintf(how,"%f",thm3); editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,66,camp[r]+137+8,63,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+165&&mpo2<camp[r]+165+15&&mpo1>85&&mpo1<130){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>5){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=1; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,86,camp[r]+160+8,43,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+179&&mpo2<camp[r]+179+15&&mpo1>85&&mpo1<130){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>6){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=1; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,86,camp[r]+179+8,43,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+217&&mpo2<camp[r]+217+15&&mpo1>50&&mpo1<80){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>7){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=1; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,51,camp[r]+217+8,28,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+217&&mpo2<camp[r]+217+15&&mpo1>90&&mpo1<120){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>8){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=1; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,90,camp[r]+217+8,28,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+47&&mpo2<camp[r]+47+19&&mpo1>166&&mpo1<pistx-30){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>9){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=1; thm3=pistx-166-32; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,167,camp[r]+47+8,thm3,18,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+136&&mpo2<camp[r]+136+19&&mpo1>136&&mpo1<pistx-30){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>12){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=4; thm3=pistx-136-38; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,137,camp[r]+136+8,thm3,18,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>camp[r]+189&&mpo2<camp[r]+189+19&&mpo1>136&&mpo1<pistx-30){
for(int y=0,q=0;y<strlen(scene[0]);y++){ trc=0; if(q>r){ for(0;y<strlen(scene[0]);y++){ if(trc>13){ break;} if(scene[0][y]==','){ trc++; } } dedit=y; for(int rr=y,w=0;rr<strlen(scene[0]);rr++){ if(scene[0][rr]==','){ medit=rr; how[w]=0; break; } how[w]=scene[0][rr]; w++; } break; } if(scene[0][y]=='('){ q++; } }
onedit=3; thm3=pistx-136-38; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,137,camp[r]+189+8,thm3,18,hwnd,NULL,GetModuleHandle(NULL),NULL);   }

if(mpo2>camp[r]+250&&mpo2<camp[r]+260&&mpo1>52&&mpo1<58){ 
trg=0; trc=0;
for(int a=0;a<strlen(scene[0]);a++){ how[a]=scene[0][a]; trg=a;  if(trc>r){ break; } if(scene[0][a]=='('){ trc++; } }
trc=0; trm=0;
for(int a=trg;a<strlen(scene[0]);a++){ how[a]=scene[0][a]; trg=a; if(trc>17){ break; } if(scene[0][a]==','){ trc++; } } how[trg]=0;
tra=0; 
for(int a=trg;a<strlen(scene[0]);a++){  trg=a; if(scene[0][a]==')'){  break; } }
for(int a=trg;a<strlen(scene[0]);a++){ how1[trm]=scene[0][a]; trm++; } how1[trm]=0;
sprintf(scene[0],"%s0%s",how,how1);
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
 }
if(mpo2>camp[r]+250&&mpo2<camp[r]+260&&mpo1>117&&mpo1<123){ 
trg=0; trc=0;
for(int a=0;a<strlen(scene[0]);a++){ how[a]=scene[0][a]; trg=a;  if(trc>r){ break; } if(scene[0][a]=='('){ trc++; } }
trc=0; trm=0;
for(int a=trg;a<strlen(scene[0]);a++){ how[a]=scene[0][a]; trg=a; if(trc>17){ break; } if(scene[0][a]==','){ trc++; } } how[trg]=0;
tra=0; 
for(int a=trg;a<strlen(scene[0]);a++){  trg=a; if(scene[0][a]==')'){  break; } }
for(int a=trg;a<strlen(scene[0]);a++){ how1[trm]=scene[0][a]; trm++; } how1[trm]=0;
sprintf(scene[0],"%s1%s",how,how1);
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
 }
 if(mpo2>camp[r]+250&&mpo2<camp[r]+260&&mpo1>177&&mpo1<183){ 
trg=0; trc=0;
for(int a=0;a<strlen(scene[0]);a++){ how[a]=scene[0][a]; trg=a;  if(trc>r){ break; } if(scene[0][a]=='('){ trc++; } }
trc=0; trm=0;
for(int a=trg;a<strlen(scene[0]);a++){ how[a]=scene[0][a]; trg=a; if(trc>17){ break; } if(scene[0][a]==','){ trc++; } } how[trg]=0;
tra=0; 
for(int a=trg;a<strlen(scene[0]);a++){  trg=a; if(scene[0][a]==')'){  break; } }
for(int a=trg;a<strlen(scene[0]);a++){ how1[trm]=scene[0][a]; trm++; } how1[trm]=0;
sprintf(scene[0],"%s2%s",how,how1);
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
 }
 
if(mpo2>camp[r]+220&&mpo2<camp[r]+240&&mpo1>136&&mpo1<156){ 
	ccz.lStructSize=sizeof(CHOOSECOLOR);
	ccz.hwndOwner=hwnd;
	ccz.hInstance=NULL;
	ccz.rgbResult=zcolor;
	ccz.lpCustColors=zref;
	ccz.Flags=CC_RGBINIT|CC_FULLOPEN;
	ccz.lpfnHook=NULL;
	if(ChooseColor(&ccz)){
	zcolor=ccz.rgbResult;
	thm3=GetRValue(zcolor);	thm5=GetGValue(zcolor);	thm6=GetBValue(zcolor);
trg=0; trc=0;
for(int a=0;a<strlen(scene[0]);a++){ how[a]=scene[0][a]; trg=a;  if(trc>r){ break; } if(scene[0][a]=='('){ trc++; } }
trc=0; trm=0;
for(int a=trg;a<strlen(scene[0]);a++){ how[a]=scene[0][a]; trg=a; if(trc>14){ break; } if(scene[0][a]==','){ trc++; } } how[trg]=0;
tra=0; 
for(int a=trg;a<strlen(scene[0]);a++){  trg=a; if(scene[0][a]==','){ tra++; } if(tra>2){ break; } }
for(int a=trg;a<strlen(scene[0]);a++){ how1[trm]=scene[0][a]; trm++; } how1[trm]=0;
sprintf(scene[0],"%s%f,%f,%f%s",how,thm3,thm5,thm6,how1);
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}
 }

DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1);
	break; }
	}
}

if(chase==0){
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+400&&ges[sp[r]+1]==-7){
{ CLAS=sp[r]; for(0;CLAS<fcon;CLAS++){ if(ges[CLAS]==-24){ CLAS++; break; } }
if(mpo2>gp[r]+34&&mpo2<gp[r]+34+15&&mpo1>csize1-penx+40&&mpo1<csize1-135){
sprintf(how,"%f",((ges[CLAS+2]/1000.0)+trans3[r]) );
onedit=5; pc1=r;  pc2=CLAS; thm3=(csize1-135)-(csize1-penx+40)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+41,gp[r]+34+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }

if(mpo2>gp[r]+54&&mpo2<gp[r]+54+15&&mpo1>csize1-penx+40&&mpo1<csize1-135){ 
sprintf(how,"%f",((ges[CLAS+1]/1000.0)+trans2[r]) );
onedit=6; pc1=r;  pc2=CLAS; thm3=(csize1-135)-(csize1-penx+40)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+41,gp[r]+54+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }

if(mpo2>gp[r]+74&&mpo2<gp[r]+74+15&&mpo1>csize1-penx+40&&mpo1<csize1-135){ 
sprintf(how,"%f",((ges[CLAS]/1000.0)+trans1[r]) );
onedit=7; pc1=r;  pc2=CLAS; thm3=(csize1-135)-(csize1-penx+40)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+41,gp[r]+74+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }

if(mpo2>gp[r]+114&&mpo2<gp[r]+114+15&&mpo1>csize1-penx+40&&mpo1<csize1-135){
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-12){ u++; pc1=u; sprintf(how,"%d",ges[u]);   break; }} onedit=8;  thm3=(csize1-135)-(csize1-penx+40)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+41,gp[r]+114+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>gp[r]+134&&mpo2<gp[r]+134+15&&mpo1>csize1-penx+40&&mpo1<csize1-135){
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-12){ u+=2; pc1=u; sprintf(how,"%d",ges[u]);   break; }} onedit=8;  thm3=(csize1-135)-(csize1-penx+40)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+41,gp[r]+134+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>gp[r]+154&&mpo2<gp[r]+154+15&&mpo1>csize1-penx+40&&mpo1<csize1-135){
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-12){ u+=3; pc1=u; sprintf(how,"%d",ges[u]);   break; }} onedit=8;  thm3=(csize1-135)-(csize1-penx+40)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+41,gp[r]+154+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>gp[r]+194&&mpo2<gp[r]+194+15&&mpo1>csize1-penx+40&&mpo1<csize1-135){
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-11){ u+=1; pc1=u; sprintf(how,"%f",ges[u]/100.0);   break; }} onedit=9;  thm3=(csize1-135)-(csize1-penx+40)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+41,gp[r]+194+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>gp[r]+214&&mpo2<gp[r]+214+15&&mpo1>csize1-penx+40&&mpo1<csize1-135){
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-11){ u+=2; pc1=u; sprintf(how,"%f",ges[u]/100.0);   break; }} onedit=9;  thm3=(csize1-135)-(csize1-penx+40)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+41,gp[r]+214+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }
if(mpo2>gp[r]+234&&mpo2<gp[r]+234+15&&mpo1>csize1-penx+40&&mpo1<csize1-135){
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-11){ u+=3; pc1=u; sprintf(how,"%f",ges[u]/100.0);   break; }} onedit=9;  thm3=(csize1-135)-(csize1-penx+40)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+41,gp[r]+234+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }

if(mpo2>gp[r]+314&&mpo2<gp[r]+314+15&&mpo1>csize1-penx+105&&mpo1<csize1-penx+170){
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-16){ u+=1; pc1=u; sprintf(how,"%f",ges[u]/255.0);   break; }} onedit=10;  thm3=(csize1-penx+170)-(csize1-penx+105)-2;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+106,gp[r]+314+7,thm3,15,hwnd,NULL,GetModuleHandle(NULL),NULL);   }


}
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1);
 break; }
   }
	}

		break;
	}

case WM_LBUTTONDBLCLK:{
if(mpo1>csize1-penx+6&&mpo1<csize1-90&&mpo2>70&&mpo2<ga+30&&chase==0){
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+20){ ges[sp[r]+1]=-6;  pc1=0;
for(int z=0,u=0;z<strlen(hlop);z++){ if(u>=r){ pc2=z; for(0;z<strlen(hlop);z++){ how[pc1]=hlop[z]; pc1++; if(hlop[z+1]==':'){ z1=z; break; } } break; } if(hlop[z]==':'){ u++; } } how[pc1]=0;
onedit=11;  thm3=(csize1-115)-(csize1-penx+11)+7;  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,csize1-penx+7,gp[r]+1,thm3,14,hwnd,NULL,GetModuleHandle(NULL),NULL); 
DeleteObject(hf1);  CLEAN=TRUE;  ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1);	break; }
}
	 }

if(mpo1>40&&mpo1<pistx-50&&mpo2>85&&mpo2<jua+30&&selen==0){
	for(int r=0;r<impc1;r++){
if(mpo2>=camp[r]&&mpo2<=camp[r]+20){ cam[r]=1;
 pc1=0;
for(int z=0,u=0;z<strlen(scene[0]);z++){ if(u>=r){ if(z>=1){ for(0;z<strlen(scene[0]);z++){ if(scene[0][z]==')'){ z++; break; } } } pc2=z; for(0;z<strlen(scene[0]);z++){ how[pc1]=scene[0][z]; pc1++; if(scene[0][z+1]=='('){ z1=z; break; } } break; } if(scene[0][z]=='('){ u++; } } how[pc1]=0;
onedit=12;  thm3=(pistx-69)-(75);  editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,75,camp[r]+1,thm3,19,hwnd,NULL,GetModuleHandle(NULL),NULL); 
DeleteObject(hf1);  ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); hf1=CreateFont(20,9,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1);  	break; }
	}
}

	break;
}


	case WM_CREATE:{ sprintf(how,"C:\\Users\\ADE\\Documents\\Crystal\\mobility\\"); sprintf(how1,"Project"); projload(how,how1); sprintf(scene[0],"Camera1(0,0,0,0,0,0,-3000,3000,16,9,800,1,1,500,50,40,40,40,0)Camera2(-6,-20,-3,0.634,0.784,0,-3000,3000,1.4,1,800,0,1,500,50,40,40,40,1)Camera3(3,30,3,0,0,0,-3000,3000,1.4,1,800,1,1,500,50,40,40,40,2)");
	SetTimer(hwnd,1,70,NULL); cnt=-5;  
	sub=LoadBitmap(GetModuleHandle(NULL),"SKY");
	GetBitmapBits(sub,sizeof(sky1[0]),&sky1[0]);
	DeleteObject(sub);
sub=LoadBitmap(GetModuleHandle(NULL),"SKY1");
	GetBitmapBits(sub,sizeof(sky1[1]),&sky1[1]);
	DeleteObject(sub);
sub=LoadBitmap(GetModuleHandle(NULL),"SKY2");
	GetBitmapBits(sub,sizeof(sky1[2]),&sky1[2]);
	DeleteObject(sub);
sub=LoadBitmap(GetModuleHandle(NULL),"SKY3");
	GetBitmapBits(sub,sizeof(sky1[3]),&sky1[3]);
	DeleteObject(sub);
sub=LoadBitmap(GetModuleHandle(NULL),"SKY4");
	GetBitmapBits(sub,sizeof(sky1[4]),&sky1[4]);
	DeleteObject(sub);
sub=LoadBitmap(GetModuleHandle(NULL),"SKY5");
	GetBitmapBits(sub,sizeof(sky1[5]),&sky1[5]);
	DeleteObject(sub);
sub=LoadBitmap(GetModuleHandle(NULL),"SPRITE");
	GetBitmapBits(sub,sizeof(imag),&imag);
	DeleteObject(sub);
		break;
	}
	case WM_TIMER:{
		if(lay1<1){ lay1++;
		sprintf(lay,"WIT%d",cnt); cnt++;
		if(cnt>24){
			cnt=4;
		}
	}else if(lay1==1){ lay1++;  plane=1; KillTimer(hwnd,1); SetWindowLong(hwnd,GWL_STYLE,WS_VISIBLE|WS_OVERLAPPEDWINDOW|WS_CLIPCHILDREN);  
MoveWindow(hwnd,GetSystemMetrics(SM_CXSCREEN)/2-500,GetSystemMetrics(SM_CYSCREEN)/2-370,1000,700,TRUE); hm=LoadMenu(GetModuleHandle(NULL),"main"); SetMenu(hwnd,hm);  
hc=LoadCursor(NULL,IDC_ARROW); 
SetCursor(hc); hi=LoadIcon(GetModuleHandle(NULL),"ICO");
SendMessage(hwnd,WM_SETICON,ICON_SMALL,(LPARAM)hi);
ShowWindow(hwnd,SW_MAXIMIZE);
	} 
		ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
		break;
	}
case WM_COMMAND:{
switch(LOWORD(wParam)){
case PLANE:{  vinc=vcon; 
for(int i=0;i<=21;i++){ ges[fcon]=cibe[i]+vinc; fcon++; }
for(int i=0;i<=4;i++){ xes[vcon]=cibex[i]; yes[vcon]=cibey[i]; zes[vcon]=cibez[i]; vcon++; }
grp[gnd]='P'; gnd++; grp[gnd]='l'; gnd++; grp[gnd]='a'; gnd++; grp[gnd]='n'; gnd++; grp[gnd]='e'; gnd++; grp[gnd]=':'; gnd++; 
hlop[hnd1]='P'; hnd1++; hlop[hnd1]='l'; hnd1++; hlop[hnd1]='a'; hnd1++; hlop[hnd1]='n'; hnd1++; hlop[hnd1]='e'; hnd1++; hlop[hnd1]=':'; hnd1++; 
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
	break;
}
case CUBE:{
vinc=vcon; 
for(int i=0;i<=42;i++){ ges[fcon]=pibe[i]+vinc; fcon++; }
for(int i=0;i<=8;i++){ xes[vcon]=pibex[i]; yes[vcon]=pibey[i]; zes[vcon]=pibez[i]; vcon++; }
grp[gnd]='C'; gnd++; grp[gnd]='u'; gnd++; grp[gnd]='b'; gnd++; grp[gnd]='e'; gnd++; grp[gnd]=':'; gnd++; 
hlop[hnd1]='C'; hnd1++; hlop[hnd1]='u'; hnd1++; hlop[hnd1]='b'; hnd1++; hlop[hnd1]='e'; hnd1++; hlop[hnd1]=':'; hnd1++; 
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	
	break;
}
case PIVOT:{
pivotz[pivtt]=1; pivotx[pivtt]=1; pivoty[pivtt]=1; pivtt++; CLEAN=TRUE;  ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
if(strlen(pivtc)<=1){ sprintf(pivtc,"Pivot:0.;"); }else{ sprintf(pivtc,"%sPivot:0.;",pivtc); }
	break;
}

}
	break;
}
case WM_RBUTTONDOWN:{ 
mpo1=LOWORD(lParam);
mpo2=HIWORD(lParam);
if(mpo2>pisty+5&&mpo2<csize2-55&&mpo1>pistx+6&&mpo1<(csize1-penx)){ CLEAN=TRUE; 
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
vx=(csize1-penx-pistx); vy=(csize2-peny);	 vret=(csize1-penx-pistx)/(csize2-peny); 
if(vx>vy){ vx=600; vy=600/vret; } else{ vx=600*vret; vy=600; }
crp1=(mpo1-pistx)/(((csize1-penx-pistx)*1.0)/vx*1.0);  crp1=crp1-(vx/2)-tranx;
crp2=(mpo2-pisty)/(((csize2-peny)*1.0)/vy*1.0); crp2=crp2-(vy/2)-tranx; crp3=0;
DestroyMenu(hm);
hm=LoadMenu(GetModuleHandle(NULL),"CREAT");
hm=GetSubMenu(hm,0);
TrackPopupMenu(hm,TPM_RIGHTBUTTON,mpo1,mpo2,0,hwnd,NULL);
}
	
	break;
}
	case WM_KEYUP:{
		switch(LOWORD(wParam)){
		case VK_SHIFT:{
		shf=0;
		} break;
		}
		break;
	}
	
	case WM_CHAR:{
		switch(LOWORD(wParam)){
	case 'C':
	case 'c':{
	if(shf==1){ tranx=0; trany=0; CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }	
		break;
	}
	
	case 'z':{
		if(mpo2>pisty+5&&mpo2<csize2-55&&mpo1>pistx+6&&mpo1<(csize1-penx)){
			if(clr1==0){ clr1=1; }else{ clr1=0; } CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
		}
			break;
		}
	case 'Z':{
		if(mpo2>pisty+5&&mpo2<csize2-55&&mpo1>pistx+6&&mpo1<(csize1-penx)){
			if(clr1==0){ clr1=1; }else{ clr1=0; } CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
		}
			break;
		}
}
break; }
	case WM_KEYDOWN:{
		switch(LOWORD(wParam)){
		case '1':{
		 ang1=3.143; ang2=3.143;	CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
			break;
		}
		case '2':{
		 ang1=3.143; ang2=4.7145;	CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);			break;
		}
		case '3':{
		ang1=4.7145; ang2=3.143;	CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
			break;
		}


		case VK_UP:{
	if(mpo1>pistx&&mpo1<csize1-penx&&mpo2>60&&mpo2<csize1-30){
		ang2-=0.8; if(ang2<0){ ang2=6.286; }
	CLEAN=TRUE; 	ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
	}
			break;	}
	case VK_DOWN:{
	if(mpo1>pistx&&mpo1<csize1-penx&&mpo2>60&&mpo2<csize1-30){
		ang2+=0.8; if(ang2>6.286){ ang2=0; }
	CLEAN=TRUE; 	ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
	}
			break;	}
		case VK_RIGHT:{
	if(mpo1>pistx&&mpo1<csize1-penx&&mpo2>60&&mpo2<csize1-30){
		ang1-=0.8; if(ang1<0){ ang1=6.286; }
CLEAN=TRUE; 	ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
	}
			break;	}
	case VK_LEFT:{
	if(mpo1>pistx&&mpo1<csize1-penx&&mpo2>60&&mpo2<csize1-30){
		ang1+=0.8; if(ang1>6.286){ ang1=0; }
	CLEAN=TRUE;	ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
	}
			break;	}

		case VK_ADD:{
		if(zoom<20000){ zoom+=50; CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
			break;
		}
		case VK_SUBTRACT:{
		if(zoom>0){	zoom-=50; CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
			break;
		}
		case VK_SPACE:{
		if(vu==0){ vu=1; }else{ vu=0; } CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
			break;
		}
		case VK_CONTROL:{
		if(pivt==0){ pivt=1; }else{ pivt=0; }
		CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
			break;
		}
		case VK_SHIFT:{
			shf=1;
			break;
		}
	}
		break;
	}
	case WM_ERASEBKGND:{
		return 1;
		break;
	}
	case WM_SIZE:{
		csize1=LOWORD(lParam);
		csize2=HIWORD(lParam); DestroyWindow(editT);
	if((csize1-penx-pistx)<200){penx=270; pistx=270; } 
	CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
	if(csize1<1000){ MoveWindow(hwnd,GetSystemMetrics(SM_CXSCREEN)/2-525,GetSystemMetrics(SM_CYSCREEN)/2-350-20,1050,700,TRUE); }
		break;
	}
	
case WM_SETFOCUS:{
	FOCUS(hwnd);
	break;
}
		case WM_DESTROY: {
		DestroyWindow(playd); DestroyWindow(POP);	joyReleaseCapture(JOYSTICKID1); joyReleaseCapture(JOYSTICKID2); PostQuitMessage(0);
			break;
		}
		
		
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; 
	HWND hwnd; 
	MSG msg; 

	
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; 
	wc.hInstance	 = hInstance;
	wc.hCursor		 = NULL;
	wc.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS ;
	
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(GetModuleHandle(NULL), "ICO"); 
	wc.hIconSm		 = LoadIcon(GetModuleHandle(NULL), "ICO");
	wc.lpszMenuName=NULL;

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(0,"WindowClass","Mobility24",WS_VISIBLE|WS_POPUP,
		GetSystemMetrics(SM_CXSCREEN)/2-283, 
		GetSystemMetrics(SM_CYSCREEN)/2-187, 
		567, 
		375, 
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}
BOOL bQuit=FALSE;
while(!bQuit){
	 if (PeekMessage (&msg, NULL, 0, 0, PM_REMOVE))
        {
            /* handle or dispatch messages */
            if (msg.message == WM_QUIT)
            {
                bQuit = TRUE;
            }
            else
            {
                TranslateMessage (&msg);
                DispatchMessage (&msg);
            }
        }
        else
        {
   
		
	}
	
}

	return msg.wParam;
}
