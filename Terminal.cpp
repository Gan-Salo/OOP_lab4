#include "Terminal.h"

Terminal::Terminal(string name) {
    termname = name;
}

void Terminal::addImage(string image, std::string extension) {
    ImageData* imageData = ImageDataFactory::getImageData(image, extension, 100, 100);
    images.push_back(imageData);
}

void Terminal::displayImages() {
    cout << "��������: '" << termname << "'" << endl;
    for (ImageData* imageData : images) {
        cout << "������������� �����������: '" << imageData->getName() << "." << imageData->getExtension() << "', ����������: " << imageData->getWidth() << "x" << imageData->getHeight() << std::endl;
    }
}

