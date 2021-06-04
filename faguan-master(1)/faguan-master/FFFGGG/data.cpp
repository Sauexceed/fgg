#include "data.h"
#include "player.h"
#include <QDebug>

bool compare_incr( Player &a , Player &b)
{
    return a.Position()<b.Position();
}//升序排序函数


Data::Data()//根据玩家人数初始化平台数据
{
    playernum = 0;//默认人数为0
    night_type = 0;//夜晚属性初始化（默认红夜）
}

void Data::initialize(int num)
{
    P.clear();//玩家数组清零
    Playernum_2(num);
    srand((unsigned)time(NULL));//设定了时间种子，若设定确定数值的种子，得到的是伪随机数！
    //QList<int>Sort不佳，因为只能防止间断离散数据！
    std::vector<int>Sort;//动态数组，存放任意数据
    Sort.push_back(-1);//取值范围外的值，调试用！
    for(int i=1;i<=num;i++)
    {
        int t;
        while(!Sort.empty())
        {
            t =rand()%num+1;
            if(find(Sort.begin(),Sort.end(),t)==Sort.end())//历遍数组，找相同项输出！
            {
               Sort.push_back(t);
               break;
            }
        }
        if(i<=num/2)
        {
            Player a(1,t);
            this->P.push_back(a);
        }else
        {
            Player b(0,t);
            this->P.push_back(b);
        }
    }
    std::sort(P.begin(),P.end(),compare_incr);//玩家位置升序（开始地址，结束地址，排序方法）
}

int Data::Night_type()//夜晚类型
{
    return night_type;
}

int Data::PlayerNum_1()//玩家数
{
    return playernum;
}

int Data::GameOver()//判断游戏是否结束
{
    if(Alive_num(0)==0)//红方阵亡
    {
        return 2;
    }
    if(Alive_num(1)==0)//黑方阵亡
    {
        return 1;
    }
    return 0;//各有存活
}

int Data::Openeye_num(int id)//获取对应阵营夜晚睁眼人数
{
    int count = 0;
    for(unsigned int i=0;i<P.size();i++)
    {
        if(P[i].Openeyed()&&P[i].Id()==id&&!P[i].Dead())
            count++;
    }
    return count;
}

int Data::Alive_num(int id)//当前阵营当前存活人数
{
    int count = 0;
    for(unsigned int i=0;i<P.size();i++)
    {
        if((!P[i].Dead())&&(P[i].Id()==id))
            count++;
    }
    return count;
}

void Data::Night_type_reverse()//改变夜晚类型
{
    srand((unsigned)time(NULL));
    int temp = rand()%2;
    night_type=temp;
}

void Data::Playernum_2(int num)//传递玩家个数
{
    playernum = num;
}










