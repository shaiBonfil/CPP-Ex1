#pragma once
#include <string>
#include <vector>
using namespace std;

enum parts
{
    HAT,
    NOSE,
    LE,
    RE,
    LA,
    RA,
    TORSO,
    BASE
};

enum arms // LowerCase because collusion with StudentTest1
{
    up = 0,  // upwards arm
    down = 1 // downwards arm
};

const string space = " "; // for pretty printing

const short VALID_LEN = 8;
const short NUM_TYPES = 4;

// All Hats
const string straw_hat = space + "_===_";
const string mexican_hat = space + " ___\n .....";
const string fez = space + "  _\n  /_\\";
const string russian_hat = space + " ___\n (_*_)";

// All Noses
const string normal_nose = ",";
const string dot_nose = ".";
const string line_nose = "_";
const string none_nose = " ";

// All Eyes (Right and Left are the same)
const string dot_eye = ".";
const string bigger_dot_eye = "o";
const string biggest_dot_eye = "O";
const string closed_eye = "-";

// All Left Arms
const string normal_left = " <";
const string upwards_left = "\\ ";
const string downwards_left = " /";
const string none_arm = "  ";

// All Right Arms (none the same as in Left Arm)
const string normal_right = " >";
const string upwards_right = "/ ";
const string downwards_right = " \\";

// All Torsos
const string buttons = " : ";
const string vest = "] [";
const string inward_arms = "> <";
const string none = "   ";

// All Bases (buttons and none are the same as in Toros)
const string feet = "\" \"";
const string flat = "___";

const vector<string> Hats = {straw_hat, mexican_hat, fez, russian_hat};
const vector<string> Noses = {normal_nose, dot_nose, line_nose, none_nose};
const vector<string> Left_Eye = {dot_eye, bigger_dot_eye, biggest_dot_eye, closed_eye};
const vector<string> Right_Eye = {dot_eye, bigger_dot_eye, biggest_dot_eye, closed_eye};
const vector<string> Left_Arms = {normal_left, upwards_left, downwards_left, none_arm};
const vector<string> Right_Arms = {normal_right, upwards_right, downwards_right, none_arm};
const vector<string> Torsos = {buttons, vest, inward_arms, none};
const vector<string> Bases = {buttons, feet, flat, none};

const vector<vector<string>> presets = {Hats, Noses, Left_Eye, Right_Eye, Left_Arms, Right_Arms, Torsos, Bases};

namespace ariel
{
    string snowman(long num);
    int charToInt(char c);
}
