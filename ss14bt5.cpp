#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100];
	int index=1;
	printf("moi nhap vao chuoi: ");
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	for(int i=0;i<strlen(chuoi);i++){
		if(chuoi[i]==' '){
			++index;
		}
	}
	printf("So tu trong chuoi la: %d",index);
	return 0;
}
