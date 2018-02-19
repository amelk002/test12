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
#include <pwd.h>
#include <sys/types.h>

using namespace std;

#include "Processes.h"

int main()
{

    struct passwd *pwd;
    pwd = getpwuid(geteuid());
    char host [128];
    gethostname(host, sizeof(host));
    cout << pwd->pw_name << "@" << host << " $ ";
    string input;
    getline(cin, input);
    Processes mainProcess;
    while(input != "exit")
    {
        mainProcess.parse(input);
        mainProcess.execute();
        mainProcess.reset();
        cout << pwd->pw_name << "@" << host << " $ ";
        getline(cin, input);
    }
    return 0;
}
