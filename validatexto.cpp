#include "validatexto.h"
#include "Cadastro.h"




Ui::validaTexto::validaTexto()
{

}
bool Cadastro::validaString(QString s)
{

    int upper = 0, lower = 0, number =0, special = 0;
    for (int i=0; i<s.length(); i++){
        if (s[i] >= '0' && s[i] <= '9'){
            number++;
        } else if (s[i] >= 'A' && s[i] <= 'Z'){
            upper++;
        } else if (s[i] >= 'a' && s[i] <= 'z'){
            lower++;
        } else{
            special++;
        }
    }
    if (special > 0){
        return false;
    } else {
        return true;
    }
}
bool Cadastro::validaDouble(QString s)
{
    int upper = 0, lower = 0, number =0, special = 0;
    for (int i=0; i<s.length(); i++){
        if (s[i] >= '0' && s[i] <= '9'){
            number++;
        } else if (s[i] >= 'A' && s[i] <= 'Z'){
            upper++;
        } else if (s[i] >= 'a' && s[i] <= 'z'){
            lower++;
        } else{
            special++;
        }
    }
    if (special > 0 || upper > 0 || lower > 0){
        return false;
    } else {
        return true;
    }

}


