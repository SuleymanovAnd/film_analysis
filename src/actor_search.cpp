#include "actor_search.h"
struct Film {
    std::string name;
    std::string country;
    std::string date;
    std::string studio;
    std::string author;
    std::string director;
    std::string producer;
    std::map <std::string, std::string> characters;

};

std::string actor_search (std::string actor,  nlohmann::json films){
    std::string FilmInfo;
    
    nlohmann::json::iterator it;
    
    for (it = films.begin(); it != films.end();++it){
        std::map <std::string, std::string> tempMap;
        tempMap = *it;
        Film newFilm;
        newFilm.name = tempMap["name"];
        newFilm.country = tempMap["country"];
        newFilm.date = tempMap["date"];
        newFilm.studio = tempMap["studio"];
        newFilm.director = tempMap["director"];
        newFilm.producer = tempMap["producer"];

        std::map<std::string,std::string>::iterator itMp;
        for(itMp = tempMap.begin(); itMp != tempMap.end();++itMp){
            if(itMp->second.find(actor) != std::string::npos){
                FilmInfo += itMp->second + ": " + itMp->first +".  Film name : " + newFilm.name + "\n";
            }
        }
    }
    if (FilmInfo.empty()){
        FilmInfo = "Actor not found"; return FilmInfo;
    }else{
        return FilmInfo;
    }


}