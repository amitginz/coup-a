
#include "Assassin.hpp"
#include "Player.hpp" 
coup::Assassin::Assassin(const Game &game, const string& name):Player(game,name){
    this->salary = 0;
}
coup::Assassin::~Assassin(){
    
}
namespace coup{
    void Assassin::coup(const Player &pl){}
}