int pc1,pc2,z1,z2,lio=0,shk=0,deci=0,fconx,skit=0;
char interc[70000];
int interi;
float poinx[10000],poiny[10000],poinz[10000],zmm1=0,zmm2=0,minr2,acr=0,Join[500],Dink[500],vass=0,vass1=0,redd,greenn,bluee,
cimerax[1000],cimeray[1000],cimeraz[1000],cimex[1000],cimey[1000],cimez[1000],cimen[1000],cimef[1000],cimerx[1000],cimery[1000],cimefo[1000],cimep[1000];
int poin[10000][6000],poinc[10000],poinn=0,cimerac=0,curcam=0;
float rot1=1.57,rot2=3.143,rot3=1.57,pzom=100,vinx,viny,camsx,camsy,camsz,field,rax,ray,nrr,frr,perss;
int integer[1000];
float flint[1000];
char charac[1000][50000];
int bill[1000];
int emuv=0,emus=0,evus=0;
char cardef[10000];
float fly,fly1;
int pes[3000000];
#include "playEX.h"
void pausemotion(){ KillTimer(playd,1);
}
void playmotion(){ SetTimer(playd,1,100,NULL);
}

void PAINT(){ 
if(pc1>pc2){ viny=pc2; vinx=pc2*acr;  }else{ vinx=pc1; viny=pc1/acr;  } vx=vinx; vy=viny; 
if(deci==1){ vx=vass; vy=vass/acr; }
else{ vx=vass1*vx/100.0; vy=vass1*vy/100.0; }
if(vx*vy>1000000){ thm3=vx*vy/1000000.0; vx=vx/thm3; vy=vy/thm3; }
if(vx>=vy){ minr=vx/610.0;  } else { minr=vy/450.0; } 
can1=cos(rot1); san1=sin(rot1);
can2=cos(rot3); san2=sin(rot3);
can3=cos(rot2); san3=sin(rot2);
lin=RGB(255,255,255);
//start here

//skybox
viewport(vx,vy,100,-3000);
if(skit==2){ clearbitx(RGB(redd,greenn,bluee)); }
setrender(TRUE);
setshade(NULL);
//image
sdepth(FALSE);
if(skit==1){ cleardept();
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
if(skit==0){ cleardept();  sdepth(TRUE);
sprite[0].x=-400; sprite[0].y=400; sprite[0].z=-399;
sprite[1].x=-400; sprite[1].y=-400; sprite[1].z=-399;
sprite[2].x=400; sprite[2].y=-400; sprite[2].z=-399;
sprite[3].x=400; sprite[3].y=400; sprite[3].z=-399;
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
polymagezx(sprite,sprite,spitt,4,NULL,255,sky1[0],512,512);
//SECOND
sprite[0].x=-400; sprite[0].z=-400; sprite[0].y=-399;
sprite[1].x=-400; sprite[1].z=400; sprite[1].y=-399;
sprite[2].x=400; sprite[2].z=400; sprite[2].y=-399;
sprite[3].x=400; sprite[3].z=-400; sprite[3].y=-399;
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
polymagezx(sprite,sprite,spitt,4,NULL,255,sky1[1],512,512);
//third
sprite[0].y=400; sprite[0].z=-400; sprite[0].x=-399;
sprite[1].y=400; sprite[1].z=400; sprite[1].x=-399;
sprite[2].y=-400; sprite[2].z=400; sprite[2].x=-399;
sprite[3].y=-400; sprite[3].z=-400; sprite[3].x=-399;
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
polymagezx(sprite,sprite,spitt,4,NULL,255,sky1[2],512,512);
//fourth
sprite[0].x=-400; sprite[0].z=400; sprite[0].y=399;
sprite[1].x=-400; sprite[1].z=-400; sprite[1].y=399;
sprite[2].x=400; sprite[2].z=-400; sprite[2].y=399;
sprite[3].x=400; sprite[3].z=400; sprite[3].y=399;
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
polymagezx(sprite,sprite,spitt,4,NULL,255,sky1[4],512,512);
//fifth
sprite[0].y=400; sprite[0].z=400; sprite[0].x=399;
sprite[1].y=400; sprite[1].z=-400; sprite[1].x=399;
sprite[2].y=-400; sprite[2].z=-400; sprite[2].x=399;
sprite[3].y=-400; sprite[3].z=400; sprite[3].x=399;
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
polymagezx(sprite,sprite,spitt,4,NULL,255,sky1[3],512,512);
//sixth
sprite[0].x=-400; sprite[0].y=-400; sprite[0].z=399;
sprite[1].x=-400; sprite[1].y=400; sprite[1].z=399;
sprite[2].x=400; sprite[2].y=400; sprite[2].z=399;
sprite[3].x=400; sprite[3].y=-400; sprite[3].z=399;
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
polymagezx(sprite,sprite,spitt,4,NULL,255,sky1[5],512,512);
cleardept();
}
//end
sdepth(TRUE);
viewport(vx,vy,frr,nrr); 
setshade(FLAT);
fin=0; vc=0; innu=0; ojn=0; tvc=0; finz=0; trc=0; trg=0; tra=0; trm=0; trss=-1; thm9=0; thm8=0;
for(int i=0;i<=fconx;i++){
if(pes[i]==-4){ innu=0; trg=i; trss++; i++;  }
if(pes[i]==-5){ innu=1; trg=i; trss++; i++;  }
if(pes[i]==-10){ tinz=pes[i+1]-1; if(tinz<200){ xinz=xhit[tinz]; yinz=yhit[tinz]; }else{ 
xinz=xhit[tinz]; yinz=yhit[tinz];
GetBitmapBits(hbix[tinz-200],sizeof(bitex[200]),&bitex[200]); tinz=200;  } i+=2; 	}
if(pes[i]==-16){ transs=pes[i+1]-1; trm=i; i+=2; }
if(pes[i]==-19){ thm9=0; }
if(pes[i]==-20){ thm9=1; }
if(pes[i]==-21){ thm8=0; }
if(pes[i]==-22){ thm8=1; }
if(pes[i]==-23){ thm9=2; }
if(fin==1&&innu==0&&pes[i]){

if(pes[i]==-8){  tvc=0; i++;
{ 
for(0;i<fcon;i++){
if(pes[i]<0){ break; }
	spitt[tvc].x=tyes[pes[i]-1]; spitt[tvc].y=txes[pes[i]-1]; tvc++;
} 
}
}
if(pes[i]==-25){  nvc=0; i++;
for(0;i<fcon;i++){
if(pes[i]<0){ break; }
	spont[nvc].x=(rnormy[pes[i]-1])*scx; spont[nvc].y=(rnormx[pes[i]-1])*scx; spont[nvc].z=(rnormz[pes[i]-1])*scx;

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

 if(pes[i]==-2){ thm3=0; if(transs<250){thm3=1; } if(tra>=20000){ thm3=0; } if(thm3==0){  if(CLAS==0){ if(thm8==0){ polygonzx(sprite,spont,vc,lin,transs); }}else{ conlinez(sprite,vc,rwire,transs,FALSE); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,rwire,transs,TRUE);  } }
else{ thm3=0; for(int s=0;s<vc;s++){ thm3+=sprite[s].z;  } thm3/=vc; tranv[tra]=thm3; transb[tra]=trm; transg[tra]=trg; trangn[tra]=trss; transp[tra]=trc; tra++; }
}
else{

	if(pes[i]>0&&finz==0){
sprite[vc].x=(rxes[pes[i]-1]+transp1[trss])*scx/100; sprite[vc].y=(ryes[pes[i]-1]+transp2[trss])*scy/100; sprite[vc].z=(rzes[pes[i]-1]+transp3[trss])*scz/100; 
sprite[vc].x-=piv1+transp1[trss]; sprite[vc].y-=piv2+transp2[trss]; sprite[vc].z-=piv3+transp3[trss]; 
//z
dist[0].x=(sprite[vc].x*ran3)-(sprite[vc].y*rnd3); dist[0].y=(sprite[vc].x*rnd3)+(sprite[vc].y*ran3); dist[0].z=sprite[vc].z;
//y
sprite[vc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*ran1)-(sprite[vc].z*rnd1 ); dist[0].z=(sprite[vc].y*rnd1)+(sprite[vc].z*ran1 );

sprite[vc].x=dist[0].x+piv1+transp1[trss]; sprite[vc].y=dist[0].y+piv2+transp2[trss]; sprite[vc].z=dist[0].z+piv3+transp3[trss];

 sprite[vc].z-=camsz; sprite[vc].y-=camsy; sprite[vc].x-=camsx;
sprite[vc].x*=2; sprite[vc].y*=2; sprite[vc].z*=2;
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
 sprite[vc].x=dist[0].x*(3+zmm1); sprite[vc].y=dist[0].y*(3+zmm2); sprite[vc].z=dist[0].z; 
  sprite[vc].x*=15; sprite[vc].y*=15; sprite[vc].z*=15; 
  sprite[vc].x*=minr*2; sprite[vc].y*=minr*2; 
 sprite[vc].x+=vx/2; sprite[vc].y+=vy/2; thm3=sprite[vc].z; 
 if(thm3>field){thm3=field; }   
if(perss==1){ w=(field)*(sprite[vc].x-(vx/2)); w/=((field)-thm3); sprite[vc].x=w+(vx/2);	w=(field)*(sprite[vc].y-(vy/2)); w/=((field)-thm3); sprite[vc].y=w+(vy/2);   } 
sprite[vc].z/=(scz/100.0)*0.5; sprite[vc].z+=frr; 
     vc++;
}
}
}
if(pes[i]==-9){ thm3=0; if(transs<250){thm3=1; } if(tra>=20000){ thm3=0; } if(thm3==0){  if(thm8==0){ polymagezx(sprite,spont,spitt,vc,lin,transs,bitex[tinz],xinz,yinz); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,RGB(0,0,0),transs,TRUE); } }
else{ thm3=0; for(int s=0;s<vc;s++){ thm3+=sprite[s].z;  } thm3/=vc; tranv[tra]=thm3; transb[tra]=trm; transg[tra]=trg; trangn[tra]=trss; transp[tra]=trc; tra++; } tvc=0; vc=0; finz=0; }
if(pes[i]==-24){  piv1=pes[i+1]/1000.0; piv2=pes[i+2]/1000.0; piv3=pes[i+3]/1000.0;  i+=3; }
if(pes[i]==-1){ fin=1; vc=0; trc=i; }
if(pes[i]==-2){ fin=0; }
if(pes[i]==-3){  i++; cr=pes[i]; i++; cg=pes[i]; i++; cb=pes[i]; lin=RGB(cr,cg,cb); }
if(pes[i]==-7){ ojn=1; }
if(pes[i]==-6){ ojn=0; }
if(pes[i]==-11){  i++; scx=pes[i]; i++; scy=pes[i]; i++; scz=pes[i];  }
if(pes[i]==-12){  i++; ran1=cos( pes[i]*3.143/180.0 ); rnd1=sin( pes[i]*3.143/180.0 ); i++;
ran2=cos( pes[i]*3.143/180.0 ); rnd2=sin( pes[i]*3.143/180.0 ); i++;
ran3=cos( pes[i]*3.143/180.0 ); rnd3=sin( pes[i]*3.143/180.0 );  }
if(pes[i]==-13){ setshade(FLAT);  }
if(pes[i]==-14){ setshade(NULL);   }
if(pes[i]==-26){ setshade(GOURAUD);  }
if(pes[i]==-17){ CLAS=0; }
if(pes[i]==-18){ CLAS=1; }
}
//end here
//alpha
sdepth(TRUE);
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
fin=0; vc=0; innu=0; ojn=0; tvc=0; finz=0; lin=RGB(255,255,255);  thm9=0; thm8=0;
for(int i=transg[z];i<fconx;i++){
if(pes[i]==-4){ innu=0; i++;  }
if(pes[i]==-5){ innu=1;  i++;  }
if(pes[i]==-19){ thm9=0; }
if(pes[i]==-20){ thm9=1; }
if(pes[i]==-21){ thm8=0; }
if(pes[i]==-22){ thm8=1; }
if(pes[i]==-23){ thm9=2; }
if(pes[i]==-10){ tinz=pes[i+1]-1; if(tinz<200){ xinz=xhit[tinz]; yinz=yhit[tinz]; }else{ 
xinz=xhit[tinz]; yinz=yhit[tinz];
GetBitmapBits(hbix[tinz-200],sizeof(bitex[200]),&bitex[200]); tinz=200;  } i+=2; 	}
if(pes[i]==-16){ transs=pes[i+1]-1; i+=1; }
if(pes[i]==-3){  i++; cr=pes[i]; i++; cg=pes[i]; i++; cb=pes[i]; lin=RGB(cr,cg,cb); }
if(pes[i]==-7){ ojn=1; }
if(pes[i]==-6){ ojn=0; }
if(pes[i]==-11){  i++; scx=pes[i]; i++; scy=pes[i]; i++; scz=pes[i];  }
if(pes[i]==-12){  i++; ran1=cos( pes[i]*3.143/180.0 ); rnd1=sin( pes[i]*3.143/180.0 ); i++;
ran2=cos( pes[i]*3.143/180.0 ); rnd2=sin( pes[i]*3.143/180.0 ); i++;
ran3=cos( pes[i]*3.143/180.0 ); rnd3=sin( pes[i]*3.143/180.0 );  }
if(pes[i]==-13){ setshade(FLAT);  break; }
if(pes[i]==-14){ setshade(NULL);  break; }
if(pes[i]==-26){ setshade(GOURAUD);  break; }
if(pes[i]==-17){ CLAS=0; }
if(pes[i]==-18){ CLAS=1; }
if(pes[i]==-1){ break; }
if(pes[i]==-24){  piv1=pes[i+1]/1000.0; piv2=pes[i+2]/1000.0; piv3=pes[i+3]/1000.0;  i+=3; }
}

for(int i=transb[z];i<fconx;i++){
if(pes[i]==-4){ innu=0; i++;  }
if(pes[i]==-5){ innu=1;  i++;  }
if(pes[i]==-19){ thm9=0; }
if(pes[i]==-20){ thm9=1; }
if(pes[i]==-21){ thm8=0; }
if(pes[i]==-22){ thm8=1; }
if(pes[i]==-23){ thm9=2; }
if(pes[i]==-10){ tinz=pes[i+1]-1; if(tinz<200){ xinz=xhit[tinz]; yinz=yhit[tinz]; }else{ 
xinz=xhit[tinz]; yinz=yhit[tinz];
GetBitmapBits(hbix[tinz-200],sizeof(bitex[200]),&bitex[200]); tinz=200;  } i+=2; 	}
if(pes[i]==-16){ transs=pes[i+1]-1; i+=1; }
if(pes[i]==-3){  i++; cr=pes[i]; i++; cg=pes[i]; i++; cb=pes[i]; lin=RGB(cr,cg,cb); }
if(pes[i]==-7){ ojn=1; }
if(pes[i]==-6){ ojn=0; }
if(pes[i]==-11){  i++; scx=pes[i]; i++; scy=pes[i]; i++; scz=pes[i];  }
if(pes[i]==-12){  i+=3; }
if(pes[i]==-13){ setshade(FLAT);  }
if(pes[i]==-14){ setshade(NULL);  }
if(pes[i]==-26){ setshade(GOURAUD);  }
if(pes[i]==-17){ CLAS=0; }
if(pes[i]==-18){ CLAS=1; }
if(pes[i]==-1){ break; }
if(pes[i]==-24){  piv1=pes[i+1]/1000.0; piv2=pes[i+2]/1000.0; piv3=pes[i+3]/1000.0;  i+=3; }
}
 trss=trangn[z];
for(int y=0,i=transp[z];y<fconx;i++,y++){
if(fin==1&&innu==0){
if(pes[i]==-8){  tvc=0; i++;
{ 
for(0;i<fcon;i++){
if(pes[i]<0){ break; }
	spitt[tvc].x=tyes[pes[i]-1]; spitt[tvc].y=txes[pes[i]-1]; tvc++;
} 
}
}
if(pes[i]==-25){  nvc=0; i++;
for(0;i<fcon;i++){
if(pes[i]<0){ break; }
	spont[nvc].x=(rnormy[pes[i]-1])*scx; spont[nvc].y=(rnormx[pes[i]-1])*scx; spont[nvc].z=(rnormz[pes[i]-1])*scx;

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
 if(pes[i]==-2){    if(CLAS==0){ if(thm8==0){ polygonzx(sprite,spont,vc,lin,transs); } }else{ conlinez(sprite,vc,rwire,transs,FALSE); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,rwire,transs,TRUE);  } vc=0; finz=0; tvc=0; break; }
else{
if(pes[i]>0&&finz==0){
sprite[vc].x=(rxes[pes[i]-1]+transp1[trss])*scx/100; sprite[vc].y=(ryes[pes[i]-1]+transp2[trss])*scy/100; sprite[vc].z=(rzes[pes[i]-1]+transp3[trss])*scz/100; 
sprite[vc].x-=piv1+transp1[trss]; sprite[vc].y-=piv2+transp2[trss]; sprite[vc].z-=piv3+transp3[trss]; 

//z
dist[0].x=(sprite[vc].x*ran3)-(sprite[vc].y*rnd3); dist[0].y=(sprite[vc].x*rnd3)+(sprite[vc].y*ran3); dist[0].z=sprite[vc].z;
//y
sprite[vc].x=(dist[0].x*ran2)+(dist[0].z*rnd2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*rnd2)+(dist[0].z*ran2);
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*ran1)-(sprite[vc].z*rnd1 ); dist[0].z=(sprite[vc].y*rnd1)+(sprite[vc].z*ran1 );

sprite[vc].x=dist[0].x+piv1+transp1[trss]; sprite[vc].y=dist[0].y+piv2+transp2[trss]; sprite[vc].z=dist[0].z+piv3+transp3[trss];

 sprite[vc].z-=camsz; sprite[vc].y-=camsy; sprite[vc].x-=camsx;
sprite[vc].x*=2; sprite[vc].y*=2; sprite[vc].z*=2;
//x
dist[0].x=sprite[vc].x; dist[0].y=(sprite[vc].y*can1)-(sprite[vc].z*san1 ); dist[0].z=(sprite[vc].y*san1)+(sprite[vc].z*can1 ); 
//y
sprite[vc].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[vc].y=dist[0].y; sprite[vc].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
//z
dist[0].x=(sprite[vc].x*can3)-(sprite[vc].y*san3); dist[0].y=(sprite[vc].x*san3)+(sprite[vc].y*can3); dist[0].z=sprite[vc].z;
//adjust
 sprite[vc].x=dist[0].x*(3+zmm1); sprite[vc].y=dist[0].y*(3+zmm2); sprite[vc].z=dist[0].z; 
  sprite[vc].x*=15; sprite[vc].y*=15; sprite[vc].z*=15; 
  sprite[vc].x*=minr*2; sprite[vc].y*=minr*2; 
sprite[vc].x+=vx/2; sprite[vc].y+=vy/2; thm3=sprite[vc].z; if(thm3>field){thm3=field; }
if(perss==1){ w=(field)*(sprite[vc].x-(vx/2)); w/=((field)-thm3); sprite[vc].x=w+(vx/2);	w=(field)*(sprite[vc].y-(vy/2)); w/=((field)-thm3); sprite[vc].y=w+(vy/2);    } 
sprite[vc].z/=(scz/100.0)*0.5; sprite[vc].z+=frr; 
 vc++;
}
}
}
if(pes[i]==-9){ if(thm8==0){ polymagezx(sprite,spont,spitt,vc,lin,transs,bitex[tinz],xinz,yinz); } if(thm9==2){ rdotz(sprite,vc,wire,transs); } if(thm9==1){ conlinez(sprite,vc,RGB(0,0,0),transs,TRUE); }   tvc=0; vc=0; finz=0; break; }
if(pes[i]==-1){ fin=1; vc=0;  }
if(pes[i]==-2){ fin=0; }
}

}
//end
showscreen(hqc,pc1/2-(vinx/2),pc2/2-(viny/2),vinx,viny);
clearview();
}

int collision(int grav,int speed){ float xr,xm,xh; float xpo=0,ypo=0,zpo=0,t; int jc=0,j,k,im=0,zy=0,xe;
for(int a=0;a<grmp[grav]-1;a++){
if(grup[grav][a]>=0){
  im=0; xpo=rxes[grup[grav][a]]+transp1[grav]; ypo=rzes[grup[grav][a]]+transp3[grav]; zpo=ryes[grup[grav][a]]+transp2[grav]; 
for(int z=0;z<interi;z++){ jc=0;
if(collide[z]==1&&z!=grav&&pes[sp[z]]!=-5){
for(xe=0;xe<grmp[z]-1;xe++){ jc=0;
for(0;xe<grmp[z]-1;xe++){
if(grup[z][xe+1]==-1){ break; }
	if((rxes[grup[z][xe]]+transp1[z])>(rxes[grup[z][xe+1]]+transp1[z])){ xm=(rxes[grup[z][xe]]+transp1[z]); xr=(rxes[grup[z][xe+1]]+transp1[z]); }else{ xr=(rxes[grup[z][xe]]+transp1[z]); xm=(rxes[grup[z][xe+1]]+transp1[z]); }
if(xr<xpo&&xm>=xpo){ xh=(xpo-(rxes[grup[z][xe]]+transp1[z]))/((rxes[grup[z][xe+1]]+transp1[z])-(rxes[grup[z][xe]]+transp1[z])); 
Join[jc]=((rzes[grup[z][xe+1]]+transp3[z])-(rzes[grup[z][xe]]+transp3[z]) )*xh; Join[jc]+=(rzes[grup[z][xe]]+transp3[z]);  
Dink[jc]=((ryes[grup[z][xe+1]]+transp2[z])-(ryes[grup[z][xe]]+transp2[z]) )*xh;  Dink[jc]+=(ryes[grup[z][xe]]+transp2[z]); 
jc++;
if(jc>499){ break; }
}
}
if(jc>1){
for(j=0;j<jc;j++){
	for(k=j+1;k<jc;k++){
	if(Join[j]>Join[k]){
xr=Join[j]; Join[j]=Join[k]; Join[k]=xr;
xr=Dink[j]; Dink[j]=Dink[k]; Dink[k]=xr;
		}	}	}
if(jc>0){
for(zy=0;zy<jc;zy++){ if(ypo<Join[zy]){ break; } 
if(im==0){im=1; }else{ im=0; } }
 }
 zy--;
if(im==1){
t=(ypo-Join[zy])/(Join[zy+1]-Join[zy]);
xr=(Dink[zy+1]-Dink[zy]); xr*=t;
xr+=Dink[zy];
if(zpo>xr-0.1&&zpo<xr+0.1){ }else{ im=0; }
}
}
if(im==1){ break; }
}
//first
if(im==0){
for(xe=0;xe<grmp[z]-1;xe++){ jc=0;
for(0;xe<grmp[z]-1;xe++){
if(grup[z][xe+1]==-1){ break; }
	if((rxes[grup[z][xe]]+transp1[z])>(rxes[grup[z][xe+1]]+transp1[z])){ xm=(rxes[grup[z][xe]]+transp1[z]); xr=(rxes[grup[z][xe+1]]+transp1[z]); }else{ xr=(rxes[grup[z][xe]]+transp1[z]); xm=(rxes[grup[z][xe+1]]+transp1[z]); }
if(xr<xpo&&xm>=xpo){ xh=(xpo-(rxes[grup[z][xe]]+transp1[z]))/((rxes[grup[z][xe+1]]+transp1[z])-(rxes[grup[z][xe]]+transp1[z])); 
Join[jc]=((rzes[grup[z][xe+1]]+transp3[z])-(rzes[grup[z][xe]]+transp3[z]) )*xh; Join[jc]+=(rzes[grup[z][xe]]+transp3[z]);  
Dink[jc]=((ryes[grup[z][xe+1]]+transp2[z])-(ryes[grup[z][xe]]+transp2[z]) )*xh;  Dink[jc]+=(ryes[grup[z][xe]]+transp2[z]); 
jc++;
if(jc>499){ break; }
}
}
if(jc>1){
for(j=0;j<jc;j++){
	for(k=j+1;k<jc;k++){
	if(Dink[j]>Dink[k]){
xr=Join[j]; Join[j]=Join[k]; Join[k]=xr;
xr=Dink[j]; Dink[j]=Dink[k]; Dink[k]=xr;
		}	}	}
if(jc>0){
for(zy=0;zy<jc;zy++){ if(zpo<Dink[zy]){ break; } 
if(im==0){im=1; }else{ im=0; } }
 }
 zy--;
if(im==1){
t=(zpo-Dink[zy])/(Dink[zy+1]-Dink[zy]);
xr=(Join[zy+1]-Join[zy]); xr*=t;
xr+=Join[zy];
if(ypo>xr-0.1&&ypo<xr+0.1){ }else{ im=0; }
}
}
if(im==1){ break; }
}	
}
//second
if(im==0){
for(xe=0;xe<grmp[z]-1;xe++){ jc=0;
for(0;xe<grmp[z]-1;xe++){
if(grup[z][xe+1]==-1){ break; }
	if((ryes[grup[z][xe]]+transp2[z])>(ryes[grup[z][xe+1]]+transp2[z])){ xm=(ryes[grup[z][xe]]+transp2[z]); xr=(ryes[grup[z][xe+1]]+transp2[z]); }else{ xr=(ryes[grup[z][xe]]+transp2[z]); xm=(ryes[grup[z][xe+1]]+transp2[z]); }
if(xr<xpo&&xm>=xpo){ xh=(xpo-(ryes[grup[z][xe]]+transp2[z]))/((ryes[grup[z][xe+1]]+transp2[z])-(ryes[grup[z][xe]]+transp2[z])); 
Join[jc]=((rzes[grup[z][xe+1]]+transp3[z])-(rzes[grup[z][xe]]+transp3[z]) )*xh; Join[jc]+=(rzes[grup[z][xe]]+transp3[z]);  
Dink[jc]=((rxes[grup[z][xe+1]]+transp1[z])-(rxes[grup[z][xe]]+transp1[z]) )*xh;  Dink[jc]+=(rxes[grup[z][xe]]+transp1[z]); 
jc++;
if(jc>499){ break; }
}
}
if(jc>1){
for(j=0;j<jc;j++){
	for(k=j+1;k<jc;k++){
	if(Join[j]>Join[k]){
xr=Join[j]; Join[j]=Join[k]; Join[k]=xr;
xr=Dink[j]; Dink[j]=Dink[k]; Dink[k]=xr;
		}	}	}
if(jc>0){
for(zy=0;zy<jc;zy++){ if(ypo<Join[zy]){ break; } 
if(im==0){im=1; }else{ im=0; } }
 }
 zy--;
if(im==1){
t=(ypo-Join[zy])/(Join[zy+1]-Join[zy]);
xr=(Dink[zy+1]-Dink[zy]); xr*=t;
xr+=Dink[zy]; 
if(xpo>xr-0.1&&xpo<xr+0.1){ }else{ im=0; }
}
}

if(im==1){ break; }
}
}
//last
//end
}
}


if(im==1){ break; }
}
}//end
return im;
}

LRESULT CALLBACK PLAYER(HWND playd, UINT MAssage, WPARAM wfaram, LPARAM lfParam) {
	switch(MAssage) {
	case WM_TIMER:{ 
if(shk==1){ camsx-=5; camsz-=2; shk=2; }
else if(shk==2){ camsx+=7; camsz+=5; shk=3; }
else if(shk==3){ camsx-=2; camsz-=7; shk=4; }
else if(shk==4){ camsx+=6; camsz+=5; shk=5; }
else if(shk==5){ camsx-=7; camsz-=6; shk=6; }
else if(shk==6){ camsx+=1; camsz+=5; shk=0; }

for(int q=0;q<interi;q++){
if(gravity[q]==1){											   
fly=(0.1*mass[q]); if(collide[q]==0){transp1[q]-=fly;}
else{ if(fly>0){ lio=0;
for(fly1=0;fly1<fly&&lio==0;fly1+=0.1){ if(pes[sp[q]]==-5){ break; } if(coliso[q]==1){ lio=collision(q,fly); }
if(lio>=1){  if(strlen(colipot[q])>1){ process(colipot[q]); }    break;  } transp1[q]-=0.1; }
}
}
} }

 ValidateRect(playd,NULL); InvalidateRect(playd,NULL,TRUE); 

		break;
	}

	case WM_CREATE:{ 
joySetCapture(playd,JOYSTICKID1,NULL,NULL);
joySetCapture(playd,JOYSTICKID2,NULL,NULL);
	SetTimer(playd,1,100,NULL);
process(keyev[155]);
rot1+=1.57;
rot2+=4.712;
		break;
	}

case MM_JOY1MOVE:{
thm3=LOWORD(lfParam);
thm5=HIWORD(lfParam); 
if((UINT)wfaram&JOY_BUTTON1){  }
if((UINT)wfaram&JOY_BUTTON2){  }
if((UINT)wfaram&JOY_BUTTON3){ }


if(thm5<0){ process(keyev[156]); }
if(thm5>=60000){ process(keyev[157]); }
if(thm3<0){ process(keyev[158]); }
if(thm3>=60000){ process(keyev[159]); }

	break;
}
case MM_JOY1ZMOVE:{
thm3=LOWORD(lfParam);
thm5=HIWORD(lfParam); 
if(thm3<=0){ }
if(thm3>=60000){ }


	break;
}

case WM_LBUTTONUP:{
process(keyev[4]);
	break;
}
case WM_RBUTTONUP:{
process(keyev[5]);	
	break;
}
case WM_LBUTTONDOWN:{
process(keyev[0]);
	break;
}
case WM_RBUTTONDOWN:{
process(keyev[1]);		
	break;
}
case WM_MBUTTONDOWN:{
process(keyev[2]);		
	break;
}
case WM_MOUSEMOVE:{
mpo1=LOWORD(lfParam);
mpo2=HIWORD(lfParam);
process(keyev[3]);		
	break;
}

case WM_KEYDOWN:{
	switch(LOWORD(wfaram)){
case VK_ESCAPE:{ process(keyev[91]); break; }
case VK_F1:{ process(keyev[92]); break; }
case VK_F2:{ process(keyev[93]); break; }
case VK_F3:{ process(keyev[94]); break; }
case VK_F4:{ process(keyev[95]); break; }
case VK_F5:{ process(keyev[96]); break; }
case VK_F6:{ process(keyev[97]); break; }
case VK_F7:{ process(keyev[98]); break; }
case VK_F8:{ process(keyev[99]); break; }
case VK_F9:{ process(keyev[100]); break; }
case VK_F10:{ process(keyev[101]); break; }
case VK_F11:{ process(keyev[102]); break; }
case VK_F12:{ process(keyev[103]); break; }
case VK_INSERT:{ process(keyev[104]); break; }
case VK_DELETE:{ process(keyev[105]); break; }
case VK_HOME:{ process(keyev[106]); break; }
case VK_END:{ process(keyev[107]); break; }
case VK_PRIOR:{ process(keyev[108]); break; }
case VK_NEXT:{ process(keyev[109]); break; }
case VK_TAB:{ process(keyev[110]); break; }
case VK_BACK:{ process(keyev[111]); break; }
case VK_LBUTTON:{ process(keyev[112]); break; }
case VK_RBUTTON:{ process(keyev[113]); break; }
case VK_CANCEL:{ process(keyev[114]); break; }
case VK_MBUTTON:{ process(keyev[115]); break; }
case VK_CLEAR:{ process(keyev[116]); break; }
case VK_RETURN:{ process(keyev[117]); break; }
case VK_SHIFT:{ process(keyev[118]); break; }
case VK_LSHIFT:{ process(keyev[119]); break; }
case VK_RSHIFT:{ process(keyev[120]); break; }
case VK_CONTROL:{ process(keyev[121]); break; }
case VK_MENU:{ process(keyev[122]); break; }
case VK_PAUSE:{ process(keyev[123]); break; }
case VK_CAPITAL:{ process(keyev[124]); break; }
case VK_SPACE:{ process(keyev[125]); break; }
case VK_UP:{ process(keyev[126]); break; }
case VK_DOWN:{ process(keyev[127]); break; }
case VK_LEFT:{ process(keyev[128]); break; }
case VK_RIGHT:{ process(keyev[129]); break; }
case VK_PRINT:{ process(keyev[130]); break; }
case VK_HELP:{ process(keyev[131]); break; }
case VK_SLEEP:{ process(keyev[132]); break; }
case VK_NUMPAD0:{ process(keyev[133]); break; }
case VK_NUMPAD1:{ process(keyev[134]); break; }
case VK_NUMPAD2:{ process(keyev[135]); break; }
case VK_NUMPAD3:{ process(keyev[136]); break; }
case VK_NUMPAD4:{ process(keyev[137]); break; }
case VK_NUMPAD5:{ process(keyev[138]); break; }
case VK_NUMPAD6:{ process(keyev[139]); break; }
case VK_NUMPAD7:{ process(keyev[140]); break; }
case VK_NUMPAD8:{ process(keyev[141]); break; }
case VK_NUMPAD9:{ process(keyev[142]); break; }
case VK_MULTIPLY:{ process(keyev[143]); break; }
case VK_ADD:{ process(keyev[144]); break; }
case VK_SUBTRACT:{ process(keyev[145]); break; }
case VK_DECIMAL:{ process(keyev[146]); break; }
case VK_DIVIDE:{ process(keyev[147]); break; }
case VK_NUMLOCK:{ process(keyev[148]); break; }
case VK_SCROLL:{ process(keyev[149]); break; }
case VK_LCONTROL:{ process(keyev[150]); break; }
case VK_RCONTROL:{ process(keyev[151]); break; }
case VK_LMENU:{ process(keyev[152]); break; }
case VK_RMENU:{ process(keyev[153]); break; }
	}
	break;
}
case WM_CHAR:{
how[0]=(CHAR)wfaram;
if(how[0]=='A'){ process(keyev[6]);  }
if(how[0]=='B'){ process(keyev[7]);  }
if(how[0]=='C'){ process(keyev[8]); }
if(how[0]=='D'){ process(keyev[9]); }
if(how[0]=='E'){ process(keyev[10]); }
if(how[0]=='F'){ process(keyev[11]); }
if(how[0]=='G'){ process(keyev[12]); }
if(how[0]=='H'){ process(keyev[13]); }
if(how[0]=='I'){ process(keyev[14]); }
if(how[0]=='J'){ process(keyev[15]); }
if(how[0]=='K'){ process(keyev[16]); }
if(how[0]=='L'){ process(keyev[17]); }
if(how[0]=='M'){ process(keyev[18]); }
if(how[0]=='N'){ process(keyev[19]); }
if(how[0]=='O'){ process(keyev[20]); }
if(how[0]=='P'){ process(keyev[21]); }
if(how[0]=='Q'){ process(keyev[22]); }
if(how[0]=='R'){ process(keyev[23]); }
if(how[0]=='S'){ process(keyev[24]); }
if(how[0]=='T'){ process(keyev[25]); }
if(how[0]=='U'){ process(keyev[26]); }
if(how[0]=='V'){ process(keyev[27]); }
if(how[0]=='W'){ process(keyev[28]); }
if(how[0]=='X'){ process(keyev[29]); }
if(how[0]=='Y'){ process(keyev[30]); }
if(how[0]=='Z'){ process(keyev[31]); }
if(how[0]=='a'){ process(keyev[32]); }
if(how[0]=='b'){ process(keyev[33]); }
if(how[0]=='c'){ process(keyev[34]); }
if(how[0]=='d'){ process(keyev[35]); }
if(how[0]=='e'){ process(keyev[36]); }
if(how[0]=='f'){ process(keyev[37]); }
if(how[0]=='g'){ process(keyev[38]); }
if(how[0]=='h'){ process(keyev[39]); }
if(how[0]=='i'){ process(keyev[40]); }
if(how[0]=='j'){ process(keyev[41]); }
if(how[0]=='k'){ process(keyev[42]); }
if(how[0]=='l'){ process(keyev[43]); }
if(how[0]=='m'){ process(keyev[44]); }
if(how[0]=='n'){ process(keyev[45]); }
if(how[0]=='o'){ process(keyev[46]); }
if(how[0]=='p'){ process(keyev[47]); }
if(how[0]=='q'){ process(keyev[48]); }
if(how[0]=='r'){ process(keyev[49]); }
if(how[0]=='s'){ process(keyev[50]); }
if(how[0]=='t'){ process(keyev[51]); }
if(how[0]=='u'){ process(keyev[52]); }
if(how[0]=='v'){ process(keyev[53]); }
if(how[0]=='w'){ process(keyev[54]); }
if(how[0]=='x'){ process(keyev[55]); }
if(how[0]=='y'){ process(keyev[56]); }
if(how[0]=='z'){ process(keyev[57]); }
if(how[0]=='`'){ process(keyev[58]); }
if(how[0]=='¬'){ process(keyev[59]); }
if(how[0]=='!'){ process(keyev[60]); }
if(how[0]=='\"'){ process(keyev[61]); }
if(how[0]=='£'){ process(keyev[62]); }
if(how[0]=='$'){ process(keyev[63]); }
if(how[0]=='%'){ process(keyev[64]); }
if(how[0]=='^'){ process(keyev[65]); }
if(how[0]==' '){ process(keyev[66]); }
if(how[0]=='*'){ process(keyev[67]); }
if(how[0]=='('){ process(keyev[68]); }
if(how[0]==')'){ process(keyev[69]); }
if(how[0]=='_'){ process(keyev[70]); }
if(how[0]=='-'){ process(keyev[71]); }
if(how[0]=='+'){ process(keyev[72]); }
if(how[0]=='='){ process(keyev[73]); }
if(how[0]=='['){ process(keyev[74]); }
if(how[0]=='{'){ process(keyev[75]); }
if(how[0]==']'){ process(keyev[76]); }
if(how[0]=='}'){ process(keyev[77]); }
if(how[0]=='#'){ process(keyev[78]); }
if(how[0]=='~'){ process(keyev[79]); }
if(how[0]=='\\'){ process(keyev[80]); }
if(how[0]==';'){ process(keyev[81]); }
if(how[0]==':'){ process(keyev[82]); }
if(how[0]=='\''){ process(keyev[83]); }
if(how[0]=='@'){ process(keyev[84]); }
if(how[0]=='<'){ process(keyev[85]); }
if(how[0]==','){ process(keyev[86]); }
if(how[0]=='.'){ process(keyev[87]); }
if(how[0]=='>'){ process(keyev[88]); }
if(how[0]=='/'){ process(keyev[89]); }
if(how[0]=='?'){ process(keyev[90]); }
	break;
}
case WM_SIZE:{
	pc1=LOWORD(lfParam); pc2=HIWORD(lfParam);
	break;
}
case WM_PAINT:{
hqcc=BeginPaint(playd,&pe);
hqc=CreateCompatibleDC(hqcc);
hqy=CreateCompatibleBitmap(hqcc,pc1,pc2);
SelectObject(hqc,hqy);	
PAINT();
BitBlt(hqcc,0,0,pc1,pc2,hqc,0,0,SRCCOPY);
DeleteDC(hqc);
DeleteObject(hqy);
EndPaint(playd,&pe);
if(strlen(keyev[154])>0){ process(keyev[154]); }
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
	return DefWindowProc(playd, MAssage, wfaram, lfParam);
	}
	return 0;
}

void play(float pos1,float pos2,float pos3,float an1,float an2,float an3,float fov,float nearr,float farr,float xr,float yr,float pers,int size,float vps,float vpper,float red,float green,float blue,int skid){ 
fconx=fcon; redd=red; greenn=green; bluee=blue; skit=skid;
deci=size; vass=vps; vass1=vpper; acr=xr/yr; DestroyWindow(playd); DestroyWindow(bine); 
		HINSTANCE hInstancex;
	MSG msgx;
	WNDCLASSEX wcx;
	memset(&wcx,0,sizeof(wcx));
	wcx.cbSize		 = sizeof(WNDCLASSEX);
	wcx.lpfnWndProc	 = PLAYER;
	wcx.hInstance	 = hInstancex;
	wcx.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wcx.lpszClassName = "WindowClassd";
	wcx.hIcon		 = LoadIcon(GetModuleHandle(NULL), "ICO");
	wcx.hIconSm		 = LoadIcon(GetModuleHandle(NULL), "ICO");
	wcx.lpszMenuName  = NULL;
RegisterClassEx(&wcx);
for(int a=0;a<fconx;a++){ pes[a]=ges[a]; }
for(int a=0;a<vcon;a++){ rnormx[a]=normx[a]; rnormy[a]=normy[a]; rnormz[a]=normz[a]; }

sprintf(interc,""); sprintf(freeuse,"");
for(int a=0,vib=0;a<strlen(projs);a++){
	if(projs[a]==';'){ a++;
	for(0;a<strlen(projs); a++){ 
	how[vib]=projs[a]; vib++;
	if(projs[a]=='\n'||projs[a]=='\r'){ how[vib-1]=0; vib=0;
	thm3=0;
for(int u=0;u<strlen(how);u++){ if(how[u]>=65&&how[u]<=90){ how[u]+=32; } }
for(int u=0;u<strlen(how);u++){ if(how[u]=='d'&&how[u+1]=='e'&&how[u+2]=='f'){ thm3=2; break; } if(how[u]=='s'&&how[u+1]=='c'&&how[u+2]=='r'&&how[u+3]=='i'&&how[u+4]=='p'&&how[u+5]=='t'){ thm3=1; break; }  }
if(thm3>0){
	hnd=CreateFile(how,GENERIC_READ,FILE_SHARE_READ,0,OPEN_EXISTING,0,NULL);
	size1=GetFileSize(hnd,NULL);
	ReadFile(hnd,moblat,size1,0,0);
	CloseHandle(hnd);
	moblat[size1]=0;
if(thm3==1){
	sprintf(interc,"%s%s",interc,moblat);
	interc[strlen(interc)]=0;
}
if(thm3==2){
	sprintf(freeuse,"%s%s",freeuse,moblat);
	freeuse[strlen(freeuse)]=0;
}
}
	break;} }
	}
} interi=0;
sprintf(cardef,""); emuv=0; emus=0; evus=0;
for(int a=0;a<strlen(freeuse);a++){
if(freeuse[a]=='i'&&freeuse[a+1]=='n'&&freeuse[a+2]=='t'){ a+=3;	for(0;a<strlen(freeuse);a++){ if(freeuse[a]!=' '&&freeuse[a]!='	'){ break; } } 
for(int b=0;a<strlen(freeuse);a++){ if(freeuse[a]=='\n'||freeuse[a]=='\r'||freeuse[a]=='	'||freeuse[a]=='	'||freeuse[a]=='='||freeuse[a]==';'){ how[b]=0; break; } how[b]=freeuse[a]; b++; }
if(freeuse[a]=='='){ a++;	for(0;a<strlen(freeuse);a++){ if(freeuse[a]!=' '&&freeuse[a]!='	'&&freeuse[a]!='\"'){ break; } } 
for(int b=0;a<strlen(freeuse);a++){ if(freeuse[a]=='\n'||freeuse[a]=='\r'||freeuse[a]=='	'||freeuse[a]=='	'||freeuse[a]=='\"'||freeuse[a]==';'){ how1[b]=0; break; } how1[b]=freeuse[a]; b++; }
integer[emuv]=atoi(how1);
}
sprintf(cardef,"%s%s-,",how); emuv++;
}
if(freeuse[a]=='f'&&freeuse[a+1]=='l'&&freeuse[a+2]=='o'&&freeuse[a+3]=='a'&&freeuse[a+4]=='t'){ a+=5;	for(0;a<strlen(freeuse);a++){ if(freeuse[a]!=' '&&freeuse[a]!='	'){ break; } } 
for(int b=0;a<strlen(freeuse);a++){ if(freeuse[a]=='\n'||freeuse[a]=='\r'||freeuse[a]=='	'||freeuse[a]=='	'||freeuse[a]=='='||freeuse[a]==';'){ how[b]=0; break; } how[b]=freeuse[a]; b++; }
if(freeuse[a]=='='){ a++;	for(0;a<strlen(freeuse);a++){ if(freeuse[a]!=' '&&freeuse[a]!='	'&&freeuse[a]!='\"'){ break; } } 
for(int b=0;a<strlen(freeuse);a++){ if(freeuse[a]=='\n'||freeuse[a]=='\r'||freeuse[a]=='	'||freeuse[a]=='	'||freeuse[a]=='\"'||freeuse[a]==';'){ how1[b]=0; break; } how1[b]=freeuse[a]; b++; }
flint[emus]=atof(how1);
}
sprintf(cardef,"%s%s+,",how); emus++;
}
if(freeuse[a]=='c'&&freeuse[a+1]=='h'&&freeuse[a+2]=='a'&&freeuse[a+3]=='r'){ a+=4;	for(0;a<strlen(freeuse);a++){ if(freeuse[a]!=' '&&freeuse[a]!='	'){ break; } } 
for(int b=0;a<strlen(freeuse);a++){ if(freeuse[a]=='\n'||freeuse[a]=='\r'||freeuse[a]=='	'||freeuse[a]=='	'||freeuse[a]=='='||freeuse[a]==';'){ how[b]=0; break; } how[b]=freeuse[a]; b++; }
if(freeuse[a]=='='){ a++;	for(0;a<strlen(freeuse);a++){ if(freeuse[a]!=' '&&freeuse[a]!='	'&&freeuse[a]!='\"'){ break; } } 
for(int b=0;a<strlen(freeuse);a++){ if(freeuse[a]=='\n'||freeuse[a]=='\r'||freeuse[a]=='	'||freeuse[a]=='	'||freeuse[a]=='\"'||freeuse[a]==';'){ how1[b]=0; break; } how1[b]=freeuse[a]; b++; }
sprintf(charac[evus],"%s",how1);
}
sprintf(cardef,"%s%s*,",how); evus++;
}

}

for(int u=0;u<strlen(hlop);u++){ if(hlop[u]==':'){ interi++; }} 
int p;
	for(int r=0;r<interi;r++){
{
{ kon=0; usea=1;
p=sp[r]+1;
usea=1;
for(0;p<fconx;p++){
if(pes[p]<0){ usea=1; }
if(pes[p]==-1){ p++; usea=0; }
if(pes[p]==-2||pes[p]==-9){ grup[r][kon]=grup[r][0]; kon++; grup[r][kon]=-1; kon++; }
if(pes[p]==-5||pes[p]==-4){ break; }
if(usea==0){ grup[r][kon]=pes[p]-1; kon++; }

 }

 }  }
 grmp[r]=kon;
}

for(int u=0;u<vcon;u++){ rxes[u]=xes[u]; ryes[u]=yes[u]; rzes[u]=zes[u]; }

for(int i=0,a=-1,b=0,d=0,e=0;i<strlen(pivtc);i++){
if(pivtc[i]==':'){ a++; e=0; d=0; b=0; poinx[a]=pivotx[a]; poiny[a]=pivoty[a];  poinz[a]=pivotz[a]; poinn=a;  poinc[a]=0; i++; }
if(a>=0){
how[b]=pivtc[i]; b++;
if(pivtc[i]==','){ how[b]=0; b=0; if(e!=0){ poin[a][d]=-1; d++; e=0; } poin[a][d]=atoi(how); d++; poinc[a]=d; }
if(pivtc[i]=='.'){ how[b]=0; b=0; if(e!=1){ poin[a][d]=-2; d++; e=1; } poin[a][d]=atoi(how); d++; poinc[a]=d; }
if(pivtc[i]=='-'){ how[b]=0; b=0; if(e!=2){ poin[a][d]=-3; d++; e=2; } poin[a][d]=atoi(how); d++; poinc[a]=d; }
}
} 

for(int a=0,e=0;a<strlen(scene[0]);a++){
	if(scene[0][a]=='('){ 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimerax[e]=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimeray[e]=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimeraz[e]=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimex[e]=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimey[e]=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimez[e]=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimef[e]=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimen[e]=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimerx[e]=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimery[e]=atof(how1); 
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==','){ how1[g]=0; break;}} cimefo[e]=atof(how1);
a++; for(int g=0;a<strlen(scene[0]);a++,g++){ how1[g]=scene[0][a]; if(scene[0][a]==')'){ how1[g]=0; break;}} cimep[e]=atof(how1); 
	e++; cimerac=e; } 
}
for(int z=0;z<interi;z++){ transp1[z]=trans1[z]; transp2[z]=trans2[z]; transp3[z]=trans3[z]; }

zmm1=0; zmm2=0; curcam=defcam-1; rwire=wire;
camsx=pos1; camsy=pos2; camsz=pos3; rot1=an1; rot2=an2; rot3=an3; field=fov; nrr=nearr; frr=farr; rax=xr; ray=yr; perss=pers;
	playd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClassd","Moblity Player24",WS_VISIBLE|WS_POPUPWINDOW|WS_CAPTION|WS_MAXIMIZEBOX|WS_THICKFRAME,csize1/2-270,csize2/2-180,620,440,hwnd,NULL,hInstancex,NULL);	
	}
