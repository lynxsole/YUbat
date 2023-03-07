#ifndef DEF_USER
#define DEF_USER


#include<iostream>
#include<string>
#include<windows.h>
#include<Lmcons.h>

using namespace std;
class User
{  
    public:
    void sessionFound()
    {
        char* sUtilisateur;
        sUtilisateur = getenv("USERNAME");
        if (sUtilisateur != NULL)
        std::cout << sUtilisateur << endl;
        sUtilisateur = nullptr;
        return 0;
    }
};


#endif