#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100],kytu;
	printf("Moi nhap vao chuoi: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	int length=(int)strlen(chuoi);
	printf("Moi nhap vao ki tu can xoa : ");
	scanf("%c",&kytu);
	//2 vong for
//	for(int i=0;i<length;i++){
//		if(chuoi[i]==kytu){
//			for(int j=i;j<length;j++){
//				chuoi[j]=chuoi[j+1];
//			}
//			--i;
//		}
//	}
	//1 vong for
	int j=0;
	for(int i=0;chuoi[i]!=0;i++){
		if(chuoi[i]!=kytu){
			chuoi[j++]=chuoi[i];
		}
	}
	chuoi[j]='\0';
	printf("Chuoi sau khi xoa ki tu %c la : ",kytu);
	for(int i=0;chuoi[i]!=0;i++){
		printf("%c",chuoi[i]);
	}
	//printf("%s",chuoi);
	return 0;
}

