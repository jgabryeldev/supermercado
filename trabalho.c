#include <stdio.h>
#include <string.h>

int main(void) {
  const int compra = 10;
  char nomes[10][30];
  char sexo[10];
  float valor_total[10];
  char clienteVerifica[30];
  int pos = 0;
  int retorna = 0;
  int retorna_2=0;
  float valor_ref = 0;
  int menores = 0;
  int maiores = 0;
  int mulheres = 0;
  float soma_homens = 0;
  float soma_valor_total = 0;
  float media = 0;
  float menor = 0;

  for (int i = 0; i < compra; i++) {
    printf("\nInforme o nome:");
    scanf("%s", nomes[i]);
    for (int j = 0; j < compra; j++)
    {
      printf("%d", j);
      while (strcmp(nomes[i], nomes[j]) == 0 && i != j)
      {
        
        printf("\nErro: nome ja cadastrado.");
        printf("\nInforme outro nome:");
        scanf("%s", nomes[i]);
        j=0;
      }
    }
    printf("\nInforme o sexo:");
    scanf(" %c", &sexo[i]);

    while (sexo[i] != 'f' && sexo[i] != 'm') {
      printf("\nErro: sexo invalido.");
      printf("\nInforme um sexo valido:");
      scanf(" %c", &sexo[i]);
    }
    printf("\nInforme o valor total da compra:");
    scanf("%f", &valor_total[i]);

    while (valor_total[i] < 0) {
      printf("\nErro: valor negativo.");
      printf("\nInforme um valor valido:");
      scanf("%f", &valor_total[i]);
    }
    printf("\n--------Cadastro realizado com sucesso--------\n");
  }
  // etapa 2 -- menu
  int opc = 0;
  while (opc != 3) 
  {
    printf("\n\n--------MENU PRINCIPAL-----------");
    printf("\n1.Verificar compras de um cliente");
    printf("\n2.Todas as compras Cadastradas");
    printf("\n3.Encerrar programa");
    printf("\nOpcao: ");
    scanf("%d", &opc);
    // etapa 3 -- informações de um cliente específico
    switch (opc) 
    {
      case 1:
        printf("\nDigite o nome do cliente: ");
        scanf("%s", clienteVerifica);
        for (int i = 0; i < compra; i++) 
        {
          if (strcmp(clienteVerifica, nomes[i]) == 0) {
            pos = i;
            break;
          } else if (strcmp(clienteVerifica, nomes[i]) != 0) {
            pos = -1;
          }
        }
        if (pos != -1) 
        {
          printf("\nCompras do Cliente: %s", clienteVerifica);
          printf("\nSexo: %c", sexo[pos]);
          printf("\nTotal Compra: %2.f", valor_total[pos]);
        } else if (pos == -1) {
          printf("\nCliente nao localizado!");
        }
        // retorno ao menu principal
        retorna=0;
        while(retorna!=1 && retorna!=2) 
        {
          printf("\n\n1.Retornar ao menu principal");
          printf("\n2.Encerrar o programa\n");
          printf("Opcao: ");
          scanf("%d", &retorna);
        }
        switch (retorna) 
        {
          case 1:
            break;
          case 2:
            opc=3;
            break;
          default:
            printf("Opcao Invalida!!");
            break;
        }
        break;
      // etapa 4 -- informações gerais do sistema
      case 2:
        printf("\nInforme um valor referencial: ");
        scanf("%f", &valor_ref);
        for (int i = 0; i < compra; i++) 
        {
          if (valor_ref < valor_total[i]) 
          {
            maiores = maiores + 1;
          } 
            else if (valor_ref > valor_total[i]) 
            {
              menores++;
            }
          if (sexo[i] == 'f')
          {
            mulheres = mulheres + 1;
          } 
            else if (sexo[i] == 'm')
            {
              soma_homens += valor_total[i];
            }

          soma_valor_total += valor_total[i];

          if (menor == 0) 
          {
            menor = valor_total[i];
          } 
            else if (menor > valor_total[i]) 
            {
              menor = valor_total[i];
            }
          if (i == compra - 1) 
          {
            media = soma_valor_total / compra;
            printf("\nQuantidade de compras acima do valor: %i", maiores);
            printf("\nQuantidade de compradora(s) mulher(es): %i", mulheres);
            printf("\nTotal comprado pelos Homens: %2.f", soma_homens);
            printf("\nValor total das compras: %2.f", soma_valor_total);
            printf("\nValor medio das compras: %2.f", media);
            printf("\nValor da compra mais barata: %2.f", menor);
          }
          }
          // retorno ao menu principal
          retorna_2=0;
          while (retorna_2 != 1 && retorna_2 != 2) 
          {
            printf("\n\n1.Retornar ao menu principal");
            printf("\n2.Encerrar o programa\n");
            printf("Opcao: ");
            scanf("%d", &retorna_2);
          }
          switch (retorna_2)
          {
            case 1:
              break;
            case 2:
            opc=3;
              break;
            default:
              printf("Opcao Invalida!!");
              break;
          }
          break;
          // opcao 3 -- finaliza o programa
          case 3:
          opc=3;
          break;
    }
  }
  return 0;
}