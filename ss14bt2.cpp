#include<stdio.h>
#include<string.h>
int main(){
	char sentence[50];
	printf("Moi nhap vao chuoi ki tu: ");
	fgets(sentence, sizeof(sentence),stdin);
	sentence[strcspn(sentence, "\n")] = '\0';
	printf("In ra tung ki tu: ");
	for(int i=0;i<strlen(sentence);i++){
		printf("%c ",sentence[i]);
	}
	return 0;
}

