/*
            * * * * * * *
            * QUESTÃO 1 *
            * * * * * * *
*/

#include <stdio.h>

int main() {
 char senha[20];
 int tam = 0;
 int excla_inte = 0;
 int vazio = 0;

 printf("Digite a senha: ");
 scanf("%s", senha);
 while (senha[tam] != '\0'){
 tam++;
 }
 if (tam < 6){
    printf("Senha invalida. Deve ter no minimo 6 caracteres\n");}
    for (int i = 0; i < tam; i++) {
        if (senha[i] == '!' || senha[i] == '?') {
        excla_inte = 1;
        break;}
 }

 for (int i = 0; i < tam; i++){
    if (senha[i] == ' ') {
    vazio = 1;
    break;}
 }
if (excla_inte && !vazio){
 printf("Senha valida.\n");}
else{
 printf("Senha nao valida. A senha precisa de pelo menos um caractere de ! ou ?, e nao pode possuir espacos vazios.\n");
 }
}