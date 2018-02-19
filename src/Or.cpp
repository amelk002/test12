#include <iostream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cmath>
#include <sstream>
#include <stdio.h>
#include <unistd.h>
using namespace std;

#include "Base.h"
#include "Or.h"
#include "Command.h"
Or::Or()
{
    lhs = 0;
    rhs = 0;
}

Or::Or(Base* lhs, Base* rhs)
{
    this->lhs = lhs;
    this->rhs = rhs;
}

Or::Or(Base* lhs, Command* rhs)
{
    this->lhs = lhs;
    this->rhs = rhs;
}

int Or::execute()
{
    int currStatus = 0;
    currStatus = lhs->execute();
    if(currStatus != 0)
    {
        currStatus = rhs->execute();
        return currStatus;
    }
    return currStatus;
}
