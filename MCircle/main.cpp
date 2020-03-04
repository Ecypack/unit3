#include <iostream>
#include "Point.h"
#include "Circle.h"
#include <math.h>
using namespace std;


float NextRNum(float R)
{ //��һ��뾶
    return ((sqrt(2.0)-1)*R)/float(sqrt(2.0)+1);
}

int levelm(int m)
{
    //���m��Բ�ǵڼ���Բ
    return (m+2)/4+1;
}
int numbernum(int num,int k)
{
    if(num==1)
        return 1;
    //���num����ĵ�k�������ܵڼ�����
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
        //����m=0ʱѭ��ֹͣ
        if(!m)
            continue;


        num = levelm(m);//r��С�ּ�����
        float rnum[num];//�洢��ͬ�İ뾶��С
        float anum[num];//�洢��ͬ�����곤

        //���ɰ뾶����
        int i;

        rnum[0]=1.0;
        anum[0]=0.0;
        for(i=1;i<num;i++)
        {
            rnum[i]=NextRNum(rnum[i-1]);
            anum[i]=1.0-rnum[i];
        }


        //���ɶ�������
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
