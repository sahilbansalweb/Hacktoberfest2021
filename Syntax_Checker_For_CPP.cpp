/*  NOTE:  NOTE:  NOTE:  NOTE:  NOTE:  NOTE:  NOTE:  NOTE:  NOTE:  NOTE:  NOTE:  NOTE:
	-> This program will read another .cpp file and give the complete info about the code in that file e.g 
	number of int, floats, char etc variable used
	if there is any error in the brackets
	how many function are used
	etc etc
	
	-> To run this program properly make sure to have "test program1.cpp" file in your respective folder
	You can also change the name of folder by modifying line num 83 of the program if you want or can ask for which file to open by changing the code a bit
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
		char l[1000];
		int ln;
}s2;
void file_reading(s2 file[],int* linecount);
void chk(s2 file[],int*intf,int *curve, int*prntf ,int*scnf,int*fpts,int*fgts ,int*ffloat, int*fscnf, int*curly, int*straight,int*flot, int*nt, int*chr, int*pts,int*gts, int* vod );

main(){
s2 file[1000];
int lc=0;  
char d[901];
file_reading(file, &lc);//in total lines..code is counting extra used lines too...
int i=0,k=0,j=1,m,intf=0,prntf=0,scnf=0,fpts=0,fgts=0,ffloat=0,fscnf=0,curly=0,curve=0,straight=0,flot=0,nt=0,chr=0,pts=0,gts=0,vod=0;
//printf("%d",file[1].ln);
 chk(file,&intf,&curve, &prntf ,&scnf,&fpts,&fgts ,&ffloat, &fscnf, &curly, &straight,&flot, &nt, &chr, &pts,&gts, & vod );
printf("\n\n\nBASIC INFORMATION ABOUT THE ABOVE CODE\n=========================================");
printf("\n\tTotal num of lines-->\t\t        %d",lc);
printf("\n\tTotal built in functions used-->\t%d",prntf+scnf+fscnf+fgts+fpts);
printf("\n\tTotal num of variables used-->\t\t%d",chr+flot+nt-intf-ffloat);
printf("\n\nINFORMATION ABOUT FUNCTIONS USED IN THE ABOVE CODE\n=====================================================");
if(vod>0)printf("\n\tTotal number of \"void\" fuctions-->         %d",vod);

if(intf>0)printf("\n\tTotal number of \"integer\" fuctions-->      %d",intf);

if(ffloat>0)printf("\n\tTotal number of \"float\" fuctions-->     %d",ffloat);

if(prntf>0)printf("\n\tTotal number of \"printf\" function-->       %d",prntf);

if(scnf>0)printf("\n\tTotal number of \"scanf\" function-->        %d",scnf);

if(fscnf>0)printf("\n\tTotal number of \"fscanf\" function-->       %d",fscnf);

if(fgts>0)printf("\n\tTotal number of \"fgets\" function-->        %d",fgts);

if(fpts>0)printf("\n\tTotal number of \"fputs\" function--->       %d",fpts);
	
if(pts>0)printf("\n\tTotal number of \"puts\" function-->         %d",pts);

if(gts>0)printf("\n\tTotal number of \"gets\" function-->         %d",gts);

printf("\n\nINFORMATION ABOUT THE BRACKETS USED IN ABOVE CODE\n====================================================");
if(curly>0)printf("\n\t%d clossing curly bracket is missing ",curly);//if count = -n that means there are } extra brackets. 
else if(curly<0)printf("\n\t%d openning curly bracket is missing",-curly);
else printf("\n\tcurly brackets are perfectly closed");

if(curve>0)printf("\n\t%d clossing curve bracket is missing ",curve);//if count = -n that means there are } extra brackets. 
else if(curve<0)printf("\n\t%d openning curve bracket is missing",-curve);
else printf("\n\tcurve brackets are perfectly closed");

if(straight>0)printf("\n\t%d clossing long bracket is missing ",straight);//if count = -n that means there are } extra brackets. 
else if(straight<0)printf("\n\t%d openning long bracket is missing",-straight);
else printf("\n\tlong brackets are perfectly closed");

printf("\n\nINFORMATION ABOUT THE VARIABLES USED\n========================================");
if(flot>0)printf("\n\tthe num of floats variables used are ---> %d",flot-ffloat);
else printf("\n\tno float variables used");

if(nt-intf>0)printf("\n\tthe num of int variables used are --> %d",nt-intf);
else printf("\n\tno int variables used");

if(chr>0)printf("\n\tthe num of char variables used are -->%d",chr);
else printf("\n\tno char variables used");
}

void file_reading(s2 file[],int* linecount){
	FILE *p;
	p=fopen("test program1.cpp","r");// make sure that the file exists, if not create it
	int i=0,k=0;
    while(!feof(p)){
		fgets(file[i].l,1000,p);
		if((file[i].l[1]==' '||file[i].l[0]=='\n')||(file[i].l[0]=='/'&&file[i].l[1]=='/'))continue;
		*linecount+=1;
		file[i].ln=strlen(file[i].l);
		for(k=0;k<file[i].ln;k++){
			if(file[i].l[k]=='/'&&file[i].l[k+1]=='/'){
			    file[i].l[k]='\n';
			    file[i].l[k+1]='\0'; 
		    }
	file[i].ln=strlen(file[i].l);
	}printf("%d",i+1);
	printf("-%s",file[i].l);
	i++;
}
//printf("%d- }",i+1);
}
void chk(s2 file[],int*intf,int *curve, int*prntf ,int*scnf,int*fpts,int*fgts ,int*ffloat, int*fscnf, int*curly, int*straight,int*flot, int*nt, int*chr, int*pts,int*gts, int* vod ){
	int l,i,k,m;
	for(i=0;i<500;i++){
		for(k=0;k<file[i].ln;k++){
/*scanf*/	if(file[i].l[k]=='s'&&file[i].l[k+1]=='c'&&file[i].l[k+2]=='a'&&file[i].l[k+3]=='n'&&file[i].l[k+4]=='f'&&file[i].l[k+5]=='('){*scnf+=1;}
/*printf*/	if(file[i].l[k]=='p'&&file[i].l[k+1]=='r'&&file[i].l[k+2]=='i'&&file[i].l[k+3]=='n'&&file[i].l[k+4]=='t'&&file[i].l[k+5]=='f'&&file[i].l[k+6]=='('){*prntf+=1;}
/*fscanf*/	if(file[i].l[k]=='f'&&file[i].l[k+1]=='s'&&file[i].l[k+2]=='c'&&file[i].l[k+3]=='a'&&file[i].l[k+4]=='n'&&file[i].l[k+5]=='f'&&file[i].l[k+6]=='('){*fscnf+=1;}
/*fgets*/	if(file[i].l[k]=='f'&&file[i].l[k+1]=='g'&&file[i].l[k+2]=='e'&&file[i].l[k+3]=='t'&&file[i].l[k+4]=='s'&&file[i].l[k+5]=='('){*fgts+=1;}
/*fputs*/	if(file[i].l[k]=='f'&&file[i].l[k+1]=='p'&&file[i].l[k+2]=='u'&&file[i].l[k+3]=='t'&&file[i].l[k+4]=='s'&&file[i].l[k+5]=='('){*fpts+=1;}	
/*gets*/	if(file[i].l[k]=='g'&&file[i].l[k+1]=='e'&&file[i].l[k+2]=='t'&&file[i].l[k+3]=='s'&&file[i].l[k+4]=='('){*gts+=1;}
/*puts*/	if(file[i].l[k]=='p'&&file[i].l[k+1]=='u'&&file[i].l[k+2]=='t'&&file[i].l[k+3]=='s'&&file[i].l[k+4]=='('){*pts+=1;}

	if(file[i].l[k]=='v'&&file[i].l[k+1]=='o'&&file[i].l[k+2]=='i'&&file[i].l[k+3]=='d'&&file[i].l[k+4]==' '){
			for(m=0;m<file[i].ln;m++){
				if(file[i].l[m]=='('){
					*vod+=1;
					break;
				}
			}
		}
		
			if(file[i].l[k]=='f'&&file[i].l[k+1]=='l'&&file[i].l[k+2]=='o'&&file[i].l[k+3]=='a'&&file[i].l[k+4]=='t'&&file[i].l[k+5]==' '){
			for(m=0;m<file[i].ln;m++){
				if(file[i].l[m]=='('){
					*ffloat+=1;
					break;
				}
			}
		}
			if(file[i].l[k]=='{'){*curly++;}
			if(file[i].l[k]=='}'){*curly--;}
			if(file[i].l[k]=='('){*curve++;}
			if(file[i].l[k]==')'){*curve--;}
			if(file[i].l[k]=='['){*straight++;}
			if(file[i].l[k]==']'){*straight--;}
			if(file[i].l[k]=='f'&&file[i].l[k+1]=='l'&&file[i].l[k+2]=='o'&&file[i].l[k+3]=='a'&&file[i].l[k+4]=='t'&&file[i].l[k+5]==' '){
				*flot+=1;
				for(k=k+6;k<=file[i].ln;k++){
                    	if(file[i].l[k]==',')*flot+=1;
				   		if(file[i].l[k]==';')break;
				    	else continue;
				}
			}
			if(file[i].l[k]=='i'&&file[i].l[k+1]=='n'&&file[i].l[k+2]=='t'&&file[i].l[k+3]==' '){
				*nt+=1;
				for(k=k+4;k<=file[i].ln;k++){
                    if(file[i].l[k]==',')*nt+=1;
				    if(file[i].l[k]==';')break;
				    else continue;
				}
			}
			if(file[i].l[k]=='c'&&file[i].l[k+1]=='h'&&file[i].l[k+2]=='a'&&file[i].l[k+3]=='r'&&file[i].l[k+4]==' '){
				*chr+=1;
				for(k=k+5;k<=file[i].ln;k++){
                    if(file[i].l[k]==',')*chr+=1;
				    if(file[i].l[k]==';')break;
				    else continue;
				}
			}
		}
	}
	for(i=0;i<500;i++){
		for(k=0;k<file[i].ln;k++){
			if(file[i].l[k]=='i'&&file[i].l[k+1]=='n'&&file[i].l[k+2]=='t'&&file[i].l[k+3]==' '){
			    for(k=k+4;k<=file[i].ln;k++){
				    if(file[i].l[k]=='('){
					    *intf+=1;
					    break;
			    	}  
		    	}
	    	}
		}
	}
}
