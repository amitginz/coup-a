#ifndef ASSASSIN_HPP
#define ASSASSIN_HPP
#include "Player.hpp"
#include "Game.hpp"
#endif
#include <string>
using namespace std;
#pragma once
namespace coup{
class Assassin:public Player
{
private:
    string name;
    double salary;
    Game game;
public:
    Assassin(const Game &game, const string& name);
    ~Assassin();
    void coup(const Player &pl);
};
}
