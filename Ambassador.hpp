#ifndef AMBASSADOR_HPP
#define AMBASSADOR_HPP
#include "Player.hpp" 
#include "Game.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#endif
#include <iostream>
#include <vector>
#include <string>
using namespace std;
namespace coup{
class Ambassador:public Player
{
private:
    Game game;
    string name;
    int salary;
public:
    Ambassador(const Game &game, const string& name);
    ~Ambassador();
    void transfer(Duke &duke,Assassin &assassin);
};
}

