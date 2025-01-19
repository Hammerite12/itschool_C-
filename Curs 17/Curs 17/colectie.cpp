#include <vector>
#include <string>
#include "colectie.h"

bool colectie::add_movie(std::string name, std::string rating, int watched) {
	for (Movie movie:colectie) {
		if (movie.get_name() == name)
			return false;
	}
	Movie temp{ name, rating, watched };
	colectie.push_back(temp);
	return true;
}