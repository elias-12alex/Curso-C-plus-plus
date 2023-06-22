/* 
    Projeto Prometheus
    Curso de C++ 
    Atividade de Abertura de Arquivo
    @autor Elias Alexander Santos

*/

#include <iostream>
#include <fstream>

using namespace std;
int main(){
    ifstream fp;
    char fnome[13];
    char ch;

    try
    {
        /* code */
        fp.open("exemplo_ffmpeg.txt", ios::in);
        printf("Arquivo Aberto\n");
        
        while((ch = fp.get())!= EOF)
            cout << ch;
        fp.close();

 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //}  
}