#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100],kytu;
	printf("Moi nhap vao chuoi: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	int length=(int)strlen(chuoi);
	printf("Moi nhap vao ki tu can xoav : ");
	scanf("%c",&kytu);
	for(int i=0;i<length;i++){
		if(chuoi[i]==kytu){
			for(int j=i;j<length;j++){
				chuoi[j]=chuoi[j+1];
			}
			--length;
		}
	}
	printf("Chuoi sau khi xoa ki tu %c la : ",kytu);
	for(int i=0;i<length;i++){
		printf("%c",chuoi[i]);
	}
	return 0;
}

