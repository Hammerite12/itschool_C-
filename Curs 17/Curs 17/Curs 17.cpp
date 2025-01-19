#include <iostream>
#include "colectie.h"
#include "movie.h"

//fuction prototypes
void increment_watched(Movie& movies, std::string name);
void add_movies(colectie& movies, std::string name, std::string rating, int watched);

void increment_watched(Movie& movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << "watch incremented" << std::endl;
    }
    else {
        std::cout << name << "not found" << std::endl;
    }
}
void add_movies(Movie& movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name, rating, watched)) {
        std::cout << name << "added" << std::endl;
    }
    else {
        std::cout << name << "already exist" << std::endl;
    }
}

int main()
{
    colectie my_movies;

    //my_movies.display();

    add_movies(my_movies, "Fast and furios", "FB", 2);
    add_movies(my_movies, "Star Wars", "FB", 5);
    add_movies(my_movies, "Singur acasa", "FB", 7);

    //my_movies.display();

    increment_watched(my_movies, "Star Wars");

    //my_movies.display();

    return 0;
}
