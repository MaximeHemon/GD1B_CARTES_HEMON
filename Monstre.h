#ifndef MONSTRE_H
#define MONSTRE_H

#include "Monstre.h"
#include <string>

class Monstre{

    private: 
        std::string _name;
        int _hp;
        int _atk;
        bool _state;
        


    public:

        Monstre();
        Monstre(std::string _name, int _atk, int _hp, bool _state);
        std::string get_name(); 
        void affiche();
        int get_hp();
        int get_atk();
        bool get_state();
    


};

#endif