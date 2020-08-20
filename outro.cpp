#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

    setlocale (LC_ALL, "Portuguese");

    char message[50] = "";
    char password[50] = "";

    printf("Digite sua mensagem: \n");
    scanf("%50[ˆ\n]%*c");

    printf("Digite sua senha: \n");
    scanf("%50[ˆ\n]%*c");

    int messageLength = strlen(message);  // pegando o tamanho da mensagem

    int randon(messageLength + 1);
    int encrypted(messageLength + 1);
    int decrypted(messageLength + 1);

    for(int x = 0; x < messageLength; x++){
        srand(password[x % strlen (password)])   
        }
        random[x] = rand();






    return 0;
}