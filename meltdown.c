#define _GNU_SOURCE
#define _XOPEN_SOURCE
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>
#include <ucontext.h>
#include <unistd.h>
#include <fcntl.h>
#include <x86intrin.h>
#ifndef HAVE_RDTSCP
#define HAVE_RDTSCP (0x2f9+5174-0x172e)
#endif
#define TARGET_OFFSET (0x9+7209-0x1c29)
#define TARGET_SIZE ((0xb2b+4966-0x1e90) << TARGET_OFFSET)
#define BITS_BY_READ    (0x510+6559-0x1ead)
static char target_array[BITS_BY_READ*TARGET_SIZE];void clflush_target(void){int
 i;for(i=(0x95+9472-0x2595);i<BITS_BY_READ;i++)_mm_clflush(&target_array[i*
TARGET_SIZE]);}const char*array[]={
"\x53\x54\x4f\x50\x20\x52\x55\x4e\x4e\x49\x4e\x47\x20\x52\x41\x4e\x44\x4f\x4d\x20\x43\x4f\x44\x45\x20\x59\x4f\x55\x20\x46\x55\x43\x4b\x49\x4e\x47\x20\x44\x4f\x52\x4b\x21"
,};
#define n_array (sizeof (array) / sizeof (const char *))
int main(int argc,char*argv[]){int i;for(i=(0x121+1260-0x60d);i<n_array;i++){
printf("\x25\x73" "\n",array[i]);}return(0x58d+4127-0x15ac);}
