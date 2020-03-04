#include <iostream>
#include "Point.h"
#include "Circle.h"
#include <math.h>
using namespace std;


float NextRNum(float R)
{ //下一类半径
    return ((sqrt(2.0)-1)*R)/float(sqrt(2.0)+1);
}

int levelm(int m)
{
    //求第m个圆是第几级圆
    return (m+2)/4+1;
}
int numbernum(int num,int k)
{
    if(num==1)
        return 1;
    //求第num级别的第k个数是总第几个数
    return num*4-3-(4-k);
}

int main()
{
    int m = 1;
    int num=0;

    while(m)
    {
        cout<<"m : ";
        cin>>m;
        //输入m=0时循环停止
        if(!m)
            continue;


        num = levelm(m);//r大小分级级数
        float rnum[num];//存储不同的半径大小
        float anum[num];//存储不同的坐标长

        //生成半径序列
        int i;

        rnum[0]=1.0;
        anum[0]=0.0;
        for(i=1;i<num;i++)
        {
            rnum[i]=NextRNum(rnum[i-1]);
            anum[i]=1.0-rnum[i];
        }


        //生成对象数组
        Circle cir[m];
        int ii,tt;

        cir[0].SetCircle(anum[0],anum[0],rnum[0]);
        cir[0].Display();

        for(ii=1;ii<m;ii++)
        {
            tt=levelm(ii+1)-1;
            if (ii%4==1)
                cir[ii].SetCircle(anum[tt],anum[tt],rnum[tt]);
            else if (ii%4==2)
                cir[ii].SetCircle(-anum[tt],anum[tt],rnum[tt]);
            else if (ii%4==3)
                cir[ii].SetCircle(-anum[tt],-anum[tt],rnum[tt]);
            else
                cir[ii].SetCircle(anum[tt],-anum[tt],rnum[tt]);
            cir[ii].Display();
        }

        cout<<endl;
    }
    return 0;
}
