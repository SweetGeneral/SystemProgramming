#include<stdio.h>
#include<unistd.h>
int main()
{
	fork();
	fork();
	fork();
	fork();
	printf("%d:Hello\n",getpid());
return 0;
}
