void FOCUS(HWND hwnd){
	sprintf(how,"%s\\*",path);
hhh=FindFirstFile(how,&wff);
FindNextFile(hhh,&wff); int a=0; sprintf(asset,"");
while(FindNextFile(hhh,&wff)!=0){
	sprintf(how,"%s",wff.cFileName);
	sprintf(asset,"%s %s; %s\\%s\n",asset,how,path,how);
	sprintf(how,"%s\\%s",path,wff.cFileName);
	SHGetFileInfo(how,NULL,&shft,sizeof(shft),SHGFI_ICON);
	browse[a]=shft.hIcon; a++;
}
FindClose(hhh);
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}

void move(){
if(mup==1){ CLEAN=TRUE;
if(mpo1>fm1){ for(int z=0;z<1000;z++){ scale++; thm3=scale*(csize1-penx-pistx)/100.0; thm5=146*scale/100.0; if(scale>=100){ if(scale!=100){ scale--; } break; } if(csize1-(298-thm5)>=mpo1){ break; } } }
if(mpo1<fm1){ for(int z=0;z<1000;z++){ scale--; thm3=scale*(csize1-penx-pistx)/100.0; thm5=146*scale/100.0; if(scale<=0){ if(scale!=0){ scale++; } break; } if(csize1-(298-thm5)<=mpo1){ break; } } }
 ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE); }

if(mpo1>40&&mpo1<pistx-50&&mpo2>85&&mpo2<jua+30&&selen==0){
	for(int r=0;r<impc1;r++){
if(mpo2>=camp[r]&&mpo2<=camp[r]+250&&cam[r]==1){ 
if(mpo1>47&&mpo1<56&&mpo2>camp[r]+39&&mpo2<camp[r]+54&&selen==0&&drz1==0){ drz=1; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>47&&mpo1<56&&mpo2>camp[r]+56&&mpo2<camp[r]+71&&selen==0&&drz1==0){ drz=2; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>47&&mpo1<56&&mpo2>camp[r]+73&&mpo2<camp[r]+90&&selen==0&&drz1==0){ drz=3; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>47&&mpo1<56&&mpo2>camp[r]+110&&mpo2<camp[r]+127&&selen==0&&drz1==0){ drz=4; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>47&&mpo1<56&&mpo2>camp[r]+127&&mpo2<camp[r]+144&&selen==0&&drz1==0){ drz=5; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>47&&mpo1<56&&mpo2>camp[r]+144&&mpo2<camp[r]+159&&selen==0&&drz1==0){ drz=6; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>47&&mpo1<66&&mpo2>camp[r]+169&&mpo2<camp[r]+184&&selen==0&&drz1==0){ drz=7; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>47&&mpo1<66&&mpo2>camp[r]+186&&mpo2<camp[r]+203&&selen==0&&drz1==0){ drz=8; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>136&&mpo1<156&&mpo2>camp[r]+50&&mpo2<camp[r]+67&&selen==0&&drz1==0){ drz=11; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1<136||mpo1>156||mpo2<camp[r]+50||mpo2>camp[r]+67){ if(drz==11&&drz1==0){drz=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); } }
  break; }
	}	
	}
if(mpo1>56&&drz!=0&&drz!=11&&drz1==0&&selen==0){ drz=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }
if(mpo1<50&&mpo1>0&&drz!=0&&drz1==0&&selen==0){ drz=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }
	
if(drz1==1){ CLEAN=TRUE; 
if(drz!=4&&drz!=5&&drz!=6){ if(mpo1>fm1){ adjust++; }else{ adjust--; } }
else{ if(mpo1>fm1){ adjust+=0.03; if(adjust>6.2823){ adjust=0; } }else{ adjust-=0.03; if(adjust<=0){ adjust=6.2823; } } }
sprintf(scene[0],"%s%f%s",adjust1,adjust,adjust2); 
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
if(mpo1>csize1-50){ SetCursorPos(100,mpo2); }
if(mpo1<50){ SetCursorPos(csize1-100,mpo2); }
}
//end
if(mpo1>csize1-penx+6&&mpo1<csize1-penx+25&&mpo2>70&&chase==2){
	for(int r=0;r<pic;r++){
if(mpo2>=pivp[r]&&mpo2<=pid[r]&&pivy[r]==0){ drj2=r;
if(mpo1>csize1-penx+6&&mpo1<csize1-penx+25&&mpo2>pivp[r]+35&&mpo2<pivp[r]+48&&chase==2&&drj==0){ drj=1; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+6&&mpo1<csize1-penx+25&&mpo2>pivp[r]+50&&mpo2<pivp[r]+68&&chase==2&&drj1==0){ drj=2; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+6&&mpo1<csize1-penx+25&&mpo2>pivp[r]+70&&mpo2<pivp[r]+90&&chase==2&&drj1==0){ drj=3; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
  break; }
	}	
	}

if(mpo1<csize1-penx+6&&drj!=0&&drj1==0&&chase==2){ drj=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }
if(mpo1>csize1-penx+30&&drj!=0&&drj1==0&&chase==2){ drj=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }

if(drj1==1){ CLEAN=TRUE; 
if(mpo1>fm1){ if(drj==1){  pivotx[drj2]++; } if(drj==2){  pivoty[drj2]++; } if(drj==3){  pivotz[drj2]++; } }
if(mpo1<fm1){ if(drj==1){  pivotx[drj2]--; } if(drj==2){  pivoty[drj2]--; } if(drj==3){  pivotz[drj2]--; } }
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}
//chase 3
if(mpo1>csize1-penx+6&&mpo1<csize1-90&&mpo2>70&&mpo2<ga+30&&chase==3){
	for(int r=0;r<phys2;r++){
if(mpo2>=phyp[r]&&mpo2<=phyp[r]+400&&phyc[r]==1){
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+40&&mpo2>phyp[r]+30&&mpo2<phyp[r]+48&&chase==3&&phm1==0){ phm=1; pjm=r; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
  break; }
	}
}
//end
if(mpo1<csize1-penx+6&&mpo1>0&&phm!=0&&phm1==0&&chase==3){ phm=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }
if(mpo1>csize1-penx+40&&phm!=0&&phm1==0&&chase==3){ phm=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }
//end
if(phm1==1){

if(mpo1>fm1){
if(phm==1){ mass[pjm]++; }
}
if(mpo1<fm1){
if(phm==1){ if(mass[pjm]>0){ mass[pjm]--; } }
}
if(mpo1>csize1-50){ SetCursorPos(100,mpo2); }
if(mpo1<50){ SetCursorPos(csize1-100,mpo2); }
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
}

if(mpo1>csize1-penx+6&&mpo1<csize1-90&&mpo2>70&&mpo2<ga+30&&chase==0){
	for(int r=0;r<reho;r++){
if(mpo2>=gp[r]&&mpo2<=gp[r]+400&&ges[sp[r]+1]==-7){
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+30&&mpo2>gp[r]+39&&mpo2<gp[r]+50&&chase==0&&dr1==0){ dr=3; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+30&&mpo2>gp[r]+60&&mpo2<gp[r]+76&&chase==0&&dr1==0){ dr=2; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+30&&mpo2>gp[r]+80&&mpo2<gp[r]+96&&chase==0&&dr1==0){ dr=1; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+30&&mpo2>gp[r]+120&&mpo2<gp[r]+136&&chase==0&&dr1==0){ dr=4; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+30&&mpo2>gp[r]+140&&mpo2<gp[r]+156&&chase==0&&dr1==0){ dr=5; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+30&&mpo2>gp[r]+160&&mpo2<gp[r]+176&&chase==0&&dr1==0){ dr=6; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+30&&mpo2>gp[r]+200&&mpo2<gp[r]+206&&chase==0&&dr1==0){ dr=7; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+30&&mpo2>gp[r]+220&&mpo2<gp[r]+226&&chase==0&&dr1==0){ dr=8; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+30&&mpo2>gp[r]+240&&mpo2<gp[r]+246&&chase==0&&dr1==0){ dr=9; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
if(mpo1>csize1-penx+18&&mpo1<csize1-penx+80&&mpo2>gp[r]+314&&mpo2<gp[r]+329&&chase==0&&dr1==0){ dr=10; hc=LoadCursor(GetModuleHandle(NULL),"CUR1"); SetCursor(hc); }
  break; }
	}	
	}
if(mpo1<csize1-penx+6&&mpo1>0&&dr!=0&&dr1==0&&chase==0&&dr!=10){ dr=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }
if(mpo1>csize1-penx+30&&dr!=0&&dr1==0&&chase==0&&dr!=10){ dr=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }
if(mpo1<csize1-penx+6&&mpo1>0&&dr!=0&&dr1==0&&chase==0){ dr=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }
if(mpo1>csize1-penx+80&&dr!=0&&dr1==0&&chase==0){ dr=0;  hc=LoadCursor(NULL,IDC_ARROW); SetCursor(hc); }

if(dr1==1){  CLEAN=TRUE; 
if(mpo1>fm1){
 if(dr==1){ trans1[kon]+=1; } else if(dr==2){ trans2[kon]+=1; } else if(dr==3){ trans3[kon]+=1; } 
}
else{   if(dr==1){ trans1[kon]-=1; } else if(dr==2){ trans2[kon]-=1; }else  if(dr==3){ trans3[kon]-=1; } }

if(mpo1<fm1){ 
if(dr==7){ if(ges[dame+1]>0){  ges[dame+1]-=1; } }
if(dr==8){ if(ges[dame+2]>0){  ges[dame+2]-=1; } }
if(dr==9){ if(ges[dame+3]>0){  ges[dame+3]-=1; } }
if(dr==10){ if(ges[dame+1]>0){  ges[dame+1]-=1; } }
}
if(mpo1>fm1){ 
if(dr==7){ ges[dame+1]+=1; }
if(dr==8){ ges[dame+2]+=1; }
if(dr==9){ ges[dame+3]+=1; }
if(dr==10){ if(ges[dame+1]<255){ ges[dame+1]+=1; } }
}
if(mpo1<fm1){ 
if(dr==4){ ges[dame+1]-=1; if(ges[dame+1]<0){ ges[dame+1]=360; } }
if(dr==5){ ges[dame+2]-=1; if(ges[dame+2]<0){ ges[dame+2]=360; } }
if(dr==6){ ges[dame+3]-=1; if(ges[dame+3]<0){ ges[dame+3]=360; } }
}
if(mpo1>fm1){ 
if(dr==4){ ges[dame+1]+=1; if(ges[dame+1]>360){ ges[dame+1]=0; } }
if(dr==5){ ges[dame+2]+=1; if(ges[dame+2]>360){ ges[dame+2]=0; } }
if(dr==6){ ges[dame+3]+=1; if(ges[dame+3]>360){ ges[dame+3]=0; } }
}
ValidateRect(hwnd,NULL); InvalidateRect(hwnd,NULL,TRUE);
if(mpo1>csize1-50){ SetCursorPos(100,mpo2); }
if(mpo1<50){ SetCursorPos(csize1-100,mpo2); }
}
}
