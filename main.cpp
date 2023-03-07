#include<iostream>
#include<fstream>   
#include<string>
#include<vector>

#include "Header/bat.hpp"


using namespace std;



int main()
{
    string answer("");
    string entree("");
    string R1("n");
    string R2("m");
    string R3("c"); 
    tolower('N');
    tolower('M');
    tolower('C');
    
    vector<std::string> Choise;

    Choise.push_back("que voulez vous faire ?");
    Choise.push_back("n = cree un script");
    //Choise.push_back("m = modifier un script");
    Choise.push_back("c = suprimer un script");
    

    for(int i = 0; i < Choise.size(); i++) 
    {
        cout << Choise[i] << endl;
    }

    cin >> answer;
    if(answer==R1)
    {
      newScript creatScp;
        std::string
    
        g R1 ("n");
        std::string R2 ("f");
        std::string R3 ("c");
        std::string answer("");
        tolower('N');
        tolower('F');
        tolower('C');


        vector<string> secondeChoise;

        secondeChoise.push_back("que voulez vous faire ?");
        secondeChoise.push_back("n = cree un dossier");
        secondeChoise.push_back("f = cree un fichier");

        for (int i = 0; i < secondeChoise.size(); i++)
        {
           std::cout << secondeChoise[i] << endl;
        }
        std::cin >> answer;
  
        if (answer==R1)
        {
            newScript creatScp;
            creatScp.newScrp();
        }

        if (answer==R2)
        {
            
        }
    }


    // if(answer==R2)
    // {
    //    //modification du script
    //     modifScipt edit;
    //     edit.editScrip();
    // }


    if(answer==R3)
    {
        //suppretion du script
        deleteFiles deleteS;
        deleteS.deleteScipt();
    }
    
    

    return 0;

}