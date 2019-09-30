#include<bits/stdc++.h>
using namespace std;
struct point 
{
int x;
int y;
};
int crossproduct(struct point p1,struct point p2)
{
return p1.x*p2.y-p2.x*p1.y;
}
//return tan of polar angle of point p1 wrt p0
float polarangle(struct point p0,struct point p1)
{




}
//nonleftturn returns 1 if non left turn
int nonleftturn(struct point p0,struct point p1,struct point p2)
{
struct point u,v;
u.x=p2.x-p0.x;
u.y=p2.y-p0.y;
v.x=p1.x-p0.x;
v.y=p1.y-p0.y;
if(crossproduct(u,v)<0)
{
return 0;
}
else 
{
return 1;
}
}

int main()
{
//number of points
int t;
cin>>t;
struct point q[t];
for(int i=0;i<t;i++)
{
cin>>q[t].x;
cin>>q[t].y;
}


}
