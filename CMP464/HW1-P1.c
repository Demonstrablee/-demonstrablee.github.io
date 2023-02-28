/*
 * HINTS:
 * The answer can be determined by counting the number of unique  
 * processes.  The getpid()system call can be used to get the 
 * current process id (pid).
 * For example the C statement: 
 * printf("%d\n",getpid()); will print the current pid.
 */
#include <stdio.h>
#include <unistd.h>

int main()
{
	//ALIYAH DAISIE EMPILID: 240535140
	
	fork();
		printf("the pid of this process after first fork is: %d \n",getpid());
		
	fork();
		printf("the pid of this process after second fork is : %d \n",getpid());

	fork();
		printf("the pid of this process after third fork is: %d \n",getpid());

	return 0;

}


