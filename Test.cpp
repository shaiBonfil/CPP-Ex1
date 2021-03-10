/**
 * 
 * AUTHOR: <Shai Bonfil>
 *
 * This is a test that gets input of eight characters(less or more
 * is invalid input), and the purpose is to represent snowman in
 * a format like you can see in the link below - HNLRXYTB.
 * Each valid letter is number between 1 to 4 which presets
 * the following things:
 * 
 * H - Hat
 * N - Nose
 * L - Left eye
 * R - Right eye
 * X - Left arm
 * Y - Right arm
 * T - Torso
 * B - Base
 *  
 * https://codegolf.stackexchange.com/q/49671/12019
 * 
 * Date: 2021-03
 */


#include "doctest.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#include "snowman.hpp"
using namespace ariel;

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good snowman code") {
    
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
}

TEST_CASE("All Hats"){

    // H
    CHECK(nospaces(snowman(12341234)) == nospaces("_===_ \n(...)\n(O:-)\n<(> <)/\n(   )"));
    CHECK(nospaces(snowman(21341321)) == nospaces("  ___  \n ..... \n(O,-)\n<(] [)\\n( : )"));
    CHECK(nospaces(snowman(34324123)) == nospaces("   _   \n  /_\\  \n(O o)\n( : )>\n(___)"));
    CHECK(nospaces(snowman(44123212)) == nospaces("  ___  \n (_*_) \n(. o)\n/(] [)/\n(\" \")"));
}
    
TEST_CASE("All Noses"){

    // N
    CHECK(nospaces(snowman(11341234)) == nospaces("_===_ \n(...)\n(O,-)\n<(> <)/\n(   )"));
    CHECK(nospaces(snowman(12341321)) == nospaces("_===_ \n(...)\n(O.-)\n<(] [)\\n( : )"));
    CHECK(nospaces(snowman(23324123)) == nospaces("  ___  \n ..... \n(O_o)\n( : )>\n(___)"));
    CHECK(nospaces(snowman(14123212)) == nospaces("_===_ \n(...)\n(. o)\n/(] [)/\n(\" \")"));
}    

TEST_CASE("All Left Eyes"){

    // L
    CHECK(nospaces(snowman(11141234)) == nospaces("_===_ \n(...)\n(.,-)\n<(> <)/\n(   )"));
    CHECK(nospaces(snowman(12241321)) == nospaces("_===_ \n(...)\n(o.-)\n<(] [)\\n( : )"));
    CHECK(nospaces(snowman(23324123)) == nospaces("  ___  \n ..... \n(O_o)\n( : )>\n(___)"));
    CHECK(nospaces(snowman(14423212)) == nospaces("_===_ \n(...)\n(- o)\n/(] [)/\n(\" \")"));
}    

TEST_CASE("All Right Eyes"){

    // R
    CHECK(nospaces(snowman(11111234)) == nospaces("_===_ \n(...)\n(.,.)\n<(> <)/\n(   )"));
    CHECK(nospaces(snowman(12221321)) == nospaces("_===_ \n(...)\n(o.o)\n<(] [)\\n( : )"));
    CHECK(nospaces(snowman(23334123)) == nospaces("  ___  \n ..... \n(O_O)\n( : )>\n(___)"));
    CHECK(nospaces(snowman(11443212)) == nospaces("_===_ \n(...)\n(-,-)\n/(] [)/\n(\" \")"));
}    
    
TEST_CASE("All Left Arms"){

    // X
    CHECK(nospaces(snowman(11111234)) == nospaces("_===_ \n(...)\n(.,.)\n<(> <)/\n(   )"));
    CHECK(nospaces(snowman(12222321)) == nospaces("_===_ \n(...)\n(o.o)\n\\(] [)\\n( : )"));
    CHECK(nospaces(snowman(23333123)) == nospaces("  ___  \n ..... \n(O_O)\n/( : )>\n(___)"));
    CHECK(nospaces(snowman(11444212)) == nospaces("_===_ \n(...)\n(-,-)\n(] [)/\n(\" \")"));
}   
    
TEST_CASE("All Right Arms"){

    // Y
    CHECK(nospaces(snowman(11311134)) == nospaces("_===_ \n(...)\n(O,.)\n<(> <)>\n(   )"));
    CHECK(nospaces(snowman(12221221)) == nospaces("_===_ \n(...)\n(o.o)\n<(] [)/\n( : )"));
    CHECK(nospaces(snowman(23133323)) == nospaces("  ___  \n ..... \n(._O)\n/( : )\\\n(___)"));
    CHECK(nospaces(snowman(11143412)) == nospaces("_===_ \n(...)\n(.,-)\n/(] [)\n(\" \")"));
}
    
TEST_CASE("All Torsos"){

    // T
    CHECK(nospaces(snowman(11311114)) == nospaces("_===_ \n(...)\n(O,.)\n<( : )>\n(   )"));
    CHECK(nospaces(snowman(12221221)) == nospaces("_===_ \n(...)\n(o.o)\n<(] [)/\n( : )"));
    CHECK(nospaces(snowman(23133333)) == nospaces("  ___  \n ..... \n(._O)\n/(> <)\\\n(___)"));
    CHECK(nospaces(snowman(11143442)) == nospaces("_===_ \n(...)\n(.,-)\n/(   )\n(\" \")"));
}    

TEST_CASE("All Bases"){

    // B
    CHECK(nospaces(snowman(11311211)) == nospaces("_===_ \n(...)\n(O,.)\n<( : )/\n( : )"));
    CHECK(nospaces(snowman(12221222)) == nospaces("_===_ \n(...)\n(o.o)\n<(] [)/\n(\" \")"));
    CHECK(nospaces(snowman(23133233)) == nospaces("  ___  \n ..... \n(._O)\n/(> <)/\n(___)"));
    CHECK(nospaces(snowman(11143144)) == nospaces("_===_ \n(...)\n(.,-)\n/(   )>\n(   )"));

}    

TEST_CASE("Bad snowman code: short or long input") { 
    
    CHECK_THROWS(nospaces(snowman(1111)));
    CHECK_THROWS(nospaces(snowman(123456789)));
    CHECK_THROWS(nospaces(snowman(0)));
    CHECK_THROWS(nospaces(snowman(-123)));
}

TEST_CASE("Bad snowman code: invalid letter") { 
    
    CHECK_THROWS(nospaces(snowman(11234353)));
    CHECK_THROWS(nospaces(snowman(56789005)));
    CHECK_THROWS(nospaces(snowman(14232319)));
}