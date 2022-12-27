Lista 1 - Programação Estruturada - 2022/2

Prof. Diego Rodrigues

1) Cifra de César:

Elabore um programa que utilize a "Cifra de César" onde o usuário informará a rotação entre 1 e 5
(le_valida_rotacao) e um texto de até 20 caracteres que será "criptografado", como ponto de partida dê uma
verificada na definição disponível na wikipedia https://pt.wikipedia.org/wiki/Cifra_de_C%C3%A9sar .
Por exemplo se for informado "Diego Rodrigues" e rotação 3 o resultado será "Glhjr Urguljxhv", utilizem o link
https://pt.planetcalc.com/1434/ para realizarem alguns testes e entenderem um pouco mais da lógica utilizada,
lembrando que deverão alterarem o idioma para Inglês para que seja desconsiderados caracteres especiais,
tabela ASCII poderá ajuda-los.

2) Entrada e saída de dados

Elabore um programa que receba os seguintes dados do formulário abaixo (atualmente preenchido em papel) e
apresente na tela ao final, aproximando-se ao máximo do "layout" original, desconsidere as máscaras de valores
como os pontos no CPF por exemplo. Crie uma função le_valida_ano para validar o ano do veículo entre
1903 e 2023 (https://revistacarro.com.br/dia-do-automovel-10-curiosidades-sobre-automoveis-no-brasil/ )

![image](https://user-images.githubusercontent.com/102255059/209663100-71abef4f-f4f2-4df7-9640-1158214a3563.png)

3) Elabore um programa que receba o nome completo de um usuário e retorne no
formato de citação científica, do tipo:
Ex 1:
João Alberto Soares Sobrinho
SOBRINHO, J. A. S.;
Ex 2:
Lee Yan
YAN, L.;
Considere uma String como um "vetor" de caracteres.

4) Desenvolva uma calculadora que receba n1, op, n2 (exatamente nessa ordem),
deverão serem consideradas +, -, *, / . Utilize uma função para realização de cada
operação aritmética (considere divisão por zero), uma função le_valida_operador e uma
função menu onde usuário utilizará a calculadora até informar que deseja sair.
