#ifndef DEF_BAT
#define DEF_BAT

#include<iostream>
#include<fstream>
#include<vector>
#include<string>


#include "script.hpp"
#include "Launche.hpp"
#include "User.hpp"

using namespace std;

class newScript
{
    public:
    //creation du script
    void newScrp()
    {   
        std::string oui("o");
        std::string non("n");
        std::string choiseUser("");
        std::string nomDfichier("");
        std::string sessionOfUser("");
        User session;
        // le chemin du fichier(peut etre editer)
        ofstream script1("/myScript.bat");
        if(script1)
        {
            //ecriture du script dans le fichier myScript.bat
            std::cout << "entrer le nom de votre fichier" << endl;
            std::cin >> nomDfichier;
            std::cout << "creation de votre script..." << endl;
            script1 << "@ECHO" " " "OFF" << endl;
            script1 << "cd" " " "/c++_test/bat/" << endl;
            script1 << "mkdir" " " << nomDfichier << endl;
            script1 << "cd" " " << nomDfichier << endl; 
            script1 << "mkdir" " " "PF" << endl;  
            script1 << "mkdir" " " "img" << endl;  
            script1 << "mkdir" " " "song" << endl;  
            script1 << "mkdir" " " "scene" << endl; 
            script1 << "start" " " "AfterFx.exe" << endl; 
            script1 << "exit" " " "" << endl;

            //demande si il est possible de lancer un programme
            std::cout << "veut tu lancer ton script ?" << sessionOfUser << endl;
            std::cin >> choiseUser;
            if(choiseUser==oui)
            {
                //demarre le script
                std::system("start ""myScript.bat"); 
                //affiche le nom de la session
                session.sessionFound();
            }
            
        }
        else
        {
            std::cout << "imposible d'ecrire dans le fichier" << endl;
            session.sessionFound();
        }
    }
    private:

    std::string m_info;
};

// modification du scipt
class modifScipt
{
    public:
    void editScrip()
    {
        
    }
};



// suppretion du script
class deleteFiles
{
    public:
    void deleteScipt()
    { 
        std::string nomDfichier("");
        ofstream script1("/myScript.bat");
         if (script1)
         {
            std::cout << "quelle fichier veux tu supprimer ? " << endl;
            std::cin >> nomDfichier;
            script1 << "cd" " " "/bat" << endl;
            script1 << "rmdir" " " "/s" " " "/q" " " << nomDfichier << endl;
            script1 << "exit" " " << endl;
            std::system("start ""myScript.bat"); 
         }
         
        std::cout << "votre fichier a ete supprimer" << endl;
        remove("myScript");
        
    }    
};


#endif