#ifndef OROR_H
#define OROR_H
#include "Base.h"
#include "Command.h"
class Or: public Base
{

    private:
        Base * lhs;
        Base * rhs;
    public:
        Or();
        Or(Base* lhs, Command* rhs);
        Or(Base* lhs, Base* rhs);
        int execute();
};
#endif
