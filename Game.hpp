// #include "Player.hpp"
#pragma once
#include <string>
#include <vector>
using namespace std;
class Game
{
private:
public:
    Game(/* args */);
    ~Game();
    string turn();
    vector<string> players();
    string winner();
};

    
