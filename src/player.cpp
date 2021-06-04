#include "player.h"

void Player::Set_Voted(float num){voted = num;}

float Player::Voted_num(){return voted;}

bool Player::Dead(){return is_dead;}

bool Player::Get_V_H_Id(){return is_village_head;}

bool Player::Openeyed(){return is_openeyed;}

void Player::Change_Dead(){is_dead=true;}

void Player::Change_village_head(){is_village_head=!is_village_head;}

void Player::Change_Openeye(){this->is_openeyed=!this->Openeyed();}

