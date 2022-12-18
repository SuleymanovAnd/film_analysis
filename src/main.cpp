#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"
#include "actor_search.h"

int main() {

        std::map<std::string, std::string> AvatarFilm;
        std::map<std::string, std::string> Van_Helsing;
        std::map<std::string, std::string> Interstellar;
        std::map<std::string, std::string> Guardians_of_the_Galaxy;
        std::map<std::string, std::string> Limitless;

    {
        AvatarFilm["name"] = "Avatar: The Way of Water";
        AvatarFilm["country"] = "USA";
        AvatarFilm["date"] = "2022";
        AvatarFilm["studio"] = "20th Century Studios, Lightstorm Entertainment, TSG Entertainment";
        AvatarFilm["director"] = "James Cameron";
        AvatarFilm["producer"] = "James Cameron";
        AvatarFilm["character - Jake Sully"] = "Samuel Worthington";
        AvatarFilm["character - Neytiri"] = "Zoe Saldaña";
        AvatarFilm["character - Kiri"] = "Sigourney Weaver";
        AvatarFilm["character - Colonel Miles Quaritch"] = "Stephen Lang";
        AvatarFilm["character - Ronal"] = "Kate Winslet";
        AvatarFilm["character - Tonowari"] = "Cliff Curtis";


        Van_Helsing["name"] = "Van_Helsing";
        Van_Helsing["country"] = "USA";
        Van_Helsing["date"] = "2004";
        Van_Helsing["studio"] = "Universal Pictures, The Sommers Company, Stillking Films";
        Van_Helsing["director"] = "Stephen Sommers";
        Van_Helsing["producer"] = " Bob Ducsay, Stephen Sommers";
        Van_Helsing["character - Gabriel Van Helsing"] = "Hugh Jackman";
        Van_Helsing["character - Anna Valerious"] = "Kate Beckinsale";
        Van_Helsing["character -  Count Vladislaus Dracula"] = "Richard Roxburgh";
        Van_Helsing["character - Carl"] = "David Wenham";
        Van_Helsing["character - Frankenstein's monster"] = "Shuler Hensley";
        Van_Helsing["character - Igor"] = "Kevin J. O'Connor";


        Interstellar["name"] = "Interstellar";
        Interstellar["country"] = "USA, United Kingdom";
        Interstellar["date"] = "2014";
        Interstellar["studio"] = "Warner Bros. Pictures, Legendary Pictures, Lynda Obst Productions, Paramount Pictures";
        Interstellar["director"] = "Christopher Nolan";
        Interstellar["producer"] = "Emma Thomas, Christopher Nolan, Lynda Obst";
        Interstellar["character - Joseph Cooper"] = "Matthew McConaughey";
        Interstellar["character - Dr. Amelia Brand"] = "Anne Hathaway";
        Interstellar["character -   Murphy"] = "Jessica Chastain";
        Interstellar["character - Professor John Brand"] = "Michael Caine";
        Interstellar["character - Mann"] = "Matt Damon";
        Interstellar["character - Romilly"] = "David Gyasi";


        Guardians_of_the_Galaxy["name"] = "Guardians_of_the_Galaxy";
        Guardians_of_the_Galaxy["country"] = "USA";
        Guardians_of_the_Galaxy["date"] = "2014";
        Guardians_of_the_Galaxy["studio"] = "Marvel Studios";
        Guardians_of_the_Galaxy["director"] = "James Gunn";
        Guardians_of_the_Galaxy["producer"] = "Kevin Feige";
        Guardians_of_the_Galaxy["character - Peter Quill / Star-Lord"] = "Chris Pratt";
        Guardians_of_the_Galaxy["character - Gamora"] = "Zoe Saldaña";
        Guardians_of_the_Galaxy["character - Drax the Destroye"] = "Jessica Chastain";
        Guardians_of_the_Galaxy["character - Groot"] = "Vin Diesel";
        Guardians_of_the_Galaxy["character - Rocket"] = "Bradley Cooper";
        Guardians_of_the_Galaxy["character - Ronan the Accuser"] = "Lee Pace";


        Limitless["name"] = "Limitless";
        Limitless["country"] = "USA";
        Limitless["date"] = "2011";
        Limitless["studio"] = "Rogue,Relativity Media, Virgin Produced";
        Limitless["director"] = "Neil Burger";
        Limitless["producer"] = "Leslie Dixon, Scott Kroopf ,Ryan Kavanaugh";
        Limitless["character -  Edward \"Eddie\" Morra"] = "Bradley Cooper";
        Limitless["character - Lindy"] = "Abbie Cornish";
        Limitless["character - Carlos \"Carl\" Van Loon"] = "Robert De Niro";
        Limitless["character - Melissa Gant"] = "Anna Friel";
        Limitless["character - Vernon Gant"] = "Johnny Whitworth";
        Limitless["character -  Henry \"Hank\" Atwood"] = "Richard Bekins";

    }
    nlohmann::json films;
    films ["Avatar 2"] = AvatarFilm;
    films ["Van Helsing"] = Van_Helsing;
    films ["Interstellar"] = Interstellar;
    films ["Guardians_of_the_Galaxy"] = Guardians_of_the_Galaxy;
    films ["Limitless"] = Limitless;

    std::ofstream file ("films.json");
    file << films;
    file.close();

    std::ifstream iFile ("films.json");

    nlohmann::json filmsInFile;
    iFile >> filmsInFile;
    file.close();

    std::cout << "Enter searching actor: ";
    std::string actor;
    std::cin >> actor;
    std::string searching_actor;
    searching_actor = actor_search (actor, filmsInFile);
   std::cout << searching_actor;

}
