#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){
  char message[50] = "";
  char password[50] = "";

  printf("Digite uma mensagem: ");
  scanf("%50[^\n]%*c", &message);

  printf("Digite uma senha: " );
  scanf("%50[^\n]%*c", &password);

  int messageLength = strlen(message); 

  char  random[messageLength + 1]; 
  char  encrypted[messageLength + 1]; 
  char  decrypted[messageLength + 1]; 

  
  for(int i=0; i < messageLength; i++){ 
    srand(password[i % strlen(password)]); 
    
    random[i] = rand(); 
  }

  printf("Tamanho da mensagem: %d\n", messageLength);
  
  // Criptografando
  for(int i=0; i < messageLength; i++){ 
    encrypted[i] = message[i] ^ random[i]; 
  }

  printf("Codificada: %s\n", encrypted);

  // Descriptografando  
  for(int i=0; i < messageLength; i++){
    decrypted[i] = encrypted[i] ^ random[i];
  }


  printf("Decodificada: %s\n", decrypted);

  return 0;
}
