int gone=0,geet=0,meek=0,gane=1,modw=0;
float manx=0,many=0;
char display[1000];

void setop(){ 
vx=pc1-200; vy=pc2-40; 
if(scalex!=100){ vx=scalex*(pc1)/100.0; vy=scalex*(pc2)/100.0 ; }
 emus=gept[0];
for(int i=0;i<bni+1;i++){ emuv=gept[i];  
sprite[0].x=(xes[emuv])*li1; sprite[0].y=(yes[emuv])*li2; sprite[0].z=(zes[emuv])*li3; 

sprite[0].x*=(zoom1/8); sprite[0].y*=(zoom1/8); sprite[0].z*=(zoom1/8); 
//x
dist[0].x=sprite[0].x; dist[0].y=(sprite[0].y*can1)-(sprite[0].z*san1 ); dist[0].z=(sprite[0].y*san1)+(sprite[0].z*can1 ); 
//y
sprite[0].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[0].y=dist[0].y; sprite[0].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[0].x*can3)-(sprite[0].y*san3); dist[0].y=(sprite[0].x*san3)+(sprite[0].y*can3); dist[0].z=sprite[0].z;
//adjust
sprite[0].x=dist[0].x*minr; sprite[0].y=dist[0].y*minr; sprite[0].z=dist[0].z*minr;   
sprite[0].x+=(vx/2); sprite[0].y+=(vy/2);
thm3=sprite[0].z; if(thm3>700){ thm3=700; }
if(perss==1){ w=800*(sprite[0].x-(vx/2)); w/=(800-thm3); sprite[0].x=w+(vx/2);	w=800*(sprite[0].y-(vy/2)); w/=(800-thm3); sprite[0].y=w+(vy/2); }
{sprite[0].x+=(manx*minr); sprite[0].y+=(many*minr); } sprite[0].z/=li3;  px2=0;
lio=sprite[0].x*sprite[0].y; 
px1=(mpo1-200)-sprite[0].x; px2=(mpo2-sprite[0].y); px1=px1*px1; px2=px2*px2; px1=sqrt(px1+px2);

if(px1<=15&&dept[lio]>-400){ rnormz[emuv-emus]=1; }else{ rnormz[emuv-emus]=0; } 
	}
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
}

void position(int bonn,int bonn1){ 
thm3=bonevet[bpos[bonn]+5]*2; thm3+=2000; vc=0; sprite[0].x=0; sprite[0].y=thm3; sprite[0].z=0;
piv1=(bonevet[bpos[bonn]+2]/1000); piv2=(bonevet[bpos[bonn]+3]/1000); piv3=(bonevet[bpos[bonn]+4]/1000);
ran1=cos( (bonevet[bpos[bonn]+6]*3.143/180000.0) ); rnd1=sin( (bonevet[bpos[bonn]+6]*3.143/180000.0)  ); 
ran2=cos( bonevet[bpos[bonn]+7]*3.143/180000.0  ); rnd2=sin( bonevet[bpos[bonn]+7]*3.143/180000.0  ); 
ran3=cos( bonevet[bpos[bonn]+8]*3.143/180000.0  ); rnd3=sin( bonevet[bpos[bonn]+8]*3.143/180000.0  );  

sprite[vc].x-=piv1; sprite[vc].y-=piv2; sprite[vc].z-=piv3; 
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*ran1)-(sprite[vc].z*rnd1 ); dist[0].z=(sprite[vc].y*rnd1)+(sprite[vc].z*ran1 );
//y
sprite[vc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//z
dist[0].x=(sprite[vc].x*ran3)-(sprite[vc].y*rnd3); dist[0].y=(sprite[vc].x*rnd3)+(sprite[vc].y*ran3); dist[0].z=sprite[vc].z;

sprite[vc].x=dist[0].x+piv1; sprite[vc].y=dist[0].y+piv2; sprite[vc].z=dist[0].z+piv3;

thm3=sprite[0].y; thm4=sprite[0].x; thm5=sprite[0].z;
bonn1=bpos[bonn1];
bonn1+=2; bonevet[bonn1]=bonevet[bpos[bonn]+2]-thm4; bonn1++; bonevet[bonn1]=bonevet[bpos[bonn]+3]-thm3; bonn1++; bonevet[bonn1]=bonevet[bpos[bonn]+4]-thm5; 


}

void BAINT(){ vx=pc1-200; vy=pc2-40; 
if(scalex!=100){ vx=scalex*(pc1)/100.0; vy=scalex*(pc2)/100.0 ; }
minr=1;
viewport(vx,vy,2000,-1200);
setrender(TRUE);
can1=cos(rot1); san1=sin(rot1);
can2=cos(rot2); san2=sin(rot2);
can3=cos(rot3); san3=sin(rot3);

setshade(FLAT);
sdepth(TRUE);
lin=RGB(255,255,255);
clearbitx(RGB(50,50,50));
setrender(TRUE);
//start here
fin=0; vc=0; innu=0; ojn=0; tvc=0; finz=0; trc=0; trg=0; tra=0; trm=0; trss=-1;
if(modw==1){
	for(int i=0;i<=fconx;i++){
if(pes[i]==-4){ innu=0; trss++; i++;  }
if(pes[i]==-5){ innu=1;  trss++; i++;  }
if(pes[i]==-10){ tinz=pes[i+1]-1; if(tinz<200){ xinz=xhit[tinz]; yinz=yhit[tinz]; }else{ 
xinz=xhit[tinz]; yinz=yhit[tinz];
GetBitmapBits(hbix[tinz-200],sizeof(bitex[200]),&bitex[200]); tinz=200;  } i+=2; 	}
if(pes[i]==-16){ transs=255;  i+=1; }
if(pes[i]==-19){ thm9=0; }
if(pes[i]==-20){ thm9=1; }
if(pes[i]==-21){ thm8=0; }
if(pes[i]==-22){ thm8=1; }
if(pes[i]==-23){ thm9=2; }
if(fin==1&&innu==0&&pes[i]){

if(pes[i]==-8){  tvc=0; i++;
{ 
for(0;i<fconx;i++){
if(pes[i]<0){ break; }
	
} 
}
}
if(pes[i]==-25){  nvc=0; i++;
for(0;i<fconx;i++){
if(pes[i]<0){ break; }
	spont[nvc].x=(normy[pes[i]-1])*scx; spont[nvc].y=(normx[pes[i]-1])*scx; spont[nvc].z=(normz[pes[i]-1])*scx;

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
 if(pes[i]==-2){
if(clr1==0){    if(CLAS==0){  polygonzex(sprite,spont,spitt,vc,transs);  }else{ conlinez(sprite,vc,wire,transs,FALSE); }  
}else{conlinez(sprite,vc,RGB(10,10,10),transs,FALSE);}
  vc=0; finz=0; tvc=0;
}

if(pes[i]!=-2&&pes[i]!=-9){

emuv=gept[0];
	if(pes[i]>0&&finz==0){ if(rnormz[pes[i]-1-emuv]==0){ spitt[vc].x=200; spitt[vc].y=200; spitt[vc].z=200; }else{ spitt[vc].x=255; spitt[vc].y=0; spitt[vc].z=00; }
sprite[vc].x=(xes[pes[i]-1])*scx; sprite[vc].y=(yes[pes[i]-1])*scy; sprite[vc].z=(zes[pes[i]-1])*scz; 
sprite[vc].x*=(zoom1/8); sprite[vc].y*=(zoom1/8); sprite[vc].z*=(zoom1/8); 
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
sprite[vc].x=dist[0].x*minr; sprite[vc].y=dist[0].y*minr; sprite[vc].z=dist[0].z*minr;  sprite[vc].x+=(vx/2); sprite[vc].y+=(vy/2);
thm3=sprite[vc].z; if(thm3>700){ thm3=700; }
if(perss==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm3); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm3); sprite[vc].y=w+(vy/2); }
if(pivt==0){sprite[vc].x+=(manx*minr); sprite[vc].y+=(many*minr); } sprite[vc].z/=scz;  vc++;
}
}


 if(pes[i]==-9){
if(clr1==0){    if(CLAS==0){  polygonzex(sprite,spont,spitt,vc,transs);   }else{ conlinez(sprite,vc,wire,transs,FALSE); }  
}else{conlinez(sprite,vc,RGB(10,10,10),transs,FALSE);}
  vc=0; finz=0; tvc=0;
}

}
if(pes[i]==-24){  i+=3; }
if(pes[i]==-1){ fin=1; vc=0;   }
if(pes[i]==-2){ fin=0; }
if(pes[i]==-9){ finz=0; vc=0; tvc=0; }
if(pes[i]==-3){  i++; cr=pes[i]; i++; cg=pes[i]; i++; cb=pes[i]; lin=RGB(cr,cg,cb); }
if(pes[i]==-7){ ojn=1; }
if(pes[i]==-6){ ojn=0; }
if(pes[i]==-11){  i++; scx=pes[i]/100.0; i++; scy=pes[i]/100.0; i++; scz=pes[i]/100.0;  }
if(pes[i]==-12){  i+=3; }
if(pes[i]==-13){ setshade(FLAT);  }
if(pes[i]==-14){ setshade(NULL);  }
if(pes[i]==-26){ setshade(GOURAUD);  }
if(pes[i]==-17){ CLAS=0; }
if(pes[i]==-18){ CLAS=1; }
}
//end here
}

if(modw==0){
for(int i=0;i<=fconx;i++){
if(pes[i]==-4){ innu=0; trss++; i++;  }
if(pes[i]==-5){ innu=1;  trss++; i++;  }
if(pes[i]==-10){ tinz=pes[i+1]-1; if(tinz<200){ xinz=xhit[tinz]; yinz=yhit[tinz]; }else{ 
xinz=xhit[tinz]; yinz=yhit[tinz];
GetBitmapBits(hbix[tinz-200],sizeof(bitex[200]),&bitex[200]); tinz=200;  } i+=2; 	}
if(pes[i]==-16){ transs=255;  i+=1; }
if(pes[i]==-19){ thm9=0; }
if(pes[i]==-20){ thm9=1; }
if(pes[i]==-21){ thm8=0; }
if(pes[i]==-22){ thm8=1; }
if(pes[i]==-23){ thm9=2; }
if(fin==1&&innu==0&&pes[i]){

if(pes[i]==-8){  tvc=0; i++;
{ 
for(0;i<fconx;i++){
if(pes[i]<0){ break; }
	spitt[tvc].x=tyes[pes[i]-1]; spitt[tvc].y=txes[pes[i]-1]; tvc++;
} 
}
}
if(pes[i]==-25){  nvc=0; i++;
for(0;i<fconx;i++){
if(pes[i]<0){ break; }
	spont[nvc].x=(normy[pes[i]-1])*scx; spont[nvc].y=(normx[pes[i]-1])*scx; spont[nvc].z=(normz[pes[i]-1])*scx;

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
 if(pes[i]==-2){
if(clr1==0){    if(CLAS==0){  polygonzx(sprite,spont,vc,lin,transs);  }else{ conlinez(sprite,vc,wire,transs,FALSE); }  
}else{conlinez(sprite,vc,RGB(10,10,10),transs,FALSE);}
  vc=0; finz=0; tvc=0;
}

if(pes[i]!=-2&&pes[i]!=-9){


	if(pes[i]>0&&finz==0){
sprite[vc].x=(xes[pes[i]-1])*scx; sprite[vc].y=(yes[pes[i]-1])*scy; sprite[vc].z=(zes[pes[i]-1])*scz; 
sprite[vc].x*=(zoom1/8); sprite[vc].y*=(zoom1/8); sprite[vc].z*=(zoom1/8); 
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
sprite[vc].x=dist[0].x*minr; sprite[vc].y=dist[0].y*minr; sprite[vc].z=dist[0].z*minr;  sprite[vc].x+=(vx/2); sprite[vc].y+=(vy/2);
thm3=sprite[vc].z; if(thm3>700){ thm3=700; }
if(perss==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm3); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm3); sprite[vc].y=w+(vy/2); }
if(pivt==0){sprite[vc].x+=(manx*minr); sprite[vc].y+=(many*minr); } sprite[vc].z/=scz;  vc++;
}
}


 if(pes[i]==-9){
if(clr1==0){    if(CLAS==0){  polymagezx(sprite,spont,spitt,vc,lin,transs,bitex[tinz],xinz,yinz);  }else{ conlinez(sprite,vc,wire,transs,FALSE); }  
}else{conlinez(sprite,vc,RGB(10,10,10),transs,FALSE);}
  vc=0; finz=0; tvc=0;
}

}
if(pes[i]==-24){ i+=3; }
if(pes[i]==-1){ fin=1; vc=0;   }
if(pes[i]==-2){ fin=0; }
if(pes[i]==-9){ finz=0; vc=0; tvc=0; }
if(pes[i]==-3){  i++; cr=pes[i]; i++; cg=pes[i]; i++; cb=pes[i]; lin=RGB(cr,cg,cb); }
if(pes[i]==-7){ ojn=1; }
if(pes[i]==-6){ ojn=0; }
if(pes[i]==-11){  i++; scx=pes[i]/100.0; i++; scy=pes[i]/100.0; i++; scz=pes[i]/100.0;  }
if(pes[i]==-12){  i+=3; }
if(pes[i]==-13){ setshade(FLAT);  }
if(pes[i]==-14){ setshade(NULL);  }
if(pes[i]==-26){ setshade(GOURAUD);  }
if(pes[i]==-17){ CLAS=0; }
if(pes[i]==-18){ CLAS=1; }
}

}
//end here

if(bxra){ cleardept(); }
setrender(TRUE);
//bone
setshade(FLAT);
for(int i=0;i<bonco;i++){
	if(bonevet[i]==-1||bonevet[i]==-3){ lin=RGB(250,250,250); if(bonevet[i]==-3){ lin=RGB(250,50,250); }
	if(bonevet[i+1]==-4){
	  i++;

	thm3=0;
	for(int u=0;u<554;u++){
	if(thm3==1&&clot[u]>0){ thm8=cloty[clot[u]-1]; if(clot[u]-1==28||clot[u]-1==29||clot[u]-1==30){ thm8-=((bonevet[i+4]/500)-3.8 ); }
	sprite[vc].x=clotx[clot[u]-1]+(bonevet[i+1]/1000); sprite[vc].y=thm8+(bonevet[i+2]/1000); sprite[vc].z=clotz[clot[u]-1]+(bonevet[i+3]/1000);

sprite[vc].x-=piv1; sprite[vc].y-=piv2; sprite[vc].z-=piv3; 
//z
dist[0].x=(sprite[vc].x*ran3)-(sprite[vc].y*rnd3); dist[0].y=(sprite[vc].x*rnd3)+(sprite[vc].y*ran3); dist[0].z=sprite[vc].z;
//y
sprite[vc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*ran1)-(sprite[vc].z*rnd1 ); dist[0].z=(sprite[vc].y*rnd1)+(sprite[vc].z*ran1 );

sprite[vc].x=dist[0].x+piv1; sprite[vc].y=dist[0].y+piv2; sprite[vc].z=dist[0].z+piv3;

 
sprite[vc].x*=(zoom1/70); sprite[vc].y*=(zoom1/70); sprite[vc].z*=(zoom1/70); 
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
sprite[vc].x=dist[0].x*minr; sprite[vc].y=dist[0].y*minr; sprite[vc].z=dist[0].z;
	sprite[vc].x+=(vx/2); sprite[vc].y+=(vy/2); 
	thm5=sprite[vc].z; if(thm5>700){ thm5=700; }
if(perss==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm5); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm5); sprite[vc].y=w+(vy/2);  }
if(pivt==0){ sprite[vc].x+=(manx*minr); sprite[vc].y+=(many*minr); }
	vc++;
	}
	if(clot[u]==-1){ thm3=1; vc=0; piv1=(bonevet[i+1]/1000); piv2=(bonevet[i+2]/1000); piv3=(bonevet[i+3]/1000); 
ran1=cos( bonevet[i+5]*3.143/180000.0 ); rnd1=sin( bonevet[i+5]*3.143/180000.0  ); 
ran2=cos( bonevet[i+6]*3.143/180000.0  ); rnd2=sin( bonevet[i+6]*3.143/180000.0  ); 
ran3=cos( bonevet[i+7]*3.143/180000.0  ); rnd3=sin( bonevet[i+7]*3.143/180000.0  );  
	}
	if(clot[u]==-2){ thm3=0; polygonz(sprite,vc,lin,255);  }
	}
}
	}
}


showscreen(hqc,200,0,pc1-200,pc2-40);
clearview();
}

LRESULT CALLBACK BANE(HWND bine, UINT MAssage, WPARAM wbParam, LPARAM lbaram) {
	switch(MAssage) {
	case WM_CREATE:{ fconx=0; 
	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
		break;
	}
	case WM_PAINT:{
	hqcc=BeginPaint(bine,&pe);
hqc=CreateCompatibleDC(hqcc);
hqy=CreateCompatibleBitmap(hqcc,pc1,pc2);
SelectObject(hqc,hqy);	
BAINT();
brush=CreateSolidBrush(RGB(100,100,100));
hp=CreatePen(PS_SOLID,1,RGB(100,100,100));
SelectObject(hqc,brush); SelectObject(hqc,hp);
Rectangle(hqc,-1,pc2-40,pc1+1,pc2);
Rectangle(hqc,0,0,200,pc2-40);
DeleteObject(brush); DeleteObject(hp);
hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hqc,hf); SetTextColor(hqc,RGB(255,255,255)); SetBkMode(hqc,TRANSPARENT);
if(perss==0){ TextOut(hqc,210,10,"Mode: Orthographic",18); }else if(perss==1){ TextOut(hqc,210,10,"Mode: Perspective",17); }
SetTextColor(hqc,RGB(0,0,0));
brush=CreateSolidBrush(RGB(70,70,70));
hp=CreatePen(PS_SOLID,1,RGB(70,70,70));
SelectObject(hqc,brush); SelectObject(hqc,hp);
if(gone==1){ Rectangle(hqc,4,pc2-33,49,pc2-12); }
if(gone==2){ Rectangle(hqc,59,pc2-33,99,pc2-12); }
if(gone==3){ Rectangle(hqc,108,pc2-33,145,pc2-12); }
if(bxra==1){ Rectangle(hqc,147,pc2-33,187,pc2-12); }
Rectangle(hqc,197,pc2-33,235,pc2-12);
Rectangle(hqc,0,0,20,pc2-40);
DeleteObject(brush); DeleteObject(hp);

brush=CreateSolidBrush(RGB(100,100,100));
hp=CreatePen(PS_SOLID,1,RGB(100,100,100));
SelectObject(hqc,brush); SelectObject(hqc,hp);
if(gane==0){ Rectangle(hqc,0,pc2/2-50,20,pc2/2+2); }
if(gane==1){ Rectangle(hqc,0,pc2/2-53,20,pc2/2-97); }
DeleteObject(brush); DeleteObject(hp);

TextOut(hqc,5,pc2-30,"Select",6);
TextOut(hqc,60,pc2-30,"Clear",5);
TextOut(hqc,110,pc2-30,"Bone",4);
TextOut(hqc,150,pc2-30,"X-ray",5);

if(modw==0){ TextOut(hqc,200,pc2-30,"View",4); }else{ TextOut(hqc,200,pc2-30,"Paint",5); }
	
DeleteObject(hf);
thm3=rigdown; hi3=LoadIcon(GetModuleHandle(NULL),"ICO5");
for(int p=0,q=0;p<strlen(display)&&gane==0;p++){
	how[q]=display[p]; q++;
	if(display[p]==':'){
	how[q-1]=0; q=0; TextOut(hqc,25,thm3,how,strlen(how)); DrawIcon(hqc,160,thm3,hi3); thm3+=20; 
	}
}

thm3=bonedown; 
hi=LoadIcon(GetModuleHandle(NULL),"ICO4"); hi1=LoadIcon(GetModuleHandle(NULL),"ICO2"); hi2=LoadIcon(GetModuleHandle(NULL),"ICO3"); 
brush=CreateSolidBrush(RGB(40,40,40));
SelectObject(hqc,brush); SetTextColor(hqc,RGB(255,255,255)); skit=0;
for(int p=0,q=0;p<strlen(bony)&&gane==1;p++){
	how[q]=bony[p]; q++;
	if(bony[p]==':'){ gp[skit]=thm3; skit++;
if(bonevet[bpos[skit-1]]==-1){ RoundRect(hqc,20,thm3-3,180,thm3+17,7,7); DrawIcon(hqc,120,thm3,hi1); }
else{  RoundRect(hqc,20,thm3-3,180,thm3+200,7,7); DrawIcon(hqc,120,thm3,hi2); 
thm9=1;
for(int bb=0;bb<bex;bb+=2){ if(bonext[bb]==skit-1){ thm9=0; break; } }
if(thm9==0){ SetTextColor(hqc,RGB(100,100,100)); }
TextOut(hqc,25,thm3+22,"Position",8); TextOut(hqc,35,thm3+42,"X",1); TextOut(hqc,35,thm3+62,"Y",1); TextOut(hqc,35,thm3+82,"Z",1);
if(thm9==0){ SetTextColor(hqc,RGB(255,255,255)); }
TextOut(hqc,25,thm3+102,"Rotation",8); TextOut(hqc,35,thm3+122,"X",1); TextOut(hqc,35,thm3+142,"Y",1); TextOut(hqc,35,thm3+162,"Z",1);
TextOut(hqc,25,thm3+182,"Length",6); TextOut(hqc,120,thm3+22,"Colour",6);
DeleteObject(brush);
brush=CreateSolidBrush(RGB(100,100,100)); SelectObject(hqc,brush);
if(thm9==0){ DeleteObject(brush); DeleteObject(hp); hp=CreatePen(PS_SOLID,1,RGB(50,50,50)); SelectObject(hqc,hp); brush=CreateSolidBrush(RGB(50,50,50)); SelectObject(hqc,brush); SetTextColor(hqc,RGB(100,100,100)); }
Rectangle(hqc,50,thm3+42,110,thm3+55); SetRect(&rc,51,thm3+41,108,thm3+55); sprintf(how1,"%f",bonevet[bpos[skit-1]+2]/1000.0); DrawText(hqc,how1,-1,&rc,NULL);
Rectangle(hqc,50,thm3+62,110,thm3+75); SetRect(&rc,51,thm3+61,108,thm3+75); sprintf(how1,"%f",bonevet[bpos[skit-1]+3]/1000.0); DrawText(hqc,how1,-1,&rc,NULL);
Rectangle(hqc,50,thm3+82,110,thm3+95); SetRect(&rc,51,thm3+81,108,thm3+95); sprintf(how1,"%f",bonevet[bpos[skit-1]+4]/1000.0); DrawText(hqc,how1,-1,&rc,NULL);
if(thm9==0){ DeleteObject(brush); DeleteObject(hp); hp=CreatePen(PS_SOLID,1,RGB(100,100,100)); SelectObject(hqc,hp); brush=CreateSolidBrush(RGB(100,100,100)); SelectObject(hqc,brush); SetTextColor(hqc,RGB(255,255,255)); }

Rectangle(hqc,50,thm3+122,110,thm3+135); SetRect(&rc,51,thm3+121,108,thm3+135); sprintf(how1,"%f",bonevet[bpos[skit-1]+6]/1000.0); DrawText(hqc,how1,-1,&rc,NULL);
Rectangle(hqc,50,thm3+142,110,thm3+155); SetRect(&rc,51,thm3+141,108,thm3+155); sprintf(how1,"%f",bonevet[bpos[skit-1]+7]/1000.0); DrawText(hqc,how1,-1,&rc,NULL);
Rectangle(hqc,50,thm3+162,110,thm3+175); SetRect(&rc,51,thm3+161,108,thm3+175); sprintf(how1,"%f",bonevet[bpos[skit-1]+8]/1000.0); DrawText(hqc,how1,-1,&rc,NULL);

Rectangle(hqc,75,thm3+182,120,thm3+195); SetRect(&rc,76,thm3+181,118,thm3+195); sprintf(how1,"%f",bonevet[bpos[skit-1]+5]/1000.0); DrawText(hqc,how1,-1,&rc,NULL);
DeleteObject(brush);
brush=CreateSolidBrush(RGB(bonevet[bpos[skit-1]+9],bonevet[bpos[skit-1]+10],bonevet[bpos[skit-1]+11])); SelectObject(hqc,brush);
Rectangle(hqc,122,thm3+42,152,thm3+72);

DeleteObject(brush);
}
DeleteObject(brush);
brush=CreateSolidBrush(RGB(100,100,100)); SelectObject(hqc,brush);
if(bonevet[bpos[skit-1]+1]==-4){ Rectangle(hqc,138,thm3-1,159,thm3+15); }
DeleteObject(brush);
brush=CreateSolidBrush(RGB(40,40,40)); SelectObject(hqc,brush);

	how[q-1]=0; q=0; SetRect(&rc,25,thm3,89,thm3+20); DrawText(hqc,how,-1,&rc,NULL); DrawIcon(hqc,160,thm3,hi3);  DrawIcon(hqc,140,thm3,hi); 
if(bonevet[bpos[skit-1]]==-1){ thm3+=20;  }else{ thm3+=203; }
	}
}
DeleteObject(brush);
DeleteObject(hi3); DeleteObject(hi); DeleteObject(hi2); DeleteObject(hi1);

hp=CreatePen(PS_SOLID,1,RGB(20,20,20));
brush=CreateSolidBrush(RGB(58,58,58));
SelectObject(hqc,hp); SelectObject(hqc,brush);

RoundRect(hqc,pc1-300+100,21-10,pc1-150+100,30-10,7,7);
Rectangle(hqc,pc1-295+100,33-10,pc1-230+100,50-10);
Rectangle(hqc,pc1-220+100,33-10,pc1-155+100,50-10);
DeleteObject(brush); DeleteObject(hp); DeleteObject(hf);

hp=CreatePen(PS_SOLID,1,RGB(150,150,150));
brush=CreateSolidBrush(RGB(200,200,255));
SelectObject(hqc,hp); SelectObject(hqc,brush);

thm3=scalex*(pc1-200)/100.0;
thm5=146*scalex/100.0;
RoundRect(hqc,pc1-298+100,23-10,pc1-(298)+(thm5)+100,28-10,7,7);

DeleteObject(brush);
SelectObject(hqc,GetStockObject(NULL_BRUSH));
Rectangle(hqc,pc1-(298-thm5-8)+100,7,pc1-(298-thm5+8)+100,33-10);
DeleteObject(brush); DeleteObject(hp); DeleteObject(hf);

sprintf(how,"%f",scalex); 
SetRect(&rc,pc1-293+100,24,pc1-232+100,38);	DrawText(hqc,how,-1,&rc,NULL);
sprintf(how,"%f",thm3);
SetRect(&rc,pc1-218+100,24,pc1-157+100,38);	DrawText(hqc,how,-1,&rc,NULL);

hf=CreateFont(15,7,900,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hqc,hf); SetTextColor(hqc,RGB(0,0,0)); SetBkMode(hqc,TRANSPARENT);
TextOut(hqc,3,pc2/2,"Object",6);
TextOut(hqc,3,pc2/2-55,"Bone",4);

DeleteObject(hf);

BitBlt(hqcc,0,0,pc1,pc2,hqc,0,0,SRCCOPY);
DeleteDC(hqc);
DeleteObject(hqy);
EndPaint(bine,&pe); 
		break;
	}

case WM_RBUTTONDOWN:{
	
	break;
}

case WM_LBUTTONDOWN:{ if(frr>=0){ frr=-1; ReleaseCapture(); }
if(bint==1){  bint=2;}  

if(mpo1>197&&mpo1<235&&mpo2>pc2-33&&mpo2<pc2-12&&shk>=0){ if(modw==0){ modw=1; }else{ modw=0; } ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
if(mpo1>147&&mpo1<187&&mpo2>pc2-33&&mpo2<pc2-12){ if(bxra==0){ bxra=1; }else{ bxra=0; } ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
if(onedit==17){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse);
bonevet[bpos[deci]+2]=thm3*1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}

DestroyWindow(editT);
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}
if(onedit==18){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse);
bonevet[bpos[deci]+3]=thm3*1000;

thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}

DestroyWindow(editT);
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}
if(onedit==19){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse);
bonevet[bpos[deci]+4]=thm3*1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}

DestroyWindow(editT);
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}
if(onedit==20){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); if(thm3>360){ thm3=360; } if(thm3<-360){ thm3=-360; }
bonevet[bpos[deci]+6]=thm3*1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}

DestroyWindow(editT);
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}
if(onedit==21){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); if(thm3>360){ thm3=360; } if(thm3<-360){ thm3=-360; }
bonevet[bpos[deci]+7]=thm3*1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
DestroyWindow(editT);
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}
if(onedit==22){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); if(thm3>360){ thm3=360; } if(thm3<-360){ thm3=-360; }
bonevet[bpos[deci]+8]=thm3*1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
DestroyWindow(editT);
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}
if(onedit==23){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
thm3=atof(freeuse); if(thm3<0){ thm3=0; }
bonevet[bpos[deci]+5]=thm3*1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
DestroyWindow(editT);
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}
if(onedit==24){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
emus=0;
for(int zz=0;zz<bmm;zz++){ how1[emus]=bony[zz]; emus++; } how1[emus]=0; emus=0;
for(int zz=bmm,mm=0;zz<strlen(bony);zz++){ if(bony[zz]==':'){ for(mm=zz;mm<strlen(bony);mm++){ how[emus]=bony[mm]; emus++; } break; } } how[emus]=0;
sprintf(bony,"%s%s%s",how1,freeuse,how);
DestroyWindow(editT);
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}

if(mpo1>20&&mpo1<137&&mpo2>10&&mpo2<pc2-40&&gane==1){ 
	for(int r=0;r<bno;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+20){ 
if(bonevet[bpos[r]]==-1){ for(int z=0;z<bno;z++){ bonevet[bpos[z]]=-1; } bonevet[bpos[r]]=-3; shk=r; } else{ bonevet[bpos[r]]=-1; modw=0; shk=-1; }
 ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
	break; }
}
}

if(mpo1>138&&mpo1<159&&mpo2>10&&mpo2<pc2-40&&gane==1){ 
	for(int r=0;r<bno;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+20){ 
if(bonevet[bpos[r]+1]==-4){ bonevet[bpos[r]+1]=-5; } else{ bonevet[bpos[r]+1]=-4; }
 ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
	break; }
}
 }

if(mpo1>20&&mpo1<180&&mpo2>10&&mpo2<pc2-40&&gane==1){ 
	for(int r=0;r<bno;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+200&&bonevet[bpos[r]]==-3){
deci=r;
if(mpo1>50&&mpo1<110&&mpo2>gp[r]+42&&mpo2<gp[r]+55){
thm9=1;
for(int bb=0;bb<bex;bb+=2){ if(bonext[bb]==r){ thm9=0; break; } }
if(thm9==1){
sprintf(how,"%f",bonevet[bpos[r]+2]/1000.0 ); 
onedit=17; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,50,gp[r]+42,60,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); 
}
 }

if(mpo1>50&&mpo1<110&&mpo2>gp[r]+62&&mpo2<gp[r]+75){ 
thm9=1;
for(int bb=0;bb<bex;bb+=2){ if(bonext[bb]==r){ thm9=0; break; } }
if(thm9==1){
sprintf(how,"%f",bonevet[bpos[r]+3]/1000.0 ); 
onedit=18; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,50,gp[r]+62,60,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); 
}
 }
 
 if(mpo1>50&&mpo1<110&&mpo2>gp[r]+82&&mpo2<gp[r]+95){ 
 thm9=1;
for(int bb=0;bb<bex;bb+=2){ if(bonext[bb]==r){ thm9=0; break; } }
if(thm9==1){
sprintf(how,"%f",bonevet[bpos[r]+4]/1000.0 ); 
onedit=19; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,50,gp[r]+82,60,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); 
}
 }
 if(mpo1>50&&mpo1<110&&mpo2>gp[r]+122&&mpo2<gp[r]+135){ 
sprintf(how,"%f",bonevet[bpos[r]+6]/1000.0 ); 
onedit=20; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,50,gp[r]+122,60,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); 
 }
  if(mpo1>50&&mpo1<110&&mpo2>gp[r]+142&&mpo2<gp[r]+155){ 
sprintf(how,"%f",bonevet[bpos[r]+7]/1000.0 ); 
onedit=21; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,50,gp[r]+142,60,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); 
 }
  if(mpo1>50&&mpo1<110&&mpo2>gp[r]+162&&mpo2<gp[r]+175){ 
sprintf(how,"%f",bonevet[bpos[r]+8]/1000.0 ); 
onedit=22; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,50,gp[r]+162,60,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); 
 }
 if(mpo1>75&&mpo1<120&&mpo2>gp[r]+182&&mpo2<gp[r]+195){ 
sprintf(how,"%f",bonevet[bpos[r]+5]/1000.0 ); 
onedit=23; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,75,gp[r]+182,45,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); 
 }
 
if(mpo2>gp[r]+42&&mpo2<gp[r]+72&&mpo1>122&&mpo1<152){ 
	ccz.lStructSize=sizeof(CHOOSECOLOR);
	ccz.hwndOwner=hwnd;
	ccz.hInstance=NULL;
	ccz.rgbResult=zcolor;
	ccz.lpCustColors=zref;
	ccz.Flags=CC_RGBINIT|CC_FULLOPEN;
	ccz.lpfnHook=NULL;
	if(ChooseColor(&ccz)){
	zcolor=ccz.rgbResult;
	bonevet[bpos[r]+9]=GetRValue(zcolor);	bonevet[bpos[r]+10]=GetGValue(zcolor);	bonevet[bpos[r]+11]=GetBValue(zcolor);
}
 }
 
 ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
	break; }
}
 }

if(mpo1>0&&mpo1<20&&mpo2>pc2/2-50&&mpo2<pc2/2+2){ gane=0; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
if(mpo1>0&&mpo1<20&&mpo2>pc2/2-97&&mpo2<pc2/2-53){ gane=1; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
if(meek==0&&mpo2>38&&mpo2<pc2-40&&mpo1>200&&bint==0){ geet=1; SetCapture(bine); }
if(meek==0&&mpo2<38&&mpo2>0&&bint==0){
thm3=scalex*(pc1)/100.0;
thm5=146*scalex/100.0;
if(mpo1<pc1-(298-thm5-8)+100&&mpo1>pc1-(298-thm5+8)+100&&mpo2>7&&mpo2<23){ geet=2; SetCapture(bine); } }

if(onedit==15){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
scalex=atof(freeuse);
if(scalex>100){ scalex=100; } if(scalex<0){ scalex=0; }
DestroyWindow(editT); 
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}
if(onedit==16){
onedit=0; 
SendMessage(editT,WM_GETTEXT,sizeof(freeuse)/sizeof(freeuse[0]),reinterpret_cast<LPARAM>(freeuse));
scalex=atof(freeuse)/(pc1)*100.0 ;
if(scalex>100){ scalex=100; } if(scalex<0){ scalex=0; }
DestroyWindow(editT); 
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);	
}

if(mpo2>24&&mpo2<38&&mpo1>pc1-293+100&&mpo1<pc1-232+100){
sprintf(how,"%f",scalex ); 
onedit=15;     editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,pc1-293+100,24,61,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); }
if(mpo2>24&&mpo2<38&&mpo1>pc1-218+100&&mpo1<pc1-157+100){
sprintf(how,"%f",scalex*pc1/100.0 ); 
onedit=16;     editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,pc1-218+100,24,61,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); }
DestroyWindow(POP2);
if(gone==1){ sprintf(funcs,"%s",hlop); grop(); }
if(gone==2){ fconx=0; sprintf(display,""); ValidateRect(hwnd,NULL); InvalidateRect(bine,NULL,TRUE); }
if(gone==3&&fconx>0){ sprintf(bony,"%sBone:",bony); bpos[bno]=bonco; bno++; bonevet[bonco]=-1; bonevet[bonco+1]=-4; bonco+=2; bonevet[bonco]=0; bonco++; bonevet[bonco]=0; bonco++; bonevet[bonco]=0; bonco++; bonevet[bonco]=8000; bonco++; bonevet[bonco]=0; bonco++; bonevet[bonco]=0; bonco++;
 bonevet[bonco]=0; bonco++; bonevet[bonco]=50; bonevet[bonco+1]=100; bonevet[bonco+2]=250; bonco+=3; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
if(gone==3&&fconx<=0){ MessageBox(hwnd,"No object in view","Objected not selected",MB_OK|MB_ICONERROR); }

if(bom!=0){ bom1=1; SetCapture(bine); }

	break;
}

case WM_MOUSEMOVE:{
mpo1=LOWORD(lbaram);
mpo2=HIWORD(lbaram);
setop(); 
if(mpo1>200&&mpo2>0&&mpo2<pc2-40&&bout==0&&modw==1){ bout=1; hc=LoadCursor(GetModuleHandle(NULL),"FTY"); SetCursor(hc); }
else if(mpo1<200||mpo1>pc1-10||mpo2<10||mpo2>pc2-40){ if(bout==1){ bout=0; hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); } }

if(mpo1>5&&mpo1<49&&mpo2>pc2-30&&mpo2<pc2-15){ gone=1; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
else{ if(gone==1){ gone=0; ValidateRect(hwnd,NULL); InvalidateRect(bine,NULL,TRUE); } }
if(mpo1>59&&mpo1<82&&mpo2>pc2-30&&mpo2<pc2-15){ gone=2; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
else{ if(gone==2){ gone=0; ValidateRect(hwnd,NULL); InvalidateRect(bine,NULL,TRUE); } }
if(mpo1>108&&mpo1<145&&mpo2>pc2-30&&mpo2<pc2-15){ gone=3; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
else{ if(gone==3){ gone=0; ValidateRect(hwnd,NULL); InvalidateRect(bine,NULL,TRUE); } }
if(geet==1){
if(mpo1>fm1+2){ rot1-=0.1; if(rot1<0){ rot1=6.28; } }else if(mpo1<fm1-2){ rot1+=0.1; if(rot1>6.28){ rot1=0; } }
if(mpo2>fm2+2){ rot2+=0.1; if(rot2>6.28){ rot2=0; } }else if(mpo2<fm2-2){ rot2-=0.1; if(rot2<0){ rot2=6.28; } }
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
}
if(geet==2){
	if(mpo1>fm1){ for(0;scalex<100;scalex++){ thm3=scalex*(pc1)/100.0; thm5=146*scalex/100.0; if(mpo1<=pc1-(298-thm5)+100){ break; } } }
	else if(mpo1<fm1){ for(0;scalex>0;scalex--){ thm3=scalex*(pc1)/100.0; thm5=146*scalex/100.0; if(mpo1>=pc1-(298-thm5)+100){ break; } } }
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
}
if(meek==1&&bint==0){
if(mpo1>fm1){ manx+=(mpo1-fm1); }else if(mpo1<fm1){ manx-=(fm1-mpo1); }
if(mpo2>fm2){ many+=(mpo2-fm2); }else if(mpo2<fm2){ many-=(fm2-mpo2); }
	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
}

if(frr==1){
if(mpo1>fm1){ bonevet[bpos[shk]+5]+=(mpo1-fm1)*100; }else if(mpo1<fm1&&bonevet[bpos[shk]+5]>0){ bonevet[bpos[shk]+5]-=(fm1-mpo1)*100; }
if(mpo1>pc1-50){ SetCursorPos(100,mpo2); }else if(mpo1<50){ SetCursorPos(pc1-100,mpo2); }
	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
}


if(mpo1>20&&mpo1<137&&mpo2>10&&mpo2<pc2-40&&gane==1){ 
	for(int r=0;r<bno;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+200&&bonevet[bpos[r]]==-3){
thm9=1;
for(int bb=0;bb<bex;bb+=2){ if(bonext[bb]==r){ thm9=0; break; } }
if(thm9==1){
if(mpo1>35&&mpo1<45&&mpo2>gp[r]+40&&mpo2<gp[r]+55&&bom1==0){ bom=1; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>35&&mpo1<45&&mpo2>gp[r]+60&&mpo2<gp[r]+75&&bom1==0){ bom=2; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>35&&mpo1<45&&mpo2>gp[r]+80&&mpo2<gp[r]+95&&bom1==0){ bom=3; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
}
if(mpo1>35&&mpo1<45&&mpo2>gp[r]+120&&mpo2<gp[r]+135&&bom1==0){ bom=4; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>35&&mpo1<45&&mpo2>gp[r]+140&&mpo2<gp[r]+155&&bom1==0){ bom=5; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>35&&mpo1<45&&mpo2>gp[r]+160&&mpo2<gp[r]+175&&bom1==0){ bom=6; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>25&&mpo1<67&&mpo2>gp[r]+180&&mpo2<gp[r]+195&&bom1==0){ bom=7; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1<35||mpo1>45||mpo2<gp[r]+40||mpo2>gp[r]+175){ if(bom!=0&&bom<7&&bom1==0){bom=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); } }
if(mpo1<25||mpo1>67||mpo2<gp[r]+180||mpo2>gp[r]+195){ if(bom==7&&bom1==0){bom=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); } }
	break; }
}
}

if(bom1==1){
if(mpo1>fm1){
if(bom==1){  bonevet[bpos[shk]+2]+=1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
 if(bom==2){  bonevet[bpos[shk]+3]+=1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
 if(bom==3){  bonevet[bpos[shk]+4]+=1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
if(bom==4){  bonevet[bpos[shk]+6]+=1000; if(bonevet[bpos[shk]+6]>360000){ bonevet[bpos[shk]+6]=0; }
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
if(bom==5){  bonevet[bpos[shk]+7]+=1000; if(bonevet[bpos[shk]+7]>360000){ bonevet[bpos[shk]+7]=0; }
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
if(bom==6){  bonevet[bpos[shk]+8]+=1000; if(bonevet[bpos[shk]+8]>360000){ bonevet[bpos[shk]+8]=0; }
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
if(bom==7){  bonevet[bpos[shk]+5]+=1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
  
 }
if(mpo1<fm1){
if(bom==1){  bonevet[bpos[shk]+2]-=1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
 if(bom==2){  bonevet[bpos[shk]+3]-=1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
 if(bom==3){  bonevet[bpos[shk]+4]-=1000;
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
if(bom==4){  bonevet[bpos[shk]+6]-=1000; if(bonevet[bpos[shk]+6]<0){ bonevet[bpos[shk]+6]=360000; }
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
if(bom==5){  bonevet[bpos[shk]+7]-=1000; if(bonevet[bpos[shk]+7]<0){ bonevet[bpos[shk]+7]=360000; }
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
if(bom==6){  bonevet[bpos[shk]+8]-=1000; if(bonevet[bpos[shk]+8]<0){ bonevet[bpos[shk]+8]=360000; }
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
if(bom==7&&bonevet[bpos[shk]+5]>0){  bonevet[bpos[shk]+5]-=1000; if(bonevet[bpos[shk]+5]<0){ bonevet[bpos[shk]+5]=0; }
thm3=0; rax=0;
int j=0,k=0;
for(int z=0;z<bex;z++){  if(bonext[z]==-1&&bonext[z+1]==deci){ thm3=z+1; }  } 
if(thm3!=0){
for(int z=thm3+1;z<bex;z+=2){ if(bonext[z]==-1){ break; }  transg[emus]=bonext[z+1]; transp[emus]=bonext[z]; emus++; }  

for(j=0;j<emus;j++){
	for(k=j+1;k<emus;k++){
	if(transg[j]>transg[k]){
ray=transg[j]; transg[j]=transg[k]; transg[k]=ray;
ray=transp[j]; transp[j]=transp[k]; transp[k]=ray;
		}	}	}
for(int a=0;a<emus;a++){ position(transg[a],transp[a]); }	
		
}
 }
  
 }
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
if(mpo1>pc1-50){ SetCursorPos(100,mpo2); }else if(mpo1<50){ SetCursorPos(pc1-100,mpo2); }
}

fm1=mpo1; fm2=mpo2;	
	break;
}
case WM_LBUTTONUP:{
	geet=0; ReleaseCapture(); if(bint==2){ bint=1; }
if(bom1!=0){ bom1=0; bom=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); ReleaseCapture(); }
	break;
}

case WM_LBUTTONDBLCLK:{
if(mpo1>20&&mpo1<90&&mpo2>10&&mpo2<pc2-40&&gane==1){ 
	for(int r=0;r<bno;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+20){
sprintf(how,""); emus=0; if(bonevet[bpos[r]]==-3){ SendMessage(bine,WM_LBUTTONDOWN,1,1); }
for(int zz=0,mm=0;zz<strlen(bony);zz++){ if(mm>=r){ bmm=zz; for(int yy=zz;yy<strlen(bony);yy++){ if(bony[yy]==':'){ break; } how[emus]=bony[yy]; emus++; } break; } if(bony[zz]==':'){ mm++; } }
how[emus]=0;
onedit=24; editT=CreateWindow("edit",how ,WS_CHILD|WS_VISIBLE|ES_WANTRETURN|ES_AUTOHSCROLL,25,gp[r],80,13,bine,NULL,GetModuleHandle(NULL),NULL);   
DeleteObject(hf1);  hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); 
SendMessage(editT,WM_SETFONT,(WPARAM)hf1,1); 

	break; }
}
 }
 
break; }

case WM_KEYUP:{
meek=0;  bint=0;
	break;
}
case WM_KEYDOWN:{
switch(LOWORD(wbParam)){
case 'Z':
	case 'z':{
	if(clr1==0){ clr1=1; }else{ clr1=0; }
	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); 

break ;}

	case 'E':
	case 'e':{
if(shk>=0){ thm3=bonevet[bpos[shk]+5]*2; thm3+=2000; vc=0; sprite[0].x=0; sprite[0].y=thm3; sprite[0].z=0;
piv1=(bonevet[bpos[shk]+2]/1000); piv2=(bonevet[bpos[shk]+3]/1000); piv3=(bonevet[bpos[shk]+4]/1000);

ran1=cos( bonevet[bpos[shk]+1+5]*3.143/180000.0 ); rnd1=sin( bonevet[bpos[shk]+1+5]*3.143/180000.0  ); 
ran2=cos( bonevet[bpos[shk]+1+6]*3.143/180000.0  ); rnd2=sin( bonevet[bpos[shk]+1+6]*3.143/180000.0  ); 
ran3=cos( bonevet[bpos[shk]+1+7]*3.143/180000.0  ); rnd3=sin( bonevet[bpos[shk]+1+7]*3.143/180000.0  );  

sprite[vc].x-=piv1; sprite[vc].y-=piv2; sprite[vc].z-=piv3; 
//z
dist[0].x=(sprite[vc].x*ran3)-(sprite[vc].y*rnd3); dist[0].y=(sprite[vc].x*rnd3)+(sprite[vc].y*ran3); dist[0].z=sprite[vc].z;
//y
sprite[vc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*ran1)-(sprite[vc].z*rnd1 ); dist[0].z=(sprite[vc].y*rnd1)+(sprite[vc].z*ran1 );

sprite[vc].x=dist[0].x+piv1; sprite[vc].y=dist[0].y+piv2; sprite[vc].z=dist[0].z+piv3;

thm3=sprite[0].y; thm4=sprite[0].x; thm5=sprite[0].z;

sprintf(bony,"%sBone:",bony); bpos[bno]=bonco; bno++; bonevet[bonco]=-1; bonevet[bonco+1]=-4; bonco+=2; bonevet[bonco]=bonevet[bpos[shk]+2]-thm4; bonco++; bonevet[bonco]=bonevet[bpos[shk]+3]-thm3; bonco++; bonevet[bonco]=bonevet[bpos[shk]+4]-thm5; bonco++; bonevet[bonco]=8000; bonco++; bonevet[bonco]=0; bonco++; bonevet[bonco]=0; bonco++;
 bonevet[bonco]=0; bonco++; bonevet[bonco]=50; bonevet[bonco+1]=100; bonevet[bonco+2]=250; bonco+=3; 
 
 for(int y=0,k=0,j=0,u;y<=bex;y++){
if(bonext[y]==-1&&bonext[y+1]==shk){ k=shk+1; }
if(y>=bex){ k=shk+1; }
if(k>=shk){ lio=0; if(bonext[y+1]!=shk){ lio=1; }  if(y<bex){ y++; } for(0;y<bex;y++){ if(bonext[y]==-1){ break; }} 
j=0; for(int zz=y;zz<bex;zz++){ rnormx[j]=bonext[zz]; j++; } 
if(lio==1){ bonext[y]=-1; bonext[y+1]=shk; bonext[y+2]=bno-1; bonext[y+3]=shk; bex+=4; u=y+4; }
else{  bonext[y]=bno-1; bonext[y+1]=shk; bex+=2; u=y+2; } 

for(int g=0;g<j;g++){ bonext[u]=rnormx[g]; u++; }

 break; }
 }
 
 
for(int zz=0,mm=0,gg=0;zz<bex;zz+=2){ if(bonext[zz]==-1){ zz+=2; } 
if(bonext[zz]==shk){ 
for(mm=zz,gg=0;mm<bex;mm++ ,gg++){ rnormy[gg]=bonext[mm]; }
bonext[zz]=bno-1; bonext[zz+1]=shk; bex+=2;
for(mm=zz+2,gg=0;mm<bex;mm++ ,gg++){ bonext[mm]=rnormy[gg]; }
 
 break; }
}

ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }

break ;}

case 'S':
case 's':{
if(shk>=0){
frr=1; SetCapture(bine);
}	
	break;
}

		case '1':{
		 rot1=3.143; rot2=3.143;	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); 
			break;
		}
		case '2':{
		 rot1=3.143; rot2=4.7145;	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);			break;
		}
		case '3':{
		rot1=4.7145; rot2=3.143;	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
			break;
		}
		case VK_UP:{
	if(mpo1>200&&mpo2>40&&mpo2<pc2-40){
		rot2-=0.8; if(rot2<0){ rot2=6.286; }
	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
	}
			break;	}
	case VK_DOWN:{
	if(mpo1>200&&mpo2>40&&mpo2<pc2-40){
		rot2+=0.8; if(rot2>6.286){ rot2=0; }
	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
	}
			break;	}
		case VK_RIGHT:{
	if(mpo1>200&&mpo2>40&&mpo2<pc2-40){
		rot1-=0.8; if(rot1<0){ rot1=6.286; }
ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
	}
			break;	}
	case VK_LEFT:{
	if(mpo1>200&&mpo2>40&&mpo2<pc2-40){
		rot1+=0.8; if(rot1>6.286){ rot1=0; }
	ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE);
	}
			break;	}

		case VK_ADD:{
		if(zoom1<20000){ zoom1+=25; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
			break;
		}
		case VK_SUBTRACT:{
		if(zoom1>0){	zoom1-=25; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
			break;
		}
	case VK_CONTROL:{
		if(bint==0&&bout==1){ bint=1; }
		break;
	}
	case VK_SHIFT:{
 	{ meek=1; }
		break;
	}
	case VK_SPACE:{
	if(perss==1){ perss=0; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }else{ perss=1; ValidateRect(bine,NULL); InvalidateRect(bine,NULL,TRUE); }
		break;
	}
}
	break;
}


case WM_SIZE:{
	pc1=LOWORD(lbaram);
	pc2=HIWORD(lbaram);
ValidateRect(bine,NULL);
InvalidateRect(bine,NULL,TRUE);
	break;
}

	case WM_ERASEBKGND:{
		return 1;
		break;
	}
	
	default:
	return DefWindowProc(bine, MAssage, wbParam, lbaram);
	}
	return 0;
}

void BONE(){ DestroyWindow(bine); DestroyWindow(playd); rot1=0; rot2=3.143; rot3=1.57; manx=0; many=0; perss=1; shk=-1; frr=-1;
	HINSTANCE hInstancex;
	MSG msgx;
	WNDCLASSEX wcx;
	memset(&wcx,0,sizeof(wcx));
	wcx.cbSize		 = sizeof(WNDCLASSEX);
	wcx.lpfnWndProc	 = BANE;
	wcx.hInstance	 = hInstancex;
	wcx.style = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS ;
	wcx.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wcx.lpszClassName = "BANE1";
	wcx.hIcon		 = LoadIcon(GetModuleHandle(NULL), "ICO");
	wcx.hIconSm		 = LoadIcon(GetModuleHandle(NULL), "ICO");
	wcx.lpszMenuName  = NULL;
RegisterClassEx(&wcx); fconx=0; for(int a=0;a<fcon;a++){ pes[a]=0; }
bine = CreateWindowEx(0,"BANE1","Mobility Roll24",WS_VISIBLE|WS_CAPTION|WS_POPUPWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,900,600,hwnd,NULL,hInstancex,NULL);	

}

void getlight(){

can1=cos(ang1); san1=sin(ang1);
can2=cos(ang2); san2=sin(ang2);
can3=cos(ang3); san3=sin(ang3);

	setrender(FALSE);
	cleardept();
//end
viewport(vx,vy,1200,-1200);
sdepth(TRUE);
//start here
fin=0; vc=0; innu=0; ojn=0; tvc=0; finz=0; trc=0; trg=0; tra=0; trm=0; trss=-1;  thm9=0; thm8=0,nvc=0; 
for(int i=0;i<=fcon;i++){
if(ges[i]==-4){ innu=0; i++;  }
if(ges[i]==-5){ innu=1; i++;  }
if(ges[i]==-10){ tinz=0; xinz=xhit[tinz]; yinz=yhit[tinz]; i+=2; 	}
if(ges[i]==-16){ transs=ges[i+1]-1;  }
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
}
}
 if(ges[i]==-2){
if(clr1==0){ thm3=0; { thm3=0; } if(thm3==0){   if(CLAS==0){ if(thm8==0){ polygonzx(sprite,spont,vc,lin,transs); } }else{ conlinez(sprite,vc,wire,transs,FALSE); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,wire,transs,TRUE);  } } 
}
 else{ conlinez(sprite,vc,wire,255,TRUE); } 
if(ojn==1&&chase==0){  conlinez(sprite,vc,RGB(255,150,50),transs,TRUE); }  vc=0; finz=0; tvc=0;
}

if(ges[i]!=-2&&ges[i]!=-9){


	if(ges[i]>0&&finz==0){
sprite[vc].x=(xes[ges[i]-1]+trans1[trss])*scx; sprite[vc].y=(yes[ges[i]-1]+trans2[trss])*scy; sprite[vc].z=(zes[ges[i]-1]+trans3[trss])*scz; 
sprite[vc].x-=piv1+trans1[trss]; sprite[vc].y-=piv2+trans2[trss]; sprite[vc].z-=piv3+trans3[trss]; 
//z
dist[0].x=(sprite[vc].x*ran3)-(sprite[vc].y*rnd3); dist[0].y=(sprite[vc].x*rnd3)+(sprite[vc].y*ran3); dist[0].z=sprite[vc].z;
//y
sprite[vc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*ran1)-(sprite[vc].z*rnd1 ); dist[0].z=(sprite[vc].y*rnd1)+(sprite[vc].z*ran1 );

sprite[vc].x=dist[0].x+piv1+trans1[trss]; sprite[vc].y=dist[0].y+piv2+trans2[trss]; sprite[vc].z=dist[0].z+piv3+trans3[trss];
if(pivt==1){sprite[vc].x-=many; sprite[vc].y+=manx; sprite[vc].z+=tranz;  }

sprite[vc].x+=li1; sprite[vc].y+=li2; sprite[vc].z+=li3; 

sprite[vc].x*=(zoom1/30); sprite[vc].y*=(zoom1/30); sprite[vc].z*=(zoom1/30); 
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
sprite[vc].x=dist[0].x; sprite[vc].y=dist[0].y; sprite[vc].z=dist[0].z;  sprite[vc].x+=(vx/2); sprite[vc].y+=(vy/2);
thm3=sprite[vc].z; if(thm3>700){ thm3=700; }
if(vu==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm3); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm3); sprite[vc].y=w+(vy/2); 
 }
if(pivt==0){sprite[vc].x+=manx; sprite[vc].y+=many; } sprite[vc].z/=scz;  vc++;
}
}

if(ges[i]==-9){  if(clr1==0){ thm3=0; { thm3=0; } if(thm3==0){ if(thm8==0){ polymagezx(sprite,spont,spitt,vc,lin,transs,bitex[tinz],xinz,yinz); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,wire,transs,TRUE); } }
  } else{ conlinez(sprite,vc,wire,255,TRUE); }
if(ojn==1&&chase==0){ conlinez(sprite,vc,RGB(255,150,50),transs,TRUE);  } tvc=0; vc=0; finz=0; }

}
if(ges[i]==-24){  piv1=ges[i+1]/1000.0; piv2=ges[i+2]/1000.0; piv3=ges[i+3]/1000.0;  i+=3; }
if(ges[i]==-1){ fin=1; vc=0;   }
if(ges[i]==-2){ fin=0; }
if(ges[i]==-9){ finz=0; vc=0; tvc=0; }
if(ges[i]==-3){  i+=3;  }
if(ges[i]==-7){ ojn=1; }
if(ges[i]==-6){ ojn=0; }
if(ges[i]==-11){  i++; scx=ges[i]/100.0; i++; scy=ges[i]/100.0; i++; scz=ges[i]/100.0;  }
if(ges[i]==-12){  i++; ran1=cos( ges[i]*3.143/180.0 ); rnd1=sin( ges[i]*3.143/180.0 ); i++;
ran2=cos( ges[i]*3.143/180.0 ); rnd2=sin( ges[i]*3.143/180.0 ); i++;
ran3=cos( ges[i]*3.143/180.0 ); rnd3=sin( ges[i]*3.143/180.0 );  
}
if(ges[i]==-17){ CLAS=0; }
if(ges[i]==-18){ CLAS=1; }
}
}

void showlight(){ float x,y,z,distx;
for(int u=0,c=0;u<(vx*vy*4);u+=4,c++){
if(dept[c]>-40000){
x=deptx[c]-li1; y=depty[c]-li2; z=dept[c]-li3;
distx=(x*x)+(y*y)+(z*z); distx=sqrt(distx); 
x=10*minr/distx;
if(x>1.0){ x=1.0; } if(x<0.0){ x=0.0; }
y=x*3;
{

if(bit[u]*y>=255){ bit[u]=255; }else{ bit[u]*=y;  }
if(bit[u+1]*y>=255){ bit[u+1]=255; }else{ bit[u+1]*=y;  }
if(bit[u+2]*y>=255){ bit[u+2]=255; }else{ bit[u+2]*=y;  }
}

}
}

 }
 

