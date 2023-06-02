#include "ImageDataFactory.h"

ImageData* ImageDataFactory::getImageData(string name, string extension, int width, int height) {
    map<string, ImageData*>::iterator it = getImageDataMap().find(name);
    if (it != getImageDataMap().end()) {
        cout << "Использование уже созданного изображения: " << name << endl;
        return it->second;
    }
    else {
        cout << "Создание нового изображения: " << name << std::endl;
        ImageData* imageData = new ImageData(name, extension, width, height);
        getImageDataMap().insert(make_pair(name, imageData));
        return imageData;
    }
}

map<string, ImageData*>& ImageDataFactory::getImageDataMap() {
    static std::map<std::string, ImageData*> imageDataMap;
    return imageDataMap;
}

ImageDataFactory::~ImageDataFactory() {
    for (auto& pair : getImageDataMap()) {
        delete pair.second;
    }
    getImageDataMap().clear();
}