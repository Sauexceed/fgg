#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    int id;//身份 0为红，1为黑
    int position; //1-n中一个数，表示玩家座位号
    float voted;//每个玩家被投票数
    bool is_leader;//玩家是否为村长
    bool is_dead;//玩家是否死亡
    bool is_openeye;//玩家晚上是否睁眼
public:
    Player(int id,int pos)
    {
        this->id = id;
        position = pos;
        voted = 0;
        is_dead = false;
        is_leader = false;
        is_openeye = false;
    }//构造函数，初始化玩家基本属性
    void Set_Voted(float num);//设置玩家被投票数
    int Get_Id(){return id;}//得到玩家的身份
    int Get_Position(){return position;}//得到玩家的位置
    float Get_voted();//得到玩家的被投票数
    bool Get_Death();//得到玩家的死亡情况
    bool Get_Openeye();//得到玩家晚上是否睁眼
    bool Get_Leader();//得到玩家是否为村长
    void Change_Death();//改变玩家的死亡情况
    void Change_Openeye();//改变玩家的睁眼情况
    void Change_Leader();//改变玩家担任村长情况
};

#endif // PLAYER_H
