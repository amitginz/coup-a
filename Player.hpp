
#pragma once

#include "Game.hpp"

#include <string>
using namespace std;
namespace coup{
class Player
{
private:
    string name;
    double salary;
    Game game;
    /* data */
public:
    Player(const Game &game, const string& name);
    ~Player();
    void income();
    void foreign_aid();
    void coup(const Player &pl);
    static double coins();
    static string role();
};
}

