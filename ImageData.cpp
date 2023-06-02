#include "ImageData.h"

ImageData::ImageData(string imgname, string imgextension, int imgwidth, int imgheight) {
    name = imgname;
    extension = imgextension;
    width = imgwidth;
    height = imgheight;
}

string ImageData::getName() { 
    return name; 
}
string ImageData::getExtension() { 
    return extension; 
}
int ImageData::getWidth() { 
    return width; 
}
int ImageData::getHeight() { 
    return height; 
}