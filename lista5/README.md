# Lista 5

1. Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O programa deve mostrar uma mensagem de permissão de acesso ou não.

2. Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.

3. Faça um programa que leia dois números e mostre qual deles é o maior.

4. Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

5. Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
* For maior que 20% do salário, imprima: "Empréstimo não concedido."
* Caso contrário, imprima: "Empréstimo concedido."

6. Faça um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso ideal, utilizando as seguintes fórmulas (em que "h" corresponde à altura).
* Homens: (72.7 * h) - 58
* Mulheres: (62.1 * h) - 44.7

7. Faça um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

| Categoria | Idade |
| --- | --- |
| Infantil | 5 a 7 |
| Juvenil | 8 a 10 |
| Adolescente | 11 a 15 |
| Adulto | 16 a 30 |
| Sênior | Acima de 30 |

8. Faça um programa que receba o preço de um produto e o seu código e mostre a sua procedência. A procedência obedece à tabela a seguir.

| Código de Origem | Procedência |
| --- | --- |
| 1 | Sul |
| 2 | Norte |
| 3 | Leste |
| 4 | Oeste |
| 5 ou 6 | Nordeste |
| 7 ou 8 ou 9 | Sudeste |
| 10 a 20 | Centro-oeste |
| 21 a 30 | Nordeste |


9. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 7.

10. Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que está na tabela a seguir:

| Média Aritmética | Mensagem |
| --- | --- |
| 0.0 - 4.0 | Reprovado |
| 4.0 - 7.0 | Exame |
| 7.0 - 10.0 | Aprovado |

11. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500.00. Faça um programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso o funcionário não tenha direito ao aumento.

12. Faça um programa para calcular e mostrar o salário reajustado de um funcionário. Sabe-se que o percentual de aumento é o mesmo da tabela a seguir.

| Salário | Percentual de Aumento |
| --- | --- |
| Até R$ 300,00 | 35% |
| Acima de R$ 300,00 | 15% |

13. Usando o comando **switch**, escreva um programa que leia um número inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim por diante.

14. Usando o comando **switch**, faça um programa que receba dois números e execute as operações listadas a seguir de acordo com a escolha do usuário. Se for digitada uma opção inválida mostrar mensagem de erro e terminar a execução do programa. As opções são:
* 1 - Média entre os dois números.
* 2 - Diferença do maior pelo menor.
* 3 - O produto entre os dois números.

15. Escreva um programa em linguagem C que leia um peso na Terra e o número de um planeta e imprima o valor correspodente do peso neste planeta. A relação de planetas é dada a seguir juntamente com o valor das gravidades relativas à Terra. **Use o switch**

| Código | Gravidade Relativa | Planeta |
| --- | --- | --- |
| 1 | 0,37 | Mercúrio |
| 2 | 0,88 | Vênus |
| 3 | 0,38 | Marte |
| 4 | 2,64 | Júpiter |
| 5 | 1,15 | Saturno |
| 6 | 1,17 | Urano |

Para calcular o peso no planeta use a fórmula: PP = (PT/10)xG, Em que: PP = Peso no planeta, PT = Peso na Terra e G = Gravidade.