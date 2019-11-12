#include <iostream>
#include <algorithm>
#include <string>
#include "Song.h"
#include <cctype>


using namespace std;

//write function to convert genre entry from text to "Genre":
Genre convertStringToGenre (std::string genre)
{
	Genre return_value;

	std::transform(genre.begin(), genre.end(), genre.begin(),
		[](unsigned char c) { return std::tolower(c); });

	//convert here
	if (genre == "Blues")
	{
		return_value = Blues;
	}
	else if (genre == "Rock") {
		return_value = Rock;
	}
	else if (genre == "Metal") {
		return_value = Metal;
	}
	else if (genre == "Hip_Hop") {
		return_value = Hip_Hop;
	}
	else if (genre == "Jazz") {
		return_value = Jazz;
	}
	else if (genre == "Contemporary") {
		return_value = Contemporary;
	}
	else if (genre == "Instrumental") {
		return_value = Instrumental;
	}
	return return_value;
}

std::string convertGenreToString(Genre genre)
{
	std::string return_value;

	switch (genre) {
	case Blues:
		return_value = "Blues";
		break;
	case Rock:
		return_value = "Rock";
		break;
	}
	return return_value;

}

main()
{
	char Song_Name;
	char genre;
	char Artist;
	int Year;


	cout<< "Enter a song: ";
	cin >> Song_Name;

	cout << "Enter the genre of the song: ";
	cin >> genre;

	cout << "Enter the artist for the song: ";
	cin >> Artist;

	cout << "Enter the year of the song: ";
	cin >> Year;

}



