#include <stdio.h>

int main(){
    float nota1, nota2, media;
    int resposta;
    
    do{
        printf("\nDigite a primeira nota: ");
        scanf("%f",&nota1);
        printf("\nDigite a primeira nota: ");
        scanf("%f",&nota2);
        
        media = (nota1 + nota2)/2;
        printf("\nA média do aluno é %.2f pontos.", media);
        
        if(media >= 6.00 && media <= 10){
            printf("\nAluno Aprovado.");
        }
        else if(media>= 0.00 && media<6.00){
            printf("\nAluno Reprovado.");
        }
        else{
            printf("Dados fonrnecidos incorretos.");
        }
        
        printf("\nDigite 1 para calcular outra média ou 2 para sair do programa:");
        scanf("%d", &resposta);
    }while(resposta == 1);
    

    return 0;
}