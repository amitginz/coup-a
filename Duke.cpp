
#include "Duke.hpp"
#include "Player.hpp" 
coup::Duke::Duke(const Game &game, const string& name):Player(game,name){
    this->salary = 0;
}
coup::Duke::~Duke(){
    
}
namespace coup{
    void Duke::block(const Player &pl){}
    void Duke::tax(){}
};