#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    int identity;//身份 0为红，1为黑
    int position; //1-n中一个数，表示玩家座位号
    float voted;//每个玩家被投票数
    bool is_village_head;//玩家是否为村长
    bool is_dead;//玩家是否死亡
    bool is_openeyed;//玩家晚上是否睁眼
public:
    Player(int id,int pos)//玩家基本参数设置
    {
        identity = id;
        position = pos;
        voted = 0;
        is_dead = false;
        is_village_head = false;
        is_openeyed = false;
    }//构造函数，初始化玩家基本属性
    void Set_Voted(float num);//设置玩家被投票数
    int Id(){return identity;}//得到玩家的身份
    int Position(){return position;}//得到玩家的位置
    float Voted_num();//得到玩家的被投票数
    bool Dead();//得到玩家的死亡情况
    bool Openeyed();//得到玩家晚上是否睁眼
    bool Get_V_H_Id();//得到玩家是否为村长
    void Change_Dead();//改变玩家的死亡情况
    void Change_Openeye();//改变玩家的睁眼情况
    void Change_village_head();//改变玩家担任村长情况
};

#endif // PLAYER_H
