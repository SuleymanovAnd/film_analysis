#include "actor_search.h"
struct Film {
    std::string name;
    std::string country;
    string date;
    std::string studio;
    std::string author;
    std::string director;
    std::string producer;
    std::map <std::string, std::string> characters;

};

std::string actor_search (std::string name, std::string surname, nlohmann::json films){
   Film newFilm;
   std::string actor = name + surname;
    
    nlohmann::json::iterator it;
    
    for (it = films.begin(); it != films.end();++it){
      newFilm.name = *it["name"];
      newFilm.country = *it["country"];
      newFilm.date = *it["date"];
      newFilm.studio = *it["studio"];
      newFilm.director = *it["director"];
      newFilm.producer = *it["producer"];
      
    }

   newFilm.characters


};
