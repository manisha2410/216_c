#include<stdio.h>

struct Task
{
	int id;
	int prio;
};

void scheduling(struct Task task[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(task[j].prio<task[j+1].prio)
			{
				struct Task temp =task[j];
				task[j] = task[j+1];
				task[j+1]=temp;
			}
		}
	}
	
	printf("Scheduled Tasks:\n");
	printf("ID\t Priority\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\n",task[i].id,task[i].prio);
	}
}

int main()
{
	struct Task task[]={{1,3},{2,1},{3,4},{4,2}};
	int n=sizeof(task)/sizeof(task[0]);
	scheduling(task,n);
	return 0;
}
