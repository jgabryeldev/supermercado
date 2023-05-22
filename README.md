# supermercado
Cadastrar 10 usuários(sem repetição dos mesmos) com sexo('f' ou 'm') e total da compra; Criação de menu de funçõe.
Este trabalho consiste em modelar e implementar um gerenciador de
supermercado. Leia atentamente o enunciado do problema, identifique os
elementos do sistema e cumpra as etapas abaixo.

Enunciado do Problema
Um supermercado precisa controlar seus clientes, compras e realizar
algumas consultas. Para isso, você foi contratado para desenvolver a primeira
versão de um software gerenciador desse supermercado.
Etapas

1. Fazer o cadastro de 10 compras
Cada compra é representada pelo nome do cliente, sexo do cliente e
valor total da compra. As informações serão salvas em vetores (cada vetor
pode possuir 10 posições).
● Preencher as informações nome do cliente, sexo do cliente e valor total
da compra
● Impedir o cadastro de 2 compras pelo cliente de mesmo nome e informar
este erro
● Impedir o cadastro de valores negativos e informar este erro
● Impedir o cadastro quando o sexo for inválido (diferente de m ou f) e
informar este erro
● Informar que foi cadastrado com sucesso caso não aconteça nenhum erro
e alocar as informações em vetores

Após o término do cadastro de 10 compras, o programa irá para o menu
principal.

2. Criar o menu principal
Você deve fazer um menu pedindo para o usuário escolher:
● Ver informação de compras de um cliente específico
● Ver informações de todos os produtos cadastrados
● Encerrar o programa

3. Pesquisar informações de um cliente
Você deve:

● Pedir o nome do cliente
● Informar todas as compras deste cliente, ou seja, o valor de cada compra
e o sexo deste cliente
● Caso não encontre o cliente deve-se informar que não há compras
naquele nome
Após exibir a informação das compras ou a informação que não
encontrou, perguntar se o usuário deseja retornar ao menu principal. Caso
queira, apresente o menu, senão encerre o programa.

4. Ver informações de todas as compras
Você deve:
● Pedir um valor que será usado para exibir a quantidade de compras
abaixo deste valor
● Exibir a quantidade de compras acima do valor informado no item anterior
● Exibir a quantidade de compradoras mulheres
● Exibir o valor total comprado pelos homens
● Exibir o valor total das compras
● Exibir o valor médio de compras
● Exibir o valor da compra mais barata
Perguntar se o usuário deseja retornar ao menu principal. Caso queira,
apresente o menu, senão encerre o programa.
