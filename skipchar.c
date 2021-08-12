#include<stdio.h>
#include<string.h>
int main(){
	void  skip (char *msg){
	printf("the character = %c \n\t", *(msg+6));	
	puts( msg+6);
	}

	char *msg_from_amy = "Don't call me";
	skip(msg_from_amy);
	return 0;
}
	