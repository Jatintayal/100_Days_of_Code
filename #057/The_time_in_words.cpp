#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    string s;
    if(m > 30)
        h++;
    switch(h){
        case 1:
            s = "one";
            break;
        case 2:
            s = "two";
            break;
        case 3:
            s = "three";
            break;
        case 4:
            s = "four";
            break;
        case 5:
            s = "five";
            break;
        case 6:
            s = "six";
            break;
        case 7:
            s = "seven";
            break;
        case 8:
            s = "eight";
            break;
        case 9:
            s = "nine";
            break;
        case 10:
            s = "ten";
            break;
        case 11:
            s = "eleven";
            break;
        case 12:
            s = "twelve";
            break;
    }
    if(m == 0){
        s += " o' clock";
    }
    else if(m == 1){
        s.insert(0, "one minute past ");
    }
    else if(m == 15){
        s.insert(0, "quarter past ");
    }
    else if(m == 30){
        s.insert(0, "half past ");
    }
    else if(m == 45){
        s.insert(0, "quarter to ");
    }
    else if(m > 1){
        if(m < 30){
                s.insert(0, "minutes past ");
                switch(m){
                case 2:
                    s.insert(0, "two ");
                    break;
                case 3:
                    s.insert(0, "three ");
                    break;
                case 4:
                    s.insert(0, "four ");
                    break;
                case 5:
                    s.insert(0, "five ");
                    break;
                case 6:
                    s.insert(0, "six ");
                    break;
                case 7:
                    s.insert(0, "seven ");
                    break;
                case 8:
                    s.insert(0, "eight ");
                    break;
                case 9:
                    s.insert(0, "nine ");
                    break;
                case 10:
                    s.insert(0, "ten ");
                    break;
                case 11:
                    s.insert(0, "eleven ");
                    break;
                case 12:
                    s.insert(0, "twelve ");
                    break;
                case 13:
                    s.insert(0, "thirteen ");
                    break;
                case 14:
                    s.insert(0, "fourteen ");
                    break;
                case 16:
                    s.insert(0, "sixteen ");
                    break;
                case 17:
                    s.insert(0, "seventeen ");
                    break;
                case 18:
                    s.insert(0, "eighteen ");
                    break;
                case 19:
                    s.insert(0, "nineteen ");
                    break;
                case 20:
                    s.insert(0, "twenty ");
                    break;
                case 21:
                    s.insert(0, "twenty one ");
                    break;
                case 22:
                    s.insert(0, "twenty two ");
                    break;
                case 23:
                    s.insert(0, "twenty three ");
                    break;
                case 24:
                    s.insert(0, "twenty four ");
                    break;
                case 25:
                    s.insert(0, "twenty five ");
                    break;
                case 26:
                    s.insert(0, "twenty six ");
                    break;
                case 27:
                    s.insert(0, "twenty seven ");
                    break;
                case 28:
                    s.insert(0, "twenty eight ");
                    break;
                case 29:
                    s.insert(0, "twenty nine ");
                    break;
                }
        }
        else{
                s.insert(0, "minutes to ");
                switch(m){
                case 31:
                    s.insert(0, "twenty nine ");
                    break;
                case 32:
                    s.insert(0, "twenty eight ");
                    break;
                case 33:
                    s.insert(0, "twenty seven ");
                    break;
                case 34:
                    s.insert(0, "twenty six ");
                    break;
                case 35:
                    s.insert(0, "twenty five ");
                    break;
                case 36:
                    s.insert(0, "twenty four ");
                    break;
                case 37:
                    s.insert(0, "twenty three ");
                    break;
                case 38:
                    s.insert(0, "twenty two ");
                    break;
                case 39:
                    s.insert(0, "twenty one ");
                    break;
                case 40:
                    s.insert(0, "twenty ");
                    break;
                case 41:
                    s.insert(0, "nineteen ");
                    break;
                case 42:
                    s.insert(0, "eighteen ");
                    break;
                case 43:
                    s.insert(0, "seventeen ");
                    break;
                case 44:
                    s.insert(0, "sixteen ");
                    break;
                case 46:
                    s.insert(0, "fourteen ");
                    break;
                case 47:
                    s.insert(0, "thirteen ");
                    break;
                case 48:
                    s.insert(0, "twelve ");
                    break;
                case 49:
                    s.insert(0, "eleven ");
                    break;
                case 50:
                    s.insert(0, "ten ");
                    break;
                case 51:
                    s.insert(0, "nine ");
                    break;
                case 52:
                    s.insert(0, "eight ");
                    break;
                case 53:
                    s.insert(0, "seven ");
                    break;
                case 54:
                    s.insert(0, "six ");
                    break;
                case 55:
                    s.insert(0, "five ");
                    break;
                case 56:
                    s.insert(0, "four ");
                    break;
                case 57:
                    s.insert(0, "three ");
                    break;
                case 58:
                    s.insert(0, "two ");
                    break;
                case 59:
                    s.insert(0, "one ");
                    break;
            }
            
        }
    }
            
    cout << s << endl;
    return 0;
}
