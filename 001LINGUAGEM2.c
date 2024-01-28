int main(){
    int tam = 0;
    char senha[20];
    int inte_excla = 0;
    int vazio = 0;
    do{
        scanf("%s\n",senha);
        while(senha[tam]!=0){
            tam++;
        }
        for (int i = 0;i<tam; i++){
            if (senha[i] == '!' || senha[i] == '?'){
                inte_excla = 1;
                break;
            }
        }
        for (int j = 0;j<tam; j++){
            if (senha[j] == ' '){
                vazio = 1;
                break;
            }
        }
        if (inte_excla == 0 && vazio == 0){
            printf("senha invalida\n");
            printf("tente novamente\n");
        }
    }while(tam < 6);
    printf("senha valida\n");
}
