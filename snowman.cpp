#include <stdexcept>
#include <iostream>
#include <vector>
#include <string>
#include "snowman.hpp"
using namespace std;
const int validNum = 8;

enum bodyParts {
        head, leftArm, leftEye, nose, rightEye, rightArm, upper, lower 
};

const vector<string> vHead = {"       \n _===_ ", "  ___  \n ..... ", "   _   \n  /_\\  ", "  ___  \n (_*_) "};
const vector<string> vNose = {",", ".", "_", " "};
const vector<string> vLeft = {".", "o", "O", "-"};
const vector<string> vRight = {".", "o", "O", "-"};
const vector<string> vRightEye = {" ", "\\", " ", " "};
const vector<string> vLeftEye = {"<", " ", "/", " "};
const vector<string> Y1 = {" ", "/", " ", " "};
const vector<string> Y2 = {">", " ", "\\", " "};
const vector<string> vUpper = {" : ", "] [", "> <", "   "};
const vector<string> vLower = {" : ", "\" \"", "___", "   "};

int convertNum(char c){
    return (c-'0')-1; 
}

bool checkInput(string num){
    if(num.size() != validNum){
        return false;
    } 
    for (int i = 0; i < num.size(); i++){
        if(num[i] < '1' || num[i] > '4'){
            return false;
        }
    }
    return true;
}

namespace ariel {
string snowman(int num){
string snow;
string str = to_string(num);
if(!checkInput(str)){
            throw invalid_argument{"Errot has been made :  Input number must have 8 digits from 1 - 4!\n"};
        } 
        snow += vHead.at(convertNum(str[head])) + "\n";
        snow += vRightEye.at(convertNum(str[rightEye])) + "(" + vLeft.at(convertNum(str[leftEye]));
        snow += vNose.at(convertNum(str[leftArm]))+ vRight.at(convertNum(str[nose])) + ")" + Y1.at(convertNum(str[rightArm])) + "\n";
        snow += vLeftEye.at(convertNum(str[rightEye])) + "(" + vUpper.at(convertNum(str[upper])) + ")" + Y2.at(convertNum(str[rightArm])) + "\n";
        snow += " (" + vLower.at(convertNum(str[lower])) + ") ";

        return snow;
        }
};
