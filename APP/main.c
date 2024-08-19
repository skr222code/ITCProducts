#include <stdio.h>
#include "hello.h"

void cursor() {
	printf ("> ");
}

int main() {
	char input[52];
	
	hello();
	cursor();
	
	scanf("%s", input); //SOON...
	
return 0;	
}
