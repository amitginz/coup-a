#ifndef Contessa_HPP
#define Contessa_HPP
#include "Player.hpp"
#include "Game.hpp" 
#endif
#include <string>
using namespace std;
namespace coup{
class Contessa:public Player
{
private:
    string name;
    double salary;
    Game game;
public:
    Contessa(const Game &game, const string& name);
    ~Contessa();
    void block(const Player &pl);
};
}



