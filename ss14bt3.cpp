#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[50];
	printf("Moi nhap vao chuoi : ");
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi, "\n")]='\0';
	printf("Chuoi dao nguoc la: ");
	for(int i=strlen(chuoi)-1;i>=0;i--){
		printf("%c",chuoi[i]);
	}
	return 0;
}
