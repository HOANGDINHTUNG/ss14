#include<stdio.h>
#include<string.h>
int main(){
	int count=0;
	char sentence[50];
	char kitu;
	printf("Moi nhap vao chuoi bat ki: ");
	fgets(sentence,sizeof(sentence),stdin);
	sentence[strcspn(sentence,"\n")]='\0';
	printf("Moi nhap vao ki tu bat ki de kiem tra so lan lap: ");
	scanf("%c",&kitu);
	for(int i=0;i<strlen(sentence);i++){
		if(sentence[i]==kitu){
			++count;
		}
	}
	printf("ki tu %c xuat hien %d trong chuoi!!!",kitu,count);
	return 0;
}
