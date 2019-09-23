#include<bits/stdc++.h>
#include<cmath>
using namespace std;
//declare a struct point data type
 struct point
{
int x;
int y;
};
float distance(struct point t)
{
   return sqrt(t.x*t.x+t.y*t.y);
}
  
void insertionsort(float * t,int s)
{ 
  float key;
  int i;
	for(int j=1;j<s;j++)
		{
			key=t[j];
			i=j-1;
			while(i>=0 && t[i]>key)
				{
					t[i+1]=t[i];
					i=i-1;
				}
			t[i+1]=key;
		}				
}
float blum(float * d,int k,int w)
{
if(k==1)
{
 return d[0];
}
if(k!=1)
{
	//number of groups
	int g,j,i;
	g=k/4;
	for( i=1;i<=g;i++)
		{	
			j=i-1;
			j=j*4;
			insertionsort(d+j,4);
		}
	insertionsort(d+(i-1)*4 ,k-g*4);
	float y[g+1];
	for( i=0;i<g+1;i++)
	{
		y[i]=d[5*i+2];	
	
	}
	float q=blum(y,g+1 ,(g+2)/2)


	
}
int radius()
{
//number of points in each test case
int k;
cin>>k;
struct point t[k];
for(int i=0;i<k;i++)
	{
		cin>>t[i].x;
		cin>>t[i].y;
	}
float d[k];
for(int i=0;i<k;i++)
	{
		d[i]=distance(t[i]);
        }

}
int main()
{
//number of test cases
int tc;
cin>>tc;
for(int i=0;i<tc;i++)
	{
 		radius();
	}
return 0;
}  
