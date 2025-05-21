#include<stdio.h>
#include<sys/types.h>
#include<unistd.h> //gives access to portable operating system interface(POSIX)

int main()
{

pid_t pid;

pid=fork();

if (pid==0)
{
printf("I am the child process (pid=%d)\n", getpid()); 
}

else if (pid>0){
printf("I am the parent process (pid=%d)\n", getpid());
}

else{
printf("Fork Failed");
return 1;
}

return 0;
} 

