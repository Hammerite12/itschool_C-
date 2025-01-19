#include <vector>
#include <string>
#include "movie.h"

class colectie {
private:
	std::vector<Movie> movies;
public:
	colectie();
	~colectie();

	bool add_movie(std::string name, std::string rating, int watched);
};