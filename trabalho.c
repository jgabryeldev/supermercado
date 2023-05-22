#include <stdio.h>
#include <string.h>

int main(void) {
  const int compra = 3;
  char nome[10][10] = {0};
  char sexo[10] = {0};
  float valor_total[10] = {0};
  int comparacao = 0;

  for (int i = 0; i < compra; i++) {
    printf("\nInforme o nome:");
    scanf("%s", &nome[i]);
    for (int j = 0; j < compra; j++) {
      comparacao = strcmp(nome[i], nome[j]);
      while (comparacao == 0 && i != j) {
        printf("\nErro: nome ja cadastrado.");
        printf("\nInforme outro nome:");
        scanf("%s", &nome[i]);
        comparacao = strcmp(nome[i], nome[j]);
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
    printf("\nCadastro realizado com sucesso.\n");
  }
  // etapa 2
  int opc = 0;
  while (opc != 3) 
  {
    printf("\n\n--------MENU PRINCIPAL-----------");
    printf("\n1.Verificar compras de um cliente");
    printf("\n2.Todas as compras Cadastradas");
    printf("\n3.Encerrar programa");
    printf("\nOpcao: ");
      scanf("%d", &opc);
    // etapa 3
    char clienteVerifica[1][10];
    int pos = 0;
    int retorna = 0;
    switch (opc) 
    {
      case 1:
        printf("\nDigite o nome do cliente: ");
          scanf("%s", &clienteVerifica);
        for (int i = 0; i < compra; i++) 
        {
          comparacao = strcmp(clienteVerifica, nome[i]);
          if (comparacao == 0) 
          {
            pos = i;
            break;
          } 
            else if (comparacao != 0) 
            {
              pos = -1;
            }
        }
        if (pos != -1) 
        {
          printf("\nCompras do Cliente: %s", clienteVerifica);
          printf("\nSexo: %c", sexo[pos]);
          printf("\nTotal Compra: %2.f", valor_total[pos]);
        } 
          else if (pos == -1) 
          {
            printf("\nCliente nao localizado!");
          }
        while (retorna != 1 && retorna != 2) 
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
            return 0;
            break;
          default:
            printf("Opcao Invalida!!");
            break;
        }
    }
  }
  return 0;
}