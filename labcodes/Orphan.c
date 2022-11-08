#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	pid_t p1, p2;
	p1=fork();
	if(p1==0)
	{
		//sleep(3);//ORPHAN
		printf("child p1 is %d\n",getpid());
		printf("parent of p1 is %d\n",getppid());
	}
	else
	{
			sleep(5);//Zombie
			printf("parent process is %d\n",getpid());
			printf("%d\n",p1);
		
	}
}
