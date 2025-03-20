#include <stdio.h>

int main(){

    
         //Estado: Uma letra de 'A' a 'H'(representando um dos dois oito estados).Tipo char//

        //Código da Carta: A letra do estado seguida de um número de 01 e 04. Tipo char[]//

        //Nome da Cidade: O nome da cidade. Tipo: char[] (string)//

        //População: O número de habitantes da cidade. Tipo: int//

        //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float//

        //PIB: O Produto Interno Bruto da cidade. Tipo: float//

        //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int//

        //Densidade Populacional: Divida a população da cidade pela sua área. Armazene esse valor em uma variável do tipo float.
         
        // Calcular o PIB per Capita: Divida o PIB da cidade pela sua população.  Armazene esse valor em uma variável do tipo float.


            int carta1;
            char inicial = 'B';
            char codigo[] = "B01";
            char Cidade[] = "Bahia";
            int habitantes = 14850513;
            float areaTotal = 567295;
            float PIB = 1159;
            int ponto_Turisticos = 9;
            float DensidadePopulacional = habitantes / areaTotal; // O resultado é em número de habitantes por quilômetro quadrado.(Hab/km²)
            float PIB_per_Capita = habitantes / PIB; //O resultado será a riqueza média por pessoa na cidade.(Reais)
    
        
        printf(" Carta 1 \n");
        
        printf("Estado: %c\n", inicial);

        printf("Código: %s\n", codigo);

        printf("Nome da cidade: %s\n", Cidade);

        printf("População: %d Habitantes\n", habitantes);

        printf("Área: %.2f km²\n", areaTotal);

        printf("PIB: %.2f Bilhões de reias\n", PIB);

        printf("Número de ponto turísticos: %d\n", ponto_Turisticos);
        
        printf("Densidade Populacional: %.2f Hab/km²\n", DensidadePopulacional);

        printf("PIB PER CAPITA: %.2f Reais\n", PIB_per_Capita);



        //Segunda CARTA

            int carta2;
            char estado = 'M';
            char Codigo[] = "M01";
            char cidade[] = "Maranhão";
            int Habitantes = 331983;
            float AreaTotal = 3319.83; //KM²
            float Pib = 139789.00 ; //Reais
            int Ponto_Turisticos = 15;
            float Densidade_Populacional = Habitantes / AreaTotal;
            float PIBperCapita = Habitantes / Pib;

            
            
        printf("\n Carta 2 \n");
        
        printf("Estado: %c\n", estado);

        printf("Código: %s\n", Codigo);

        printf("Nome da cidade: %s\n", Cidade);

        printf("População: %d Habitantes\n", Habitantes);

        printf("Área: %2.f km²\n", AreaTotal);

        printf("PIB: %.2f Bilhões de reias\n", Pib);

        printf("Número de ponto turísticos: %d\n", Ponto_Turisticos);

        printf("Densidade Populacional: %.2f Hab/km²\n", Densidade_Populacional);
        
        printf("PIB PER CAPITA: %f Reais\n", PIBperCapita);





    
    


//Estado: Uma letra de 'A' a 'H'(representando um dos dois oito estados).Tipo char//
//Código da Carta: A letra do estado seguida de um número de 01 e 04. Tipo char[]//
//Nome da Cidade: O nome da cidade. Tipo: char[] (string)//
//População: O número de habitantes da cidade. Tipo: int//
//Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float//
//PIB: O Produto Interno Bruto da cidade. Tipo: float//
//Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int//

/*Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

Densidade Populacional: 8102.47 hab/km²

PIB per Capita: 56724.32 reais

 

Carta 2:

Estado: B

Código: B02

Nome da Cidade: Rio de Janeiro

População: 6748000

Área: 1200.25 km²

PIB: 300.50 bilhões de reais

Número de Pontos Turísticos: 30

Densidade Populacional: 5622.24 hab/km²

PIB per Capita: 44532.91 reais
*/  
 

    return 0;
}

 








