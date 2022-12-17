#include "actor_search.h"
struct Film {
    std::string name;
    std::string country;
    int date;
    std::string studio;
    std::string author;
    std::string director;
    std::string producer;
    std::map <std::string, std::string> characters;

};

std::string actor_search (std::string name, std::string surname, nlohmann::json films){
   Film newFilm;
   std::string actor = name + surname;

   newFilm.characters


};