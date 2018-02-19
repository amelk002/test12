#ifndef ANDAND_H
#define ANDAND_H
#include "Base.h"
#include "Command.h"
class And: public Base
{
    private:
        Base * lhs;
        Base * rhs;
    public:
        And();
        And(Base* lhs, Command* rhs);
        And(Base* lhs, Base* rhs);
        int execute();
};
#endif
