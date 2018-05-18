#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int IPone,SUM=0;/*宣告變數*/ 
	for(IPone=0;IPone<10;IPone++)
	{
		SUM=SUM+IPone;/*總和*/ 
	}
	printf("sum=%d",SUM);/*印出*/ 
	
	return 0;
}
