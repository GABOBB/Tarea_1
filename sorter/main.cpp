#include <iostream>

void sorting(std::string alg, std::string in, std::string out) {

}

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
        if(temp == "-input"){
            if(i + 1 < argc) {
                IN_FILE = argv[++i];
            } else {
                std::cerr << "Fatal: debe seleccionar un archivo para odenar" << std::endl;
                return 1;
            }
        }else if(temp == "-output"){
            if(i + 1 < argc) {
                OT_FILE = argv[++i];
            } else {
                std::cerr << "Fatal: debe seleccionarse un direccion para el archivo fianl" << std::endl;
                return 1;
            }
        }else if(temp == "-alg"){
            if(i + 1 < argc) {
                alg = argv[++i];
            }else {
                std::cerr <<"Fatal: debe seleccionar un algoritmo" << std::endl;
                return 1;
            }
        }else {
            std::cerr << "commando no reconocido" <<std::endl;
            return 1;
        }
    }
    if(IN_FILE != "" or OT_FILE != "" or alg != "") {
        std::cerr << "Fatal: error con argumento(s)" << std::endl;
        return 1;
    }

}
