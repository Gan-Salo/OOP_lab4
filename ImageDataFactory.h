#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "ImageData.h"

using namespace std;

//Класс, реализующий фабрику легковесов
class ImageDataFactory {
public:
    static ImageData* getImageData(string name, string extension, int width, int height);
    ~ImageDataFactory();
    static void destroyImageDataMap();
private:
    static map<string, ImageData*>& getImageDataMap();
};
