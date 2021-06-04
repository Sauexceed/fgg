#include "platform.h"
#include "player.h"
#include <QDebug>
bool cmp( Player &a , Player &b)
{
    return a.Get_Position()<b.Get_Position();
}//比较函数


Data::Data()//根据玩家人数初始化平台数据
{
    playernum = 0;//默认人数为0
    night_type = 0;//夜晚属性初始化（默认红夜）
}

void Data::init(int num)
{
    P.clear();//玩家数组清零
    Set_Playernum(num);
    srand((unsigned)time(NULL));//设定了时间种子，若设定确定数值的种子，得到的是伪随机数！
    std::vector<int>Sort;
    Sort.push_back(-1);//取值范围外的值，调试用！
    for(int i=1;i<=num;i++)
    {
        int key;
        while(!Sort.empty())
        {
            key =rand()%num+1;
            if(find(Sort.begin(),Sort.end(),key)==Sort.end())//历遍数组，找相同项输出！
            {
               Sort.push_back(key);
               break;
            }
        }
        if(i<=num/2)
        {
            Player a(1,key);
            this->P.push_back(a);
        }else
        {
            Player b(0,key);
            this->P.push_back(b);
        }
    }
    std::sort(P.begin(),P.end(),cmp);//玩家容器初始化，按下标进行升序
}

int Data::Get_Night()//获取夜晚类型
{
    return night_type;
}

int Data::Get_PlayerNum()//获取玩家人数
{
    return playernum;
}

int Data::GameOver()//判断游戏是否结束 0未结束 1结束，红牌玩家胜利，2结束，黑牌玩家胜利
{
    if(Get_IdNumber(0)==0)
    {
        return 2;
    }
    if(Get_IdNumber(1)==0)
    {
        return 1;
    }
    return 0;
}

int Data::Get_Openeyes(int id)//获取对应阵营夜晚睁眼人数
{
    int count = 0;
    for(unsigned int i=0;i<P.size();i++)
    {
        if(P[i].Get_Openeye()&&P[i].Get_Id()==id&&!P[i].Get_Death())
            count++;
    }
    return count;
}

int Data::Get_IdNumber(int id)//当前阵营当前存活人数
{
    int count = 0;
    for(unsigned int i=0;i<P.size();i++)
    {
        if((!P[i].Get_Death())&&(P[i].Get_Id()==id))
            count++;
    }
    return count;
}

void Data::Change_Night()//改变夜晚类型
{
    srand((unsigned)time(NULL));
    int temp = rand()%2;
    night_type=temp;
}

void Data::Set_Playernum(int num)
{
    playernum = num;
}










