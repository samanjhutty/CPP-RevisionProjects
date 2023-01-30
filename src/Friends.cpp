#include "Friends.h"
#include <iostream>
using namespace std;

Friends::crap(MemberInitializer &ojj){
    ojj.friendvar=99;
    cout<<"the value of Private variable from class Member Initializer is changed to: "<<ojj.friendvar;
}
