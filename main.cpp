//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;

    monster m1("Shrim ",10,1);
    monster m2("Act "),m4("Pong ",30);
    monster x[5] = {{"John ",5},{"GG ",10,20}};
    p=new monster("Lulu",10,50);
    delete p;
    return 0;
}
