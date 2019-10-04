int tvc,finz=0,tinz=0,xinz,yinz,transs=0,CLAS=0,trss=0,rnn=0,nvc=0;
float scx,scy,scz,ran1,ran2,ran3,rnd1,rnd2,rnd3,piv1,piv2,piv3;
void pilot(HDC hgc){
if(CLEAN==TRUE){
DeleteDC(hhc);
DeleteObject(hty);
	hhc=CreateCompatibleDC(hgc);
	hty=CreateCompatibleBitmap(hgc,csize1-penx-pistx,csize2-peny);
	SelectObject(hhc,hty); vx=(csize1-penx-pistx); vy=(csize2-peny); minr=vx;
if(scale!=100){ vx=scale*(csize1-penx-pistx)/100.0; vy=scale*((csize2-peny))/100.0 ; }
minr=vx/minr;
setrender(TRUE);
sdepth(TRUE);
can1=cos(ang1); san1=sin(ang1);
can2=cos(ang2); san2=sin(ang2);
can3=cos(ang3); san3=sin(ang3);

//lighting
li1=vx/2; li2=vy/2;
//end
//sprite
sdepth(FALSE);
setshade(NULL);
viewport(vx,vy,100,-3000);
if(sky==1){ cleardept();
sprite[0].x=0; sprite[0].y=0; sprite[0].z=-600;
sprite[1].x=0; sprite[1].y=vy+1; sprite[1].z=-600;
sprite[2].x=vx; sprite[2].y=vy+1; sprite[2].z=-600;
sprite[3].x=vx; sprite[3].y=0; sprite[3].z=-600;
spitt[0].x=0; spitt[0].y=1; 
spitt[1].x=0; spitt[1].y=0; 
spitt[2].x=1; spitt[2].y=0; 
spitt[3].x=1; spitt[3].y=1; 
polymagezx(sprite,sprite,spitt,4,NULL,255,imag,512,512);
}
//skybox
if(sky==0){ cleardept(); sdepth(TRUE);
sprite[0].x=-600; sprite[0].y=600; sprite[0].z=-600;
sprite[1].x=-600; sprite[1].y=-600; sprite[1].z=-600;
sprite[2].x=600; sprite[2].y=-600; sprite[2].z=-600;
sprite[3].x=600; sprite[3].y=600; sprite[3].z=-600;
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
sprite[0].x=-600; sprite[0].z=-600; sprite[0].y=-600;
sprite[1].x=-600; sprite[1].z=600; sprite[1].y=-600;
sprite[2].x=600; sprite[2].z=600; sprite[2].y=-600;
sprite[3].x=600; sprite[3].z=-600; sprite[3].y=-600;
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
sprite[0].y=600; sprite[0].z=-600; sprite[0].x=-600;
sprite[1].y=600; sprite[1].z=600; sprite[1].x=-600;
sprite[2].y=-600; sprite[2].z=600; sprite[2].x=-600;
sprite[3].y=-600; sprite[3].z=-600; sprite[3].x=-600;
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
sprite[0].x=-600; sprite[0].z=600; sprite[0].y=600;
sprite[1].x=-600; sprite[1].z=-600; sprite[1].y=600;
sprite[2].x=600; sprite[2].z=-600; sprite[2].y=600;
sprite[3].x=600; sprite[3].z=600; sprite[3].y=600;
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
sprite[0].y=600; sprite[0].z=600; sprite[0].x=599;
sprite[1].y=600; sprite[1].z=-600; sprite[1].x=599;
sprite[2].y=-600; sprite[2].z=-600; sprite[2].x=599;
sprite[3].y=-600; sprite[3].z=600; sprite[3].x=599;
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
sprite[0].x=-600; sprite[0].y=-600; sprite[0].z=599;
sprite[1].x=-600; sprite[1].y=600; sprite[1].z=599;
sprite[2].x=600; sprite[2].y=600; sprite[2].z=599;
sprite[3].x=600; sprite[3].y=-600; sprite[3].z=599;
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


if(sky==2){ clearbitx(RGB(58,58,58)); }
setrender(TRUE);
//end
sdepth(TRUE);

viewport(vx,vy,2000,-3000);

setshade(FLAT);
lin=RGB(255,255,255);
//start here
fin=0; vc=0; innu=0; ojn=0; tvc=0; finz=0; trc=0; trg=0; tra=0; trm=0; trss=-1;  thm9=0; thm8=0,nvc=0; 
for(int i=0;i<=fcon;i++){
if(ges[i]==-4){ innu=0; trg=i; trss++; i++;  }
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
if(clr1==0){ thm3=0; if(transs<250){thm3=1; } if(tra>=20000){ thm3=0; } if(thm3==0){   if(CLAS==0){ if(thm8==0){ polygonzx(sprite,spont,vc,lin,transs); } }else{ conlinez(sprite,vc,wire,transs,FALSE); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,wire,transs,TRUE);  } } 
else{ thm3=0; for(int s=0;s<vc;s++){ thm3+=sprite[s].z;  } thm3/=vc; tranv[tra]=thm3; transb[tra]=trm; transg[tra]=trg; trangn[tra]=trss; transp[tra]=trc; tra++; }
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
if(pivt==1){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); sprite[vc].z+=tranz;  }
sprite[vc].x*=(zoom/30); sprite[vc].y*=(zoom/30); sprite[vc].z*=(zoom/30); 
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
sprite[vc].x=dist[0].x*minr; sprite[vc].y=dist[0].y*minr; sprite[vc].z=dist[0].z;  sprite[vc].x+=(vx/2); sprite[vc].y+=(vy/2);
thm3=sprite[vc].z; if(thm3>700){ thm3=700; }
if(vu==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm3); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm3); sprite[vc].y=w+(vy/2); w=800*(sprite[vc].z); w/=(800-thm3); sprite[vc].z=w; }
if(pivt==0){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); } sprite[vc].z/=scz;  vc++;
}
}

if(ges[i]==-9){  if(clr1==0){ thm3=0; if(transs<250){thm3=1; } if(tra>=20000){ thm3=0; } if(thm3==0){ if(thm8==0){ polymagezx(sprite,spont,spitt,vc,lin,transs,bitex[tinz],xinz,yinz); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,wire,transs,TRUE); } }
else{ thm3=0; for(int s=0;s<vc;s++){ thm3+=sprite[s].z;  } thm3/=vc; tranv[tra]=thm3; transb[tra]=trm; transg[tra]=trg; trangn[tra]=trss;  transp[tra]=trc; tra++; }
  } else{ conlinez(sprite,vc,wire,255,TRUE); }
if(ojn==1&&chase==0){ conlinez(sprite,vc,RGB(255,150,50),transs,TRUE);  } tvc=0; vc=0; finz=0; }

}
if(ges[i]==-24){  piv1=ges[i+1]/1000.0; piv2=ges[i+2]/1000.0; piv3=ges[i+3]/1000.0;  i+=3; }
if(ges[i]==-1){ fin=1; vc=0; trc=i;  }
if(ges[i]==-2){ fin=0; }
if(ges[i]==-9){ finz=0; vc=0; tvc=0; }
if(ges[i]==-3){  i++; cr=ges[i]; i++; cg=ges[i]; i++; cb=ges[i]; lin=RGB(cr,cg,cb); }
if(ges[i]==-7){ ojn=1; }
if(ges[i]==-6){ ojn=0; }
if(ges[i]==-11){  i++; scx=ges[i]/100.0; i++; scy=ges[i]/100.0; i++; scz=ges[i]/100.0;  }
if(ges[i]==-12){  i++; ran1=cos( ges[i]*3.143/180.0 ); rnd1=sin( ges[i]*3.143/180.0 ); i++;
ran2=cos( ges[i]*3.143/180.0 ); rnd2=sin( ges[i]*3.143/180.0 ); i++;
ran3=cos( ges[i]*3.143/180.0 ); rnd3=sin( ges[i]*3.143/180.0 );  
}
if(ges[i]==-13){ setshade(FLAT);  }
if(ges[i]==-14){ setshade(NULL);  }
if(ges[i]==-26){ setshade(GOURAUD);  }
if(ges[i]==-17){ CLAS=0; }
if(ges[i]==-18){ CLAS=1; }
}
//end here
//alpha
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
if(ges[i]==-4){ innu=0; i++; }
if(ges[i]==-5){ innu=1; i++; }
if(ges[i]==-19){ thm9=0; }
if(ges[i]==-20){ thm9=1; }
if(ges[i]==-21){ thm8=0; }
if(ges[i]==-22){ thm8=1; }
if(ges[i]==-23){ thm9=2; }
if(ges[i]==-10){ tinz=ges[i+1]-1; if(tinz<200){ xinz=xhit[tinz]; yinz=yhit[tinz]; }else{ 
xinz=xhit[tinz]; yinz=yhit[tinz];
GetBitmapBits(hbix[tinz-200],sizeof(bitex[200]),&bitex[200]); tinz=200;  } i+=2; 	}
if(ges[i]==-16){ transs=ges[i+1]-1; i+=1;  }
if(ges[i]==-3){  i++; cr=ges[i]; i++; cg=ges[i]; i++; cb=ges[i]; lin=RGB(cr,cg,cb); }
if(ges[i]==-7){ ojn=1; }
if(ges[i]==-6){ ojn=0; }
if(ges[i]==-11){  i++; scx=ges[i]/100.0; i++; scy=ges[i]/100.0; i++; scz=ges[i]/100.0;  }
if(ges[i]==-12){ { i++; ran1=cos( ges[i]*3.143/180.0 ); rnd1=sin( ges[i]*3.143/180.0 ); i++;
ran2=cos( ges[i]*3.143/180.0 ); rnd2=sin( ges[i]*3.143/180.0 ); i++;
ran3=cos( ges[i]*3.143/180.0 ); rnd3=sin( ges[i]*3.143/180.0 );  } }
if(ges[i]==-13){ setshade(FLAT);  break; }
if(ges[i]==-14){ setshade(NULL); break; }
if(ges[i]==-26){ setshade(GOURAUD);  break; }
if(ges[i]==-17){ CLAS=0; }
if(ges[i]==-18){ CLAS=1; }
if(ges[i]==-1){  break; }
if(ges[i]==-16){  break; }
if(ges[i]==-24){  piv1=ges[i+1]/1000.0; piv2=ges[i+2]/1000.0; piv3=ges[i+3]/1000.0;  i+=3; }
}

for(int i=transb[z];i<fcon;i++){
if(ges[i]==-4){ innu=0; i++;   }
if(ges[i]==-5){ innu=1;  i++; }
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
if(ges[i]==-11){  i++; scx=ges[i]/100.0; i++; scy=ges[i]/100.0; i++; scz=ges[i]/100.0;  }
if(ges[i]==-12){  i+=3; }
if(ges[i]==-13){ setshade(FLAT); }
if(ges[i]==-14){ setshade(NULL); }
if(ges[i]==-26){ setshade(GOURAUD);  }
if(ges[i]==-17){ CLAS=0; }
if(ges[i]==-18){ CLAS=1; }
if(ges[i]==-1){ break; }
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

 if(ges[i]==-2){ if(clr1==0){  if(CLAS==0){ if(thm8==0){ polygonzx(sprite,spont,vc,lin,transs); } }else{ conlinez(sprite,vc,wire,255,FALSE); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,wire,transs,TRUE);  } } 
 else{ conlinez(sprite,vc,wire,255,TRUE); } 
if(ojn==1&&chase==0){ conlinez(sprite,vc,RGB(255,150,50),255,TRUE); }  vc=0; finz=0; tvc=0; break; }
else{

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
if(pivt==1){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); sprite[vc].z+=tranz;  }
sprite[vc].x*=(zoom/30); sprite[vc].y*=(zoom/30); sprite[vc].z*=(zoom/30); 
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
sprite[vc].x=dist[0].x*minr; sprite[vc].y=dist[0].y*minr; sprite[vc].z=dist[0].z;  sprite[vc].x+=(vx/2); sprite[vc].y+=(vy/2);
thm3=sprite[vc].z; if(thm3>700){ thm3=700; }
if(vu==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm3); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm3); sprite[vc].y=w+(vy/2);  w=800*(sprite[vc].z); w/=(800-thm3); sprite[vc].z=w; }
if(pivt==0){ sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); } sprite[vc].z/=scz; vc++;
}
}
}
if(ges[i]==-9){ if(clr1==0){  if(thm8==0){ polymagezx(sprite,spont,spitt,vc,lin,transs,bitex[tinz],xinz,yinz); } if(thm9==1){ conlinez(sprite,vc,wire,transs,TRUE); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } } else{ conlinez(sprite,vc,wire,255,TRUE); } 
if(ojn==1&&chase==0){ conlinez(sprite,vc,RGB(255,150,50),255,TRUE); } tvc=0; vc=0; finz=0; break; }
if(ges[i]==-1){ fin=1; vc=0;  }
if(ges[i]==-2){ fin=0; }
}

}

setrender(TRUE);
setshade(NULL);
//pivot
for(int y=0;y<pivtt;y++){
disp[0].x=pivotx[y]; disp[0].y=pivoty[y]; disp[0].z=pivotz[y];
disp[1].x=pivotx[y]+2; disp[1].y=pivoty[y]; disp[1].z=pivotz[y];
disp[2].x=pivotx[y]; disp[2].y=pivoty[y]+2; disp[2].z=pivotz[y];
disp[3].x=pivotx[y]; disp[3].y=pivoty[y]; disp[3].z=pivotz[y]+2;

for(int i=0;i<4;i++){
	if(pivt==1){ disp[i].x+=(tranx*minr); disp[i].y+=(trany*minr); disp[i].z+=tranz;  }
sprite[0].x=disp[i].x*(zoom/30); sprite[0].y=disp[i].y*(zoom/30); sprite[0].z=disp[i].z*(zoom/30); 
//x
dist[0].x=sprite[0].x; dist[0].y=(sprite[0].y*can1)-(sprite[0].z*san1 ); dist[0].z=(sprite[0].y*san1)+(sprite[0].z*can1 ); 
//y
sprite[0].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[0].y=dist[0].y; sprite[0].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[0].x*can3)-(sprite[0].y*san3); dist[0].y=(sprite[0].x*san3)+(sprite[0].y*can3); dist[0].z=sprite[0].z;
//adjust
sprite[0].x=dist[0].x*minr; sprite[0].y=dist[0].y*minr; sprite[0].z=dist[0].z; sprite[0].x+=(vx/2); sprite[0].y+=(vy/2);
thm3=sprite[vc].z; 
if(thm3>700){ thm3=700; }
if(vu==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm3); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm3); sprite[vc].y=w+(vy/2);  w=800*(sprite[vc].z); w/=(800-thm3); sprite[vc].z=w; }
if(pivt==0){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); } disp[i]=sprite[0];
}
linez(disp[0].x,disp[0].y,disp[0].z,disp[1].x,disp[1].y,disp[1].z,RGB(0,80,240),255);
linez(disp[0].x+1,disp[0].y,disp[0].z,disp[1].x+1,disp[1].y,disp[1].z,RGB(0,80,240),255);
linez(disp[0].x+2,disp[0].y,disp[0].z,disp[1].x+2,disp[1].y,disp[1].z,RGB(0,80,240),255);
linez(disp[0].x,disp[0].y,disp[0].z,disp[2].x,disp[2].y,disp[2].z,RGB(240,0,0),255);
linez(disp[0].x,disp[0].y+1,disp[0].z,disp[2].x,disp[2].y+1,disp[2].z,RGB(240,0,0),255);
linez(disp[0].x,disp[0].y+2,disp[0].z,disp[2].x,disp[2].y+2,disp[2].z,RGB(240,0,0),255);
linez(disp[0].x,disp[0].y,disp[0].z,disp[3].x,disp[3].y,disp[3].z,RGB(0,240,0),255);
linez(disp[0].x,disp[0].y+1,disp[0].z+1,disp[3].x,disp[3].y+1,disp[3].z,RGB(0,240,0),255);
linez(disp[0].x,disp[0].y+2,disp[0].z+2,disp[3].x,disp[3].y+2,disp[3].z,RGB(0,240,0),255);
}
//camera
{
for(int q=0;q<strlen(scene[0]);q++){
if(scene[0][q]=='('){ q++;
for(int k=0;q<strlen(scene[0]);q++){ how1[k]=scene[0][q]; k++; if(scene[0][q]==','){ how1[k]=0; came1=atof(how1); break; } } q++;
for(int k=0;q<strlen(scene[0]);q++){ how1[k]=scene[0][q]; k++; if(scene[0][q]==','){ how1[k]=0; came2=atof(how1); break; } } q++;
for(int k=0;q<strlen(scene[0]);q++){ how1[k]=scene[0][q]; k++; if(scene[0][q]==','){ how1[k]=0; came3=atof(how1); break; } } q++;
for(int k=0;q<strlen(scene[0]);q++){ how1[k]=scene[0][q]; k++; if(scene[0][q]==','){ how1[k]=0; camer1=atof(how1); break; } } q++;
for(int k=0;q<strlen(scene[0]);q++){ how1[k]=scene[0][q]; k++; if(scene[0][q]==','){ how1[k]=0; camer2=atof(how1); break; } } q++;
for(int k=0;q<strlen(scene[0]);q++){ how1[k]=scene[0][q]; k++; if(scene[0][q]==','){ how1[k]=0; camer3=atof(how1); 
for(int k=0;q<strlen(scene[0]);q++){ if(scene[0][q]==','){ k++; } if(k>=3){ break; } } q++;
for(int k=0;q<strlen(scene[0]);q++){ how1[k]=scene[0][q]; k++; if(scene[0][q]==','){ how1[k]=0; thm3=atof(how1); break; } } q++;
for(int k=0;q<strlen(scene[0]);q++){ how1[k]=scene[0][q]; k++; if(scene[0][q]==','){ how1[k]=0; thm5=atof(how1); break; } } q++;
thm7=thm3/thm5; if(thm3>thm5){ thm3=4; thm5=4/thm7; }else{ thm5=4; thm3=4*thm7; }
thm3/=2; thm5/=2; 
disp[0].x=0; disp[0].y=0; disp[0].z=0; 
disp[1].x=disp[0].x+thm5; disp[1].y=disp[0].y-2; disp[1].z=disp[0].z+thm3; 
disp[2].x=disp[0].x-thm5; disp[2].y=disp[0].y-2; disp[2].z=disp[0].z+thm3; 
disp[3].x=disp[0].x-thm5; disp[3].y=disp[0].y-2; disp[3].z=disp[0].z-thm3; 
disp[4].x=disp[0].x+thm5; disp[4].y=disp[0].y-2; disp[4].z=disp[0].z-thm3; 
thm1=cos(-camer1); thm4=sin(-camer1);
thm2=cos(-camer2); thm5=sin(-camer2);
thm8=cos(camer3); thm9=sin(camer3);

for(int i=0;i<5;i++){
//z
dist[0].x=(disp[i].x*thm8)-(disp[i].y*thm9); dist[0].y=(disp[i].x*thm9)+(disp[i].y*thm8); dist[0].z=disp[i].z;
//y
disp[i].x=(dist[0].x*thm2)+(dist[0].z*thm5); disp[i].y=dist[0].y; disp[i].z=(dist[0].x*-1*thm5)+(dist[0].z*thm2);
//x
dist[0].x=disp[i].x; dist[0].y=(disp[i].y*thm1)-(disp[i].z*thm4 ); dist[0].z=(disp[i].y*thm4)+(disp[i].z*thm1 );

disp[i]=dist[0];

disp[i].x=disp[i].x+came1; disp[i].y=disp[i].y+came2; disp[i].z=disp[i].z+came3;

if(pivt==1){ disp[i].x+=(tranx*minr); disp[i].y+=(trany*minr); disp[i].z+=tranz;  }
sprite[0].x=disp[i].x*(zoom/30); sprite[0].y=disp[i].y*(zoom/30); sprite[0].z=disp[i].z*(zoom/30); 
//x
dist[0].x=sprite[0].x; dist[0].y=(sprite[0].y*can1)-(sprite[0].z*san1 ); dist[0].z=(sprite[0].y*san1)+(sprite[0].z*can1 ); 
//y
sprite[0].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[0].y=dist[0].y; sprite[0].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[0].x*can3)-(sprite[0].y*san3); dist[0].y=(sprite[0].x*san3)+(sprite[0].y*can3); dist[0].z=sprite[0].z;
//adjust
sprite[0].x=dist[0].x*minr; sprite[0].y=dist[0].y*minr; sprite[0].z=dist[0].z; sprite[0].x+=(vx/2); sprite[0].y+=(vy/2); 

thm3=sprite[0].z; 
if(thm3>700){ thm3=700; }
if(vu==1){ w=800*(sprite[0].x-(vx/2)); w/=(800-thm3); sprite[0].x=w+(vx/2);	w=800*(sprite[0].y-(vy/2)); w/=(800-thm3); sprite[0].y=w+(vy/2);  w=800*(sprite[vc].z); w/=(800-thm3); sprite[vc].z=w; }

if(pivt==0){ sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); } disp[i]=sprite[0];
} 
conlinez(disp,5,RGB(255,100,0),255,TRUE); linez(disp[1].x,disp[1].y,disp[1].z,disp[4].x,disp[4].y,disp[4].z,RGB(255,100,0),255);
linez(disp[0].x,disp[0].y,disp[0].z,disp[2].x,disp[2].y,disp[2].z,RGB(255,100,0),255);
linez(disp[0].x,disp[0].y,disp[0].z,disp[3].x,disp[3].y,disp[3].z,RGB(255,100,0),255);
break; } } q++;
}
}
}

//carriage
vc=0;

for(int i=0;i<3200;i++){
 if(loadfa[i]==-2){ conlinez(sprite,vc,RGB(255,255,255),50,TRUE); vc=0; }
else{
	if(loadfa[i]>0){
sprite[vc].x=loady[loadfa[i]-1]; sprite[vc].y=loadx[loadfa[i]-1]; sprite[vc].z=loadz[loadfa[i]-1]; 
if(pivt==1){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr);sprite[vc].z+=tranz;  }
sprite[vc].x*=(zoom/30); sprite[vc].y*=(zoom/30); sprite[vc].z*=(zoom/30);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
sprite[vc].x=dist[0].x*minr; sprite[vc].y=dist[0].y*minr; sprite[vc].z=dist[0].z;	sprite[vc].x+=(vx/2); sprite[vc].y+=(vy/2);                              
thm3=sprite[vc].z; 
if(thm3>700){ thm3=700; }
if(vu==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm3); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm3); sprite[vc].y=w+(vy/2);  w=800*(sprite[vc].z); w/=(800-thm3); sprite[vc].z=w; }

if(pivt==0){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); }
 vc++;
}
} }
vc=0;
for(int i=0;i<=3;i++){
 if(bik3[i]==-2){ conlinez(sprite,vc,RGB(255,0,0),255,FALSE); vc=0; }
else{
	if(bik3[i]>0){
sprite[vc].x=bik1[bik3[i]-1]; sprite[vc].y=bik[bik3[i]-1]; sprite[vc].z=bik2[bik3[i]-1]; 
if(pivt==1){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); sprite[vc].z+=tranz;  }
sprite[vc].x*=(zoom/30); sprite[vc].y*=(zoom/30); sprite[vc].z*=(zoom/30);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
sprite[vc].x=dist[0].x*minr; sprite[vc].y=dist[0].y*minr; sprite[vc].z=dist[0].z;	sprite[vc].x+=(vx/2); sprite[vc].y+=(vy/2); 
thm3=sprite[vc].z; if(thm3>700){ thm3=700; }
if(vu==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm3); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm3); sprite[vc].y=w+(vy/2);  w=800*(sprite[vc].z); w/=(800-thm3); sprite[vc].z=w; }
if(pivt==0){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); }
 vc++;
}
} }
vc=0;
for(int i=0;i<=3;i++){
 if(jik3[i]==-2){ conlinez(sprite,vc,RGB(0,255,0),255,FALSE);
 vc=0; }
else{
	if(jik3[i]>0){
sprite[vc].x=jik1[jik3[i]-1]; sprite[vc].y=jik[jik3[i]-1]; sprite[vc].z=jik2[jik3[i]-1];
if(pivt==1){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); sprite[vc].z+=tranz;  } 
sprite[vc].x*=(zoom/30); sprite[vc].y*=(zoom/30); sprite[vc].z*=(zoom/30);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
sprite[vc].x=dist[0].x*minr; sprite[vc].y=dist[0].y*minr; sprite[vc].z=dist[0].z;	sprite[vc].x+=(vx/2); sprite[vc].y+=(vy/2); 
thm3=sprite[vc].z; if(thm3>700){ thm3=700; }
if(vu==1){ w=800*(sprite[vc].x-(vx/2)); w/=(800-thm3); sprite[vc].x=w+(vx/2);	w=800*(sprite[vc].y-(vy/2)); w/=(800-thm3); sprite[vc].y=w+(vy/2);  w=800*(sprite[vc].z); w/=(800-thm3); sprite[vc].z=w; }
if(pivt==0){sprite[vc].x+=(tranx*minr); sprite[vc].y+=(trany*minr); }
 vc++;
}
} }
//end carriage
cleardept();
{
	vc=0;
for(int a=0;a<6;a++){ disp[vc].x=dz[a]/1;  disp[vc].y=dx[a]/1; disp[vc].z=dy[a]/1; 
//x
dist[0].x=disp[vc].x; dist[0].y=(disp[vc].y*can1)-(disp[vc].z*san1 ); dist[0].z=(disp[vc].y*san1)+(disp[vc].z*can1 );
//y
disp[vc].x=(dist[0].x*can2)+(dist[0].z*san2); disp[vc].y=dist[0].y; disp[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(disp[vc].x*can3)-(disp[vc].y*san3); dist[0].y=(disp[vc].x*san3)+(disp[vc].y*can3); dist[0].z=disp[vc].z;
disp[vc].x=dist[0].x*minr; disp[vc].y=dist[0].y*minr; disp[vc].z=dist[0].z;  disp[vc].x+=vx-(80/2.3*minr); disp[vc].y+=(80/2.3*minr); vc++; 
if(vc>=2){   lin=RGB(255,0,0); linez(disp[0].x,disp[0].y,disp[0].z,disp[1].x,disp[1].y,disp[1].z,lin,255);  vc=0; } }
	vc=0;
for(int a=0;a<6;a++){ disp[vc].x=sz[a]/1;  disp[vc].y=sx[a]/1; disp[vc].z=sy[a]/1; 
//x
dist[0].x=disp[vc].x; dist[0].y=(disp[vc].y*can1)-(disp[vc].z*san1 ); dist[0].z=(disp[vc].y*san1)+(disp[vc].z*can1 );
//y
disp[vc].x=(dist[0].x*can2)+(dist[0].z*san2); disp[vc].y=dist[0].y; disp[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(disp[vc].x*can3)-(disp[vc].y*san3); dist[0].y=(disp[vc].x*san3)+(disp[vc].y*can3); dist[0].z=disp[vc].z;
disp[vc].x=dist[0].x*minr; disp[vc].y=dist[0].y*minr; disp[vc].z=dist[0].z;  disp[vc].x+=vx-(80/2.3*minr); disp[vc].y+=(80/2.3*minr); vc++; 
if(vc>=2){   lin=RGB(0,255,0); linez(disp[0].x,disp[0].y,disp[0].z,disp[1].x,disp[1].y,disp[1].z,lin,255);  vc=0; } }
vc=0;
for(int a=0;a<6;a++){ disp[vc].x=zz[a]/1;  disp[vc].y=zx[a]/1; disp[vc].z=zy[a]/1; 
//x
dist[0].x=disp[vc].x; dist[0].y=(disp[vc].y*can1)-(disp[vc].z*san1 ); dist[0].z=(disp[vc].y*san1)+(disp[vc].z*can1 );
//y
disp[vc].x=(dist[0].x*can2)+(dist[0].z*san2); disp[vc].y=dist[0].y; disp[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(disp[vc].x*can3)-(disp[vc].y*san3); dist[0].y=(disp[vc].x*san3)+(disp[vc].y*can3); dist[0].z=disp[vc].z;
disp[vc].x=dist[0].x*minr; disp[vc].y=dist[0].y*minr; disp[vc].z=dist[0].z;  disp[vc].x+=vx-(80/2.3*minr); disp[vc].y+=(80/2.3*minr); vc++; 
if(vc>=2){   lin=RGB(0,0,255); linez(disp[0].x,disp[0].y,disp[0].z,disp[1].x,disp[1].y,disp[1].z,lin,255);  vc=0; } }
}


//cursor 3d
line(((crp1)+(tranx*minr)+(vx/2))-(15*minr),(crp2)+(trany*minr)+(vy/2),((crp1)+(tranx*minr)+(vx/2))+(15*minr),(crp2)+(trany*minr)+(vy/2),RGB(200,10,200),255);
line(((crp1)+(tranx*minr)+(vx/2)),(crp2)+(trany*minr)+(vy/2)-(15*minr),((crp1)+(tranx*minr)+(vx/2)),(crp2)+(trany*minr)+(vy/2)+(15*minr),RGB(200,10,200),255);

showscreen(hhc,0,0,(csize1-penx-pistx),csize2-peny);
	clearview();
hf=CreateFont(15,7,0,0,0,0,0,0,DEFAULT_CHARSET,0,0,0,DEFAULT_GUI_FONT,"ARIAL");
SelectObject(hhc,hf);
SetBkMode(hhc,TRANSPARENT); SetTextColor(hhc,RGB(255,255,255));
if(vu==0){ TextOut(hhc,10,10,"Mode: Orthographic",18); }else if(vu==1){ TextOut(hhc,10,10,"Mode: Perspective",17); }
CLEAN=FALSE;
}
	BitBlt(hgc,pistx,pisty,csize1-penx-pistx,csize2-peny,hhc,0,0,SRCCOPY);
}
