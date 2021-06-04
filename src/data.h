#ifndef DATA_H
#define DATA_H
#include<vector>
#include<time.h>
#include<algorithm>


class Player;//玩家类


class Data//数据类
{
    int playernum;//玩家人数
    int night_type;//夜晚类型 0为红夜，1为黑夜
public:
    Data();//构造函数，初始化平台数据
    std::vector<Player>P;//玩家数组
    int Night_type();//获取夜晚类型
    int PlayerNum_1();//获取玩家人数
    int GameOver();//判断游戏是否结束:0未结束; 1结束，红牌玩家胜利;2结束，黑牌玩家胜利
    int Openeye_num(int id);//获取对应阵营夜晚睁眼人数
    int Alive_num(int id);//获取对应阵营当前存活人数
    void initialize(int num);//初始化
    void Playernum_2(int num);//设定玩家人数
    void Night_type_reverse();//改变夜晚类型
};

#endif // DATA_H
