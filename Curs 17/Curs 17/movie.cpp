#include <iostream>
#include "movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
	:name(name), rating(rating), watched(watched) {

}

Movie::Movie(const Movies& source)
	:Movie{ source.name, source.rating, source.watched } {

}

Movie::~Movie() {

}

void Movie::display() const {

}