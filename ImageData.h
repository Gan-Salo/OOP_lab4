#pragma once
#include <iostream>

using namespace std;

// ����� Flyweight, ���������� ������ �� �����������
class ImageData {
public:
    ImageData(string imgname, string imgextension, int imgwidth, int imgheight);
    string getName();
    string getExtension();
    int getWidth();
    int getHeight();
private:
    string name;
    string extension;
    int width;
    int height;
};
