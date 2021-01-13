#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*first;// Global pointer 
void create(int arr[],int n)
{
	int i;
	struct Node *t ,*last;
	first=new Node;
	first->data=arr[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t=new Node;
		t->data=arr[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void RecusiveDisplay(struct Node *p)
{
	if(p!=NULL)
	{
		cout<<p->data;
		RecusiveDisplay(p->next);
	}
}

int countNode(struct Node *p)
{
	int c=0;
	while(p)
	{
		c++;
			p=p->next;
	}
	return c;
}
int SumOfNodes(struct Node *p)
{
	int sum=0;
	while(p)
	{
		sum+=p->data;
		p=p->next;
	}
	return sum;
}
int MaxNode(struct Node *p)
{
	int max=-32768;
	while(p!=0)
	{
		if(max<p->data)
		{
			max=p->data;
			
		}
		p=p->next;
		
	}
	return max;
	
}
 struct Node * LinearSearch( struct Node *p,int key)
{
	while(p!=NULL)
	{
	
	if(key==p->data)
	{
		return(p);
			}
	p=p->next;
}
return 0;
}
void display(struct Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
	}
}
void Insert(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;

 if(index < 0 || index > countNode(p))
 return;
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;

 if(index == 0)
 {
 t->next=first;
 first=t;
 }
 else
 {
 for(i=0;i<index-1;i++)
 p=p->data;
 t->next=p->next;
 p->next=t;

 }


}
int main()
{
	struct Node *temp;
	int arr[]={1,2,3,4};
	create(arr,4);
//	temp=LinearSearch(first,4);
//	if(temp) 
//	{
//		cout<<"found";
//	}
//	else{
//		cout<<"not found";
//	}
 Insert(first,0,5);
	
//RecusiveDisplay(first);
//     cout<<"Length of Node"<<countNode(first)<<'\n';
//     cout<<"Sum of Node="<<SumOfNodes(first)<<"\n";
//     cout<<"Maximum Number in Linked List ="<<MaxNode(first)<<"\n";
    display(first); 
	return 0;

}
