#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int main (){
    char message[50] = "";
    char password[50] = "";

    printf("Type your message: \n");
    scanf("%50[^\n]%*c", &message);

    printf("Type your password: \n");
    scanf("%50[^\n]%*c", &password);

    int messageLength = strlen (message);          // Pegando o tamanho da mensagem

    char random[messageLength + 1];                // Iniciando o vetor que vai guardar a chave pseudo-randomica
    char encrypted[messageLength + 1];             // Iniciando o vetor que vai guardar a mensagem codificada
    char decrypted[messageLength + 1];             // Iniciando o vetor que vai guardar a mensagem decriptada

    for(int x = 0; x < messageLength; x++) {       // loop de 0 até tamanhoDaMensagem completar o vetor
        srand(password[x % strlen (password)]);    // Passando a semente do numero randomico
        
        random[x] = rand();                        // Gerando uma letra randomica e guardando dentro do vetor radom[x]
    } 

    printf("This message has %d characters \n", messageLength); // Imprmindo o tamanho da mensagem

     // Criptografando
    for (int x = 0; x < messageLength; x++){
        encrypted[x] = message[x] ^ random[x]; //Criptografia = XOR (^) entre mensagem e random C = A ^ B
    }

    printf("Encrypted: %s \n", encrypted);
     
    // Decriptando
    /*for (int x = 0; x < messageLength; x++){
        decrypted[x] = encrypted[x] ^ random[x]; //Mensagem = encriptografada xor random B = A ^ C
    } */

    printf("Decrypted: %s \n", decrypted); 

    return 0;
}