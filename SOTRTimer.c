#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>

int main(){
	int timerDelay;
	printf("Lara Croft : Shadow of the Tomb Raider Timer\nEnter delay (mins):");
	scanf("%d",&timerDelay);
	while(1){
		int i=0;
		for(i=timerDelay*60;i>=0;i--){
			system("clear");
			printf("Lara Croft : Shadow of the Tomb Raider Timer\n");
			printf("Timer running : %02d : %02d\n",i/60,i%60);
			sleep(1);
		}
		system("cls");
		for(;i<4;i++){
			system("clear");
			printf("EXCHANGE");
			for(int j=i;j>=0;j--)
				printf("!");
			printf("\a\n");
			sleep(1);
		}
	}
}



/*
//Backup
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>

int main(){
	int timerDelay;
	printf("Lara Croft : Shadow of the Tomb Raider Timer\nEnter delay (mins):");
	scanf("%d",&timerDelay);
	while(1){
		int i=0;
		for(i=timerDelay*60;i>=0;i--){
			system("clear");
			printf("Lara Croft : Shadow of the Tomb Raider Timer\n");
			printf("Timer running : %02d : %02d\n",i/60,i%60);
			sleep(1);
		}
		system("cls");
		for(;i<4;i++){
			system("clear");
			printf("EXCHANGE");
			for(int j=i;j>=0;j--)
				printf("!");
			printf("\a\n");
			sleep(1);
		}
	}
}
*/

