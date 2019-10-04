LRESULT CALLBACK PAPA(HWND POP, UINT MAssage, WPARAM wqParam, LPARAM lqParam) {
	switch(MAssage) {
	case WM_CREATE:{
	
		break;
	}
case WM_PAINT:{
hdc=BeginPaint(POP,&ps);
hfc=CreateCompatibleDC(hdc);
hb1=CreateCompatibleBitmap(hdc,240,360); popst2=0; popst3=0;
SelectObject(hfc,hb1); brush=CreateSolidBrush(RGB(48,48,48)); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
SetRect(&rc,0,0,240,360); FillRect(hfc,&rc,brush); DeleteObject(brush);
 hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); SelectObject(hfc,hf);  
if(strlen(funcs)<=0){ SetRect(&rc,0,173,240,360); DrawText(hfc,"No Function Added",-1,&rc,DT_CENTER); }else{ 
	for(int a=0,b=0,c=popst;a<strlen(funcs);a++){ popst1=c;
		how[b]=funcs[a]; b++;
	if(funcs[a+1]==';'){ a++; popst2++; if(c<50){ popst3=c; } how[b]=0; b=0; if(mpo2>c&&mpo2<c+17){ sprintf(clik1,"%s",how); SetTextColor(hfc,RGB(255,100,100)); } else{ SetTextColor(hfc,RGB(255,255,255)); } SetRect(&rc,10,c,210,360); DrawText(hfc,how,-1,&rc,DT_SINGLELINE); c+=17; }
	} DeleteObject(hf);
brush=CreateSolidBrush(RGB(48,48,48)); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
SetRect(&rc,0,0,240,50); FillRect(hfc,&rc,brush); DeleteObject(brush);
hf=CreateFont(20,9,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); SelectObject(hfc,hf); SetRect(&rc,0,10,240,360); DrawText(hfc,"Select a Function",-1,&rc,DT_CENTER);	DeleteObject(hf); 
}
hi=LoadIcon(GetModuleHandle(NULL),"ICO19"); DrawIcon(hfc,10,10,hi);
//scroll
{
brush=CreateSolidBrush(RGB(40,40,40));
hp=CreatePen(PS_SOLID,1,RGB(10,10,10));
SelectObject(hfc,brush); SelectObject(hfc,hp);
RoundRect(hfc,220,55,230,325,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(90,90,90));
 thm3=(popst3-popst);  if(thm3<0){ thm3=0; } thm3=thm3/7.0; thm8=56+thm3; thm9=(popst1-popst)-(270); if(thm9<0){thm9=0;} thm3=thm9/7; thm9=(270)-thm3; if(thm2<20){ thm2=20; }
SelectObject(hfc,brush1); SelectObject(hfc,hp); thm3=thm8+thm9; if(thm3>324){ thm3=324; }
RoundRect(hfc,221,thm8,229,thm3,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
}
DeleteObject(hf);
BitBlt(hdc,0,0,240,360,hfc,0,0,SRCCOPY);
DeleteDC(hfc); DeleteObject(hb1);
EndPaint(POP,&ps);
	break;
}
case WM_LBUTTONDOWN:{
if(mpo1>220&&mpo1<230&&mpo2>55&&mpo2<thm8){ popst+=70; ValidateRect(POP,NULL); InvalidateRect(POP,NULL,TRUE); }
if(mpo1>220&&mpo1<230&&mpo2>(thm9+thm8)&&mpo2<325){ popst-=70; ValidateRect(POP,NULL); InvalidateRect(POP,NULL,TRUE); }
if(pmp1>=0){ sprintf(keyev[clik],"%s",clik1); DestroyWindow(POP); ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);  }
if(mpo1>10&&mpo1<40&&mpo2>10&&mpo2<40){ sprintf(keyev[clik],""); DestroyWindow(POP); ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);  }
	break;
}
case WM_MOUSEMOVE:{
	mpo1=LOWORD(lqParam); mpo2=HIWORD(lqParam);
if(mpo1>10&&mpo1<218&&mpo2>50&&mpo2<360){ thm3=mpo2-50; thm3*=1.0; thm3/=17; if(thm3!=pmp1){ pmp1=thm3; ValidateRect(POP,NULL); InvalidateRect(POP,NULL,TRUE); } }else{ if(pmp1!=-1){ pmp1=-1; ValidateRect(POP,NULL); InvalidateRect(POP,NULL,TRUE); }}
	break;
}
case WM_KEYDOWN:{
	switch(LOWORD(wqParam)){
		case VK_ESCAPE:{
			DestroyWindow(POP);
			break;
		}
	}
	break;
}
	case WM_ERASEBKGND:{
		return 1;
		break;
	}
	case WM_DESTROY:{
	pn=FALSE;
		break;
	}
	
	default:
	return DefWindowProc(POP, MAssage, wqParam, lqParam);
	}
	return 0;
}

void pop(){
	HINSTANCE hInstancex;
	MSG msgx;
	WNDCLASSEX wcx;
	memset(&wcx,0,sizeof(wcx));
	wcx.cbSize		 = sizeof(WNDCLASSEX);
	wcx.lpfnWndProc	 = PAPA;
	wcx.hInstance	 = hInstancex;
	wcx.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wcx.lpszClassName = "WindowClassq";
	wcx.hIcon		 = LoadIcon(GetModuleHandle(NULL), "IC");
	wcx.hIconSm		 = LoadIcon(GetModuleHandle(NULL), "IC");
	wcx.lpszMenuName  = NULL;
RegisterClassEx(&wcx); int pgx=csize1-270,pgy=mpo2-200; if(pgx+240>GetSystemMetrics(SM_CXSCREEN)-30){ pgx=GetSystemMetrics(SM_CXSCREEN)-270; }
if(pgy+360>GetSystemMetrics(SM_CYSCREEN)-50){ pgy=GetSystemMetrics(SM_CYSCREEN)-410; } if(pgy<50){ pgy=50; } if(pgx<50){ pgx=50; }
	POP = CreateWindowEx(0,"WindowClassq","Popup",WS_VISIBLE|WS_POPUPWINDOW,pgx,pgy,240,360,hwnd,NULL,hInstancex,NULL);	

}

void group(){
if(chase==0){ ga=90; reho=0;
hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hfc,hf); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
brush=CreateSolidBrush(RGB(40,40,40));
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(10,10,10));
SelectObject(hfc,brush); SelectObject(hfc,hp); has=0; usea=has1;
hi=LoadIcon(GetModuleHandle(NULL),"ICO4"); hi1=LoadIcon(GetModuleHandle(NULL),"ICO2"); hi2=LoadIcon(GetModuleHandle(NULL),"ICO3"); hi3=LoadIcon(GetModuleHandle(NULL),"ICO5");
for(int a=0,b=0;a<hnd1;a++){
if(hlop[a]==':'){
how[b]=0; b=0;	ga+=20; gp[reho]=ga; 
if(ges[sp[reho]+1]==-6){  RoundRect(hfc,csize1-penx+5,ga,csize1-43,ga+17,7,7); DrawIcon(hfc,csize1-65,ga+1,hi1); }else if(ges[sp[reho]+1]==-7){  RoundRect(hfc,csize1-penx+5,ga,csize1-43,ga+400,7,7); has=1; DrawIcon(hfc,csize1-65,ga+1,hi2);
 CLAS=sp[reho]; for(0;CLAS<fcon;CLAS++){ if(ges[CLAS]==-24){ CLAS++; break; } }
SetRect(&rc,csize1-penx+11,ga+23,csize1-115,csize2-40); DrawText(hfc,"Position",-1,&rc,NULL); DeleteObject(brush);  brush=CreateSolidBrush(RGB(60,60,60)); SelectObject(hfc,brush);
SetRect(&rc,csize1-penx+20,ga+39,csize1-115,csize2-40); DrawText(hfc,"X",-1,&rc,NULL); Rectangle(hfc,csize1-penx+40,ga+39,csize1-135,ga+40+17); SetRect(&rc,csize1-penx+43,ga+40,csize1-137,csize2-40); sprintf(how1,"%f",((ges[CLAS+2]/1000.0)+trans3[reho])); DrawText(hfc,how1,-1,&rc,NULL); 
SetRect(&rc,csize1-penx+20,ga+60,csize1-115,csize2-40); DrawText(hfc,"Y",-1,&rc,NULL); Rectangle(hfc,csize1-penx+40,ga+60,csize1-135,ga+61+17); SetRect(&rc,csize1-penx+43,ga+61,csize1-137,csize2-40); sprintf(how1,"%f",(ges[CLAS+1]/1000.0)+trans2[reho]); DrawText(hfc,how1,-1,&rc,NULL); 
SetRect(&rc,csize1-penx+20,ga+80,csize1-115,csize2-40); DrawText(hfc,"Z",-1,&rc,NULL); Rectangle(hfc,csize1-penx+40,ga+80,csize1-135,ga+81+17); SetRect(&rc,csize1-penx+43,ga+80,csize1-137,csize2-40); sprintf(how1,"%f",(ges[CLAS]/1000.0)+trans1[reho]); DrawText(hfc,how1,-1,&rc,NULL); 
has1=100;
sprintf(freeuse,"ID: %d",reho); SetRect(&rc,csize1-100,ga+53,csize1-30,csize2-40); DrawText(hfc,freeuse,-1,&rc,NULL);
SetRect(&rc,csize1-penx+11,ga+has1,csize1-115,csize2-40); DrawText(hfc,"Rotation",-1,&rc,NULL);  has1+=20; for(int u=sp[reho];u<fcon;u++){ if(ges[u]==-12){ u++; sprintf(BUMP,"%d",ges[u]); sprintf(nnn,"%d",ges[u+1]); sprintf(nnm,"%d",ges[u+2]);  break; }}
SetRect(&rc,csize1-penx+20,ga+has1,csize1-115,csize2-40); DrawText(hfc,"X",-1,&rc,NULL); Rectangle(hfc,csize1-penx+40,ga+has1,csize1-135,ga+has1+17); SetRect(&rc,csize1-penx+43,ga+has1,csize1-137,csize2-40); sprintf(how1,"%s",BUMP); DrawText(hfc,how1,-1,&rc,NULL);  has1+=20;
SetRect(&rc,csize1-penx+20,ga+has1,csize1-115,csize2-40); DrawText(hfc,"Y",-1,&rc,NULL); Rectangle(hfc,csize1-penx+40,ga+has1,csize1-135,ga+has1+17); SetRect(&rc,csize1-penx+43,ga+has1,csize1-137,csize2-40); sprintf(how1,"%s",nnn); DrawText(hfc,how1,-1,&rc,NULL); has1+=20;
SetRect(&rc,csize1-penx+20,ga+has1,csize1-115,csize2-40); DrawText(hfc,"Z",-1,&rc,NULL); Rectangle(hfc,csize1-penx+40,ga+has1,csize1-135,ga+has1+17); SetRect(&rc,csize1-penx+43,ga+has1,csize1-137,csize2-40); sprintf(how1,"%s",nnm); DrawText(hfc,how1,-1,&rc,NULL); has1+=20;

SetRect(&rc,csize1-penx+11,ga+has1,csize1-115,csize2-40); DrawText(hfc,"Scale",-1,&rc,NULL);  has1+=20; for(int u=sp[reho];u<fcon;u++){ if(ges[u]==-11){ u++; sprintf(BUMP,"%f",ges[u]/100.0); sprintf(nnn,"%f",ges[u+1]/100.0); sprintf(nnm,"%f",ges[u+2]/100.0);  break; }}
SetRect(&rc,csize1-penx+20,ga+has1,csize1-115,csize2-40); DrawText(hfc,"X",-1,&rc,NULL); Rectangle(hfc,csize1-penx+40,ga+has1,csize1-135,ga+has1+17); SetRect(&rc,csize1-penx+43,ga+has1,csize1-137,csize2-40); sprintf(how1,"%s",BUMP); DrawText(hfc,how1,-1,&rc,NULL);  has1+=20;
SetRect(&rc,csize1-penx+20,ga+has1,csize1-115,csize2-40); DrawText(hfc,"Y",-1,&rc,NULL); Rectangle(hfc,csize1-penx+40,ga+has1,csize1-135,ga+has1+17); SetRect(&rc,csize1-penx+43,ga+has1,csize1-137,csize2-40); sprintf(how1,"%s",nnn); DrawText(hfc,how1,-1,&rc,NULL); has1+=20;
SetRect(&rc,csize1-penx+20,ga+has1,csize1-115,csize2-40); DrawText(hfc,"Z",-1,&rc,NULL); Rectangle(hfc,csize1-penx+40,ga+has1,csize1-135,ga+has1+17); SetRect(&rc,csize1-penx+43,ga+has1,csize1-137,csize2-40); sprintf(how1,"%s",nnm); DrawText(hfc,how1,-1,&rc,NULL); has1+=20;
TextOut(hfc,csize1-penx+11,ga+has1,"Shading",7); has1+=20; Rectangle(hfc,csize1-penx+11,ga+has1+3,csize1-penx+21,ga+has1+13); Rectangle(hfc,csize1-penx+106,ga+has1+3,csize1-penx+116,ga+has1+13);
Rectangle(hfc,csize1-penx+155,ga+has1+3,csize1-penx+165,ga+has1+13);  Rectangle(hfc,csize1-penx+11,ga+has1+3+20,csize1-penx+21,ga+has1+13+20); Rectangle(hfc,csize1-penx+106,ga+has1+3+20,csize1-penx+116,ga+has1+13+20);
Rectangle(hfc,csize1-penx+155,ga+has1+3+20,csize1-penx+165,ga+has1+13+20);
TextOut(hfc,csize1-penx+25,ga+has1,"Shadeless",9); TextOut(hfc,csize1-penx+120,ga+has1,"Flat",4);  TextOut(hfc,csize1-penx+170,ga+has1,"Shade",5); 
Rectangle(hfc,csize1-penx+105,ga+has1+40,csize1-penx+170,ga+has1+40+17); thm7=0; thm8=0;
for(int u=sp[reho];u<fcon;u++){ if(ges[u]==-16){ thm8=1;thm9=ges[u+1]/255.0; if(thm7==1&&thm8==1){ break; } } 
if(ges[u]==-26){ thm3=2; thm7=1; for(int s=u;s<fcon;s++){ if(ges[s]==-14){ thm3=1; thm7=1; if(thm7==1&&thm8==1){ break; } } if(ges[s]==-13){ thm3=0; thm7=1;  if(thm7==1&&thm8==1){ break; } } if(ges[s]==-2||ges[s]==-9){ break; } if(ges[s]==-4||ges[s]==-5){ break; } }  if(thm7==1&&thm8==1){ break; } } 
if(ges[u]==-14){ thm3=1; thm7=1; if(thm7==1&&thm8==1){ break; } } if(ges[u]==-13){ thm3=0; thm7=1;  if(thm7==1&&thm8==1){ break; } } if(ges[u]==-2||ges[u]==-9){ break; } }
{ DeleteObject(brush);  brush=CreateSolidBrush(RGB(200,200,200)); SelectObject(hfc,brush);  
if(thm3==0){ Rectangle(hfc,csize1-penx+108,ga+has1+5,csize1-penx+114,ga+has1+11); }else if(thm3==1){  Rectangle(hfc,csize1-penx+13,ga+has1+5,csize1-penx+19,ga+has1+11); } else {  Rectangle(hfc,csize1-penx+157,ga+has1+5+20,csize1-penx+163,ga+has1+11+20); }
if(ges[sp[reho]+15]==-21){ Rectangle(hfc,csize1-penx+157,ga+has1+5,csize1-penx+163,ga+has1+11); }
if(ges[sp[reho]+14]==-20){ Rectangle(hfc,csize1-penx+13,ga+has1+5+20,csize1-penx+19,ga+has1+11+20); }
if(ges[sp[reho]+14]==-23){ Rectangle(hfc,csize1-penx+108,ga+has1+5+20,csize1-penx+114,ga+has1+11+20); }
} has1+=20; 
TextOut(hfc,csize1-penx+25,ga+has1,"Wireframe",9); TextOut(hfc,csize1-penx+120,ga+has1,"Dot",3); TextOut(hfc,csize1-penx+170,ga+has1,"Smooth",6); has1+=20;
TextOut(hfc,csize1-penx+11,ga+has1,"Transparency",12);  sprintf(how1,"%f",thm9); TextOut(hfc,csize1-penx+108,ga+has1+1,how1,strlen(how1)); 

DeleteObject(brush);  brush=CreateSolidBrush(RGB(40,40,40)); SelectObject(hfc,brush); }
if(ges[sp[reho]]==-4){ SetRect(&rc1,csize1-92,ga,csize1-70,ga+17); FillRect(hfc,&rc1,brush1); }
 DrawIcon(hfc,csize1-110,ga+1,hi3);  DrawIcon(hfc,csize1-90,ga+1,hi); 
SetRect(&rc,csize1-penx+11,ga,csize1-115,csize2-40); DrawText(hfc,how,-1,&rc,NULL); a++; reho++;
if(has==1){ has=0; ga+=383; }
}
	how[b]=hlop[a]; b++;
if(ga>csize2-50){ break; }
} has1=usea;
DeleteObject(hf); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);

//scrollbar
{
RoundRect(hfc,csize1-40,65,csize1-25,csize2-32,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(90,90,90));
thm3=(thm5-has); if(thm3<0){thm3=0;} thm3/=7; thm1=thm3+66; thm2=(ha-has)-(csize2-36-66); if(thm2<0){thm2=0;} thm3=thm2/7; thm2=(csize2-36-66)-thm3; if(thm2<20){ thm2=20; }
SelectObject(hfc,brush1); SelectObject(hfc,hp); thm3=thm1+thm2; if(thm3>csize2-33){ thm3=csize2-33; }
RoundRect(hfc,csize1-39,thm1,csize1-26,thm3,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
}
has1=usea;
}

if(chase==1){ ha=has1; rim=0;
	has=ha; thm5=0; thm4=0; reho1=0; 
hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hfc,hf); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
brush=CreateSolidBrush(RGB(40,40,40));
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(10,10,10));
SelectObject(hfc,brush); SelectObject(hfc,hp);
 hi1=LoadIcon(GetModuleHandle(NULL),"ICO2"); hi2=LoadIcon(GetModuleHandle(NULL),"ICO3");
for(int a=0,b=0;a<strlen(keybod);a++){
if(keybod[a]==';'){ if(ha>=60&&thm4==0){ thm5=ha; thm4=1; } sprintf(how1,"%d",reho1); TextOut(hfc,csize1-penx-50,ha,how1,strlen(how1));
how[b]=0; b=0; 	ha+=20; hp1[reho1]=ha; if(mep[rim-1]==0){ 
if(ha<csize2-50){
if(qp[reho1]==0){ RoundRect(hfc,csize1-penx+5,ha,csize1-43,ha+17,7,7); DrawIcon(hfc,csize1-65,ha+1,hi1); }else if(qp[reho1]==1){ RoundRect(hfc,csize1-penx+5,ha,csize1-43,ha+40,7,7); DrawIcon(hfc,csize1-65,ha+1,hi2); 
SetRect(&rc,csize1-penx+11,ha+25,csize1-75,csize2-40); DrawText(hfc,keyev[reho1],-1,&rc,NULL); if(strlen(keyev[reho1])<=0){ DrawText(hfc,". . .",-1,&rc,NULL); } }
SetRect(&rc,csize1-penx+11,ha,csize1-75,csize2-40); 
if(how[0]=='\\'&&how[1]=='k'){ DrawText(hfc,":",-1,&rc,NULL); }else if(how[0]=='\\'&&how[1]=='j'){ DrawText(hfc,";",-1,&rc,NULL); }else{
DrawText(hfc,how,-1,&rc,NULL); } 
} if(qp[reho1]==1){ ha+=30; }
}else{ ha-=20; }
a++; reho1++; 
}
if(keybod[a]==':'){ if(ha>=60&&thm4==0){ thm5=ha; thm4=1; }
how[b]=0; b=0;	ha+=30; mp[rim]=ha; rim++;
if(ha<csize2-50){ if(mep[rim-1]==1){ DrawIcon(hfc,csize1-65,ha+1,hi1); }else{ DrawIcon(hfc,csize1-65,ha+1,hi2); }
MoveToEx(hfc,csize1-penx+5,ha+17,NULL); LineTo(hfc,csize1-43,ha+17);
SetRect(&rc,csize1-penx+11,ha,csize1-75,csize2-40); DrawText(hfc,how,-1,&rc,NULL); }
 a++; ha+=10;
}
	how[b]=keybod[a]; b++;
}

//scrollbar
{
RoundRect(hfc,csize1-40,65,csize1-25,csize2-32,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(90,90,90));
thm3=(thm5-has); if(thm3<0){thm3=0;} thm3/=7; thm1=thm3+66; thm2=(ha-has)-(csize2-36-66); if(thm2<0){thm2=0;} thm3=thm2/7; thm2=(csize2-36-66)-thm3; if(thm2<20){ thm2=20; }
SelectObject(hfc,brush1); SelectObject(hfc,hp); thm3=thm1+thm2; if(thm3>csize2-33){ thm3=csize2-33; }
RoundRect(hfc,csize1-39,thm1,csize1-26,thm3,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
}

}
if(chase==2){
hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hfc,hf); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
brush=CreateSolidBrush(RGB(40,40,40));
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(10,10,10));
SelectObject(hfc,brush); SelectObject(hfc,hp);
hi=LoadIcon(GetModuleHandle(NULL),"ICO18"); hi1=LoadIcon(GetModuleHandle(NULL),"ICO2"); hi2=LoadIcon(GetModuleHandle(NULL),"ICO3"); hi3=LoadIcon(GetModuleHandle(NULL),"ICO5");
usea=0; pic=0;
for(int i=0,b=0,c=pivs;i<strlen(pivtc);i++){
	how[b]=pivtc[i]; b++;
if(pivtc[i+1]==':'){ how[b]=0; b=0; pivp[usea]=c; seek=0;
if(pivy[usea]!=0){  RoundRect(hfc,csize1-penx+5,c,csize1-43,c+17,7,7); DrawIcon(hfc,csize1-65,c+1,hi1); SetRect(&rc,csize1-penx+11,c,csize1-75,csize2-40); DrawText(hfc,how,-1,&rc,NULL); DrawIcon(hfc,csize1-85,c+1,hi3); c+=20; for(0;i<strlen(pivtc);i++){ if(pivtc[i]==';'){ break; }} }
else { jick=20; for(int u=i;u<strlen(pivtc);u++){ if(pivtc[u]==';'){break; } if(pivtc[u]==','||pivtc[u]=='.'||pivtc[u]=='-'){ jick+=20; }} RoundRect(hfc,csize1-penx+5,c,csize1-43,c+jick+23+87,7,7); DrawIcon(hfc,csize1-65,c+1,hi2); SetRect(&rc,csize1-penx+11,c,csize1-75,csize2-40); DrawText(hfc,how,-1,&rc,NULL); DrawIcon(hfc,csize1-85,c+1,hi3);
i+=2; c+=20; b=0; DeleteObject(brush); brush1=CreateSolidBrush(RGB(90,90,90)); SelectObject(hfc,brush1);
TextOut(hfc,csize1-penx+11,c,"Position",8); c+=20; sprintf(how1,"ID: %d",usea); TextOut(hfc,csize1-125,c,how1,strlen(how1));
TextOut(hfc,csize1-penx+11,c,"Z",1); Rectangle(hfc,csize1-penx+30,c-1,csize1-155,c+18); sprintf(how,"%f",pivotx[usea]); SetRect(&rc,csize1-penx+31,c,csize1-157,csize2-40); DrawText(hfc,how,-1,&rc,NULL); c+=20;
TextOut(hfc,csize1-penx+11,c,"X",1); Rectangle(hfc,csize1-penx+30,c-1,csize1-155,c+18); sprintf(how,"%f",pivoty[usea]); SetRect(&rc,csize1-penx+31,c,csize1-157,csize2-40); DrawText(hfc,how,-1,&rc,NULL); c+=20;
TextOut(hfc,csize1-penx+11,c,"Y",1); Rectangle(hfc,csize1-penx+30,c-1,csize1-155,c+18); sprintf(how,"%f",pivotz[usea]); SetRect(&rc,csize1-penx+31,c,csize1-157,csize2-40); DrawText(hfc,how,-1,&rc,NULL); c+=23;
seek=0;
for(0;i<strlen(pivtc);i++){
	how[b]=pivtc[i]; b++; 
if(pivtc[i+1]==','){ how[b]=0; b=0; Rectangle(hfc,csize1-penx+55,c-1,csize1-135,c+18); SetRect(&rc,csize1-penx+11,c,csize1-75,csize2-40); DrawText(hfc,"Group",-1,&rc,NULL); SetRect(&rc,csize1-penx+57,c,csize1-75,csize2-40); DrawText(hfc,how,-1,&rc,NULL); DrawIcon(hfc,csize1-145,c,hi); if(seek>0){ DrawIcon(hfc,csize1-125,c,hi3); } c+=20; i++; seek++; }
if(pivtc[i+1]=='.'){ how[b]=0; b=0; Rectangle(hfc,csize1-penx+55,c-1,csize1-135,c+18); SetRect(&rc,csize1-penx+11,c,csize1-75,csize2-40); DrawText(hfc,"Pivot",-1,&rc,NULL); SetRect(&rc,csize1-penx+57,c,csize1-75,csize2-40); DrawText(hfc,how,-1,&rc,NULL); DrawIcon(hfc,csize1-145,c,hi); if(seek>0){ DrawIcon(hfc,csize1-125,c,hi3); } c+=20; i++; seek++; }
if(pivtc[i+1]=='-'){ how[b]=0; b=0; Rectangle(hfc,csize1-penx+55,c-1,csize1-135,c+18); SetRect(&rc,csize1-penx+11,c,csize1-75,csize2-40); DrawText(hfc,"Cam",-1,&rc,NULL); SetRect(&rc,csize1-penx+57,c,csize1-75,csize2-40); DrawText(hfc,how,-1,&rc,NULL); DrawIcon(hfc,csize1-145,c,hi); if(seek>0){ DrawIcon(hfc,csize1-125,c,hi3); } c+=20; i++; seek++; }
if(pivtc[i+1]==';'){ i++; break; }
} c+=6; pid[usea]=c;
RoundRect(hfc,csize1-penx+11,c,csize1-51,c+18,7,7); SetRect(&rc,csize1-penx+11,c,csize1-51,csize2-40); DrawText(hfc,"Add",-1,&rc,DT_CENTER); c+=23;
 } 
 usea++;
}
DeleteObject(brush1); brush=CreateSolidBrush(RGB(40,40,40)); SelectObject(hfc,brush); 
}
pic=usea;
//scrollbar
{
RoundRect(hfc,csize1-40,65,csize1-25,csize2-32,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(90,90,90));
thm3=(thm5-has); if(thm3<0){thm3=0;} thm3/=7; thm1=thm3+66; thm2=(ha-has)-(csize2-36-66); if(thm2<0){thm2=0;} thm3=thm2/7; thm2=(csize2-36-66)-thm3; if(thm2<20){ thm2=20; }
SelectObject(hfc,brush1); SelectObject(hfc,hp); thm3=thm1+thm2; if(thm3>csize2-33){ thm3=csize2-33; }
RoundRect(hfc,csize1-39,thm1,csize1-26,thm3,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
}	
}

if(chase==3){ ga=phys1; phys2=0;
hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hfc,hf); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
brush=CreateSolidBrush(RGB(40,40,40)); 
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(10,10,10));
SelectObject(hfc,brush); SelectObject(hfc,hp); has=0; usea=phys1; 
 hi1=LoadIcon(GetModuleHandle(NULL),"ICO2"); hi2=LoadIcon(GetModuleHandle(NULL),"ICO3");
for(int a=0,b=0;a<hnd1;a++){
if(hlop[a]==':'){
how[b]=0; b=0;	ga+=20; phyp[phys2]=ga; 
if(phyc[phys2]==0){  RoundRect(hfc,csize1-penx+5,ga,csize1-43,ga+17,7,7); DrawIcon(hfc,csize1-65,ga+1,hi1); }else if(phyc[phys2]==1){ 
 RoundRect(hfc,csize1-penx+5,ga,csize1-43,ga+400,7,7); has=1; DrawIcon(hfc,csize1-65,ga+1,hi2);
 trc=30; DeleteObject(brush); brush1=CreateSolidBrush(RGB(90,90,90)); SelectObject(hfc,brush1);
SetRect(&rc,csize1-penx+11,ga+trc,csize1-115,csize2-40); DrawText(hfc,"Mass",-1,&rc,NULL);  if(csize1-penx+55<csize1-135){ Rectangle(hfc,csize1-penx+55,ga+trc-2,csize1-135,ga+trc+18);
SetRect(&rc,csize1-penx+58,ga+trc+2,csize1-137,csize2-40); sprintf(how1,"%f",mass[phys2]); DrawText(hfc,how1,-1,&rc,NULL); }
trc+=20; 
DeleteObject(brush1);  DeleteObject(brush); DeleteObject(brush1); brush=CreateSolidBrush(RGB(40,40,40)); SelectObject(hfc,brush);
Rectangle(hfc,csize1-penx+11,ga+trc+2,csize1-penx+23,ga+trc+14); SetRect(&rc,csize1-penx+26,ga+trc,csize1-115,csize2-40); DrawText(hfc,"Gravity",-1,&rc,NULL);
if(gravity[phys2]==1){ DeleteObject(brush); bush=CreateSolidBrush(RGB(255,255,255)); SelectObject(hfc,bush); Rectangle(hfc,csize1-penx+13,ga+trc+4,csize1-penx+21,ga+trc+12); DeleteObject(bush);  }
trc+=20;
DeleteObject(brush1);  DeleteObject(brush);  DeleteObject(brush); brush=CreateSolidBrush(RGB(40,40,40)); SelectObject(hfc,brush);
Rectangle(hfc,csize1-penx+11,ga+trc+2,csize1-penx+23,ga+trc+14); SetRect(&rc,csize1-penx+26,ga+trc,csize1-115,csize2-40); DrawText(hfc,"Collision",-1,&rc,NULL);
if(collide[phys2]==1){ DeleteObject(brush); DeleteObject(brush1); DeleteObject(bush); bush=CreateSolidBrush(RGB(255,255,255)); SelectObject(hfc,bush); Rectangle(hfc,csize1-penx+13,ga+trc+4,csize1-penx+21,ga+trc+12); DeleteObject(bush); }
trc+=20;
DeleteObject(brush1);  DeleteObject(bush);  DeleteObject(brush);  brush1=CreateSolidBrush(RGB(90,90,90)); SelectObject(hfc,brush1); 
if(collide[phys2]==1){
 SetRect(&rc,csize1-penx+11,ga+trc,csize1-115,csize2-40); DrawText(hfc,"Report",-1,&rc,NULL); trc+=20;
 if(csize1-penx+11<csize1-135){
 Rectangle(hfc,csize1-penx+11,ga+trc,csize1-135,ga+trc+18); SetRect(&rc,csize1-penx+13,ga+trc+2,csize1-137,csize2-40); DrawText(hfc,colipot[phys2],-1,&rc,NULL);
} trc+=20;
SetRect(&rc,csize1-penx+11,ga+trc,csize1-115,csize2-40); DrawText(hfc,"Response",-1,&rc,NULL); trc+=20;
Rectangle(hfc,csize1-penx+11,ga+trc+2,csize1-penx+23,ga+trc+14); SetRect(&rc,csize1-penx+26,ga+trc,csize1-115,csize2-40); DrawText(hfc,"Void",-1,&rc,NULL); 
if(coliso[phys2]==0){ DeleteObject(brush); DeleteObject(brush1); DeleteObject(bush); bush=CreateSolidBrush(RGB(255,255,255)); SelectObject(hfc,bush); Rectangle(hfc,csize1-penx+13,ga+trc+4,csize1-penx+21,ga+trc+12); DeleteObject(bush);  DeleteObject(brush1);  DeleteObject(bush);  DeleteObject(brush);  brush1=CreateSolidBrush(RGB(90,90,90)); SelectObject(hfc,brush1); }
trc+=20;
Rectangle(hfc,csize1-penx+11,ga+trc+2,csize1-penx+23,ga+trc+14); SetRect(&rc,csize1-penx+26,ga+trc,csize1-115,csize2-40); DrawText(hfc,"Prevent",-1,&rc,NULL); 
if(coliso[phys2]==1){ DeleteObject(brush); DeleteObject(brush1); DeleteObject(bush); bush=CreateSolidBrush(RGB(255,255,255)); SelectObject(hfc,bush); Rectangle(hfc,csize1-penx+13,ga+trc+4,csize1-penx+21,ga+trc+12); DeleteObject(bush);  DeleteObject(brush1);  DeleteObject(bush);  DeleteObject(brush);  brush1=CreateSolidBrush(RGB(90,90,90)); SelectObject(hfc,brush1);  }
trc+=20;
Rectangle(hfc,csize1-penx+11,ga+trc+2,csize1-penx+23,ga+trc+14); SetRect(&rc,csize1-penx+26,ga+trc,csize1-115,csize2-40); DrawText(hfc,"Prevent COG",-1,&rc,NULL); 
if(coliso[phys2]==2){ DeleteObject(brush); DeleteObject(brush1); DeleteObject(bush); bush=CreateSolidBrush(RGB(255,255,255)); SelectObject(hfc,bush); Rectangle(hfc,csize1-penx+13,ga+trc+4,csize1-penx+21,ga+trc+12); DeleteObject(bush);  DeleteObject(brush1);  DeleteObject(bush);  DeleteObject(brush);  brush1=CreateSolidBrush(RGB(90,90,90)); SelectObject(hfc,brush1);  }
trc+=20;


}

DeleteObject(brush1);  DeleteObject(brush); DeleteObject(bush);  brush=CreateSolidBrush(RGB(40,40,40)); SelectObject(hfc,brush);
 }
SetRect(&rc,csize1-penx+11,ga,csize1-115,csize2-40); DrawText(hfc,how,-1,&rc,NULL); a++; phys2++;
if(has==1){ has=0; ga+=383; }
}
	how[b]=hlop[a]; b++;
if(ga>csize2-50){ break; }
}

DeleteObject(hf); DeleteObject(brush1); DeleteObject(brush); 
brush=CreateSolidBrush(RGB(40,40,40)); 
SelectObject(hfc,brush);
//scrollbar
{
RoundRect(hfc,csize1-40,65,csize1-25,csize2-32,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(90,90,90));
thm3=(thm5-has); if(thm3<0){thm3=0;} thm3/=7; thm1=thm3+66; thm2=(ha-has)-(csize2-36-66); if(thm2<0){thm2=0;} thm3=thm2/7; thm2=(csize2-36-66)-thm3; if(thm2<20){ thm2=20; }
SelectObject(hfc,brush1); SelectObject(hfc,hp); thm3=thm1+thm2; if(thm3>csize2-33){ thm3=csize2-33; }
RoundRect(hfc,csize1-39,thm1,csize1-26,thm3,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
}
has1=usea;
}


}

void concat(){ sprintf(TEXTCONCAT,"");
for(int a=0,vib=0;a<strlen(projs);a++){
	if(projs[a]==';'){ a++;
	for(0;a<strlen(projs); a++){ 
	how[vib]=projs[a]; vib++;
	if(projs[a]=='\n'||projs[a]=='\r'){ how[vib-1]=0; vib=0;
	thm3=0;
for(int u=0;u<strlen(how);u++){ if(how[u]>=65&&how[u]<=90){ how[u]+=32; } }
for(int u=0;u<strlen(how);u++){ if(how[u]=='s'&&how[u+1]=='c'&&how[u+2]=='r'&&how[u+3]=='i'&&how[u+4]=='p'&&how[u+5]=='t'){ thm3=1; break; }  }
if(thm3==1){	
	hnd=CreateFile(how,GENERIC_READ,FILE_SHARE_READ,0,OPEN_EXISTING,0,NULL);
	size1=GetFileSize(hnd,NULL);
	ReadFile(hnd,moblat,size1,0,0);
	CloseHandle(hnd);
	moblat[size1]=0;
	sprintf(TEXTCONCAT,"%s%s",TEXTCONCAT,moblat);
	TEXTCONCAT[strlen(TEXTCONCAT)]=0;
}
	break;} }
	}
} sprintf(funcs,"");
for(int a=0;a<strlen(TEXTCONCAT);a++){
	if(TEXTCONCAT[a]=='v'&&TEXTCONCAT[a+1]=='o'&&TEXTCONCAT[a+2]=='i'&&TEXTCONCAT[a+3]=='d'){ a+=4; for(0;a<strlen(TEXTCONCAT);a++){ if(TEXTCONCAT[a]!=' '&&TEXTCONCAT[a]!='	'){ break; } }
	for(int b=0;a<strlen(TEXTCONCAT);a++){
		how[b]=TEXTCONCAT[a]; b++;
		if(TEXTCONCAT[a]==')'){ how[b]=0; b=0;
			sprintf(funcs,"%s%s;",funcs,how);
		break; }
	}
	}
} 
}

void extend(){
if(mpo1>csize1-90&&mpo1<csize1-70&&mpo2>70&&mpo2<ga+30&&chase==0){
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+20){
if(ges[sp[r]]==-4){ ges[sp[r]]=-5; }else{ ges[sp[r]]=-4; } CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);		break; }
	}
}

if(mpo1>csize1-111&&mpo1<csize1-92&&mpo2>70&&mpo2<ga+30&&chase==0){
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+20){
if(r>=dc-1){ for(int a=sp[r];a<fcon;a++){ fcon=sp[r]; hnd1=hnd2[r]; }}
CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);		
break; }
	}
}

if(mpo1>csize1-penx+7&&mpo1<csize1-43&&mpo2>60&&mpo2<ha+30&&chase==1){
	for(int r=0;r<reho1;r++){ 
if(mpo2>=hp1[r]&&mpo2<=hp1[r]+20){ if(qp[r]==0){ qp[r]=1; }else{ qp[r]=0; } ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	break; }
	}
}

if(mpo1>csize1-penx+7&&mpo1<csize1-43&&mpo2>60&&mpo2<ha+25&&chase==1){
	for(int r=0;r<reho1;r++){ 
if(mpo2>=hp1[r]+0&&mpo2<=hp1[r]+40&&mpo2>hp1[r]+25&&qp[r]==1){ clik=r; concat(); pop(); ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	break; }
	}
}

if(mpo1>csize1-penx+7&&mpo1<csize1-43&&mpo2>60&&mpo2<ha+30&&chase==1){
	for(int r=0;r<rim;r++){ 
if(mpo2>=mp[r]&&mpo2<=mp[r]+20){ if(mep[r]==0){ mep[r]=1; }else{ mep[r]=0; } ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	break; }
	}
}
if(mpo1>csize1-50&&mpo1<csize1-25&&mpo2<40&&mpo2>10){ animate();	}
if(mpo1>csize1-22&&mpo1<csize1&&mpo2<csize2/2&&mpo2>csize2/2-57&&chase!=0){ chase=0; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	}
if(mpo1>csize1-22&&mpo1<csize1&&mpo2>csize2/2+5&&mpo2<csize2/2+65&&chase!=1){ chase=1; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	}
if(mpo1>csize1-22&&mpo1<csize1&&mpo2>csize2/2-108&&mpo2<csize2/2-60&&chase!=2){ chase=2; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	}
if(mpo1>csize1-22&&mpo1<csize1&&mpo2>csize2/2+68&&mpo2<csize2/2+130&&chase!=3){ chase=3; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	}

if(mpo1>csize1-39&&mpo1<csize1-26&&mpo2>thm2+thm1&&mpo2<csize2-33&&chase==1&&(thm1+thm2)<csize2-34){ has1-=100; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	}
if(mpo1>csize1-39&&mpo1<csize1-26&&mpo2>66&&mpo2<thm1-1&&chase==1&&(thm1)>67){ has1+=100; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);	}
if(mpo1>csize1-39&&mpo1<csize1-26&&mpo2>thm1&&mpo2<thm1+thm2&&chase==1){ thm6=1; thm7=mpo2-thm1;	}
if(mpo1>75&&mpo1<pistx-30&&mpo2>75&&mpo2<95&&selen==2&&sili==1){
	ofn.hwndOwner=hwnd;
	ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
	ofn.lpstrDefExt="mobidef";
	ofn.lpstrFile=open;
	ofn.lStructSize=sizeof(ofn);
	ofn.nMaxFile=MAX_PATH;
	ofn.lpstrFilter="Mobility Script File (*.mobiscript)\0*.mobiscript\0 Mobility Define Script (*.mobidef)\0*.mobidef\0\0";
if(	GetOpenFileName(&ofn)){ int j,k,ch=0,l1=strlen(projs),l2=strlen(open);
for(int a=0;a<(l1-l2);a++){
	j=0; k=a;
	while((projs[k]==open[j])&&(j<l2)){
		k++; j++;
	}if(j==l2){ ch=1; }
}
if(ch==0){
for(int a=strlen(open);a>0;a--){
	if(open[a-1]=='\\'){ sprintf(how,"");
for(int b=0;a<strlen(open);b++,a++){
	sprintf(how,"%s%c",how,open[a]);
}
how[strlen(how)]=0;
break;	}
}
sprintf(projs,"%s%s;%s\n",projs,how,open);
}
}
}

if(mpo1>43&&mpo1<pistx-37&&mpo2>135&&mpo2<impc&&drmz==1&&selen==1){
for(int a=drm1,b=0;a<strlen(asset);a++){
	how[b]=asset[a]; b++;
if(asset[a]=='\n'){ how[b-1]=0;

if(down>0&&mpo2>135&&mpo2<166){
int b=0,c=0;
for(c=strlen(path);c>0;c--){
	if(path[c]=='\\'){ break; }
}
for(0;b<c;b++){
	how1[b]=path[b];
}
	how1[b]=0; sprintf(path,"%s",how1); down--; FOCUS(hwnd);
	
}else{
SHGetFileInfo(how,NULL,&shft,sizeof(shft),SHGFI_TYPENAME);
sprintf(how1,"%s",shft.szTypeName); folder=FALSE;
if(how1[0]=='F'&&how1[1]=='i'&&how1[2]=='l'&&how1[3]=='e'&&how1[5]=='f'&&how1[6]=='o'&&how1[7]=='l'&&how1[8]=='d'&&how1[9]=='e'&&how1[10]=='r'){
	folder=TRUE; down++;
	sprintf(path,"%s",how); FOCUS(hwnd);
} 
if(folder==FALSE&&how1[0]=='O'&&how1[1]=='B'&&how1[2]=='J'){ CLEAN=TRUE; 
sprintf(scenerio[curscn],"%s%s\n",scenerio[curscn],how); 
for(int i=strlen(how);i>0;i--){
		if(how[i]=='\\'){
	for(int y=0;y<i;y++){
		mtl[y]=how[y];
	} mtl[i]=0;
		break; }
	} sprintf(BUMP,"%s",mtl);
sprintf(matlab,""); sprintf(moblat,""); 
//import
{  vinc=vcon; jick=texcon; tbc=texu; getmat=0; thm9=fcon; thm8=dc; pc1=normco;
hnd=CreateFile(how,GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
if(hnd==INVALID_HANDLE_VALUE){ MessageBox(hwnd,"Could not load file","Error",MB_OK|MB_ICONERROR); break; }
size1=GetFileSize(hnd,NULL);
ReadFile (hnd, moblat, size1, NULL, NULL) ;
CloseHandle(hnd); moblat[size1]=0;
vik=size1;
for(int a=0;a<vik;a++){
if(moblat[a]=='#'){
for(0;a<vik;a++){
	if(moblat[a]=='\n'){ break; }
}
}
if(vin==2){ sprintf(vch,"");
	for(int q=0,p=0;a<vik;a++){
sprintf(vch,"%s%c",vch,moblat[a]);
if(moblat[a]=='\n'||moblat[a]=='\r'){  p=0; 
for(int i=0;i<strlen(vch);i++,p++){
	how[p]=vch[i];
if(vch[i]==' '){ how[p+1]=0; p=-1; ges[fcon]=atoi(how)+vinc;  fcon++; }
}
how[p+1]=0; p=-1; ges[fcon]=atoi(how)+vinc; fcon++;
if(getmat!=0){ p=0; vib=0; ges[fcon]=-8; fcon++; 
for(int i=0;i<strlen(vch);i++){
if(vib==1){ how[p]=vch[i]; p++;
if(vch[i]==' '){ how[p]=0; ges[fcon]=atoi(how)+jick; fcon++; p=0; vib=0; }
if(vch[i]=='\n'||vch[i]=='\r'){ how[p]=0; ges[fcon]=atoi(how)+jick;  fcon++; p=-1; }
}
if(vch[i]=='/'&&vch[i+1]=='/'){ break; }
if(vch[i]=='/'&&vch[i+1]!='/'){ vib=1; }
if(vch[i]=='\n'||vch[i]=='\r'||vch[i]==' '||vch[i]=='	'){ vib=0; }
} }
//normals
{
	p=0; vib=0; ges[fcon]=-25; fcon++; 
for(int i=0;i<strlen(vch);i++){
if(vib==2){ how[p]=vch[i]; p++;
if(vch[i]==' '){ how[p]=0; ges[fcon]=atoi(how)+pc1; fcon++; p=0; vib=0; }
if(vch[i]=='\n'||vch[i]=='\r'){ how[p]=0; ges[fcon]=atoi(how)+pc1;  fcon++; p=-1; }
}
if(vch[i]=='/'){ if(vib==0){ vib=1; }else{ vib=2; } }
if(vch[i]=='\n'||vch[i]=='\r'||vch[i]==' '||vch[i]=='	'){ vib=0; }
}
}
 if(getmat==0){ ges[fcon]=-2; }else{ ges[fcon]=-9; } fcon++;
vin=0;  break; }
	
	} 
}
	if(vin==4){ vib=0; 
for(int q=0;a<vik;a++,q++){
vch[q]=moblat[a];
if(moblat[a+1]=='\n'||moblat[a+1]=='\r'){ normz[normco]=atof(vch); normco++; vin=0; break; }
if(moblat[a+1]==' '){
	vch[q+1]=0; if(vib==0){ normy[normco]=atof(vch);  vib++; }else if(vib==1){ normx[normco]=atof(vch); vib++; } else{ normz[normco]=atof(vch); normco++; vin=0;  break; }
	q=-1;
a++;
}
}
 }
	if(vin==3){ vib=0; 
for(int q=0;a<vik;a++,q++){
vch[q]=moblat[a];
if(moblat[a+1]=='\n'||moblat[a+1]=='\r'){ txes[texcon]=atof(vch); texcon++; vin=0; break; }
if(moblat[a+1]==' '){
	vch[q+1]=0; if(vib==0){ tyes[texcon]=atof(vch);  vib++; }else if(vib==1){ txes[texcon]=atof(vch); texcon++; vib++; vin=0; break; }
	q=-1;
a++;
}
}
 }
	if(vin==1){ vib=0; 
for(int q=0;a<vik;a++,q++){
vch[q]=moblat[a];
if(moblat[a+1]=='\n'||moblat[a+1]=='\r'){ zes[vcon]=atof(vch); vcon++; grp[gnd]=vcon;  gnd++; vin=0;  break; }
if(moblat[a+1]==' '){
	vch[q+1]=0; if(vib==0){ yes[vcon]=atof(vch);  vib++; }else if(vib==1){ xes[vcon]=atof(vch); vib++; }else{ zes[vcon]=atof(vch);  vin=0;  vcon++; grp[gnd]=vcon; gnd++; break; }
	q=-1;
a++;
}
}
 }
 if(moblat[a]=='v'&&moblat[a+1]=='n'&&moblat[a+2]==' '){ a+=2; vin=4; }
 if(moblat[a]=='v'&&moblat[a+1]=='t'&&moblat[a+2]==' '){ a+=2; vin=3; }
	if(moblat[a]=='v'&&moblat[a+1]==' '){ a++; vin=1; }
	if(moblat[a]=='f'&&moblat[a+1]==' '){ a++; vin=2; ges[fcon+1]=-1; ges[fcon]=-17; fcon+=2; }
	if(moblat[a]=='l'&&moblat[a+1]==' '){ a++; vin=2; ges[fcon+1]=-1; ges[fcon]=-18; fcon+=2; }
	
if(moblat[a]=='o'&&moblat[a+1]==' '){ a+=2; ges[fcon]=-4; sp[dc]=fcon; hnd2[dc]=hnd1; dc++;  ges[fcon+1]=-6; ges[fcon+2]=-11; ges[fcon+3]=100; ges[fcon+4]=100; ges[fcon+5]=100; 
ges[fcon+6]=-12; ges[fcon+7]=0; ges[fcon+8]=0; ges[fcon+9]=0; ges[fcon+10]=-19; ges[fcon+11]=0; ges[fcon+12]=0; ges[fcon+13]=0; 
ges[fcon+14]=-19; ges[fcon+15]=-21; fcon+=2; fcon+=14;   ges[fcon]=-24; ges[fcon+1]=0; ges[fcon+2]=0; ges[fcon+3]=0; ges[fcon+4]=-26; fcon+=5; grp[gnd]=';'; gnd++;
	for(0;a<vik;a++){
if(moblat[a]=='\n'||moblat[a]=='\r'){ grp[gnd]=':'; hlop[hnd1]=':'; hnd1++; hlop[hnd1]=0;  gnd++;  break; }
	grp[gnd]=moblat[a]; gnd++;
	hlop[hnd1]=moblat[a]; hnd1++;
	}
 }

if(moblat[a]=='g'&&moblat[a+1]==' '){ a+=2; ges[fcon]=-4; sp[dc]=fcon; hnd2[dc]=hnd1; dc++; ges[fcon+1]=-6; ges[fcon+2]=-11; ges[fcon+3]=100; ges[fcon+4]=100; ges[fcon+5]=100; 
ges[fcon+6]=-12; ges[fcon+7]=0; ges[fcon+8]=0; ges[fcon+9]=0; ges[fcon+10]=-19; ges[fcon+11]=0; ges[fcon+12]=0; ges[fcon+13]=0; 
ges[fcon+14]=-19; ges[fcon+15]=-21; fcon+=2;  fcon+=14;  ges[fcon]=-24; ges[fcon+1]=0; ges[fcon+2]=0; ges[fcon+3]=0; ges[fcon+4]=-26; fcon+=5; grp[gnd]=';'; gnd++;
	for(0;a<vik;a++){
if(moblat[a]=='\n'||moblat[a]=='\r'){ grp[gnd]=':'; hlop[hnd1]=':'; hnd1++; hlop[hnd1]=0;  gnd++;  break; }
	grp[gnd]=moblat[a]; gnd++;
	hlop[hnd1]=moblat[a]; hnd1++;
	} 
 }
if(moblat[a]=='s'&&moblat[a+1]==' '){ a+=2;
for(0;a<vik;a++){ if(moblat[a]=='o'&&moblat[a+1]=='f'&&moblat[a+2]=='f'){ ges[fcon]=-13; fcon++; a+=2; break;  }
else{ sprintf(how,"%c",moblat[a]); if(atoi(how)>0){ ges[fcon]=-26; fcon++; a++; break; } }
if(moblat[a]=='\n'||moblat[a]=='\r'){ break; }
 }
}

if(moblat[a]=='u'&&moblat[a+1]=='s'&&moblat[a+2]=='e'&&moblat[a+3]=='m'&&moblat[a+4]=='t'&&moblat[a+5]=='l'&&moblat[a+6]==' '){ a+=7; cr=255; cg=255; cb=255; trc=0; getmat=0;
	for(int e=0;a<vik;a++,e++){
	if(moblat[a]=='\n'||moblat[a]=='\r'){ how[e]=0;  break;}
	how[e]=moblat[a];
	} 
ea=0; ret=0; ba=0;
	for(int w=0;w<strlen(matlab);w++){
if(matlab[w]=='n'&&matlab[w+1]=='e'&&matlab[w+2]=='w'&&matlab[w+3]=='m'&&matlab[w+4]=='t'&&matlab[w+5]=='l'&&matlab[w+6]==' '){ w+=6; ea=1;  }
		if(matlab[w]==how[ret]){ if(ea==1){ ret++; } }else{ ret=0; }
	if(ret>=strlen(how)){ ma=0;
for(int q=0;w<strlen(matlab);w++){
	if(ba==1){
	if(matlab[w]=='\n'||matlab[w]=='\r'){   cb=atof(how)*255; ma++; q=0; ba=0; break; }
		how[q]=matlab[w]; q++; 
	if(matlab[w]==' '){ how[q-1]=0;    if(ma==0){ cr=atof(how)*255; ma++; q=0; }else if(ma==1){ cg=atof(how)*255; ma++; q=0; }else{ cb=atof(how)*255; ma++; q=0; ba=0; } }
	}
	if(matlab[w]=='K'&&matlab[w+1]=='d'&&matlab[w+2]==' '){ vib=w;  w+=2; q=0; ba=1; }
		if(matlab[w]=='d'&&matlab[w+1]==' '){ if(matlab[w-1]==' '||matlab[w-1]=='\n'||matlab[w-1]=='\r'||matlab[w-1]=='	'){
	 w+=1; for(0;w<strlen(matlab);w++){ if(matlab[w]!=' '&&matlab[w]!='	'){break;}}  
	for(int z=0;w<strlen(matlab);w++){ nnn[z]=matlab[w]; z++; if(matlab[w]==' '||matlab[w]=='\n'||matlab[w]=='\r'||matlab[w]=='	'){ nnn[z]=0; break; } }
ges[fcon]=-16; ges[fcon+1]=atof(nnn)*255.0; trc=1; fcon+=2; break; }
}
}
for(0;w<strlen(matlab);w++){
	if(matlab[w]=='d'&&matlab[w+1]==' '){ if(matlab[w-1]==' '||matlab[w-1]=='\n'||matlab[w-1]=='\r'||matlab[w-1]=='	'){
	 w+=1; for(0;w<strlen(matlab);w++){ if(matlab[w]!=' '&&matlab[w]!='	'){break;}}  
	for(int z=0;w<strlen(matlab);w++){ nnn[z]=matlab[w]; z++; if(matlab[w]==' '||matlab[w]=='\n'||matlab[w]=='\r'||matlab[w]=='	'){ nnn[z]=0; break; } }
ges[fcon]=-16; ges[fcon+1]=atof(nnn)*255.0; trc=1; fcon+=2; break; }
}
}
		break; }
		
	}
if(trc==0){ ges[fcon]=-16; ges[fcon+1]=255; fcon+=2; }
ges[fcon]=-3; fcon++; ges[fcon]=cr; fcon++; ges[fcon]=cg; fcon++; ges[fcon]=cb; fcon++; has=1; 
for(int w=0;w<vib;w++){	if(matlab[w]=='n'&&matlab[w+1]=='e'&&matlab[w+2]=='w'&&matlab[w+3]=='m'&&matlab[w+4]=='t'&&matlab[w+5]=='l'&&matlab[w+6]==' '){ dame=0;
for(int x=w+5;x<vib;x++){ if(matlab[x]=='m'&&matlab[x+1]=='a'&&matlab[x+2]=='p'&&matlab[x+3]=='_'&&matlab[x+4]=='K'&&matlab[x+5]=='d'&&matlab[x+6]==' '){ dame=1; break; }
if(matlab[x]=='n'&&matlab[x+1]=='e'&&matlab[x+2]=='w'&&matlab[x+3]=='m'&&matlab[x+4]=='t'&&matlab[x+5]=='l'&&matlab[x+6]==' '){ break; } }
if(dame==1){ has++; } }	}
for(int w=vib;w<strlen(matlab);w++){
if(matlab[w]=='m'&&matlab[w+1]=='a'&&matlab[w+2]=='p'&&matlab[w+3]=='_'&&matlab[w+4]=='K'&&matlab[w+5]=='d'&&matlab[w+6]==' '){ ges[fcon]=-10; fcon++; ges[fcon]=has+tbc;  fcon++; getmat=1; break; }
if(matlab[w+1]=='n'&&matlab[w+2]=='e'&&matlab[w+3]=='w'&&matlab[w+4]=='m'&&matlab[w+5]=='t'&&matlab[w+6]=='l'&&matlab[w+7]==' '){ break; }	
}
}

	if(moblat[a]=='m'&&moblat[a+1]=='t'&&moblat[a+2]=='l'&&moblat[a+3]=='l'&&moblat[a+4]=='i'&&moblat[a+5]=='b'&&moblat[a+6]==' '){ a+=7;
	how[0]='\\';
	for(int e=1;a<vik;a++,e++){
	if(moblat[a]=='\n'||moblat[a]=='\r'){ how[e]=0;  break;}
	how[e]=moblat[a];
	}  
sprintf(mtl,"%s%s",mtl,how); mtl[strlen(mtl)]=0;
hnd=CreateFile(mtl,GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
if(hnd==INVALID_HANDLE_VALUE){ MessageBox(hwnd,"Could not load material","Error",MB_OK|MB_ICONERROR);  }
size1=GetFileSize(hnd,NULL);
ReadFile (hnd, matlab, size1, NULL, NULL) ;
CloseHandle(hnd); matlab[size1]=0;
for(int u=0;u<strlen(matlab);u++){
if(matlab[u]=='m'&&matlab[u+1]=='a'&&matlab[u+2]=='p'&&matlab[u+3]=='_'&&matlab[u+4]=='K'&&matlab[u+5]=='d'&&matlab[u+6]==' '){ u+=7; 
	for(int q=0;u<strlen(matlab);u++){
	how[q]=matlab[u]; q++; 
if(matlab[u+1]=='\n'||matlab[u+1]=='\r'){ how[q]=0; sprintf(how1,"%s",how); sprintf(tecture,"%s",how1);  vib=0; for(int b=0;b<q;b++){ if(how1[b]=='c'&&how1[b+1]==':'&&how1[b+2]=='\\'){ vib=1; break; }  if(how1[b]=='C'&&how1[b+1]==':'&&how1[b+2]=='\\'){ vib=1; break; } } 
if(vib==0){ sprintf(tecture,"%s\\%s",BUMP,how1);  }

if(texu<200){
sub=(HBITMAP)LoadImage(GetModuleHandle(NULL),tecture,IMAGE_BITMAP,0,0,LR_LOADFROMFILE); 
if(sub==NULL){  MessageBox(hwnd,"Could not load texture image","Error",MB_OK|MB_ICONERROR); }else{
GetObject(sub,sizeof(bmp),&bmp);
if(bmp.bmWidth>1024||bmp.bmHeight>1024){
hdc=GetDC(hwnd);
hfc=CreateCompatibleDC(hdc);
hb1=CreateCompatibleBitmap(hdc,1024,1024);
SelectObject(hfc,hb1);

hgc=CreateCompatibleDC(hdc);
SelectObject(hgc,sub);
StretchBlt(hfc,0,0,1024,1024,hgc,0,0,bmp.bmWidth,bmp.bmHeight,SRCCOPY);

xhit[texu]=1024; yhit[texu]=1024;
GetBitmapBits(hb1,sizeof(bitex[texu]),&bitex[texu]); 

DeleteDC(hfc); DeleteObject(hb1); DeleteDC(hgc);
ReleaseDC(hwnd,hdc);
}
else{
xhit[texu]=bmp.bmWidth; yhit[texu]=bmp.bmHeight;
GetBitmapBits(sub,sizeof(bitex[texu]),&bitex[texu]); 
}
texu++; }
}
else{ hbix[texu-200]=(HBITMAP)LoadImage(GetModuleHandle(NULL),tecture,IMAGE_BITMAP,0,0,LR_LOADFROMFILE); 
if(hbix[texu-200]==NULL){  MessageBox(hwnd,"Could not load texture image","Error",MB_OK|MB_ICONERROR); }else{
GetObject(hbix[texu-200],sizeof(bmp),&bmp);
 xhit[texu]=bmp.bmWidth; yhit[texu]=bmp.bmHeight; 
texu++;
}
}
DeleteObject(sub);
	break;
}
	}
}
}
	 }
} 
}

//END IMPORT 

for(int z=thm9+2,y,x,w,v=thm8;z<fcon;z++){
	thm3=0; 
	for(y=0;z<fcon;z++){
	if(ges[z]<0){ thm3=0; }
	if(ges[z]==-1){ thm3=1; z++; }
	if(ges[z]==-4||ges[z]==-5){ break; }
	if(thm3==1){ thm5=1;
	for(x=0;x<y;x++){ if(ges[z]==pes[y] ){thm5=0; break; } }
	if(thm5==1){ pes[y]=ges[z]; y++; }
	}
	}
	thm1=0; thm2=0; thm7=0;
	for(w=0;w<y;w++){ thm1+=xes[pes[w]-1]; thm2+=yes[pes[w]-1]; thm7+=zes[pes[w]-1];  }  thm1/=y; thm2/=y; thm7/=y;  ges[sp[v]+17]=thm1*1000; ges[sp[v]+18]=thm2*1000; ges[sp[v]+19]=thm7*1000;
v++;
}

grp[gnd]=';'; gnd++; 
 ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
 }
}
	break; }
}
	}
	
}
