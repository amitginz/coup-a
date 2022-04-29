#include <iostream>
#include <vector>
#include <string>
#include "Captain.hpp"
#include "Player.hpp" 
#include "Game.hpp"
using namespace std;
coup::Captain::Captain(const Game &game, const string& name):Player(game,name){
    this->salary = 0;
}
coup::Captain::~Captain(){
    
}
namespace coup{
    void Captain::block(const Player &pl){}
    void Captain::steal(const Player &pl){}
}