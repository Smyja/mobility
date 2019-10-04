#include <windows.h>
#include"define.h"

LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		case WM_CREATE:{
			sub=LoadBitmap(GetModuleHandle(NULL),"BIT"); cp1=45; cp2=65;
			CreateCaret(hwnd,NULL,2,15); ShowCaret(hwnd); SetCaretPos(cp1,cp2);
			break;
		}
		case WM_PAINT:{
		hdc=BeginPaint(hwnd,&ps);
	hgc=CreateCompatibleDC(hdc);
	hb=CreateCompatibleBitmap(hdc,csize1,csize2);
	SelectObject(hgc,hb);
SetRect(&rc,0,0,csize1,csize2);
	brush=CreateSolidBrush(RGB(48,48,48));
	FillRect(hgc,&rc,brush);
hp=CreatePen(PS_SOLID,0,RGB(200,200,200));
	SelectObject(hgc,hp);
	transrect(hgc,0,40,csize1-1,csize2-30);
	DeleteObject(hp);
SetRect(&rc,0,40,40,csize2-30);
	brush=CreateSolidBrush(RGB(10,10,10));
	FillRect(hgc,&rc,brush);
SetRect(&rc,40,40,csize1-1,csize2-30);
	brush=CreateSolidBrush(RGB(68,68,68));
	FillRect(hgc,&rc,brush);

hi=LoadIcon(GetModuleHandle(NULL),"ICO2"); DrawIcon(hgc,5,5,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO1"); DrawIcon(hgc,42,5,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO3"); DrawIcon(hgc,79,5,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO4"); DrawIcon(hgc,116,5,hi); DeleteObject(hi);

SetRect(&rc,40,cp2,csize1-1,cp2+15);
brush=CreateSolidBrush(RGB(10,10,10));
FillRect(hgc,&rc,brush);

hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
	SelectObject(hgc,hf); SetTextColor(hgc,RGB(255,255,255)); SetBkMode(hgc,TRANSPARENT);
	xpos=50; ypos=65; in=0; nline=1; sprintf(nlin,"%d",nline);
	SetTextColor(hgc,RGB(153,217,234)); TextOut(hgc,7,65,nlin,strlen(nlin)); SetTextColor(hgc,RGB(255,255,255)); fon=RGB(255,255,255);
	for(int a=0;a<strlen(script);a++){
	if(in==2){ fon=RGB(255,255,255); SetTextColor(hgc,RGB(255,255,255)); in=0; }
	script1[0]=script[a];
	if(script[a]=='/'&&script[a+1]=='/'&&in==0){ in=4; fon=RGB(50,100,250);  SetTextColor(hgc,RGB(50,100,250)); }else if(script[a]=='\n'||script[a]=='\r'){ if(in==4){ in=2; } }
	if(script[a]=='/'&&script[a+1]=='*'&&in==0){ in=3; fon=RGB(50,100,250); SetTextColor(hgc,RGB(50,100,250)); }else if(script[a-1]=='*'&&script[a]=='/'&&in==3 ){ in=2; }
	if(script1[0]!='\r'&&script1[0]!='\n'){
	if(script[a]=='\"'&&in==0){ in=1; fon=RGB(255,100,100); SetTextColor(hgc,RGB(255,100,100)); }else if(script[a]=='\"'&&in==1 ){ in=2; }
	if(script[a]=='('||script[a]==')'||script[a]=='{'||script[a]=='}'||script[a]=='['||script[a]==']'){ if(in==0){ fon=RGB(255,255,0); SetTextColor(hgc,RGB(255,255,0) ); in=2; } }
	if(script[a]=='+'||script[a]=='-'||script[a]=='='||script[a]=='/'||script[a]=='&'||script[a]=='*'||script[a]=='!'||script[a]=='&'||script[a]==','||script[a]=='.'||script[a]==';'||script[a]==':'){ if(in==0){ fon=RGB(100,255,100); SetTextColor(hgc,RGB(100,255,100) ); in=2; } }
	TextOut(hgc,xpos,ypos,script1,1); xpos+=12; 
}
	if(xpos>csize1-1){
		for(0;a<strlen(script);a++){
			if(script[a]=='\n'||script[a]=='\r'){ break; }
		}
	}
	if(ypos>=csize2-80){ break; }
	if(script[a]=='\n'){ if(in==1){ in=2; } xpos=50; ypos+=20; nline++; sprintf(nlin,"%d",nline); SetTextColor(hgc,RGB(153,217,234)); TextOut(hgc,7,ypos,nlin,strlen(nlin)); SetTextColor(hgc,fon);  }
	if(script[a]=='\r'){ if(in==1){ in=2; } xpos=50; ypos+=20; nline++; sprintf(nlin,"%d",nline); SetTextColor(hgc,RGB(153,217,234)); TextOut(hgc,7,ypos,nlin,strlen(nlin)); SetTextColor(hgc,fon);  }
	} SetTextColor(hgc,RGB(255,255,255));
sprintf(nlin,"Lines: %d",nline);
if(mode==0){ sprintf(nlin,"%s         Mode: Insert",nlin); }else{ sprintf(nlin,"%s         Mode: Overwrite",nlin ); }
sprintf(nlin,"%s    Length: %d",nlin,strlen(script));
TextOut(hgc,10,csize2-25,nlin,strlen(nlin)); 
	DeleteObject(hf);
	
brush=CreateSolidBrush(RGB(48,48,48));
SetRect(&rc,csize1-20,41,csize1-1,csize2-31);
FillRect(hgc,&rc,brush);
SetRect(&rc,41,csize2-50,csize1-1,csize2-31);
FillRect(hgc,&rc,brush);
DeleteObject(brush);
brush=CreateSolidBrush(RGB(148,148,148));
SetRect(&rc,csize1-20,41,csize1-1,61);
FillRect(hgc,&rc,brush);
SetRect(&rc,csize1-20,csize2-50,csize1-1,csize2-30);
FillRect(hgc,&rc,brush);
SetRect(&rc,csize1-40,csize2-50,csize1-21,csize2-30);
FillRect(hgc,&rc,brush);
SetRect(&rc,41,csize2-50,60,csize2-30);
FillRect(hgc,&rc,brush);
{

hp=CreatePen(PS_SOLID,1,RGB(148,148,148));
SelectObject(hgc,hp); SelectObject(hgc,brush);
RoundRect(hgc,csize1-20,thm1,csize1-1,thm1+thm2,7,7);
RoundRect(hgc,thm3,csize2-50,thm3+thm4,csize2-30,7,7);
}
DeleteObject(brush);
hi=LoadIcon(GetModuleHandle(NULL),"ICO5"); DrawIcon(hgc,csize1-26,38,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO6"); DrawIcon(hgc,csize1-26,csize2-58,hi); DeleteObject(hi);

hi=LoadIcon(GetModuleHandle(NULL),"ICO8"); DrawIcon(hgc,36,csize2-56,hi); DeleteObject(hi);
hi=LoadIcon(GetModuleHandle(NULL),"ICO9"); DrawIcon(hgc,csize1-50,csize2-56,hi); DeleteObject(hi);
	
	BitBlt(hdc,0,0,csize1,csize2,hgc,0,0,SRCCOPY);
	DeleteDC(hgc); DeleteObject(hb);
	EndPaint(hwnd,&ps);
			break;
		}
case WM_LBUTTONDOWN:{
	mpo1=LOWORD(lParam);
	mpo2=HIWORD(lParam);
if(mpo1>42&&mpo1<42+30&&mpo2>5&&mpo2<5+30){
ofn.lStructSize = sizeof(ofn);
ofn.hwndOwner = hwnd;    
ofn.lpstrFilter = "Mobiltiy Script (*.mobiscript)\0*.mobiscript\0All Files (*.*)\0*.*\0";    
ofn.lpstrFile = open;
ofn.nMaxFile = MAX_PATH;
ofn.Flags=OFN_FILEMUSTEXIST | OFN_HIDEREADONLY|OFN_EXPLORER;
ofn.lpstrDefExt="mobiscript";
if(GetOpenFileName(&ofn)){
	cp1=50; cp2=65; pcount=0;
	fi=fopen(open,"r");
	fseek(fi,0,SEEK_END);
	seek=ftell(fi);
	fseek(fi,0,SEEK_SET);
	for(int a=0;a<seek;a++){
		script[a]=fgetc(fi);
	}
	script[strlen(script)]=0;
	ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}
CreateCaret(hwnd,NULL,2,15); ShowCaret(hwnd); SetCaretPos(cp1,cp2);
}

if(mpo1>79&&mpo1<79+30&&mpo2>5&&mpo2<5+30){ 
ofn.lStructSize = sizeof(ofn);
ofn.hwndOwner = hwnd;    
ofn.lpstrFilter = "Mobiltiy Script (*.mobiscript)\0*.mobiscript\0All Files (*.*)\0*.*\0";    
ofn.lpstrFile = save;
ofn.nMaxFile = MAX_PATH;    
ofn.Flags = OFN_EXPLORER | OFN_PATHMUSTEXIST | OFN_OVERWRITEPROMPT|OFN_HIDEREADONLY;    
ofn.lpstrDefExt = "mobiscript";
if(GetSaveFileName(&ofn)){
	fi=fopen(save,"w");
	fprintf(fi,script);
	fclose(fi);
}
CreateCaret(hwnd,NULL,2,15); ShowCaret(hwnd); SetCaretPos(cp1,cp2);
 }
	break;
}

case WM_KEYUP:{
switch(LOWORD(wParam)){
	case VK_CONTROL:{
		ctrl=0;
		break;
	}
}
}
	case WM_KEYDOWN:{
		switch(LOWORD(wParam)){
	case VK_INSERT:{
		if(write){
			if(mode==0){ mode=1; }else{ mode=0; }
			ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
		}
		break;
	}
case VK_END:{
if(write&&pcount<strlen(script)){
	for(int a=pcount;a<strlen(script);a++){
			cp1+=12;
		pcount++;
		if(script[pcount-1]=='\r'||script[pcount-1]=='\n'){ cp2+=20;
		cp1=50;
	}
	if(ctrl==0){ if(script[a+1]=='\r'||script[a+1]=='\r'){
		break;
	}	
}
	}
SetCaretPos(cp1,cp2);
}
	break;
}
case VK_CONTROL:{
	if(write){
		ctrl=1;
	}
	break;
}
case VK_HOME:{
if(write&&pcount>0){
	if(ctrl==0){
		for(int a=pcount;a>0;a--){
	if(ctrl==0){ if(script[a-1]=='\r'||script[a-1]=='\n'){
		break;
	}
}
	cp1-=12; pcount--;
	}
 SetCaretPos(cp1,cp2);
}
}
	break;
}

case VK_UP:{
if(write&&pcount>0){ int m=cp1;
	for(int a=pcount;a>0;a--){
		if(script[pcount-1]=='\r'||script[pcount-1]=='\n'){ cp2-=20;
			int a=0;
			for(int b=pcount-1;b>0;b--,a++){
				if(script[b-1]=='\n'||script[b-1]=='\r'){ 
					break;
				}
			} a++;
			cp1=50+(12*a);
			if(cp1<m){ cp1-=12; pcount--; break; }
			}
	cp1-=12; pcount--;
	if(cp1==m){ break; }
	}
SetCaretPos(cp1,cp2);
}
	break;
}
case VK_DOWN:{
	if(write&&pcount<strlen(script)){ int b=cp1;
		for(int a=pcount;a<strlen(script);a++){
			cp1+=12;
		pcount++;
		if(script[pcount-1]=='\r'||script[pcount-1]=='\n'){ cp2+=20;
		cp1=50;
	}
	if(cp1==b){
		break;
	}
		}
	SetCaretPos(cp1,cp2);
	}
	break;
}
	case VK_LEFT:{
		if(write&&pcount>0){
		if(script[pcount-1]=='\r'||script[pcount-1]=='\n'){ cp2-=20;
			int a=0;
			for(int b=pcount-1;b>0;b--,a++){
				if(script[b-1]=='\n'||script[b-1]=='\r'){ 
					break;
				}
			} a++;
			cp1=50+(12*a);
			}
	cp1-=12; pcount--;
	SetCaretPos(cp1,cp2);
		}
		break;
	}
	case VK_RIGHT:{
if(write&&pcount<strlen(script)){ cp1+=12;
		pcount++;
		if(script[pcount-1]=='\r'||script[pcount-1]=='\n'){ cp2+=20;
		cp1=50;
	}
		SetCaretPos(cp1,cp2);
}
		break;
	}
	
		case VK_DELETE:{
	if(write&&pcount>0){
		sprintf(hold,"%s",script);
		for(int a=pcount;a<strlen(script);a++){
			script[a]=hold[a+1];
		}
		ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
	}
			break;
		}
	case VK_BACK:{
	if(write&&pcount>0){
	
	if(script[pcount-1]=='\r'||script[pcount-1]=='\n'){ cp2-=20;
			int a=0;
			for(int b=pcount-1;b>0;b--,a++){
				if(script[b-1]=='\n'||script[b-1]=='\r'){ 
					break;
				}
			} a++;
			cp1=50+(12*a);
			}
			
		sprintf(hold,"%s",script);
		for(int a=pcount-1;a<strlen(script);a++){
			script[a]=hold[a+1];
		} 
		pcount--; 
			cp1-=12; 
	
	SetCaretPos(cp1,cp2);
		ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
	}
			break;
		}
		
		}
		break;
	}
	case WM_CHAR:{
		if(write&&ctrl==0){
		len=strlen(script);
	script2[0]=(char)wParam;
if(script2[0]!='\b'){
	sprintf(hold,"%s",script);
	if(mode==0){
	for(int a=pcount+1;a<=strlen(script);a++){
		script[a]=hold[a-1];
	}
}
	script[pcount]=script2[0];
	pcount++; script[len+1]=0;
	cp1+=12; 
	if(script2[0]=='\n'||script2[0]=='\r'){ cp2+=20; cp1=50; }
	SetCaretPos(cp1,cp2);
	 ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}
}
		break;
	}
		case WM_SIZE:{
			csize1=LOWORD(lParam);
			csize2=HIWORD(lParam);
		ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
			break;
		}
		case WM_ERASEBKGND:{
			return 1;
			break;
		}
		case WM_DESTROY: {
			PostQuitMessage(0);
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
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); 
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); 
	wc.lpszMenuName="main";

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Editor Script",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 
		CW_USEDEFAULT, 
		640, 
		480, 
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	while(GetMessage(&msg, NULL, 0, 0) > 0) { 
		TranslateMessage(&msg); 
		DispatchMessage(&msg); 
	}
	return msg.wParam;
}
