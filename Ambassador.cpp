
#include "Ambassador.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

coup::Ambassador::Ambassador(const Game &game, const string& name):Player(game,name){
    this->salary = 0;
}
coup::Ambassador::~Ambassador(){
    
}
namespace coup{
    void Ambassador::transfer(Duke &duke,Assassin &assassin){}
}