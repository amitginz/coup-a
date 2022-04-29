/**
 *
 * AUTHORS: amit ginzberg
 * 
 * Date: 2021-04
 */
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
#include <vector>
#include "Player.hpp"
#include "Game.hpp"
#include "Duke.hpp"
#include "Ambassador.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
using namespace coup;


TEST_CASE("check no throw-income"){
    Game game_1{};
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
    CHECK_NOTHROW(duke.income());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());
    
   
}



TEST_CASE("check throw-duke after turn") {
    Game game_1{};
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
    duke.income();
    assassin.income();
    ambassador.income();
    captain.income();
    contessa.income();
    CHECK_THROWS(duke.income());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());

}

TEST_CASE("good input-comeration operators") {
	Game game_1{};
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
    assassin.foreign_aid();
    CHECK_THROWS(captain.block(assassin));
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());
}


TEST_CASE("captain block duke after income") {
    Game game_1{};
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
	duke.income();
    CHECK_THROWS(captain.block(duke));
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());

}

TEST_CASE("illeagel function") {
    Game game_1{};
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
	duke.income();
    captain.coup(duke);
    CHECK_THROWS(duke.block(ambassador));
    CHECK_THROWS(duke.foreign_aid());
    CHECK_THROWS(duke.income());
    CHECK_THROWS(duke.tax());
    CHECK_THROWS(duke.coins());
    CHECK_THROWS(duke.role());
    captain.coup(ambassador);
    CHECK_THROWS(ambassador.foreign_aid());
    CHECK_THROWS(ambassador.income());
    // CHECK_THROWS(ambassador.transfer(assassin,contessa));
    CHECK_THROWS(ambassador.coins());
    CHECK_THROWS(ambassador.role());
    captain.coup(contessa);
    CHECK_THROWS(contessa.block(ambassador));
    CHECK_THROWS(contessa.foreign_aid());
    CHECK_THROWS(contessa.income());
    CHECK_THROWS(contessa.coins());
    CHECK_THROWS(contessa.role());
    captain.coup(assassin);
    CHECK_THROWS(assassin.coup(ambassador));
    CHECK_THROWS(assassin.foreign_aid());
    CHECK_THROWS(assassin.income());
    CHECK_THROWS(assassin.coins());
    CHECK_THROWS(assassin.role());
}
