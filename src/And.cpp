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
#include "And.h"
#include "Command.h"
And::And()
{
    lhs = 0;
    rhs = 0;
}

And::And(Base* lhs, Base* rhs)
{
    this->lhs = lhs;
    this->rhs = rhs;
}

And::And(Base* lhs, Command* rhs)
{
    this->lhs = lhs;
    this->rhs = rhs;
}

int And::execute()
{
    int currStatus = 0;
    currStatus = lhs->execute();
    if(currStatus != 0)
    {
        return -1;
    }
    else
    {
        currStatus = rhs->execute();
        if(currStatus != 0)
        {
            return -1;
        }
    }
    return currStatus;
}
