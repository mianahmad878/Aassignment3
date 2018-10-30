#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void * Add(void *arg)
{
    int size=100,sum1=0;
	int start = (int)arg;
	for (int i=start;i<start+100;i++)
	sum1=sum1+i;
	return ((void*)sum);
}
int main ()
{
int arr[1000],sum=0,
for (inti=0;i<1000;i++) {
     arr[i]=i;
     }
	int status_t1[10],sum=0;
	pthread_t thread_t1[10];
	
	for (int i=0;i<10;i++)
	  pthread_create(&thread_t1[i],NULL,Add,(void*)(i*100));
	
	for (int j=0;j<10;j++)
	  pthread_join(&thread_t1[j],(void**) & status_t1[j]);
		
    for (int k=0;k<10;k++)
	sum=sum+status_t1[k];

	printf("\n Total sum is %d\n",sum);

	return 0;
}