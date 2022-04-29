#include "Player.hpp"
namespace coup{
    Player::Player(const Game &game, const string& name){
        this->game = game;
        this->name = name;
        this->salary = 0;
    }
    Player::~Player(){}
    void Player::income(){}
    void Player::foreign_aid(){}
    void Player::coup(const Player &pl){}
    double Player::coins(){return 0;}
    string Player::role(){return "";}

}

