#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <map>

//definicion del tamanio de los archivos
enum SIZE {SMALL   = 512LL  * 1024 * 1024,
            MEDIUM = 1024LL * 1024 * 1024,
            LARGE  = 2LL    * 1024 * 1024 * 1024};

std::map<std::string, SIZE> sizeMap = {
    {"SMALL", SMALL},
    {"MEDIUM", MEDIUM},
    {"LARGE", LARGE}
};

void rand_generator(const std::string& file, SIZE SZ) {
    std::string Ffile = file + "/rand_nums";

    std::ofstream FILE(Ffile, std::ios::binary);

    if(!FILE) {
        std::cerr <<"hubo un error habriendo el archivo" << std::endl;
        return;
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::vector<int> rand_numbers(SZ);
    for(int I = 0; I < SZ; ++I) {
        rand_numbers[I] = std::rand();
    }


}


int main(int argc, char *argv[]){
    if(argc != 5) {
        std::cerr <<"comandods invalido" << std::endl;
        return 1;
    }

    std::string filepath;//direccion de guardado del archivo binario
    SIZE SZ;// declaracion de variable designada al tamano del archivo

    for (int i = 1; i < argc; ++i){
        std::string temp = argv[i];
        if(temp == "-size"){
            std::string sizeStr = argv[i+1];
            if (sizeMap.find(sizeStr) != sizeMap.end()){
                SZ = sizeMap[sizeStr];
            }else{
                std::cerr << "Invalid size: " << sizeStr << std::endl;
                return 1;
            }
        }else if (temp == "-output"){
            if(i+1<argc) {
                filepath = argv[i+1];
            }
        }
    }
    if(filepath.empty()) {
        std::cerr << "falta la direccion del archivo" <<std::endl;
        return 1;
    }
    rand_generator(filepath, SZ);
    return 0;

}
