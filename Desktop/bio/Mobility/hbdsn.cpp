for(int xe=0;xe<grmp[z]-1;xe++){
	if((rxes[grup[z][xe]]+transp1[z])>(rxes[grup[z][xe+1]]+transp1[z])){ xm=(rxes[grup[z][xe]]+transp1[z]); xr=(rxes[grup[z][xe+1]]+transp1[z]); }else{ xr=(rxes[grup[z][xe]]+transp1[z]); xm=(rxes[grup[z][xe+1]]+transp1[z]); }
if(xr<xpo&&xm>=xpo){ xh=(xpo-(rxes[grup[z][xe]]+transp1[z]))/((rxes[grup[z][xe+1]]+transp1[z])-(rxes[grup[z][xe]]+transp1[z])); 
join[jc]=((rzes[grup[z][xe+1]]+transp3[z])-(rzes[grup[z][xe]]+transp3[z]) )*xh; join[jc]+=(rzes[grup[z][xe]]+transp3[z]);  
link[jc]=((ryes[grup[z][xe+1]]+transp2[z])-(ryes[grup[z][xe]]+transp2[z]) )*xh;  link[jc]+=(ryes[grup[z][xe]]+transp2[z]); 
jc++;
}
}
for(j=0;j<jc;j++){
	for(k=j+1;k<jc;k++){
	if(join[j]>join[k]){
xr=join[j]; join[j]=join[k]; join[k]=xr;
xr=link[j]; link[j]=link[k]; link[k]=xr;
		}	}	}
if(jc>0){
for(zy=0;zy<jc;zy++){ if(ypo<join[zy]){ break; } 
if(im==0){im=1; }else{ im=0; } }
 }
 zy--;
if(im==1){
t=(ypo-join[zy])/(join[zy+1]-join[zy]);
xr=(link[zy+1]-link[zy]); xr*=t;
xr+=link[zy];
if(zpo>xr-0.14&&zpo<xr+0.14){ }else{ im=0; }
}

if(im==3){ jc=0;
for(int xe=0;xe<grmp[z]-1;xe++){
if((ryes[grup[z][xe]]+transp2[z])>(ryes[grup[z][xe+1]]+transp2[z])){ xm=(ryes[grup[z][xe]]+transp2[z]); xr=(ryes[grup[z][xe+1]]+transp2[z]); }else{ xr=(ryes[grup[z][xe]]+transp2[z]); xm=(ryes[grup[z][xe+1]]+transp2[z]); }
if(xr<ypo&&xm>=ypo){ xh=(xpo-(ryes[grup[z][xe]]+transp2[z]))/((ryes[grup[z][xe+1]]+transp2[z])-(ryes[grup[z][xe]]+transp2[z])); 
link[jc]=((rxes[grup[z][xe+1]]+transp1[z])-(rxes[grup[z][xe]]+transp1[z]) )*xh;  link[jc]+=(rxes[grup[z][xe]]+transp1[z]); 
join[jc]=((rzes[grup[z][xe+1]]+transp3[z])-(rzes[grup[z][xe]]+transp3[z]) )*xh; join[jc]+=(rzes[grup[z][xe]]+transp3[z]);  
jc++;
}
}
for(j=0;j<jc;j++){
	for(k=j+1;k<jc;k++){
	if(join[j]>join[k]){
xr=join[j]; join[j]=join[k]; join[k]=xr;
xr=link[j]; link[j]=link[k]; link[k]=xr;
		}	}	}
if(jc>0){ 
for(zy=0;zy<jc;zy++){ if(zpo<join[zy]){ break; } 
if(im==0){im=1; }else{ im=0; }  }
 }
 zy--;
if(im==1){
t=(zpo-join[zy])/(join[zy+1]-join[zy]);
xr=(link[zy+1]-link[zy]); xr*=t;
xr+=link[zy];
if(xpo>xr-0.1&&xpo<xr+0.1){ }else{ im=0; }
}

}

