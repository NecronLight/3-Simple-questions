#include <stdio.h>     
#include <cs50.h>            
        
  int main(void)                    
{                    
  string nome = get_string("Qual é o seu nome?\n");        
  printf("Olá, %s\n", nome);  
  
  string idade = get_string("Quantos anos você tem?\n");       
  printf("Só, %s, anos? Você é bem novo\n", idade);
  
  string lugar_favorito = get_string("Qual seu lugar favorito?\n");      
  printf("Nunca fui para %s. Parece ser bem legal\n", lugar_favorito);       
}
