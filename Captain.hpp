#ifndef CAPTAIN_HPP
#define CAPTAIN_HPP
#include "Player.hpp" 
#include "Game.hpp"
#endif
#include <iostream>
#include <vector>
#include <string>
using namespace std;
namespace coup{
class Captain:public Player
{
private:
    string name;
    double salary;
    Game game;
public:
    Captain(const Game &game, const string& name);
    ~Captain();
    void block(const Player &pl);
    void steal(const Player &pl);
};
}

