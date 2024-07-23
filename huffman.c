#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int count = 0,count1[27]={0},i=0;
int c1=0;
#define MAX_TREE_HI 100
struct minheap{
	struct minheapnode **arr;
	long long cur;
	long long capacity;
};
struct minheapnode{
	char dat;
	long long  freq;
	struct minheapnode *lchild,*rchild;
};
struct minheapnode* address=NULL;
struct  minheapnode*  newnode(char data,long long freq)
{
	struct minheapnode *tmp
	 =(struct minheapnode*)malloc(sizeof(struct minheapnode));
	tmp->lchild = tmp->rchild =NULL;
	tmp->dat =data;
	tmp->freq =freq;
	return tmp;
}
struct minheap* createminheap(long long capacity)
{
	struct minheap* minHeap
	 =(struct minheap*)malloc(sizeof(struct minheap));
	minHeap->cur =0;
	minHeap->capacity = capacity;
	minHeap->arr
	 =(struct minheapnode**)malloc(capacity * sizeof(struct minheapnode*));
	return minHeap;
}

void minheapify(struct minheap *h,int index)
{
	int smallest = index;
	int left = 2 * index+1;
	int right =2 * index+2;
	if(left<h->cur && h->arr[left]->freq < h->arr[smallest]->freq)
	{
		smallest =left;//22
	}
	if(right < h->cur && h->arr[right]->freq < h->arr[smallest]->freq)
	{
		smallest = right;
	}
	if(smallest != index)
	{
		struct minheapnode *tmp = h->arr[smallest];
		h->arr[smallest]=h->arr[index];
		h->arr[index]=tmp;
		minheapify(h,smallest);
	}
}
struct minheapnode* extractmin(struct minheap *h)
{
	struct minheapnode *tmp = h->arr[0];
	h->arr[0]=h->arr[h->cur-1];
	--h->cur;
	minheapify(h,0);
	return tmp;
}
void insertminheap(struct minheap *h,struct minheapnode *hnode)
{
	++h->cur;
	int i = h->cur-1;
	while(i && hnode->freq < h->arr[(i-1)/2]->freq)
	{
		h->arr[i]=h->arr[(i-1)/2];
		i=(i-1)/2;
	}
	h->arr[i]=hnode;
}
void buildminheap(struct minheap *h)
{
	int n=h->cur -1;
	int i;
	for(i=(n-1)/2;i>=0;i--)
	{
		minheapify(h,i);
	}
}
void printarray(int a[],int n,char temp)
{
	int i,count2=0;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		count2++;
	}
	count1[temp-'a']=count2;
	printf("\n");
}
struct minheap* createandbuildminheap(char data[],int freq[],int size)
{
	struct minheap *h = createminheap(size);
	int i;
	for(i=0;i<size;i++)
	{
		h->arr[i]=newnode(data[i],freq[i]);
	}
	h->cur = size;
	buildminheap(h);
	return h;
}
struct minheapnode* buildhufftree(char data[],int freq[],int size)
{
	struct minheapnode *left,*right,*top;
	struct minheap*minheap = createandbuildminheap(data,freq,size);
	while(!(minHeap->cur==1))
	{
		left =extramin(minHeap);
		right =extramin(minHeap);
		top =newnode('#',left->freq + right->freq);
		top->lchild=left;
		top->rchild=right;
		insertminheap(minHeap,top);
	}
	return extractmin(minHeap);
}
void print(struct minheapnode* root,int arr[],int top)
{
	if(root->lchild)
	{
		arr[top]=0;
		print(root->lchild,arr,top+1);
	}
	if(root->rchild)
	{
		arr[top]=1;
		print(root->rchild,arr,top+1);
	}
	if(!(root->lchild)&& !(root->rchild))
	{
		printf("%c:",root->dat);
		printarray(arr,top,root->dat);
	}
	address=root;
}
void huffmancode(char data[],int freq[],int size)
{
	struct minheapnode* root=buildhufftree(data,freq,size);
	int arr[MAX_TREE_HT],top=0;
	print(root,arr,top);
}
void incoder(struct minheapnode *root)
{
	if(root==NULL)
	{
		return ;
	}
	incoder(root->lchild);
	printf("%c",root->dat);
	incoder(root->rchild);
}
//main code
int main()
{
	int n,i;
	printf("\n\n\t###########################################################");
	printf("\n\t#########################################################");
	printf("\n\t###                                                  ###");
	printf("\n\t###                                                  ###");
	printf("\n\t###             huffman encoding                     ###");
}
