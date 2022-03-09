#pragma once
#include <vector>
#include <map>
#include "Image.h"

using namespace std;
class Album {
private:
	vector<Image*> album;
	multimap<string, Image*> recherche;
public:
	void tri();
	vector <Image*> getAlbum();
	void Affiche();
	void addImage(Image& p);
	std::vector<Image> getImages(const std::string& mot) const;
	friend ostream& operator <<(ostream& o, Album a);

	void loadImage(string path);
};

