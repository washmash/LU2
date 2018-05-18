#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int IPone,SUM=0;
	for(IPone=0;IPone<10;IPone++)
	{
		SUM=SUM+IPone;
	}
	printf("sum=%d",SUM);
	
	return 0;
}
