#include <stdio.h>

void criptografa(char palavra[30]){
    char aux[30];
    int chave=1, i;
    printf("Criptografando '%s'\n\n",palavra);
    while(chave < 26)
    {
        i = 0;
        while(palavra[i] != '\0')
        {
            aux[i] = palavra[i];
            if(palavra[i] == ' '){
                i++;
                continue;
            } 
            
            if( aux[i] + chave  > 122)
            {
                aux[i] = 96 + ( (aux[i] + chave) -122);
            }else{
                aux[i] += chave;
            }
            i++;
        }
        aux[i] = '\0';
        printf("chave %d: %s \n", chave, aux);
        chave++;
    }
}
void desCriptografa(char palavra[30]){
    char aux[30];
    int chave=1, i;
    
     printf("\nDesriptografando '%s'\n\n",palavra);
    
    while(chave < 26)
    {
        i = 0;
        while(palavra[i] != '\0')
        {
             aux[i] = palavra[i];
             if(palavra[i] == ' ') {
                i++;
                continue;
            }
            aux[i] -= chave;
           
            if(aux[i] < 97)
            {
                aux[i] = 122 - (96- aux[i]);
            }
            i++;
        }
        aux[i] = '\0';
        printf("chave %d: %s \n", chave, aux);
 
        chave++;
    }
}
int main()
{
    //char criptografada[30] = {"lbrydxpbjorj kbjkj"};
    //char descriptografada[30] = {"criptografia braba"};
    char criptografada[30];
    char desCriptografada[30];
    
    scanf("%[^\n]",desCriptografada);
    getchar();
    scanf("%[^\n]",criptografada);
   
    
   criptografa(desCriptografada);
   
   printf("\n###############################\n");
   
   desCriptografa(criptografada);
    return 0;
}
