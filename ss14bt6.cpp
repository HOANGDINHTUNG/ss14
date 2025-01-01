#include<stdio.h>
#include<string.h>
int main(){
	int count =0;
	char chuoi[100];
	printf("moi nhap vao chuoi: ");
	fgets(chuoi ,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	for(int i=0;i<strlen(chuoi);i++){
		if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
			++count;
		}
	}
	//co the dung isalpha(chuoi[i]) 
	//khai bao them ham #include<ctype.h>
	printf("So ki tu la chu cai co trong chuoi la: %d ",count);
	return 0;
}
