#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
//#include <sstream>

int main() {
    std::srand(std::time(nullptr));
    int height;
    int width;
    std::cout << "Please input height and width of the picture!" << std::endl;
    std::cin >> height >> width;
    std::string filePath = "pic.txt";
    std::ofstream picture(filePath);
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            int p = rand()%2;
            picture << p;
        }
        picture << std::endl;
    }

    picture.close();

    return 0;
}
