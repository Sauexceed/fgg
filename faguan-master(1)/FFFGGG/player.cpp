#include "player.h"

void Player::Set_Voted(float num){voted = num;}

float Player::Get_voted(){return voted;}

bool Player::Get_Death(){return is_dead;}

bool Player::Get_Leader(){return is_leader;}

bool Player::Get_Openeye(){return is_openeye;}

void Player::Change_Death(){is_dead=true;}

void Player::Change_Leader(){is_leader=!is_leader;}

void Player::Change_Openeye(){this->is_openeye=!this->Get_Openeye();}

