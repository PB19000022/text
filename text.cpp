#include<stdio.h>
float lagelangri(float x[],float y[],int xx,int n)
{
    int i,j;
    float *a,yy=0;
    a=new float[n];
    for(i=0;i<=n-1;i++)
    {
        a[i]=y[i];
        for(j=0;j<=n-1;j++)
            if(j!=i)a[i]*=(xx-x[j])/(x[i]-x[j]);

        yy+=a[i];
    }
    delete a;
    return yy;
}

int main()
{
    float x[6]={1920,1930,1940,1950,1960,1970};
    float y[6]={105711,123203,131669,150697,179323,203202};
    int xx1=1910,xx2=1965,xx3=2002,yy1,yy2,yy3;
    yy1=lagelangri(x,y,xx1,6);
    yy2=lagelangri(x,y,xx2,6);
    yy3=lagelangri(x,y,xx3,6);
    printf("x1=%d,y1=%d\n",xx1,yy1);
    printf("x2=%d,y2=%d\n",xx2,yy2);
    printf("x3=%d,y3=%d\n",xx3,yy3);
}

