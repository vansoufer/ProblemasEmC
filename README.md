# ProblemasEmC

Soluções de problemas em C.

1- Flor da Esbornia

Rosa Arco-íris Esborniana
O Principado da Esbórnia, nação mais desenvolvida e discreta do mundo civilizado, tem como simbolo de sua gente a maravilhosa flor Rosa Arco-íris que encontram-se espalhadas por todo país, mas no Jardim Botânico da capital Merculia existe um cultivo extenso da flor símbolo. Mas nos últimos anos o jardim botânico tem sofrido uma série de furtos da flor símbolo - chocante para o esborniano - e pelas investigações do órgão de inteligência esborniano (BOSSAD) trata-se de uma quadrilha internacional que utiliza um traje de invisibilidade. A BOSSAD contratou nosso amigo Joãozinho para ajuda-los, isto porque ele conseguiu convence-los que o minibot voador (de invenção própria) com seus micro-dispositivos e micro-sensores será capaz de capturar com vida os integrantes da quadrilha disparando uma toxina paralisante. O minibot de Joãozinho é capaz de identificar, com um sensor especial, as flores arco-íris destacadas da terra, ou seja, os integrantes da quadrilha em posse das flores (os esbornianos são incapazes de tocar na floar, tal a admiração pelo símbolo nacional) e disparar a toxina paralisante e por conseguinte paralisar os integrantes. Após 15 minutos, com a perda do poder de invisibilidade do traje, a BOSSAD poderá identificar e aprisonar os larápios. Mas Joãozinho tem um problema e precisa de sua ajuda. Para resolver isso, com um grande mapa do Jardim Botânico o minibot é capaz de detectar a posição dos integrantes da quadrilha de larápios. De posse desses dados minibot de Joãozinho precisa identificar o a posição mais centro possível entre os integrantes da quadrilha, e computando o centro e o raio da menor circunferência que cobre todos integrantes marcados no mapa seu minibot, a uma velocidade altissíma, posiciona-se ao centro e dispara a toxina a uma distância com o menor raio possível de forma que alcance todos integrantes da quadrilha e assim paralisa-los. Para ajudar Joãozinho você deve criar uma programa que compute o centro e indique o centro e informe o menor raio de alcance da toxina para atingir todos integrantes. Lembrando que o menor raio deve alcançar o integrante mais distante do integrante posicionado mais próximo do centro. Assim Joãozinho e você agirão por uma causa nobre para o povo esborniano.

Entrada Esse problema é composto por várias exemplos. A primeira linha é composta por um inteiro N, 1<=N<=100, e indica o número de integrantes da quadrilha. As próximas N linhas contêm o posicionamento dos integrantes da quadrilha a partir de suas coordenadas X e Y no plano cartesiano do Jardim Botânico de Merculia. As coordenadas são números reais. Seu programa deve encerrar a execução quando 0 for o valor de N dado na entrada. Saída Para cada instância, imprima uma linha dizendo a coordenada X e a coordenada Y do centro e o raio da circunferência com precisão de duas casas decimais.

Exemplos Entrada 2 0.0 0.0 3.0 0.0 5 0.0 0.0 0.0 1.0 1.0 0.0 1.0 1.0 2.0 2.0 0 

Saída 1.50 0.00 1.50 1.00 1.00 1.41

Dicas: utilizar o calculo de distância euclidiana.


2- Restaurante

RESTAURANTE Nosso amigo Joãozinho adora comida. Por isso, ele assumiu o cargo de gerente do Joselito’s Chef, um restaurante que serve pessoas com deliciosos pratos de comida. É um lugar muito famoso e as pessoas estão sempre na fila para pedir um destes pratos. Cada prato tem um custo associado a ele. Os pratos são mantidos como uma pilha. O trabalho de um gerente é muito difícil. Ele precisa lidar com dois tipos de consultas: 1) Consulta do cliente: Quando um cliente pede um prato, o prato no topo da pilha é fornecido e o cliente é cobrado de acordo com o custo do prato. Isso reduz a altura da pilha em 1. Caso a pilha esteja vazia, o cliente vai embora de mãos vazias. 2) Consulta do Chef: O chef prepara um pacote de comida e o adiciona no topo da pilha. E relata o custo do pacote ao gerente. Ajude-o a gerenciar o processo. ENTRADA A primeira linha contém um número inteiro Q, o número de consultas. As linhas Q seguem. Uma Consulta Tipo 1 (Cliente) é indicada por um único número inteiro 1 na linha. Uma Consulta Tipo 2 (Chef) é indicada por dois inteiros separados por espaço, 2 e C (custo do pacote preparado). SAIDA: Para cada consulta do tipo 1, forneça o preço que o cliente deve pagar, ou seja, o custo do pacote fornecido ao cliente em uma nova linha. Se a pilha estiver vazia, imprima "FOME" (sem as aspas). 

Restrições: 1 ≤ Q ≤ 10^5 1 ≤ C ≤ 10^7

Exemplos Entrada: 6 1 2 5 2 7 2 9 1 1
Saída: FOME 9 7

3- Andando no Tempo

Andando no tempo

	Imagine que você tenha uma máquina do tempo que pode ser usada no máximo três vezes, e a cada uso da máquina você pode escolher voltar para o passado ou ir para o futuro. 
	A máquina possui três créditos fixos; cada crédito representa uma certa quantidade de anos, 
e pode ser usado para ir essa quantidade de anos para o passado ou para o futuro. Você pode fazer uma, 
duas ou três viagens, e cada um desses três créditos pode ser usado uma vez apenas. Por exemplo, 
se os créditos forem 5, 12 e 9, você poderia decidir fazer duas viagens: ir 5 anos para o futuro e, depois, 
voltar 9 anos para o passado. 
Dessa forma, você terminaria quatro anos no passado, em 2012. 
Também poderia fazer três viagens, todas indo para o futuro, usando os créditos em qualquer ordem, terminando em 2042. 
Neste problema, dados os valores dos três créditos da máquina, seu programa deve dizer se é ou 
não possível viajar no tempo e voltar para o presente, fazendo pelo menos uma viagem e, no máximo, 
ıı três viagens; sempre usando cada um dos três créditos no máximo uma vez.
Entrada A entrada consiste de uma linha 
contendo os valores dos três créditos A, B e C (1 <= A, B, C <= 1000). 
Sa da ıı 
Seu programa deve imprimir uma linha contendo o caracter “S” se é poss vel viajar e voltar para ıı o presente, ou “N” caso contrário.


Exemplo de entrada 1 22 5 22
Exemplo de saída 1 ıı S

Exemplo de entrada 2 31 110 79
Exemplo de saída 2

