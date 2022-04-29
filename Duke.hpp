#ifndef DUKE_HPP
#define DUKE_HPP
#include "Player.hpp" 
#include "Game.hpp"
#endif
#include <string>
using namespace std;
#pragma once
namespace coup{
class Duke:public Player
{
private:
    string name;
    double salary;
    Game game;
public:
    Duke(const Game &game, const string& name);
    ~Duke();
    void block(const Player &pl);
    void tax();
};
}

