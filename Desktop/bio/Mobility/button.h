#define STARTUP 4
#define HOVER 5
#define CLICK 6

BOOL over;
WORD butsty;
COLORREF butbod,butbak,buttet;
int bodwit=0;
HFONT font,gont;
TEXTMETRIC tm;
HWND butwnd[1000];
char butlab[1000][1000];
int butcount=-1,butx[1000],buty[1000],butxl[1000],butyl[1000],buts[1000],butwit[1000],hq[1000],wi[1000],ri[1000],bi[1000],it[1000],un[1000],st[1000],orient[1000];
COLORREF botbod[1000],botbak[1000],butrext[1000];
HFONT butfon[1000]; 
HMENU butmen[1000];
WORD butstt[1000];
LPCSTR fic[1000];
int mpo1,mpo2;
int he=15,we=7,ro=0,bo=0,ita=0,und=0,str=0;
 LPCSTR fac;

void require(){
for(int a=0;a<=butcount;a++){
	HDC hdc=GetDC(butwnd[a]);
	
	HPEN hp=CreatePen(PS_SOLID,butwit[a],botbod[a]);
	SelectObject(hdc,hp);
	HBRUSH hb=CreateSolidBrush(botbak[a]);
	SelectObject(hdc,hb);
	Rectangle(hdc,butx[a],buty[a],butxl[a]+butx[a],butyl[a]+buty[a]);

	SetBkMode(hdc,TRANSPARENT);
	RECT rc; SetRect(&rc,butx[a]+butwit[a]+1,buty[a]+1+butwit[a]+buts[a],butx[a]+butxl[a]-(butwit[a]),butyl[a]+buty[a]-butwit[a]);
	gont=CreateFont(hq[a],wi[a],orient[a],ri[a],bi[a],it[a],un[a],st[a],DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,fic[a]);
	SelectObject(hdc,gont);
	SetTextColor(hdc,butrext[a]);
	int ch=0;
	if(butlab[a][0]=='\\'&&butlab[a][1]=='b'){
		ch=1;
	DrawTextW(hdc,L"\u2190",-1,&rc,butstt[a]);
	}
	if(ch==0){
	DrawText(hdc,butlab[a],-1,&rc,butstt[a]);
}
	DeleteObject(gont);
	DeleteObject(hp);
	DeleteObject(hb);
	ReleaseDC(butwnd[a],hdc);
}
}

void requirex(HDC hdc){
for(int a=0;a<=butcount;a++){
	HPEN hp=CreatePen(PS_SOLID,butwit[a],botbod[a]);
	SelectObject(hdc,hp);
	HBRUSH hb=CreateSolidBrush(botbak[a]);
	SelectObject(hdc,hb);
	Rectangle(hdc,butx[a],buty[a],butxl[a]+butx[a],butyl[a]+buty[a]);
	
	SetBkMode(hdc,TRANSPARENT);
	RECT rc; SetRect(&rc,butx[a]+butwit[a]+1,buty[a]+1+butwit[a]+buts[a],butx[a]+butxl[a]-(butwit[a]),butyl[a]+buty[a]-butwit[a]);
	gont=CreateFont(hq[a],wi[a],orient[a],ri[a],bi[a],it[a],un[a],st[a],DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,fic[a]);
	SelectObject(hdc,gont);
	SetTextColor(hdc,butrext[a]);
	int ch=0;
	if(butlab[a][0]=='\\'&&butlab[a][1]=='b'){
		ch=1;
	DrawTextW(hdc,L"\u2190",-1,&rc,butstt[a]);
	}
	if(ch==0){
	DrawText(hdc,butlab[a],-1,&rc,butstt[a]);
}
	DeleteObject(gont);
	DeleteObject(hp);
	DeleteObject(hb);
}
}

void killbutton(HMENU hmenu){
for(int a=0;a<=butcount;a++){
		if(hmenu==butmen[a]){
			int gx=butx[a],gy=buty[a],gxl=butxl[a],gyl=butyl[a]; 
			for(int j=a;j<=butcount;j++){
			butx[j]=butx[j+1]; buty[j]=buty[j+1]; butxl[j]=butxl[j+1]; butyl[j]=butyl[j+1]; buts[j]=buts[j+1]; botbak[j]=botbak[j+1]; butstt[j]=butstt[j+1];
			butwnd[j]=butwnd[j+1]; butfon[j]=butfon[j+1]; butrext[j]=butrext[j+1]; botbod[j]=botbod[j+1]; butwit[j]=butwit[j+1]; butmen[j]=butmen[j+1];
			hq[j]=hq[j+1]; wi[j]=wi[j+1]; ri[j]=ri[j+1]; it[j]=it[j+1]; un[j]=un[j+1]; st[j]=st[j+1]; bi[j]=bi[j+1]; fic[j]=fic[j+1];  orient[j]=orient[j+1];
				sprintf(butlab[j],"%s",butlab[j+1]); butcount--;
			}
			RECT rc; 
			SetRect(&rc,gx,gy,gx+gxl,gyl+gy);
			ValidateRect(butwnd[a],&rc); InvalidateRect(butwnd[a],&rc,TRUE);
			break;
		}
	}	
	
}
void button(LPCSTR label,HWND hwnd,WORD stye,int x,int y,int xl,int yl,int ts,HMENU hmenu,int orientation){
	if(ts<0){
		ts=(yl/2)-(he/2)-1;
	}
	butcount++;
	butx[butcount]=x; buty[butcount]=y; butxl[butcount]=xl; butyl[butcount]=yl; buts[butcount]=ts; botbak[butcount]=butbak; butstt[butcount]=stye;
	butwnd[butcount]=hwnd; butfon[butcount]=font; butrext[butcount]=buttet; botbod[butcount]=butbod; butwit[butcount]=bodwit; butmen[butcount]=hmenu;
	hq[butcount]=he; wi[butcount]=we; ri[butcount]=ro; it[butcount]=ita; un[butcount]=und; st[butcount]=str; bi[butcount]=bo;
	fic[butcount]=fac; orient[butcount]=orientation;
	sprintf(butlab[butcount],"%s",label);
	RECT rc;
	SetRect(&rc,butx[butcount],buty[butcount],butx[butcount]+butxl[butcount],butyl[butcount]+buty[butcount]);
			ValidateRect(butwnd[butcount],&rc); InvalidateRect(butwnd[butcount],&rc,TRUE);
}
void setbutton(LPCSTR label,WORD stye,int x,int y,int xl,int yl,int ts,HMENU hmenu,int orientation){
for(int a=0;a<=butcount;a++){
		if(hmenu==butmen[a]){
			RECT rc; SetRect(&rc,butx[a],buty[a],butx[a]+butxl[a],butyl[a]+buty[a]);
			ValidateRect(butwnd[a],&rc); InvalidateRect(butwnd[a],&rc,TRUE);
			butx[a]=x; buty[a]=y; butxl[a]=xl; butyl[a]=yl; buts[a]=ts; orient[a]=orientation; sprintf(butlab[a],"%s",label);
			SetRect(&rc,butx[a],buty[a],butx[a]+butxl[a],butyl[a]+buty[a]);
			ValidateRect(butwnd[a],&rc); InvalidateRect(butwnd[a],&rc,TRUE);
			break;
		}
	}	
}
void setbutback(COLORREF rgb,HMENU hmenu){
	for(int a=0;a<=butcount;a++){
		if(hmenu==butmen[a]){
			botbak[a]=rgb;
			RECT rc; SetRect(&rc,butx[a],buty[a],butx[a]+butxl[a],butyl[a]+buty[a]);
			ValidateRect(butwnd[a],&rc); InvalidateRect(butwnd[a],&rc,TRUE);
			break;
		}
	}
}
void setbutfont(COLORREF rgb,int h,int w,int rot,int bold,int italic,int under,int strike,LPCSTR face,HMENU hmenu){
	
for(int a=0;a<=butcount;a++){
		if(hmenu==butmen[a]){
		hq[a]=h; wi[a]=w; ri[a]=rot; it[a]=italic; un[a]=under; st[a]=strike; bi[a]=bold;
	fic[a]=face;
			RECT rc; SetRect(&rc,butx[a],buty[a],butx[a]+butxl[a],butyl[a]+buty[a]);
			ValidateRect(butwnd[a],&rc); InvalidateRect(butwnd[a],&rc,TRUE);
			break;
		}
	}
}
void setbutbod(int size,COLORREF rgb,HMENU hmenu){
	for(int a=0;a<=butcount;a++){
		if(hmenu==butmen[a]){
		butwit[a]=size; botbod[a]=rgb;
			RECT rc; SetRect(&rc,butx[a],buty[a],butx[a]+butxl[a],butyl[a]+buty[a]);
			ValidateRect(butwnd[a],&rc); InvalidateRect(butwnd[a],&rc,TRUE);
			break;
		}
	}
}
void butfont(COLORREF rgb,int h,int w,int rot,int bold,int italic,int under,int strike,LPCSTR face){
	font=CreateFont(h,w,0,rot,bold,italic,under,strike,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,face);
	buttet=rgb; 
	he=h; we=w; ro=rot; bo=bold; ita=italic; und=under; str=strike; fac=face;
}
void butborder(int size,COLORREF rgb){
	bodwit=size; butbod=rgb;
}
void butback(COLORREF rgb){
	butbak=rgb;
}

void buttclear(){
	butsty=NULL;
}

void clear(HWND hwnd, BOOL erase){
	ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,erase);
}

void check(){
	for(int a=0;a<=butcount;a++){
		if(mpo1>butx[a]&&mpo1<(butx[a]+butxl[a])&&mpo2>buty[a]&&mpo2<(buty[a]+butyl[a])){
			SendMessage(butwnd[a],CLICK,(WPARAM)butmen[a],1);
			break;
		}
	}	
}

void verify(){
	for(int a=0;a<=butcount;a++){
		if(mpo1>butx[a]&&mpo1<(butx[a]+butxl[a])&&mpo2>buty[a]&&mpo2<(buty[a]+butyl[a])){
			SendMessage(butwnd[a],HOVER,(WPARAM)butmen[a],1); over=TRUE;
			break;
		}
		else{
			over=FALSE;
		}
	}
	
}
