LRESULT CALLBACK PAPA2(HWND POP, UINT MAssage, WPARAM wqParam, LPARAM lqParam) {
	switch(MAssage) {
	case WM_CREATE:{
	
		break;
	}
case WM_PAINT:{
hdc=BeginPaint(POP,&ps);
hfc=CreateCompatibleDC(hdc);
hb1=CreateCompatibleBitmap(hdc,240,360); popst2=0; popst3=0; thm9=0;
SelectObject(hfc,hb1); brush=CreateSolidBrush(RGB(48,48,48)); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
SetRect(&rc,0,0,240,360); FillRect(hfc,&rc,brush); DeleteObject(brush);
 hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); SelectObject(hfc,hf);  
if(strlen(funcs)<=0){ SetRect(&rc,0,173,240,360); DrawText(hfc,"No Group Added",-1,&rc,DT_CENTER); }else{ 
	for(int a=0,b=0,c=popst;a<strlen(funcs);a++){ popst1=c;
		how[b]=funcs[a]; b++;
	if(funcs[a+1]==':'){ thm9++; a++; popst2++; if(c<50){ popst3=c; } how[b]=0; b=0; if(mpo2>c&&mpo2<c+17){  clik=thm9; sprintf(clik1,"%s",how); SetTextColor(hfc,RGB(255,100,100)); } else{ SetTextColor(hfc,RGB(255,255,255)); } SetRect(&rc,10,c,210,360); DrawText(hfc,how,-1,&rc,DT_SINGLELINE); c+=17; }
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
if(pmp1>=0){ sprintf(display,"%s%s:",display,clik1); 
fconx=0;  bni=0; for(int a=sp[clik-1],d=0,b=0;a<fcon;a++){ pes[fconx]=ges[a]; if(b==1&&ges[a]>=0){ gept[bni]=ges[a]-1; bni++; } if(ges[a]<0){ b=0; } if(ges[a]==-1){ b=1; } if(d==3){ li3=ges[a]/100.0;  d=0; } if(d==2){ li2=ges[a]/100.0; d=3; } if(d==1){ li1=ges[a]/100.0; d=2; } if(ges[a]==-11){ d=1; } fconx++; if(ges[a+1]==-4||ges[a+1]==-5){ break; } }
 
 int j,k,l;
 for(j=0;j<bni;j++){
	for(k=j+1;k<bni;k++){
	if(gept[j]>gept[k]){
l=gept[j]; gept[j]=gept[k]; gept[k]=l;
		}	}	}
 DestroyWindow(POP); ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);  }
if(mpo1>10&&mpo1<40&&mpo2>10&&mpo2<40){  DestroyWindow(POP);  }
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

void grop(){
	HINSTANCE hInstancex;
	MSG msgx;
	WNDCLASSEX wcx;
	memset(&wcx,0,sizeof(wcx));
	wcx.cbSize		 = sizeof(WNDCLASSEX);
	wcx.lpfnWndProc	 = PAPA2;
	wcx.hInstance	 = hInstancex;
	wcx.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wcx.lpszClassName = "WindowClassqk";
	wcx.hIcon		 = LoadIcon(GetModuleHandle(NULL), "ICO");
	wcx.hIconSm		 = LoadIcon(GetModuleHandle(NULL), "ICO");
	wcx.lpszMenuName  = NULL;
RegisterClassEx(&wcx); int pgx=mpo1-20,pgy=mpo2-200; if(pgx+240>GetSystemMetrics(SM_CXSCREEN)-30){ pgx=GetSystemMetrics(SM_CXSCREEN)-270; }
if(pgy+360>GetSystemMetrics(SM_CYSCREEN)-50){ pgy=GetSystemMetrics(SM_CYSCREEN)-410; } if(pgy<50){ pgy=50; } if(pgx<50){ pgx=50; }
	POP2 = CreateWindowEx(0,"WindowClassqk","Popup",WS_VISIBLE|WS_POPUPWINDOW,pgx,pgy,240,360,bine,NULL,hInstancex,NULL);	

}

