#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>
#include<signal.h>


int main(int argc,char *env[])
{ 

 printf("[hw1] %s sn boyunca %s calistirilacak...\n",env[2],env[1]);
 int durum;
     
    if(fork()==0){
      alarm(atoi(env[2]));
      execv(env[1],env); 
    }
    else {
      wait(&durum);
      printf("\n[hw1] %s sn sona erdi %s kapatiliyor...\n",env[2],env[1]); 
    }

return 0;
}
