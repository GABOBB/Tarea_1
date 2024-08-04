#include <iostream>

int main(int argc, char *argv[]) {
    if(argc != 7) {
        std::cerr <<"comandods invalido" << std::endl;
        return 1;
    }

    std::cout <<"se detectan bien los comandos"<< std::endl;
    std::string IN_FILE;
    std::string OT_FILE;
    std::string alg;

    for(int i = 1; i<argc; ++i) {
        std::string temp = argv[i];
        if(temp == "-input") {
            IN_FILE = argv[++i];

        }else if(temp == "-output") {
            OT_FILE = argv[++i];

        }else if(temp == "-alg") {
            alg = argv[++i];

        }else {
            std::cerr << "commando no reconocido" <<std::endl;
            return 1;
        }
    }

}
