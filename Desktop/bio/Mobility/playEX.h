
int summarise(char* summ){ int c=0,d=0,e=0,f=0,i=0,l=0;
sprintf(freeuse1,"%s",summ); 
for(int o=0;o==0;0){  o=1; sprintf(BUMP,"%s",freeuse1); c=0; i=0;
for(l=0;i<strlen(freeuse1);i++){
how[l]=freeuse1[i]; l++;
if(freeuse1[i]=='('){ l=0; c=i; }
if(freeuse1[i+1]==')'){   break; }
} how[l]=0; d=i+1; sprintf(freeuse,"%s",how); freeuse[l]=0;
//divide
for(int t=0;t==0;0){ t=1;
 e=0; 
for(int a=0,b=0;a<strlen(how);a++){
how1[b]=how[a]; b++;
if(how[a]=='/'){ o=0; how1[b]=0; a++; b=0; t=0; for(0;a<strlen(how);a++){ useaf[b]=how[a]; b++; if(how[a]=='+'||how[a]=='-'||how[a]=='*'||how[a]=='/'){  break; } } f=a; useaf[b]=0;
thm3=atof(useaf); thm6=atof(how1); thm3=thm6/thm3;
freeuse[e]=0; sprintf(freeuse,"%s%f",freeuse,thm3); e=strlen(freeuse); 
for(0;f<strlen(how);f++){ freeuse[e]=how[f]; e++; } freeuse[e]=0; sprintf(how,"%s",freeuse);
  break;}
if(how[a]=='+'||how[a]=='-'||how[a]=='*'){ b=0;  e=a+1;}
}
} 
//multiply
for(int t=0;t==0;0){ t=1;
 e=0; 
for(int a=0,b=0;a<strlen(how);a++){
how1[b]=how[a]; b++;
if(how[a]=='*'){ o=0; how1[b]=0; a++; b=0; t=0; for(0;a<strlen(how);a++){ useaf[b]=how[a]; b++; if(how[a]=='+'||how[a]=='-'||how[a]=='*'||how[a]=='/'){   break; } } f=a; useaf[b]=0;
thm3=atof(useaf); thm6=atof(how1); thm3=thm6*thm3;
freeuse[e]=0; sprintf(freeuse,"%s%f",freeuse,thm3); e=strlen(freeuse); 
for(0;f<strlen(how);f++){ freeuse[e]=how[f]; e++; } freeuse[e]=0; sprintf(how,"%s",freeuse);
  break;}
if(how[a]=='+'||how[a]=='-'){ b=0;  e=a+1;}
}
} 
//add
for(int t=0;t==0;0){ t=1;
 e=0; 
for(int a=0,b=0;a<strlen(how);a++){
how1[b]=how[a]; b++;
if(how[a]=='+'){ o=0; how1[b]=0; a++; b=0; t=0; for(0;a<strlen(how);a++){ useaf[b]=how[a]; b++; if(how[a]=='+'||how[a]=='-'||how[a]=='*'||how[a]=='/'){   break; } } f=a; useaf[b]=0;
thm3=atof(useaf); thm6=atof(how1); thm3=thm6+thm3;
freeuse[e]=0; sprintf(freeuse,"%s%f",freeuse,thm3); e=strlen(freeuse); 
for(0;f<strlen(how);f++){ freeuse[e]=how[f]; e++; } freeuse[e]=0; sprintf(how,"%s",freeuse);
  break;}
if(how[a]=='-'){ b=0;  e=a+1;}
}
}
//subtract
for(int t=0;t==0;0){ t=1;
 e=0; 
for(int a=0,b=0;a<strlen(how);a++){
how1[b]=how[a]; b++;
if(how[a]=='-'){ o=0; how1[b]=0; a++; b=0; t=0; for(0;a<strlen(how);a++){ useaf[b]=how[a]; b++; if(how[a]=='+'||how[a]=='-'||how[a]=='*'||how[a]=='/'){   break; } } f=a; useaf[b]=0;
thm3=atof(useaf); thm6=atof(how1); thm3=thm6-thm3;
freeuse[e]=0; sprintf(freeuse,"%s%f",freeuse,thm3); e=strlen(freeuse); 
for(0;f<strlen(how);f++){ freeuse[e]=how[f]; e++; } freeuse[e]=0; sprintf(how,"%s",freeuse);
  break;}
}
}
freeuse1[c]=0; sprintf(freeuse1,"%s%s",freeuse1,freeuse); e=strlen(freeuse1);
for(int a=d+1;a<strlen(BUMP);a++){ freeuse1[e]=BUMP[a]; e++; } freeuse1[e]=0; 
}
thm6=atof(freeuse1);
return thm6;
}

void process(char *process){ 
 vib; vin; z1=strlen(interc),z2=strlen(process);
if(z2>0){
for(int a=0;a<(z1-z2);a++){
	vib=0; vin=a; 
	while((interc[vin]==process[vib])&&(vib<z2)){
		vin++; vib++;
	}
if(vib==z2){ 
for(0;a<(z1-z2);a++){ if(interc[a-1]=='{'){ break; } }
//interpret 
for(int i=a,u=0;i<z1;i++){

if(interc[i]=='Z'&&interc[i+1]=='o'&&interc[i+2]=='o'&&interc[i+3]=='m'){ i+=3;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm3=atof(how); if(thm3<=0){ thm3=0; } zmm1=thm3; zmm2=thm3; break;} }
break;} } break; } }
}

if(interc[i]=='C'&&interc[i+1]=='a'&&interc[i+2]=='m'&&interc[i+3]=='e'&&interc[i+4]=='r'&&interc[i+5]=='a'){ i+=5;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; usea=atoi(how); if(usea<=0){ usea=0; }  curcam=usea;
camsx=cimerax[usea]; camsy=cimeray[usea]; camsz=cimeraz[usea]; rot1=cimex[usea]; rot2=cimey[usea]; rot3=cimez[usea]; nrr=cimef[usea]; frr=cimen[usea]; rax=cimerx[usea]; ray=cimery[usea]; perss=cimep[usea]; field=cimefo[usea]; break;} }
break;} } break; } }
}

if(interc[i]=='M'&&interc[i+1]=='o'&&interc[i+2]=='v'&&interc[i+3]=='e'&&interc[i+4]=='C'&&interc[i+5]=='a'&&interc[i+6]=='m'&&interc[i+7]=='e'&&interc[i+8]=='r'&&interc[i+9]=='a'&&interc[i+10]=='X'){ i+=10;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm3=atof(how); 

can1=cos(-rot1); san1=sin(-rot1);
can2=cos(-rot3); san2=sin(-rot3);
can3=cos(-rot2); san3=sin(-rot2);

thm8=thm3*san2;
thm7=0;
thm9=thm3*can2;

thm5=thm8;
thm6=thm9*-san1;
thm7=thm9*can1;

camsx+=thm5; camsy+=thm6; camsz+=thm7; 
cimerax[curcam]=camsx; cimeray[curcam]=camsy; cimeraz[curcam]=camsz; break;} }
break;} } break; } }
}
if(interc[i]=='M'&&interc[i+1]=='o'&&interc[i+2]=='v'&&interc[i+3]=='e'&&interc[i+4]=='C'&&interc[i+5]=='a'&&interc[i+6]=='m'&&interc[i+7]=='e'&&interc[i+8]=='r'&&interc[i+9]=='a'&&interc[i+10]=='Z'){ i+=10;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm3=atof(how); 
can1=cos(-rot1); san1=sin(-rot1);
can2=cos(-rot3); san2=sin(-rot3);
can3=cos(-rot2); san3=sin(-rot2);

thm5=thm3*-san3;
thm6=thm3*can3;
thm7=0; 

thm8=(thm7*san2)+(thm5*can2);
thm9=(thm5*-san2)+(thm7*can2);
thm7=thm6;

thm5=thm8;
thm6=(thm7*can1)+(thm9*-san1);
thm8=(thm7*san1)+(thm9*can1);

camsx+=thm5; camsy+=thm6; camsz+=thm8; 
cimerax[curcam]=camsx; cimeray[curcam]=camsy; cimeraz[curcam]=camsz;  break;} }
break;} } break; } }
}
if(interc[i]=='M'&&interc[i+1]=='o'&&interc[i+2]=='v'&&interc[i+3]=='e'&&interc[i+4]=='C'&&interc[i+5]=='a'&&interc[i+6]=='m'&&interc[i+7]=='e'&&interc[i+8]=='r'&&interc[i+9]=='a'&&interc[i+10]=='Y'){ i+=10;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm3=atof(how); 
can1=cos(-rot1); san1=sin(-rot1);
can2=cos(-rot3); san2=sin(-rot3);
can3=cos(-rot2); san3=sin(-rot2);

thm5=thm3*can3;
thm6=thm3*san3;
thm7=0; 

thm8=(thm5*can2)+(thm7*san2);
thm9=(thm5*-san2)+(thm7*can2);
thm7=thm6;

thm5=thm8;
thm6=(thm7*can1)+(thm9*-san1);
thm8=(thm7*san1)+(thm9*can1);

camsx+=thm5; camsy+=thm6; camsz+=thm8; 
cimerax[curcam]=camsx; cimeray[curcam]=camsy; cimeraz[curcam]=camsz; break;} }
break;} } break; } }
}
if(interc[i]=='S'&&interc[i+1]=='e'&&interc[i+2]=='t'&&interc[i+3]=='C'&&interc[i+4]=='a'&&interc[i+5]=='m'&&interc[i+6]=='e'&&interc[i+7]=='r'&&interc[i+8]=='a'){ i+=8;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; thm3=atof(how); camsz=thm3; cimeraz[curcam]=camsz; break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; thm3=atof(how); camsx=thm3; cimerax[curcam]=camsx; break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm3=atof(how); camsy=thm3; cimeray[curcam]=camsy; break;} }
break;} } break; } }
}
if(interc[i]=='R'&&interc[i+1]=='o'&&interc[i+2]=='t'&&interc[i+3]=='a'&&interc[i+4]=='t'&&interc[i+5]=='e'&&interc[i+6]=='C'&&interc[i+7]=='a'&&interc[i+8]=='m'&&interc[i+9]=='e'&&interc[i+10]=='r'&&interc[i+11]=='a'&&interc[i+12]=='X'){ i+=12;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how)*3.143; thm6/=180; rot1+=thm6; cimex[curcam]=rot1; break;} }
break;} } break; } }
}
if(interc[i]=='R'&&interc[i+1]=='o'&&interc[i+2]=='t'&&interc[i+3]=='a'&&interc[i+4]=='t'&&interc[i+5]=='e'&&interc[i+6]=='C'&&interc[i+7]=='a'&&interc[i+8]=='m'&&interc[i+9]=='e'&&interc[i+10]=='r'&&interc[i+11]=='a'&&interc[i+12]=='Y'){ i+=12;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how)*3.143; thm6/=180; rot3+=thm6; cimez[curcam]=rot3; break;} }
break;} } break; } }
}
if(interc[i]=='R'&&interc[i+1]=='o'&&interc[i+2]=='t'&&interc[i+3]=='a'&&interc[i+4]=='t'&&interc[i+5]=='e'&&interc[i+6]=='C'&&interc[i+7]=='a'&&interc[i+8]=='m'&&interc[i+9]=='e'&&interc[i+10]=='r'&&interc[i+11]=='a'&&interc[i+12]=='Z'){ i+=12;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how)*3.143; thm6/=180;  rot2+=thm6; cimey[curcam]=rot2; break;} }
break;} } break; } }
}
if(interc[i]=='C'&&interc[i+1]=='a'&&interc[i+2]=='m'&&interc[i+3]=='e'&&interc[i+4]=='r'&&interc[i+5]=='a'&&interc[i+6]=='R'&&interc[i+7]=='o'&&interc[i+8]=='t'&&interc[i+9]=='a'&&interc[i+10]=='t'&&interc[i+11]=='i'&&interc[i+12]=='o'&&interc[i+13]=='n'){ i+=13;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; thm6=atof(how)*3.143; thm6/=180;  rot1=thm6; cimex[curcam]=rot1; break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; thm6=atof(how)*3.143; thm6/=180;  rot3=thm6; cimez[curcam]=rot3; break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how)*3.143; thm6/=180;  rot2=thm6; cimey[curcam]=rot2; break;} }
break;} } break; } }
}
if(interc[i]=='M'&&interc[i+1]=='o'&&interc[i+2]=='v'&&interc[i+3]=='e'&&interc[i+4]=='O'&&interc[i+5]=='b'&&interc[i+6]=='j'&&interc[i+7]=='e'&&interc[i+8]=='c'&&interc[i+9]=='t'&&interc[i+10]=='X'){ i+=10;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
transp3[usea]+=thm6;
break;} } break; } }
}
if(interc[i]=='M'&&interc[i+1]=='o'&&interc[i+2]=='v'&&interc[i+3]=='e'&&interc[i+4]=='O'&&interc[i+5]=='b'&&interc[i+6]=='j'&&interc[i+7]=='e'&&interc[i+8]=='c'&&interc[i+9]=='t'&&interc[i+10]=='Y'){ i+=10;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
transp1[usea]+=thm6;
break;} } break; } }
}
if(interc[i]=='M'&&interc[i+1]=='o'&&interc[i+2]=='v'&&interc[i+3]=='e'&&interc[i+4]=='O'&&interc[i+5]=='b'&&interc[i+6]=='j'&&interc[i+7]=='e'&&interc[i+8]=='c'&&interc[i+9]=='t'&&interc[i+10]=='Z'){ i+=10;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
transp2[usea]+=thm6;
break;} } break; } }
}
if(interc[i]=='S'&&interc[i+1]=='e'&&interc[i+2]=='t'&&interc[i+3]=='O'&&interc[i+4]=='b'&&interc[i+5]=='j'&&interc[i+6]=='e'&&interc[i+7]=='c'&&interc[i+8]=='t'){ i+=8;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how); break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; thm3=atof(how); break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; thm6=atof(how); break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm7=atof(how); break;} }
thm5=rzes[grup[usea][0]]-thm3; thm8=rxes[grup[usea][0]]-thm6; thm9=ryes[grup[usea][0]]-thm7;
transp1[usea]-=thm8; transp2[usea]-=thm7; transp3[usea]-=thm5; 
break;} } break; } }
}
if(interc[i]=='R'&&interc[i+1]=='o'&&interc[i+2]=='t'&&interc[i+3]=='a'&&interc[i+4]=='t'&&interc[i+5]=='e'&&interc[i+6]=='O'&&interc[i+7]=='b'&&interc[i+8]=='j'&&interc[i+9]=='e'&&interc[i+10]=='c'&&interc[i+11]=='t'&&interc[i+12]=='X'){ i+=12;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
for(int q=0,w=0;q<fcon;q++){  if(w>=usea){
for(0;q<fcon;q++){ if(pes[q]==-12){ pes[q+1]+=thm6; if(pes[q+1]<0){ pes[q+1]=360; } if(pes[q+1]>360){ pes[q+1]=0; } break; } } break ; }
 if(pes[q]==-4||pes[q]==-5){ w++; }
 }
break;} } break; } }
}
if(interc[i]=='R'&&interc[i+1]=='o'&&interc[i+2]=='t'&&interc[i+3]=='a'&&interc[i+4]=='t'&&interc[i+5]=='e'&&interc[i+6]=='O'&&interc[i+7]=='b'&&interc[i+8]=='j'&&interc[i+9]=='e'&&interc[i+10]=='c'&&interc[i+11]=='t'&&interc[i+12]=='Z'){ i+=12;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
for(int q=0,w=0;q<fcon;q++){  if(w>=usea){
for(0;q<fcon;q++){ if(pes[q]==-12){ pes[q+3]+=thm6; if(pes[q+3]<0){ pes[q+3]=360; } if(pes[q+3]>360){ pes[q+3]=0; } break; } } break ; }
 if(pes[q]==-4||pes[q]==-5){ w++; }
 }
break;} } break; } }
}
if(interc[i]=='R'&&interc[i+1]=='o'&&interc[i+2]=='t'&&interc[i+3]=='a'&&interc[i+4]=='t'&&interc[i+5]=='e'&&interc[i+6]=='O'&&interc[i+7]=='b'&&interc[i+8]=='j'&&interc[i+9]=='e'&&interc[i+10]=='c'&&interc[i+11]=='t'&&interc[i+12]=='Y'){ i+=12;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
for(int q=0,w=0;q<fcon;q++){  if(w>=usea){
for(0;q<fcon;q++){ if(pes[q]==-12){ pes[q+2]+=thm6; if(pes[q+2]<0){ pes[q+2]=360; } if(pes[q+2]>360){ pes[q+2]=0; } break; } } break ; }
 if(pes[q]==-4||pes[q]==-5){ w++; }
 }
break;} } break; } }
}

if(interc[i]=='M'&&interc[i+1]=='o'&&interc[i+2]=='v'&&interc[i+3]=='e'&&interc[i+4]=='P'&&interc[i+5]=='i'&&interc[i+6]=='v'&&interc[i+7]=='o'&&interc[i+8]=='t'&&interc[i+9]=='Y'){ i+=9;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
poinx[usea]+=thm6; 
for(int t=0,e=0;t<poinc[usea];t++){
if(poin[usea][t]==-1){ e=0; }
if(poin[usea][t]==-2){ e=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[usea][t]>=0){
if(e==2){ cimerax[poin[usea][t]]+=thm6; if( (poin[usea][t]) ==curcam){ camsx+=thm6; } }
if(e==0){ for(int u=0;u<grmp[poin[usea][t]];u++){ rxes[grup[poin[usea][t]][u]]+=thm6; } }
if(e==1){ poinx[poin[usea][t]]+=thm6;
seek=poin[usea][t];
for(int y=0,m=0;y<poinc[seek]; y++){
if(poin[seek][y]==-1){ m=0; }
if(poin[seek][y]==-2){ m=1; }
if(poin[seek][y]>=0){
if(m==0){ for(int u=0;u<grmp[poin[seek][y]];u++){ rxes[grup[poin[seek][y]][u]]+=thm6; } }
}		}	}	}	}
break;} } break; } }
}
if(interc[i]=='M'&&interc[i+1]=='o'&&interc[i+2]=='v'&&interc[i+3]=='e'&&interc[i+4]=='P'&&interc[i+5]=='i'&&interc[i+6]=='v'&&interc[i+7]=='o'&&interc[i+8]=='t'&&interc[i+9]=='X'){ i+=9;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
poinz[usea]+=thm6; 
for(int t=0,e=0;t<poinc[usea];t++){
if(poin[usea][t]==-1){ e=0; }
if(poin[usea][t]==-2){ e=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[usea][t]>=0){
if(e==2){ cimeraz[poin[usea][t]]+=thm6; if( (poin[usea][t]) ==curcam){ camsz+=thm6; } }
if(e==0){ for(int u=0;u<grmp[poin[usea][t]];u++){ rzes[grup[poin[usea][t]][u]]+=thm6; } }
if(e==1){ poinz[poin[usea][t]]+=thm6;
seek=poin[usea][t];
for(int y=0,m=0;y<poinc[seek]; y++){
if(poin[seek][y]==-1){ m=0; }
if(poin[seek][y]==-2){ m=1; }
if(poin[seek][y]>=0){
if(m==0){ for(int u=0;u<grmp[poin[seek][y]];u++){ rzes[grup[poin[seek][y]][u]]+=thm6; } }
}		}	}	}	}
break;} } break; } }
}
if(interc[i]=='M'&&interc[i+1]=='o'&&interc[i+2]=='v'&&interc[i+3]=='e'&&interc[i+4]=='P'&&interc[i+5]=='i'&&interc[i+6]=='v'&&interc[i+7]=='o'&&interc[i+8]=='t'&&interc[i+9]=='Z'){ i+=9;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
poiny[usea]+=thm6; 
for(int t=0,e=0;t<poinc[usea];t++){
if(poin[usea][t]==-1){ e=0; }
if(poin[usea][t]==-2){ e=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[usea][t]>=0){
if(e==2){ cimeray[poin[usea][t]]+=thm6; if( (poin[usea][t]) ==curcam){ camsy+=thm6; } }
if(e==0){ for(int u=0;u<grmp[poin[usea][t]];u++){ ryes[grup[poin[usea][t]][u]]+=thm6; } }
if(e==1){ poiny[poin[usea][t]]+=thm6;
seek=poin[usea][t];
for(int y=0,m=0;y<poinc[seek]; y++){
if(poin[seek][y]==-1){ m=0; }
if(poin[seek][y]==-2){ m=1; }
if(poin[seek][y]>=0){
if(m==0){ for(int u=0;u<grmp[poin[seek][y]];u++){ ryes[grup[poin[seek][y]][u]]+=thm6; } }
}		}	}	}	}
break;} } break; } }
}
if(interc[i]=='R'&&interc[i+1]=='o'&&interc[i+2]=='t'&&interc[i+3]=='a'&&interc[i+4]=='t'&&interc[i+5]=='e'&&interc[i+6]=='P'&&interc[i+7]=='i'&&interc[i+8]=='v'&&interc[i+9]=='o'&&interc[i+10]=='t'&&interc[i+11]=='X'){ i+=11;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how)*3.143; thm6/=180;  break;} }
thm7=poinx[usea]; thm8=poiny[usea]; thm9=poinz[usea]; 
can1=cos(thm6); san1=sin(thm6); 
for(int t=0,e=0;t<poinc[usea];t++){
if(poin[usea][t]==-1){ e=0; }
if(poin[usea][t]==-2){ e=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[usea][t]>=0){
if(e==2){ cimerax[poin[usea][t]]-=thm7; cimeray[poin[usea][t]]-=thm8; cimeraz[poin[usea][t]]-=thm9; 
sprite[0].x=cimerax[poin[usea][t]]; sprite[0].y=cimeray[poin[usea][t]]; sprite[0].z=cimeraz[poin[usea][t]];
//x
dist[0].x=sprite[0].x; dist[0].y=(sprite[0].y*can1)-(sprite[0].z*san1 ); dist[0].z=(sprite[0].y*san1)+(sprite[0].z*can1 ); 
cimerax[poin[usea][t]]=dist[0].x; cimeray[poin[usea][t]]=dist[0].y; cimeraz[poin[usea][t]]=dist[0].z;
cimerax[poin[usea][t]]+=thm7; cimeray[poin[usea][t]]+=thm8; cimeraz[poin[usea][t]]+=thm9; 
if( (poin[usea][t]) ==curcam){ camsx=cimerax[curcam]; camsy=cimeray[curcam]; camsz=cimeraz[curcam];  }
}
if(e==0){ for(int u=0;u<grmp[poin[usea][t]];u++){ rxes[grup[poin[usea][t]][u]]-=thm7; ryes[grup[poin[usea][t]][u]]-=thm8; rzes[grup[poin[usea][t]][u]]-=thm9; 
sprite[0].x=rxes[grup[poin[usea][t]][u]]; sprite[0].y=ryes[grup[poin[usea][t]][u]]; sprite[0].z=rzes[grup[poin[usea][t]][u]];
//x
dist[0].x=sprite[0].x; dist[0].y=(sprite[0].y*can1)-(sprite[0].z*san1 ); dist[0].z=(sprite[0].y*san1)+(sprite[0].z*can1 ); 
rxes[grup[poin[usea][t]][u]]=dist[0].x; ryes[grup[poin[usea][t]][u]]=dist[0].y; rzes[grup[poin[usea][t]][u]]=dist[0].z;
rxes[grup[poin[usea][t]][u]]+=thm7; ryes[grup[poin[usea][t]][u]]+=thm8; rzes[grup[poin[usea][t]][u]]+=thm9; 
} }
if(e==1){ 
poinx[poin[usea][t]]-=thm7; poiny[poin[usea][t]]-=thm8; poinz[poin[usea][t]]-=thm9; 
sprite[0].x=poinx[poin[usea][t]]; sprite[0].y=poiny[poin[usea][t]]; sprite[0].z=poinz[poin[usea][t]];
//x
dist[0].x=sprite[0].x; dist[0].y=(sprite[0].y*can1)-(sprite[0].z*san1 ); dist[0].z=(sprite[0].y*san1)+(sprite[0].z*can1 ); 
poinx[poin[usea][t]]=dist[0].x; poiny[poin[usea][t]]=dist[0].y; poinz[poin[usea][t]]=dist[0].z;
poinx[poin[usea][t]]+=thm7; poiny[poin[usea][t]]+=thm8; poinz[poin[usea][t]]+=thm9; 

seek=poin[usea][t];
for(int y=0,m=0;y<poinc[seek]; y++){
if(poin[seek][y]==-1){ m=0; }
if(poin[seek][y]==-2){ m=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[seek][y]>=0){
if(m==0){ for(int u=0;u<grmp[poin[seek][y]];u++){ 
rxes[grup[poin[seek][y]][u]]-=thm7; ryes[grup[poin[seek][y]][u]]-=thm8; rzes[grup[poin[seek][y]][u]]-=thm9; 
sprite[0].x=rxes[grup[poin[seek][y]][u]]; sprite[0].y=ryes[grup[poin[seek][y]][u]]; sprite[0].z=rzes[grup[poin[seek][y]][u]];
//x
dist[0].x=sprite[0].x; dist[0].y=(sprite[0].y*can1)-(sprite[0].z*san1 ); dist[0].z=(sprite[0].y*san1)+(sprite[0].z*can1 ); 
rxes[grup[poin[seek][y]][u]]=dist[0].x; ryes[grup[poin[seek][y]][u]]=dist[0].y; rzes[grup[poin[seek][y]][u]]=dist[0].z;
rxes[grup[poin[seek][y]][u]]+=thm7; ryes[grup[poin[seek][y]][u]]+=thm8; rzes[grup[poin[seek][y]][u]]+=thm9; 
} }
}		}	}	}	}
break;} } break; } }
}
if(interc[i]=='R'&&interc[i+1]=='o'&&interc[i+2]=='t'&&interc[i+3]=='a'&&interc[i+4]=='t'&&interc[i+5]=='e'&&interc[i+6]=='P'&&interc[i+7]=='i'&&interc[i+8]=='v'&&interc[i+9]=='o'&&interc[i+10]=='t'&&interc[i+11]=='Y'){ i+=11;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how)*3.143; thm6/=180;  break;} }
thm7=poinx[usea]; thm8=poiny[usea]; thm9=poinz[usea]; 
can2=cos(thm6); san2=sin(thm6); 
for(int t=0,e=0;t<poinc[usea];t++){
if(poin[usea][t]==-1){ e=0; }
if(poin[usea][t]==-2){ e=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[usea][t]>=0){
if(e==2){ cimerax[poin[usea][t]]-=thm7; cimeray[poin[usea][t]]-=thm8; cimeraz[poin[usea][t]]-=thm9; 
dist[0].x=cimerax[poin[usea][t]]; dist[0].y=cimeray[poin[usea][t]]; dist[0].z=cimeraz[poin[usea][t]];
//y
sprite[0].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[0].y=dist[0].y; sprite[0].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
cimerax[poin[usea][t]]=sprite[0].x; cimeray[poin[usea][t]]=sprite[0].y; cimeraz[poin[usea][t]]=sprite[0].z;
cimerax[poin[usea][t]]+=thm7; cimeray[poin[usea][t]]+=thm8; cimeraz[poin[usea][t]]+=thm9; 
if( (poin[usea][t]) ==curcam){ camsx=cimerax[curcam]; camsy=cimeray[curcam]; camsz=cimeraz[curcam];  }
}
if(e==0){ for(int u=0;u<grmp[poin[usea][t]];u++){ rxes[grup[poin[usea][t]][u]]-=thm7; ryes[grup[poin[usea][t]][u]]-=thm8; rzes[grup[poin[usea][t]][u]]-=thm9; 
dist[0].x=rxes[grup[poin[usea][t]][u]]; dist[0].y=ryes[grup[poin[usea][t]][u]]; dist[0].z=rzes[grup[poin[usea][t]][u]];
//y
sprite[0].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[0].y=dist[0].y; sprite[0].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
rxes[grup[poin[usea][t]][u]]=sprite[0].x; ryes[grup[poin[usea][t]][u]]=sprite[0].y; rzes[grup[poin[usea][t]][u]]=sprite[0].z;
rxes[grup[poin[usea][t]][u]]+=thm7; ryes[grup[poin[usea][t]][u]]+=thm8; rzes[grup[poin[usea][t]][u]]+=thm9; 
} }
if(e==1){ 
poinx[poin[usea][t]]-=thm7; poiny[poin[usea][t]]-=thm8; poinz[poin[usea][t]]-=thm9; 
dist[0].x=poinx[poin[usea][t]]; dist[0].y=poiny[poin[usea][t]]; dist[0].z=poinz[poin[usea][t]];
//y
sprite[0].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[0].y=dist[0].y; sprite[0].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
poinx[poin[usea][t]]=sprite[0].x; poiny[poin[usea][t]]=sprite[0].y; poinz[poin[usea][t]]=sprite[0].z;
poinx[poin[usea][t]]+=thm7; poiny[poin[usea][t]]+=thm8; poinz[poin[usea][t]]+=thm9; 

seek=poin[usea][t];
for(int y=0,m=0;y<poinc[seek]; y++){
if(poin[seek][y]==-1){ m=0; }
if(poin[seek][y]==-2){ m=1; }
if(poin[seek][y]>=0){
if(m==0){ for(int u=0;u<grmp[poin[seek][y]];u++){ 
rxes[grup[poin[seek][y]][u]]-=thm7; ryes[grup[poin[seek][y]][u]]-=thm8; rzes[grup[poin[seek][y]][u]]-=thm9; 
dist[0].x=rxes[grup[poin[seek][y]][u]]; dist[0].y=ryes[grup[poin[seek][y]][u]]; dist[0].z=rzes[grup[poin[seek][y]][u]];
//y
sprite[0].x=(dist[0].x*can2)+(dist[0].z*san2); sprite[0].y=dist[0].y; sprite[0].z=(dist[0].x*-1*san2)+(dist[0].z*can2);
xes[grup[poin[seek][y]][u]]=sprite[0].x; ryes[grup[poin[seek][y]][u]]=sprite[0].y; rzes[grup[poin[seek][y]][u]]=sprite[0].z;
rxes[grup[poin[seek][y]][u]]+=thm7; ryes[grup[poin[seek][y]][u]]+=thm8; rzes[grup[poin[seek][y]][u]]+=thm9; 
} }
}		}	}	}	}
break;} } break; } }
}
if(interc[i]=='R'&&interc[i+1]=='o'&&interc[i+2]=='t'&&interc[i+3]=='a'&&interc[i+4]=='t'&&interc[i+5]=='e'&&interc[i+6]=='P'&&interc[i+7]=='i'&&interc[i+8]=='v'&&interc[i+9]=='o'&&interc[i+10]=='t'&&interc[i+11]=='Z'){ i+=11;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how)*3.143; thm6/=180;  break;} }
thm7=poinx[usea]; thm8=poiny[usea]; thm9=poinz[usea]; 
can3=cos(thm6); san3=sin(thm6); 
for(int t=0,e=0;t<poinc[usea];t++){
if(poin[usea][t]==-1){ e=0; }
if(poin[usea][t]==-2){ e=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[usea][t]>=0){
if(e==2){ cimerax[poin[usea][t]]-=thm7; cimeray[poin[usea][t]]-=thm8; cimeraz[poin[usea][t]]-=thm9; 
sprite[0].x=cimerax[poin[usea][t]]; sprite[0].y=cimeray[poin[usea][t]]; sprite[0].z=cimeraz[poin[usea][t]];
//z
dist[0].x=(sprite[0].x*can3)-(sprite[0].y*san3); dist[0].y=(sprite[0].x*san3)+(sprite[0].y*can3); dist[0].z=sprite[0].z;
cimerax[poin[usea][t]]=dist[0].x; cimeray[poin[usea][t]]=dist[0].y; cimeraz[poin[usea][t]]=dist[0].z;
cimerax[poin[usea][t]]+=thm7; cimeray[poin[usea][t]]+=thm8; cimeraz[poin[usea][t]]+=thm9; 
if( (poin[usea][t]) ==curcam){ camsx=cimerax[curcam]; camsy=cimeray[curcam]; camsz=cimeraz[curcam];  }
}
if(e==0){ for(int u=0;u<grmp[poin[usea][t]];u++){ rxes[grup[poin[usea][t]][u]]-=thm7; ryes[grup[poin[usea][t]][u]]-=thm8; rzes[grup[poin[usea][t]][u]]-=thm9; 
sprite[0].x=rxes[grup[poin[usea][t]][u]]; sprite[0].y=ryes[grup[poin[usea][t]][u]]; sprite[0].z=rzes[grup[poin[usea][t]][u]];
//z
dist[0].x=(sprite[0].x*can3)-(sprite[0].y*san3); dist[0].y=(sprite[0].x*san3)+(sprite[0].y*can3); dist[0].z=sprite[0].z;
rxes[grup[poin[usea][t]][u]]=dist[0].x; ryes[grup[poin[usea][t]][u]]=dist[0].y; rzes[grup[poin[usea][t]][u]]=dist[0].z;
rxes[grup[poin[usea][t]][u]]+=thm7; ryes[grup[poin[usea][t]][u]]+=thm8; rzes[grup[poin[usea][t]][u]]+=thm9; 
} }
if(e==1){ 
poinx[poin[usea][t]]-=thm7; poiny[poin[usea][t]]-=thm8; poinz[poin[usea][t]]-=thm9; 
sprite[0].x=poinx[poin[usea][t]]; sprite[0].y=poiny[poin[usea][t]]; sprite[0].z=poinz[poin[usea][t]];
//z
dist[0].x=(sprite[0].x*can3)-(sprite[0].y*san3); dist[0].y=(sprite[0].x*san3)+(sprite[0].y*can3); dist[0].z=sprite[0].z;
poinx[poin[usea][t]]=dist[0].x; poiny[poin[usea][t]]=dist[0].y; poinz[poin[usea][t]]=dist[0].z;
poinx[poin[usea][t]]+=thm7; poiny[poin[usea][t]]+=thm8; poinz[poin[usea][t]]+=thm9; 

seek=poin[usea][t];
for(int y=0,m=0;y<poinc[seek]; y++){
if(poin[seek][y]==-1){ m=0; }
if(poin[seek][y]==-2){ m=1; }
if(poin[seek][y]>=0){
if(m==0){ for(int u=0;u<grmp[poin[seek][y]];u++){ 
rxes[grup[poin[seek][y]][u]]-=thm7; ryes[grup[poin[seek][y]][u]]-=thm8; rzes[grup[poin[seek][y]][u]]-=thm9; 
sprite[0].x=rxes[grup[poin[seek][y]][u]]; sprite[0].y=ryes[grup[poin[seek][y]][u]]; sprite[0].z=rzes[grup[poin[seek][y]][u]];
//z
dist[0].x=(sprite[0].x*can3)-(sprite[0].y*san3); dist[0].y=(sprite[0].x*san3)+(sprite[0].y*can3); dist[0].z=sprite[0].z;
rxes[grup[poin[seek][y]][u]]=dist[0].x; ryes[grup[poin[seek][y]][u]]=dist[0].y; rzes[grup[poin[seek][y]][u]]=dist[0].z;
rxes[grup[poin[seek][y]][u]]+=thm7; ryes[grup[poin[seek][y]][u]]+=thm8; rzes[grup[poin[seek][y]][u]]+=thm9; 
} }
}		}	}	}	}
break;} } break; } }
}
if(interc[i]=='S'&&interc[i+1]=='c'&&interc[i+2]=='a'&&interc[i+3]=='l'&&interc[i+4]=='e'&&interc[i+5]=='O'&&interc[i+6]=='b'&&interc[i+7]=='j'&&interc[i+8]=='e'&&interc[i+9]=='c'&&interc[i+10]=='t'&&interc[i+11]=='X'){ i+=11;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
for(int u=0;u<grmp[usea];u++){ rzes[grup[usea][u]]*=thm6; }
break;} } break; } }
}
if(interc[i]=='S'&&interc[i+1]=='c'&&interc[i+2]=='a'&&interc[i+3]=='l'&&interc[i+4]=='e'&&interc[i+5]=='O'&&interc[i+6]=='b'&&interc[i+7]=='j'&&interc[i+8]=='e'&&interc[i+9]=='c'&&interc[i+10]=='t'&&interc[i+11]=='Y'){ i+=11;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
for(int u=0;u<grmp[usea];u++){ rxes[grup[usea][u]]*=thm6; }
break;} } break; } }
}
if(interc[i]=='S'&&interc[i+1]=='c'&&interc[i+2]=='a'&&interc[i+3]=='l'&&interc[i+4]=='e'&&interc[i+5]=='O'&&interc[i+6]=='b'&&interc[i+7]=='j'&&interc[i+8]=='e'&&interc[i+9]=='c'&&interc[i+10]=='t'&&interc[i+11]=='Z'){ i+=11;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
for(int u=0;u<grmp[usea];u++){ ryes[grup[usea][u]]*=thm6; } 
break;} } break; } }
}
if(interc[i]=='S'&&interc[i+1]=='c'&&interc[i+2]=='a'&&interc[i+3]=='l'&&interc[i+4]=='e'&&interc[i+5]=='P'&&interc[i+6]=='i'&&interc[i+7]=='v'&&interc[i+8]=='o'&&interc[i+9]=='t'&&interc[i+10]=='X'){ i+=10;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
for(int t=0,e=0;t<poinc[usea];t++){
if(poin[usea][t]==-1){ e=0; }
if(poin[usea][t]==-2){ e=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[usea][t]>=0){
if(e==2){ cimeraz[poin[usea][t]]*=thm6; if( (poin[usea][t]) ==curcam){ camsz*=thm6; } }
if(e==0){ for(int u=0;u<grmp[poin[usea][t]];u++){ rzes[grup[poin[usea][t]][u]]*=thm6; } }
if(e==1){ 
seek=poin[usea][t];
for(int y=0,m=0;y<poinc[seek]; y++){
if(poin[seek][y]==-1){ m=0; }
if(poin[seek][y]==-2){ m=1; }
if(poin[seek][y]>=0){
if(m==0){ for(int u=0;u<grmp[poin[seek][y]];u++){ rzes[grup[poin[seek][y]][u]]*=thm6; } }
}		}	}	}	}
break;} } break; } }
}
if(interc[i]=='S'&&interc[i+1]=='c'&&interc[i+2]=='a'&&interc[i+3]=='l'&&interc[i+4]=='e'&&interc[i+5]=='P'&&interc[i+6]=='i'&&interc[i+7]=='v'&&interc[i+8]=='o'&&interc[i+9]=='t'&&interc[i+10]=='Y'){ i+=10;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
for(int t=0,e=0;t<poinc[usea];t++){
if(poin[usea][t]==-1){ e=0; }
if(poin[usea][t]==-2){ e=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[usea][t]>=0){
if(e==2){ cimerax[poin[usea][t]]*=thm6; if( (poin[usea][t]) ==curcam){ camsx*=thm6; } }
if(e==0){ for(int u=0;u<grmp[poin[usea][t]];u++){ rxes[grup[poin[usea][t]][u]]*=thm6; } }
if(e==1){ 
seek=poin[usea][t];
for(int y=0,m=0;y<poinc[seek]; y++){
if(poin[seek][y]==-1){ m=0; }
if(poin[seek][y]==-2){ m=1; }
if(poin[seek][y]>=0){
if(m==0){ for(int u=0;u<grmp[poin[seek][y]];u++){ rxes[grup[poin[seek][y]][u]]*=thm6; } }
}		}	}	}	}
break;} } break; } }
}
if(interc[i]=='S'&&interc[i+1]=='c'&&interc[i+2]=='a'&&interc[i+3]=='l'&&interc[i+4]=='e'&&interc[i+5]=='P'&&interc[i+6]=='i'&&interc[i+7]=='v'&&interc[i+8]=='o'&&interc[i+9]=='t'&&interc[i+10]=='Z'){ i+=10;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how);  break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; thm6=atof(how);  break;} }
for(int t=0,e=0;t<poinc[usea];t++){
if(poin[usea][t]==-1){ e=0; }
if(poin[usea][t]==-2){ e=1; }
if(poin[usea][t]==-3){ e=2; }
if(poin[usea][t]>=0){
if(e==2){ cimeray[poin[usea][t]]*=thm6; if( (poin[usea][t]) ==curcam){ camsy*=thm6; } }
if(e==0){ for(int u=0;u<grmp[poin[usea][t]];u++){ ryes[grup[poin[usea][t]][u]]*=thm6; } }
if(e==1){ 
seek=poin[usea][t];
for(int y=0,m=0;y<poinc[seek]; y++){
if(poin[seek][y]==-1){ m=0; }
if(poin[seek][y]==-2){ m=1; }
if(poin[seek][y]>=0){
if(m==0){ for(int u=0;u<grmp[poin[seek][y]];u++){ ryes[grup[poin[seek][y]][u]]*=thm6; } }
}		}	}	}	}
break;} } break; } }
}
if(interc[i]=='S'&&interc[i+1]=='e'&&interc[i+2]=='t'&&interc[i+3]=='P'&&interc[i+4]=='i'&&interc[i+5]=='v'&&interc[i+6]=='o'&&interc[i+7]=='t'){ i+=7;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; usea=atoi(how); break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; poinx[usea]=atof(how); break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==','){ how[b-1]=0; poiny[usea]=atof(how); break;} } i++;
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i]==')'){ how[b-1]=0; poinz[usea]=atof(how); break;} }
break;} } break; } }
}
if(interc[i]=='A'&&interc[i+1]=='l'&&interc[i+2]=='e'&&interc[i+3]=='r'&&interc[i+4]=='t'){ i+=4;
for(0;i<z1;i++){ if(interc[i-1]=='('){  for(0;i<z1;i++){ if(interc[i-1]!=' '&&interc[i-1]!='	'){ 
for(0;i<z1;i++){ if(interc[i-1]=='\"'){
for(int b=0;i<z1;i++){ how[b]=interc[i]; b++; if(interc[i+1]=='\"'){ how[b]=0; i+=3;
for(0;i<z1;i++){ if(interc[i-1]=='\"'){ for(b=0;i<z1;i++){ how1[b]=interc[i]; b++; if(interc[i+1]=='\"'){ how1[b]=0;  MessageBox(playd,how,how1,MB_OK); break; } } break; } }
break; } }
} }
break;} } break; } }
}

if(interc[i]=='S'&&interc[i+1]=='h'&&interc[i+2]=='a'&&interc[i+3]=='k'&&interc[i+4]=='e'){ i+=4;
if(shk==0){ shk=1; }
}


if(interc[i]=='{'){ u++; }
if(interc[i+1]=='}'){ if(u<=0){break;} u--; }
}
break;
//end interpret
}
}
}
}

