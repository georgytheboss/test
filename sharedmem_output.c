//gcc sharedmem_input.c -o sharedmem_input

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>

void main(int argc, char *argv[]){
	char *shm;
	key_t key;
	key=atoi(argv[1]);
	shm=(char *)shmat(key,0,0);
	printf("shared memcontents:PROCESS2:%s",shm);
	printf("memid:%d",key);
	}