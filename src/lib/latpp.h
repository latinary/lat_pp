#pragma once

#include <iostream>
#include <cstdio>
#include "definitions.h"

using namespace std;
 
namespace vexillum
{
    inanis dicunt(auto x)
    {
        cout << x << endl;
    }
    
    inacie numerus ut_numerus()
    {
        numerus t = 0;
        littera c = getchar();
        bool neg = falsus;
        si (c == '-')
            neg = verum;
        aliud
            t += c - '0';
        dum((c = getchar()) != '\n' && c != ' ' && c != EOF)
        {
            t = t * 10 + c - '0';
        }
        reditus (neg ? -t : t);
    }

    inacie filum ut_filum()
    {
        filum s;
        cin >> s;
        reditus s;
    }
}