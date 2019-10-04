void loading(){ 
if(mpo1>csize1-385&&mpo1<csize1-375&&mpo2>10&&mpo2<20){ if(sky!=0){ sky=0; CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); } }
if(mpo1>csize1-385&&mpo1<csize1-375&&mpo2>25&&mpo2<35){ if(sky!=1){ sky=1; CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); } }
if(mpo1>csize1-385&&mpo1<csize1-375&&mpo2>40&&mpo2<50){ if(sky!=2){ sky=2; CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); } }

thm3=scale*(csize1-penx-pistx)/100.0;
thm5=146*scale/100.0; 
if(mpo1<csize1-(298-thm5-8)&&mpo1>csize1-(298-thm5+8)&&mpo2>17&&mpo2<33){
	mup=1; SetCapture(hwnd); 
}

if(drj!=0&&chase==2){ drj1=1; }
if(mpo1>csize1-150&&mpo1<csize1-140&&mpo2>70&&chase==2){
	for(int r=0;r<pic;r++){
if(mpo2>=pivp[r]+93&&mpo2<=pid[r]-4&&pivy[r]==0){ clik=0;
for(int u=pivp[r]+94;u<pid[r];u+=20,clik++){ if(u>=mpo2){ break;} }
sprintf(funcs,"%s",hlop); cus1=strlen(funcs); clik--; int y=0; y=cus1;
for(int b=0;y<(cus1+strlen(pivtc));y++){ funcs[y]=pivtc[b]; b++; if(pivtc[b-1]==':'){ for(0;b<strlen(pivtc);b++){ if(pivtc[b]==';'){ b++; break; }}}} funcs[y]=0; cus1=strlen(funcs); y=cus1;
for(int b=0;b<strlen(scene[0]);y++,b++){ funcs[y]=scene[0][b]; if(scene[0][b]=='('){ funcs[y]=':'; for(0;b<strlen(scene[0]);b++){ if(scene[0][b]==')'){ break;}}} } funcs[y]=0;
vib=r;
pop1();
  break; }
	}	
	}

if(mpo1>csize1-85&&mpo1<csize1-70&&mpo2>70&&mpo2<csize2-30&&chase==2){
	for(int r=0;r<pic;r++){
if(mpo2>=pivp[r]&&mpo2<=pivp[r]+20){
sprintf(how,"%s",pivtc);
for(int i=0,b=1,c=0;i<strlen(pivtc);i++){
if(b>r){ 
if(r>0){ for(0;i<strlen(pivtc);i++){ if(pivtc[i]==';'){ break; }} i++; }  how[i]=0;
for(0;i<strlen(pivtc);i++){ if(pivtc[i]==';'){ break; }} i++;
for(0;i<strlen(pivtc);i++){ BUMP[c]=pivtc[i]; c++; } BUMP[c]=0;
sprintf(pivtc,"%s%s",how,BUMP);
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
break;}
if(pivtc[i]==':'){ b++; }
}
  break; }
	}
}

if(mpo1>csize1-125&&mpo1<csize1-110&&mpo2>70&&mpo2<csize2-30&&chase==2){
	for(int r=0;r<pic;r++){
if(mpo2>=pivp[r]+93&&mpo2<=pid[r]-4&&pivy[r]==0){ clik=0;
for(int u=pivp[r]+94;u<pid[r];u+=20,clik++){ if(u>=mpo2){ break;} }
vib=r; clik--;
if(clik>0){ sprintf(how,"%s",pivtc); 
for(int i=0,c=0,b=0,d=0;i<strlen(pivtc);i++){ 
if(b>r){
for(0;i<strlen(pivtc);i++){
if(c>=clik){ how[i]=0;  
for(0;i<strlen(pivtc);i++){ if(pivtc[i]==','||pivtc[i]=='.'||pivtc[i]=='-'){ break; }} i++;
for(0;i<strlen(pivtc);i++){ BUMP[d]=pivtc[i]; d++; } BUMP[d]=0;
break;}
if(pivtc[i]==','||pivtc[i]=='.'||pivtc[i]=='-'){ c++; }}	
} if(pivtc[i]==':'){b++;}}
sprintf(pivtc,"%s%s",how,BUMP);
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}
  break; }
	}
}

if(mpo1>csize1-penx+5&&mpo1<csize1-85&&mpo2>70&&mpo2<csize2-30&&chase==2){
for(int r=0;r<pic;r++){
if(mpo2>=pivp[r]&&pivy[r]==0&&mpo2>pid[r]&&mpo2<pid[r]+17){
for(int i=0,b=0,c=0;i<=strlen(pivtc);i++){
	how[c]=pivtc[i]; c++;
if(b>r){ i++; sprintf(how1,"%s",pivtc);
for(0;i<=strlen(pivtc);i++){
	how[c]=pivtc[i]; c++;
if(pivtc[i]==';'){ 
how[c-1]=0; 
sprintf(pivtc,"%s0, ;",how); i+=1;
for(0;i<=strlen(how1);i++){ sprintf(pivtc,"%s%c",pivtc,how1[i]); }
break;}
}
break; }
if(pivtc[i]==':'){ b++; }
}
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}
if(mpo2>=pivp[r]&&mpo2<=pivp[r]+17){
	if(pivy[r]==1){ pivy[r]=0; }else{ pivy[r]=1; }
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}
}
}
	
if(mpo1>40&&mpo1<pistx-50&&mpo2>85&&mpo2<jua+30&&selen==0){
	for(int r=0;r<impc1;r++){
if(mpo2>=camp[r]&&mpo2<=camp[r]+250&&cam[r]==1){
if(mpo2>camp[r]+107&&mpo2<camp[r]+117&&mpo1>136&&mpo1<146){ defcam=r+1; drz1=0; if(drz!=0&&drz1==0){ drz=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); ReleaseCapture(); } }
if(mpo2>camp[r]+80&&mpo2<camp[r]+97&&mpo1>136&&mpo1<146){ 
for(int u=0,c=0;u<strlen(scene[0]);u++){ if(c>=r+1){ r=u; break;} if(scene[0][u]=='('){  c++; }} for(int u=r,m=0;u<strlen(scene[0]);u++){ if(scene[0][u+1]==','){ m++; } if(m>=12){ if(scene[0][u]=='1'){ scene[0][u]='0'; }else{ scene[0][u]='1'; } break; }} }
if(mpo2>camp[r]+120&&mpo2<camp[r]+137&&mpo1>130&&mpo1<146){  
for(int u=0,c=0;u<strlen(scene[0]);u++){ if(c>=r+1){ r=u; break;} if(scene[0][u]=='('){  c++; }} for(int u=r,m=0;u<strlen(scene[0]);u++){ if(scene[0][u+1]==','){ m++; } if(m>=13){ if(scene[0][u]=='1'){ scene[0][u]='0'; }else{ scene[0][u]='1'; } break; }} }
 ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
	break; }
	}
}
if(drz!=0&&selen==0){ drz1=1; int y=0,t=0;
	for(int r=0;r<impc1;r++){
if(mpo2>=camp[r]&&mpo2<=camp[r]+250&&cam[r]==1){
y=0;
for(t=0;t<=r;y++){
if(scene[0][y]=='('){ t++; }
	how1[y]=scene[0][y];
} how1[y]=0;
for(t=0;t<drz-1;y++){ if(scene[0][y]==','){ t++; } how1[y]=scene[0][y]; } how1[y]=0;
for(t=0;y<strlen(scene[0]);y++){
	how[t]=scene[0][y]; t++;
if(scene[0][y+1]==','){ how[t]=0; break;}
}
adjust=atof(how); y++;
for(t=0;y<strlen(scene[0]);y++){ how[t]=scene[0][y]; t++; } how[t]=0; 
sprintf(adjust1,"%s",how1); sprintf(adjust2,"%s",how); 
 break; }
	}	
}

if(mpo1>40&&mpo1<pistx-50&&mpo2>70&&mpo2<csize2-30&&selen==0){
	for(int r=0;r<impc1;r++){
if(mpo2>=camp[r]&&mpo2<=camp[r]+20){
if(cam[r]==0){ for(int q=0;q<impc1;q++){ cam[q]=0; } cam[r]=1; }else{ cam[r]=0; }
 if(mpo1>pistx-69&&mpo1<pistx-69+30){  cam[r]=0; 
for(int z=0,u=0;z<strlen(scene[0]);z++){ if(u>=r){ if(z>=1){ for(0;z<strlen(scene[0]);z++){ if(scene[0][z]==')'){ z++; break; } } } pc2=z; for(0;z<strlen(scene[0]);z++){ if(scene[0][z+1]=='('){  break; } } break; } if(scene[0][z]=='('){ u++; } } 
  for(pc1=0;pc1<pc2;pc1++){ how[pc1]=scene[0][pc1]; } how[pc1]=0;
  for(0;pc1<strlen(scene[0]);pc1++){ if(scene[0][pc1]==')'){ pc1++; break;} }
  for(z1=0;pc1<strlen(scene[0]);pc1++){ how1[z1]=scene[0][pc1]; z1++; } how1[z1]=0;
  sprintf(scene[0],"%s%s",how,how1); 
  }
 ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);		
 break; }
	}	
}
if(chase==3){
for(int r=0;r<phys2;r++){
if(mpo2>=phyp[r]&&mpo2<=phyp[r]+20&&mpo1>csize1-penx+2&&mpo1<csize1-43){ 
if(phyc[r]==0){ phyc[r]=1; }else{ phyc[r]=0; }  ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);		break; }
	}
}
//physics
if(chase==3){
for(int r=0;r<phys2;r++){
if(mpo2>=phyp[r]&&mpo2<=phyp[r]+400&&phyc[r]==1){
if(mpo1>csize1-penx+11&&mpo1<csize1-penx+23&&mpo2>phyp[r]+50&&mpo2<phyp[r]+62){ if(gravity[r]==0){ gravity[r]=1; }else{ gravity[r]=0; } }
if(mpo1>csize1-penx+11&&mpo1<csize1-penx+23&&mpo2>phyp[r]+70&&mpo2<phyp[r]+82){ if(collide[r]==0){ collide[r]=1; }else{ collide[r]=0; } }
if(mpo1>csize1-penx+11&&mpo1<csize1-135&&mpo2>phyp[r]+110&&mpo2<phyp[r]+122&&collide[r]==1){ concat(); colly(r); }
if(mpo1>csize1-penx+11&&mpo1<csize1-penx+23&&mpo2>phyp[r]+150&&mpo2<phyp[r]+162){ coliso[r]=0; }
if(mpo1>csize1-penx+11&&mpo1<csize1-penx+23&&mpo2>phyp[r]+170&&mpo2<phyp[r]+182){ coliso[r]=1; }
if(mpo1>csize1-penx+11&&mpo1<csize1-penx+23&&mpo2>phyp[r]+190&&mpo2<phyp[r]+202){ coliso[r]=2; }
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
 break; }  }	
}

if(phm!=0){ phm1=1;
	for(int r=0;r<phys2;r++){
if(mpo2>=phyp[r]&&mpo2<=phyp[r]+400&&phyc[r]==1){

 break; }  }
}
	
if(chase==0){
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+400&&ges[sp[r]+1]==-7){
{
if(mpo2>gp[r]+280&&mpo2<gp[r]+290&&mpo1>csize1-penx+11&&mpo1<csize1-penx+21){ for(int u=sp[r];u<fcon;u++){ if(ges[u]==-26||ges[u]==-13||ges[u]==-14){ ges[u]=-14; } if(ges[u]==-2||ges[u]==-9){ break;} } }
if(mpo2>gp[r]+280&&mpo2<gp[r]+290&&mpo1>csize1-penx+106&&mpo1<csize1-penx+116){ for(int u=sp[r];u<fcon;u++){ if(ges[u]==-26||ges[u]==-13||ges[u]==-14){ ges[u]=-13; } if(ges[u]==-2||ges[u]==-9){ break;} }  }
if(mpo2>gp[r]+300&&mpo2<gp[r]+310&&mpo1>csize1-penx+155&&mpo1<csize1-penx+165){ for(int u=sp[r];u<fcon;u++){ if(ges[u]==-26||ges[u]==-13||ges[u]==-14){ ges[u]=-26; } if(ges[u]==-2||ges[u]==-9){ break;} }  }
if(mpo2>gp[r]+280&&mpo2<gp[r]+290&&mpo1>csize1-penx+155&&mpo1<csize1-penx+165){ if(ges[sp[r]+15]==-21){ ges[sp[r]+15]=-22; } else{ ges[sp[r]+15]=-21; }}
if(mpo2>gp[r]+300&&mpo2<gp[r]+310&&mpo1>csize1-penx+11&&mpo1<csize1-penx+21){ if(ges[sp[r]+14]==-19){ ges[sp[r]+14]=-20; } else{ ges[sp[r]+14]=-19; }}
if(mpo2>gp[r]+300&&mpo2<gp[r]+310&&mpo1>csize1-penx+106&&mpo1<csize1-penx+116){ if(ges[sp[r]+14]==-19){ ges[sp[r]+14]=-23; } else{ ges[sp[r]+14]=-19; }}
CLEAN=TRUE; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}
 break; }  }
	}
if(dr==10){ dr1=1;
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+400&&ges[sp[r]+1]==-7){
{
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-16){ dame=u; break;}}
}
 break; }  }
	}
	
{
if(dr==4||dr==5||dr==6){ dr1=1;
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+400&&ges[sp[r]+1]==-7){
{
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-12){ dame=u; break;}}
}
 break; }  }
	}
}
{
if(dr==7||dr==8||dr==9){ dr1=1;
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+400&&ges[sp[r]+1]==-7){
{
for(int u=sp[r];u<fcon;u++){ if(ges[u]==-11){ dame=u; break;}}
}
 break; }  }
	}
}
{
if(dr==1||dr==2||dr==3){ dr1=1;
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+400&&ges[sp[r]+1]==-7){
kon=r; break; }
	}
SetCapture(hwnd);
 }
}
if(mpo1>csize1-penx+6&&mpo1<csize1-90&&mpo2>70&&mpo2<ga+30&&chase==0){
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+20){ 
if(ges[sp[r]+1]==-6){ ges[sp[r]+1]=-7; }else{ ges[sp[r]+1]=-6; } CLEAN=TRUE;  ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);		break; }
	}
	 }
if(mpo1>pistx-29&&mpo1<pistx-16&&mpo2>139&&mpo2<thm1q&&selen==1){ has2-=130; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
if(mpo1>pistx-29&&mpo1<pistx-16&&mpo2>thm1q+thm2q&&mpo2<csize2-42&&selen==1){ has2+=130; ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }
if(mpo1>40&&pistx-25&&mpo2>85&&mpo2<impc1&&selen==0){
	int d=mpo2; d-=85; d/=30;  
curscn=d;
vcon=0; fcon=0; hnd1=0; 
MessageBox(hwnd,scenerio[d],NULL,NULL);
for(int a=0;a<9000;a++){ hlop[a]=0; gp[a]=0; sp[a]=0; }
for(int a=0,b=0;a<strlen(scenerio[d]);a++){
	freeuse[b]=scenerio[d][a]; b++;
if(scenerio[d][a]=='\n'){ freeuse[b-2]=0; b=0; 
alert=FALSE; import(freeuse); 
}
}
}
	if(mpo1>93&&mpo1<126&&mpo2>10&&mpo2<40){
ofn.lStructSize = sizeof(ofn);
ofn.hwndOwner = hwnd;
ofn.lpstrFile = save;
ofn.nMaxFile = MAX_PATH;
ofn.Flags = OFN_EXPLORER | OFN_PATHMUSTEXIST | OFN_OVERWRITEPROMPT|OFN_HIDEREADONLY;
ofn.lpstrDefExt = "mobility";
ofn.lpstrFilter="Mobility Script File (*.mobility)\0*.mobility\0";
if(GetSaveFileName(&ofn)){
for(int a=strlen(save);a>0;a--){
if(save[a-1]=='\\'){ sprintf(how1,"");
for(int q=0;q<a;q++){
	how1[q]=save[q]; how[q+1]=0;
}
	sprintf(how,"");
for(int b=0;a<strlen(save);b++,a++){
	sprintf(how,"%s%c",how,save[a]);
	if(save[a+1]=='.'){ break; }
}
how[strlen(how)]=0;
break;	}
}
fi=fopen(save,"w");
fprintf(fi,projs);
fclose(fi);
int a=0;
sprintf(how2,"%s%s.mobasset",how1,how);
fi=fopen(how2,"w");
fprintf(fi,asset);
fclose(fi);

sprintf(how2,"%s%s.mobiscene",how1,how);
fi=fopen(how2,"w");
fprintf(fi,scene[0]);
fclose(fi);
for(int a=0;a<=couscn;a++){
sprintf(how2,"%s%s.mobix%d",how1,how,a);
moblat[a]=0;
fi=fopen(how2,"w");
fprintf(fi,scenerio[a]);
fclose(fi);
}


}
}

if(mpo1>csize1-83&&mpo1<csize1-55&&mpo2>7&&mpo2<38){
	sprintf(scene[0],"%sScene %d: Camera %d;",scene[0],couscn+1,camc+1); couscn++; curscn=couscn; camc++; vcon=0; fcon=0; hnd1=0; 
	for(int a=0;a<9000;a++){ hlop[a]=0; gp[a]=0; sp[a]=0; }
	ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}

}

void projload(char *dir,char *name){
char reu[1000],deu[1000]; sprintf(reu,"%s",dir); sprintf(deu,"%s",name);
	sprintf(path,"%sMaterials",dir);
sprintf(how,"%s%s.mobility",dir,name);
hnd=CreateFile(how,GENERIC_READ,FILE_SHARE_READ,0,OPEN_EXISTING,0,0);
if(hnd==INVALID_HANDLE_VALUE){ MessageBox(hwnd,"Could not load file","Error",MB_OK|MB_ICONERROR);  }
size1=GetFileSize(hnd,NULL);
ReadFile(hnd,projs,size1,0,NULL);
CloseHandle(hnd);

sprintf(how,"%s%s.mobiscene",reu,deu);
hnd=CreateFile(how,GENERIC_READ,FILE_SHARE_READ,0,OPEN_EXISTING,0,0);
if(hnd==INVALID_HANDLE_VALUE){ MessageBox(hwnd,"Could not load scene","Error",MB_OK|MB_ICONERROR);  }
size1=GetFileSize(hnd,NULL);
ReadFile(hnd,scene[0],size1,0,NULL);
CloseHandle(hnd);
for(int a=0;a<strlen(scene[0]);a++){
	if(scene[0][a]==':'){ couscn++; } if(scene[0][a]==';'){ camc++; }
}
for(int a=0;a<100000;a++){
	sprintf(how,"%s%s.mobix%d",reu,deu,a);
hnd=CreateFile(how,GENERIC_READ,FILE_SHARE_READ,0,OPEN_EXISTING,0,0);
if(hnd==INVALID_HANDLE_VALUE){ break; }
size1=GetFileSize(hnd,NULL);
ReadFile(hnd,scenerio[a],size1,0,NULL);
CloseHandle(hnd);
}

sprintf(freeuse,"%s",scenerio[0]);
curscn=0;
for(int a=0,b=0;a<size1;a++){
	how[b]=freeuse[a]; b++;
if(freeuse[a]=='\n'){ how[b-3]=0; b=0; 
import(how);
}
}
}
