

#include "Contessa.hpp"
#include "Player.hpp" 
coup::Contessa::Contessa(const Game &game, const string& name):Player(game,name){
    this->salary =0;
}
coup::Contessa::~Contessa(){
    
}
namespace coup{
    void Contessa::block(const Player &pl){}
}