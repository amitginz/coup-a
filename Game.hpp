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
    static string turn();
    static vector<string> players();
    static string winner();
};

    
