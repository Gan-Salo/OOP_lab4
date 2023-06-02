#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "ImageData.h"
#include "ImageDataFactory.h"

using namespace std;
//Класс 'Терминал', использующий изображения
class Terminal {
public:
    Terminal(string name);
    void addImage(string image, std::string extension);
    void displayImages();
private:
    string termname;
    vector<ImageData*> images;
};

