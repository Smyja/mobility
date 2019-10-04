void normals(int spp,int vic){
int in=0,co=0;
float vnx,vnx2,vnx3;
for(int u=vic;u<vcon;u++){ normx[u]=0; normy[u]=0; normz[u]=0; rxes[u]=0;  }

	for(int z=sp[spp]+1;z<fcon;z++){
	if(in==1){
		pes[co]=ges[z]; co++;
	}
	if(ges[z+1]<0&&in==1){ 
	if(co>0){ 
	for(int a=1;a<co-1;a++){  
vnx=((yes[pes[a]]-yes[pes[a-1]])*(zes[pes[a+1]]-zes[pes[a]]))-((zes[pes[a]]-zes[pes[a-1]])*(yes[pes[a+1]]-yes[pes[a]]));
vnx2=((zes[pes[a]]-zes[pes[a-1]])*(yes[pes[a+1]]-yes[pes[a]]))-((xes[pes[a]]-xes[pes[a-1]])*(zes[pes[a+1]]-zes[pes[a]]));
vnx3=((xes[pes[a]]-xes[pes[a-1]])*(xes[pes[a+1]]-xes[pes[a]]))-((yes[pes[a]]-yes[pes[a-1]])*(xes[pes[a+1]]-xes[pes[a]]));
normx[pes[a]]+=vnx; normy[pes[a]]+=vnx2; normz[pes[a]]+=vnx3; rxes[pes[a]]++;
	}
{
vnx=((yes[pes[0]]-yes[pes[co-1]])*(zes[pes[1]]-zes[pes[0]]))-((zes[pes[0]]-zes[pes[co-1]])*(yes[pes[1]]-yes[pes[0]]));
vnx2=((zes[pes[0]]-zes[pes[co-1]])*(yes[pes[1]]-yes[pes[0]]))-((xes[pes[0]]-xes[pes[co-1]])*(zes[pes[1]]-zes[pes[0]]));
vnx3=((xes[pes[0]]-xes[pes[co-1]])*(xes[pes[1]]-xes[pes[0]]))-((yes[pes[0]]-yes[pes[co-1]])*(xes[pes[1]]-xes[pes[0]]));
normx[pes[0]]+=vnx; normy[pes[0]]+=vnx2; normz[pes[0]]+=vnx3; rxes[pes[0]]++;
}
{
vnx=((yes[pes[co-1]]-yes[pes[co-2]])*(zes[pes[0]]-zes[pes[co-1]]))-((zes[pes[co-1]]-zes[pes[co-2]])*(yes[pes[0]]-yes[pes[co-1]]));
vnx2=((zes[pes[co-1]]-zes[pes[co-2]])*(yes[pes[0]]-yes[pes[co-1]]))-((xes[pes[co-1]]-xes[pes[co-2]])*(zes[pes[0]]-zes[pes[co-1]]));
vnx3=((xes[pes[co-1]]-xes[pes[co-2]])*(xes[pes[0]]-xes[pes[co-1]]))-((yes[pes[co-1]]-yes[pes[co-2]])*(xes[pes[0]]-xes[pes[co-1]]));
normx[pes[co-1]]+=vnx; normy[pes[co-1]]+=vnx2; normz[pes[co-1]]+=vnx3; rxes[pes[co-1]]++;
}
	 
	 }
		in=0;
	}
		if(ges[z]==-4||ges[z]==-5){  break; }
		if(ges[z]==-1){ co=0; in=1; }
	}
	for(int a=vic;a<vcon;a++){ normx[pes[a]]/=rxes[pes[a]]; normy[pes[a]]/=rxes[pes[a]]; normz[pes[a]]/=rxes[pes[a]]; }
}

void delgroup(int grpno){ 
for(int a=0,b=0;a<fcon;a++){ if(ges[a]==-4||ges[a]==-5){ b++; }
if(b>grpno){
for(0;a<fcon;a++){
if(ges[a]==-1){ a++;
for(0;a<fcon;a++){ if(ges[a]<0){ break; }
thm3=ges[a];
for(int z=ges[a]-1;z<vcon;z++){ xes[z]=xes[z+1]; yes[z]=yes[z+1]; zes[z]=zes[z+1];  } vcon--;
thm5=0; for(int z=a+1;z<fcon;z++){ if(ges[z]<0){ thm5=1; } if(ges[z]==-1){ thm5=0; } if(ges[z]>thm3&&thm5==0){ ges[z]-=1; } }
}

}

}
break;	
}	

}


sprintf(how,"");
	for(int a=0;a<fcon;a++){ if(ges[a]==-4){ sprintf(how,"%s;",how); }
		sprintf(how,"%s %d",how,ges[a]);
	}
	MessageBox(hwnd,how,NULL,NULL);
}

void align(){
	if(selen==1){
SetRect(&rc,0,csize2/2+95,25,csize2/2+20);
brush=CreateSolidBrush(RGB(114,114,114));
FillRect(hfc,&rc,brush);
DeleteObject(brush);

brush=CreateSolidBrush(RGB(80,80,80));
hp=CreatePen(PS_SOLID,1,RGB(50,50,50));
SelectObject(hfc,brush); SelectObject(hfc,hp);
RoundRect(hfc,35,77,pistx-15,100,7,7);
hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hfc,hf); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
SetRect(&rc,35,80,pistx-15,100); DrawText(hfc,"Import Model",-1,&rc,DT_CENTER);
DeleteObject(brush); DeleteObject(hp); DeleteObject(hf);
brush=CreateSolidBrush(RGB(40,40,40));
hp=CreatePen(PS_SOLID,1,RGB(10,10,10));
SelectObject(hfc,brush); SelectObject(hfc,hp);
RoundRect(hfc,35,130,pistx-15,csize2-29,7,7);
drp=has2; sprintf(how,""); drc=0; drm1=0;  thm4=0;
if(down>0){ if(drp>=135&&thm4==0){ thm5=drp; thm4=1; }
hi3=LoadIcon(GetModuleHandle(NULL),"ICO17"); 
if(mpo1>40&&mpo1<pistx-50&&mpo2>drp&&mpo2<drp+31){  SetTextColor(hfc,RGB(200,80,80)); }else{ SetTextColor(hfc,RGB(255,255,255)); }
SetRect(&rc,72,drp+9,pistx-52,csize2-40); DrawText(hfc,". . .",-1,&rc,NULL); DrawIcon(hfc,40,drp+1,hi3); objc++;
	drp+=35;
}
 objc=0;
for(int a=0,b=0;a<strlen(asset);a++){
if(asset[a]==';'){ how[b]=0; if(drp>=135&&thm4==0){ thm5=drp; thm4=1; }
if(mpo1>40&&mpo1<pistx-20&&mpo2>drp&&mpo2<drp+31){ drm1=a+2; SetTextColor(hfc,RGB(200,80,80)); }else{ SetTextColor(hfc,RGB(255,255,255)); }
SetRect(&rc,72,drp+9,pistx-52,csize2-40); DrawText(hfc,how,-1,&rc,NULL); DrawIcon(hfc,40,drp+1,browse[objc]); objc++;
drp+=35; b=0; how[0]=0;
for(0;a<strlen(asset);a++){
if(asset[a-1]=='\n'){ break; }	
} b=0;  }

how[b]=asset[a]; b++; 
if(drp>csize2-50){ break; }
}
impc=drp;
//scrollbar
{
RoundRect(hfc,pistx-30,137,pistx-15,csize2-42,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
brush1=CreateSolidBrush(RGB(90,90,90)); 
hp=CreatePen(PS_SOLID,1,RGB(90,90,90));
thm3=(thm5-has2); if(thm3<0){thm3=0;} thm3/=35; thm1q=thm3+138; thm2q=(drp-has2)-(csize2-42-139); if(thm2q<0){thm2q=0;}  thm2q=(csize2-42-139)-thm2q; if(thm2q<20){ thm2q=20; }
SelectObject(hfc,brush1); SelectObject(hfc,hp); thm3=thm1q+thm2q; if(thm3>csize2-42){ thm3=csize2-42; }
RoundRect(hfc,pistx-29,thm1q,pistx-16,thm3,10,10);	
DeleteObject(hf); DeleteObject(hp); DeleteObject(brush); DeleteObject(brush1); DeleteObject(hi); DeleteObject(hi1); DeleteObject(hi2); DeleteObject(hi3);
}
DeleteObject(hi3);
DeleteObject(brush); DeleteObject(hp); DeleteObject(hf);
	}
	if(selen==2){
SetRect(&rc,0,csize2/2+5,25,csize2/2-55);
brush=CreateSolidBrush(RGB(114,114,114));
FillRect(hfc,&rc,brush);
DeleteObject(brush); hi3=LoadIcon(GetModuleHandle(NULL),"ICO5");
if(sili==0){ hf=CreateFont(20,9,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); }else{ hf=CreateFont(20,9,0,0,0,0,1,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); }
SelectObject(hfc,hf); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
hi=LoadIcon(GetModuleHandle(NULL),"ICO"); DrawIcon(hfc,40,70,hi); DeleteObject(hi);
SetRect(&rc,75,75,pistx-25,csize2-40); DrawText(hfc,projname,-1,&rc,NULL); 
DeleteObject(hf);
hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); SelectObject(hfc,hf); 
for(int a=0,c=0,b=105;a<strlen(projs);a++){
	how[c]=projs[a]; c++;
	if(projs[a+1]==';'){ DrawIcon(hfc,pistx-60,b+2,hi3);
	how[c]=0; 
if(mpo1>75&&mpo1<pistx-25&&mpo2>b&&mpo2<b+17){ drm3=a+2; SetTextColor(hfc,RGB(200,80,80)); }else{ SetTextColor(hfc,RGB(255,255,255)); }
SetRect(&rc,75,b,pistx-25,csize2-40); DrawText(hfc,how,-1,&rc,NULL);
b+=17; c=0; 
for(0;a<strlen(projs);a++){
if(projs[a]=='\n'){ break; }	
}
} drk3=b;
}
DeleteObject(hi3);
	}
	if(selen==0){
SetRect(&rc,0,csize2/2-65,25,csize2/2-120);
brush=CreateSolidBrush(RGB(114,114,114));
FillRect(hfc,&rc,brush);
DeleteObject(brush);
hf=CreateFont(20,9,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hfc,hf); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
hi=LoadIcon(GetModuleHandle(NULL),"ICO16"); hi1=LoadIcon(GetModuleHandle(NULL),"ICO2"); hi2=LoadIcon(GetModuleHandle(NULL),"ICO3"); hi3=LoadIcon(GetModuleHandle(NULL),"ICO5");
brush=CreateSolidBrush(RGB(40,40,40));
hp=CreatePen(PS_SOLID,1,RGB(10,10,10));
SelectObject(hfc,brush); SelectObject(hfc,hp);
impc1=0;
for(int a=0,b=0,d=0,c=85;a<strlen(scene[0]);a++){
	how[b]=scene[0][a]; b++;
	if(scene[0][a]=='('){ how[b-1]=0; b=0; camp[d]=c;  impc1++;
	MoveToEx(hfc,40,c+20,NULL); LineTo(hfc,pistx-25,c+20); DrawIcon(hfc,pistx-67,c+2,hi3);
if(cam[d]==0){ DrawIcon(hfc,pistx-50,c+2,hi1); } else{ DrawIcon(hfc,pistx-50,c+2,hi2); 
brush=CreateSolidBrush(RGB(48,48,48)); SelectObject(hfc,brush);  RoundRect(hfc,40,c+23,pistx-25,c+277,6,6); DeleteObject(brush); brush=CreateSolidBrush(RGB(58,58,58)); SelectObject(hfc,brush);
DeleteObject(hf); hf1=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); SelectObject(hfc,hf1);
SetRect(&rc,50,c+25,pistx-55,csize2-30); DrawText(hfc,"Position",-1,&rc,NULL); sprintf(how1,"ID: %d",impc1-1); TextOut(hfc,pistx-100,c+28,how1,strlen(how1)); has=c+25+17;
SetRect(&rc,50,has,pistx-55,csize2-30); DrawText(hfc,"Z",-1,&rc,NULL); Rectangle(hfc,65,has,130,has+17); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px1=atof(how1); SetRect(&rc,67,has,127,has+15); DrawText(hfc,how1,-1,&rc,NULL); has+=17;
SetRect(&rc,50,has,pistx-55,csize2-30); DrawText(hfc,"Y",-1,&rc,NULL);  Rectangle(hfc,65,has,130,has+17); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px2=atof(how1); SetRect(&rc,67,has,127,has+15); DrawText(hfc,how1,-1,&rc,NULL); has+=17;
SetRect(&rc,50,has,pistx-55,csize2-30); DrawText(hfc,"X",-1,&rc,NULL);  Rectangle(hfc,65,has,130,has+17); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px3=atof(how1); SetRect(&rc,67,has,127,has+15); DrawText(hfc,how1,-1,&rc,NULL); has+=17;

SetRect(&rc,50,has,pistx-55,csize2-30); DrawText(hfc,"Rotation",-1,&rc,NULL); has+=17;
SetRect(&rc,50,has,pistx-55,csize2-30); DrawText(hfc,"X",-1,&rc,NULL); Rectangle(hfc,65,has,130,has+17); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px4=atof(how1); thm1=atof(how1)*180/3.143; sprintf(how1,"%f",thm1); SetRect(&rc,67,has,127,has+15); DrawText(hfc,how1,-1,&rc,NULL); has+=17;
SetRect(&rc,50,has,pistx-55,csize2-30); DrawText(hfc,"Z",-1,&rc,NULL);  Rectangle(hfc,65,has,130,has+17); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px5=atof(how1); thm1=atof(how1)*180/3.143; sprintf(how1,"%f",thm1); SetRect(&rc,67,has,127,has+15); DrawText(hfc,how1,-1,&rc,NULL); has+=17;
SetRect(&rc,50,has,pistx-55,csize2-30); DrawText(hfc,"Y",-1,&rc,NULL);  Rectangle(hfc,65,has,130,has+17); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px6=atof(how1); thm1=atof(how1)*180/3.143; sprintf(how1,"%f",thm1); SetRect(&rc,67,has,127,has+15); DrawText(hfc,how1,-1,&rc,NULL); has+=17;
has+=8;
SetRect(&rc,50,has,pistx-55,csize2-30); DrawText(hfc,"Far",-1,&rc,NULL); Rectangle(hfc,85,has,130,has+17); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px8=atof(how1); SetRect(&rc,87,has,127,has+15); DrawText(hfc,how1,-1,&rc,NULL); has+=17;
SetRect(&rc,50,has,pistx-55,csize2-30); DrawText(hfc,"Near",-1,&rc,NULL); Rectangle(hfc,85,has,130,has+17); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px9=atof(how1); SetRect(&rc,87,has,127,has+15); DrawText(hfc,how1,-1,&rc,NULL); has+=17;
SetRect(&rc,50,has+5,pistx-55,csize2-30); DrawText(hfc,"Ratio",-1,&rc,NULL); has+=17+5;
Rectangle(hfc,50,has,80,has+17); SetRect(&rc,83,has,pistx-55,csize2-30); DrawText(hfc,":",-1,&rc,NULL); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px10=atof(how1);  SetRect(&rc,53,has,77,has+15); DrawText(hfc,how1,-1,&rc,NULL); 
Rectangle(hfc,90,has,120,has+17); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} px11=atof(how1); SetRect(&rc,93,has,118,has+15); DrawText(hfc,how1,-1,&rc,NULL); 
has=c+50;
SetRect(&rc,136,has+5,pistx-26,csize2-30); DrawText(hfc,"SCL",-1,&rc,NULL); Rectangle(hfc,166,has+3,pistx-30,has+24); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} thm1=atof(how1); px7=thm1; sprintf(how1,"%f",thm1); SetRect(&rc,169,has+5,pistx-34,has+22); DrawText(hfc,how1,-1,&rc,NULL); has+=17;
has+=18;
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} thm1=atof(how1); px12=thm1;
Rectangle(hfc,136,has,146,has+10); if(thm1>0){ DeleteObject(brush); brush=CreateSolidBrush(RGB(220,220,220)); SelectObject(hfc,brush); Rectangle(hfc,138,has+2,144,has+8); DeleteObject(brush); }
SetRect(&rc,147,has-3,pistx-26,csize2-30); DrawText(hfc,"Perspective",-1,&rc,NULL); has+=19;
SetRect(&rc,147,has-3,pistx-26,csize2-30); DrawText(hfc,"Default",-1,&rc,NULL);

DeleteObject(brush); brush=CreateSolidBrush(RGB(48,48,48)); SelectObject(hfc,brush); Rectangle(hfc,136,has,146,has+10); DeleteObject(brush); if(defcam==impc1){ DeleteObject(brush); brush=CreateSolidBrush(RGB(220,220,220)); SelectObject(hfc,brush); Rectangle(hfc,138,has+2,144,has+8); DeleteObject(brush);  }

has+=18;
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} thm1=atof(how1); px13=thm1;
DeleteObject(brush); brush=CreateSolidBrush(RGB(48,48,48)); SelectObject(hfc,brush);  Rectangle(hfc,136,has,146,has+10); if(thm1>0){ DeleteObject(brush); brush=CreateSolidBrush(RGB(220,220,220)); SelectObject(hfc,brush); Rectangle(hfc,138,has+2,144,has+8); DeleteObject(brush); }

a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} thm1=atof(how1); px14=thm1;
SetRect(&rc,147,has-3,pistx-26,csize2-30); DrawText(hfc,"Viewport size",-1,&rc,NULL); has+=18;
DeleteObject(brush); brush=CreateSolidBrush(RGB(48,48,48)); SelectObject(hfc,brush); Rectangle(hfc,136,has+3,pistx-35,has+24); 
sprintf(how1,"%f",thm1); SetRect(&rc,139,has+5,pistx-34,has+22); DrawText(hfc,how1,-1,&rc,NULL); has+=17;
has+=18;
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} thm1=atof(how1); px15=thm1;
SetRect(&rc,136,has-3,pistx-26,csize2-30); DrawText(hfc,"Pecentage size",-1,&rc,NULL); has+=18;
DeleteObject(brush); brush=CreateSolidBrush(RGB(48,48,48)); SelectObject(hfc,brush); Rectangle(hfc,136,has+3,pistx-35,has+24); 
sprintf(how1,"%f %",thm1); SetRect(&rc,139,has+5,pistx-34,has+22); DrawText(hfc,how1,-1,&rc,NULL); has+=17;

has+=18;
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} thm1=atof(how1); px16=thm1;
SetRect(&rc,158,has-3,pistx-26,csize2-30); DrawText(hfc,"Background",-1,&rc,NULL);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} thm1=atof(how1); px17=thm1;
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} thm1=atof(how1); px18=thm1;
DeleteObject(brush); brush=CreateSolidBrush(RGB(px16,px17,px18)); SelectObject(hfc,brush); Rectangle(hfc,136,has-5,156,has+15); 
has+=17;
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==')'){ how1[g]=0; break;}} thm1=atof(how1); px19=thm1;
TextOut(hfc,65,has+6,"Skybox",6);
TextOut(hfc,130,has+6,"Image",5);
TextOut(hfc,190,has+6,"None",4);
DeleteObject(brush); brush=CreateSolidBrush(RGB(58,58,58)); SelectObject(hfc,brush); 
Rectangle(hfc,50,has+8,60,has+18);  Rectangle(hfc,115,has+8,125,has+18); Rectangle(hfc,175,has+8,185,has+18);
DeleteObject(brush); { DeleteObject(brush); brush=CreateSolidBrush(RGB(220,220,220)); SelectObject(hfc,brush);
if(thm1==0){ Rectangle(hfc,52,has+10,58,has+16); }  if(thm1==1){ Rectangle(hfc,117,has+10,123,has+16); } if(thm1==2){ Rectangle(hfc,177,has+10,183,has+16); } 
DeleteObject(brush); }

shwcamera(px1,px2,px3,px4,px5,px6,px7,px8-400,px9+400,px10,px11,px12,px16,px17,px18,px19); 
DeleteObject(hf1); DeleteObject(brush); hf=CreateFont(20,9,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); SelectObject(hfc,hf);
	} SetTextColor(hfc,RGB(0,0,0));
DrawIcon(hfc,40,c+2,hi); SetRect(&rc,75,c,pistx-69,csize2-40); DrawText(hfc,how,-1,&rc,NULL); SetTextColor(hfc,RGB(255,255,255));
if(cam[d]==0){	c+=30; }else{ c+=280; } jua=c;
	if(cam[d]==0){	for(0;a<strlen(scene[0]);a++){ if(scene[0][a]==')'){ break; } } }
d++;	}
}
DeleteObject(hf1); DeleteObject(brush);DeleteObject(hf); DeleteObject(hi2); DeleteObject(hi3); DeleteObject(hi1);
	}
if(chase==0){
SetRect(&rc,csize1-22,csize2/2+5,csize1,csize2/2-57);
brush=CreateSolidBrush(RGB(114,114,114));
FillRect(hfc,&rc,brush);
DeleteObject(brush);	
}
if(chase==1){
SetRect(&rc,csize1-22,csize2/2+5,csize1,csize2/2+65);
brush=CreateSolidBrush(RGB(114,114,114));
FillRect(hfc,&rc,brush);
DeleteObject(brush);	
}
if(chase==2){
SetRect(&rc,csize1-22,csize2/2-108,csize1,csize2/2-60);
brush=CreateSolidBrush(RGB(114,114,114));
FillRect(hfc,&rc,brush);
DeleteObject(brush);	
}
if(chase==3){
SetRect(&rc,csize1-22,csize2/2+68,csize1,csize2/2+135);
brush=CreateSolidBrush(RGB(114,114,114));
FillRect(hfc,&rc,brush);
DeleteObject(brush);	
}
}

int zoly=0;
LRESULT CALLBACK COLLI(HWND POP, UINT MAssage, WPARAM wqParam, LPARAM lqParam) {
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
if(pmp1>=0){ sprintf(colipot[zoly],"%s",clik1); DestroyWindow(POP); ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);  }
if(mpo1>10&&mpo1<40&&mpo2>10&&mpo2<40){ sprintf(colipot[zoly],""); DestroyWindow(POP); ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);  }
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

void colly(int no){ zoly=no;
	HINSTANCE hInstancex;
	MSG msgx;
	WNDCLASSEX wcx;
	memset(&wcx,0,sizeof(wcx));
	wcx.cbSize		 = sizeof(WNDCLASSEX);
	wcx.lpfnWndProc	 = COLLI;
	wcx.hInstance	 = hInstancex;
	wcx.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wcx.lpszClassName = "WindowClassq3";
	wcx.hIcon		 = LoadIcon(GetModuleHandle(NULL), "IC");
	wcx.hIconSm		 = LoadIcon(GetModuleHandle(NULL), "IC");
	wcx.lpszMenuName  = NULL;
RegisterClassEx(&wcx); int pgx=csize1-270,pgy=mpo2-200; if(pgx+240>GetSystemMetrics(SM_CXSCREEN)-30){ pgx=GetSystemMetrics(SM_CXSCREEN)-270; }
if(pgy+360>GetSystemMetrics(SM_CYSCREEN)-50){ pgy=GetSystemMetrics(SM_CYSCREEN)-410; } if(pgy<50){ pgy=50; } if(pgx<50){ pgx=50; }
	POP = CreateWindowEx(0,"WindowClassq3","Popup",WS_VISIBLE|WS_POPUPWINDOW,pgx,pgy,240,360,hwnd,NULL,hInstancex,NULL);	

}
//collision


LRESULT CALLBACK PAPA1(HWND POP1, UINT MAssage, WPARAM wqParam1, LPARAM lqParam1) {
	switch(MAssage) {
	case WM_CREATE:{
	
		break;
	}
case WM_PAINT:{
hdc=BeginPaint(POP1,&ps);
hfc=CreateCompatibleDC(hdc);
hb1=CreateCompatibleBitmap(hdc,240,360); popst2=0; popst3=0;
SelectObject(hfc,hb1); brush=CreateSolidBrush(RGB(48,48,48)); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
SetRect(&rc,0,0,240,360); FillRect(hfc,&rc,brush); DeleteObject(brush);
 hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); SelectObject(hfc,hf);  
if(strlen(funcs)<=0){ SetRect(&rc,0,173,240,360); DrawText(hfc,"Nothing Here",-1,&rc,DT_CENTER); }else{ 
	for(int a=0,t=0,b=0,c=popst;a<strlen(funcs);a++){ popst1=c;
		how[b]=funcs[a]; b++;
	if(funcs[a+1]==':'){ t++; a++; popst2++; if(c<50){ popst3=c; } how[b]=0; b=0; 
	if(mpo2>c&&mpo2<c+17){ usea=t; SetTextColor(hfc,RGB(255,100,100)); } else{ SetTextColor(hfc,RGB(255,255,255)); } SetRect(&rc,10,c,210,360); DrawText(hfc,how,-1,&rc,DT_SINGLELINE); c+=17; }
	} DeleteObject(hf);
brush=CreateSolidBrush(RGB(48,48,48)); SetTextColor(hfc,RGB(255,255,255)); SetBkMode(hfc,TRANSPARENT);
SetRect(&rc,0,0,240,50); FillRect(hfc,&rc,brush); DeleteObject(brush);
hf=CreateFont(20,9,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL"); SelectObject(hfc,hf); SetRect(&rc,0,10,240,360); DrawText(hfc,"Select a Function",-1,&rc,DT_CENTER);	DeleteObject(hf); 
}
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
EndPaint(POP1,&ps);
	break;
}
case WM_LBUTTONDOWN:{
if(mpo1>220&&mpo1<230&&mpo2>55&&mpo2<thm8){ popst+=70; ValidateRect(POP1,NULL); InvalidateRect(POP1,NULL,TRUE); }
if(mpo1>220&&mpo1<230&&mpo2>(thm9+thm8)&&mpo2<325){ popst-=70; ValidateRect(POP1,NULL); InvalidateRect(POP1,NULL,TRUE); }
if(pmp1>=0){  sprintf(how,"%s",pivtc); 
for(int i=0,c=-1,b=0;i<strlen(pivtc);i++){
if(pivtc[i]==':'){ c++; }
if(c>=vib){ i++;
for(int d=0,y=0;i<strlen(pivtc);i++){ if(d>=clik){ how[i]=0;
for(0;i<strlen(pivtc);i++){ if(pivtc[i]==','||pivtc[i]=='.'||pivtc[i]=='-'){ break;}} i++;
for(y=0;i<=strlen(pivtc);i++){ BUMP[y]=pivtc[i]; y++; } BUMP[y]=0; 
reho=0; for(int q=0;q<strlen(hlop);q++){ if(hlop[q]==':'){ reho++; } }
if(usea<=reho){ sprintf(pivtc,"%s%d,%s",how,usea-1,BUMP); }else if(usea>reho&&usea-reho<=pic){ sprintf(pivtc,"%s%d.%s",how,usea-1-reho,BUMP); }else{  sprintf(pivtc,"%s%d-%s",how,usea-1-reho-pic,BUMP); }

break; } if(pivtc[i]==','||pivtc[i]=='.'||pivtc[i]=='-'){ d++; }}

break; }
}
DestroyWindow(POP1); ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);  }
	break;
}
case WM_MOUSEMOVE:{
	mpo1=LOWORD(lqParam1); mpo2=HIWORD(lqParam1);
if(mpo1>10&&mpo1<218&&mpo2>50&&mpo2<360){ thm3=mpo2-50; thm3*=1.0; thm3/=17; if(thm3!=pmp1){ pmp1=thm3; ValidateRect(POP1,NULL); InvalidateRect(POP1,NULL,TRUE); } }else{ if(pmp1!=-1){ pmp1=-1; ValidateRect(POP1,NULL); InvalidateRect(POP1,NULL,TRUE); }}
	break;
}
case WM_KEYDOWN:{
	switch(LOWORD(wqParam1)){
		case VK_ESCAPE:{
			DestroyWindow(POP1);
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
	return DefWindowProc(POP1, MAssage, wqParam1, lqParam1);
	}
	return 0;
}

void pop1(){
	HINSTANCE hInstancex;
	MSG msgx;
	WNDCLASSEX wcx;
	memset(&wcx,0,sizeof(wcx));
	wcx.cbSize		 = sizeof(WNDCLASSEX);
	wcx.lpfnWndProc	 = PAPA1;
	wcx.hInstance	 = hInstancex;
	wcx.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wcx.lpszClassName = "WindowClassq1";
	wcx.hIcon		 = LoadIcon(GetModuleHandle(NULL), "IC");
	wcx.hIconSm		 = LoadIcon(GetModuleHandle(NULL), "IC");
	wcx.lpszMenuName  = NULL;
RegisterClassEx(&wcx); int pgx=csize1-270,pgy=mpo2-200; if(pgx+240>GetSystemMetrics(SM_CXSCREEN)-30){ pgx=GetSystemMetrics(SM_CXSCREEN)-270; }
if(pgy+360>GetSystemMetrics(SM_CYSCREEN)-50){ pgy=GetSystemMetrics(SM_CYSCREEN)-410; } if(pgy<50){ pgy=50; } if(pgx<50){ pgx=50; }
	POP1 = CreateWindowEx(0,"WindowClassq1","Popup",WS_VISIBLE|WS_POPUPWINDOW,pgx,pgy,240,360,hwnd,NULL,hInstancex,NULL);	

}


void import(char *pat){
{
sprintf(how,"%s",pat);
if(alert){ sprintf(scenerio[curscn],"%s%s\n",scenerio[curscn],how); }
for(int i=strlen(how);i>0;i--){
		if(how[i]=='\\'){
	for(int y=0;y<i;y++){
		mtl[y]=how[y];
	} mtl[i]=0;
		break; }
	}
sprintf(matlab,""); sprintf(moblat,""); 
//import
{  vinc=vcon; 
hnd=CreateFile(how,GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
if(alert){ if(hnd==INVALID_HANDLE_VALUE){ MessageBox(hwnd,"Could not load file","Error",MB_OK|MB_ICONERROR);  } }
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
if(moblat[a+1]=='\n'||moblat[a+1]=='\r'){  p=0;  
for(int i=0;i<strlen(vch);i++,p++){
	how[p]=vch[i];
if(vch[i]==' '){ how[p+1]=0; p=-1; ges[fcon]=atoi(how)+vinc;  fcon++; }
}
how[p+1]=0; p=-1; ges[fcon]=atoi(how)+vinc; fcon++; ges[fcon]=-2; fcon++;
vin=0;  break; }
	
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
	if(moblat[a]=='v'&&moblat[a+1]==' '){ a++; vin=1; }
	if(moblat[a]=='f'&&moblat[a+1]==' '){ a++; vin=2; ges[fcon]=-1; fcon++; }
	
if(moblat[a]=='o'&&moblat[a+1]==' '){ a+=2; ges[fcon]=-4; sp[dc]=fcon; hnd2[dc]=hnd1;  ges[fcon+1]=-6; fcon+=2; dc++; grp[gnd]=';'; gnd++;
	for(0;a<vik;a++){
if(moblat[a]=='\n'||moblat[a]=='\r'){ grp[gnd]=':'; hlop[hnd1]=':'; hnd1++; hlop[hnd1]=0;  gnd++;  break; }
	grp[gnd]=moblat[a]; gnd++;
	hlop[hnd1]=moblat[a]; hnd1++;
	}
 }

if(moblat[a]=='g'&&moblat[a+1]==' '){ a+=2; ges[fcon]=-4; sp[dc]=fcon; hnd2[dc]=hnd1;  ges[fcon+1]=-6; fcon+=2; dc++; grp[gnd]=';'; gnd++;
	for(0;a<vik;a++){
if(moblat[a]=='\n'||moblat[a]=='\r'){ grp[gnd]=':'; hlop[hnd1]=':'; hnd1++; hlop[hnd1]=0;  gnd++;  break; }
	grp[gnd]=moblat[a]; gnd++;
	hlop[hnd1]=moblat[a]; hnd1++;
	} 
 }

if(moblat[a]=='u'&&moblat[a+1]=='s'&&moblat[a+2]=='e'&&moblat[a+3]=='m'&&moblat[a+4]=='t'&&moblat[a+5]=='l'&&moblat[a+6]==' '){ a+=7; cr=255; cg=255; cb=255;
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
	if(matlab[w]=='K'&&matlab[w+1]=='d'&&matlab[w+2]==' '){  w+=2; q=0; ba=1; }
}
		break; }
		
	}
ges[fcon]=-3; fcon++; ges[fcon]=cr; fcon++; ges[fcon]=cg; fcon++; ges[fcon]=cb; fcon++; 
}

	if(moblat[a]=='m'&&moblat[a+1]=='t'&&moblat[a+2]=='l'&&moblat[a+3]=='l'&&moblat[a+4]=='i'&&moblat[a+5]=='b'&&moblat[a+6]==' '){ a+=7;
	how[0]='\\';
	for(int e=1;a<vik;a++,e++){
	if(moblat[a]=='\n'||moblat[a]=='\r'){ how[e]=0;  break;}
	how[e]=moblat[a];
	}
sprintf(mtl,"%s%s",mtl,how); mtl[strlen(mtl)]=0;
hnd=CreateFile(mtl,GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
size1=GetFileSize(hnd,NULL);
ReadFile (hnd, matlab, size1, NULL, NULL) ;
CloseHandle(hnd); matlab[size1]=0;

	 }
} 
}
//END IMPORT 
grp[gnd]=';'; gnd++; alert=TRUE;
 ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
 }
}


