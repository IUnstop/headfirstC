#include<stdio.h>
#include<stdlib.h>
int main(){
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s",card_name);
    int val=0;
	switch(card_name[0]){
		case 'J':
		case 'Q':
		case 'K':
		      val==10;
		puts("count has gone down");
	break;
		case 'A':
		      val==11;
		puts("count has gone up");
	break;
	default:
		val==atoi(card_name);
	}

    }
