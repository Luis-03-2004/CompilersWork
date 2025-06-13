# Projeto Final da Disciplina de Compiladores

## Informações Gerais

- **Projeto**: Finalizar a implementação do SIMPLES
- **Composição do Grupo**: 2 alunos
- **Prazo Final**: 04/07/2025
#DESCRI
## Implementações a serem realizadas

1. **Implementar o comando `escreva`**
    - Exemplo: `escreva "Olá, Mundo!";`
    - Deve gerar o código: `printf("Olá, Mundo!");`
2. **Implementar o comando `escreval`**
    - Exemplo: `escreval "Olá, Mundo!";`
    - Deve gerar o código: `printf("Olá, Mundo!\n");`
3. **Implementar expressões com `escreval`**
    - Exemplo: `escreval a + b;`
    - Deve gerar o código: `printf("%d\n", a + b);`
    - Considerando que `a` e `b` são inteiros.
4. **Implementar vetores na linguagem SIMPLES**
    - Material de referência: [Vídeo sobre implementação de vetores](https://www.youtubeeducation.com/watch?v=5cO79xFJMiQ)
5. **Implementar o 'for' completo**
    - Material de referência: [Vídeo sobre implementação do for](https://www.youtubeeducation.com/watch?v=hUpGqHBvGrk)
6. **Implementar o recurso de função**
    - Exemplo:
        
        ```
        procedimento inteiro soma (inteiro a, inteiro b) inicio   ...fim
        
        ```
        
    - Deve gerar o código:
        
        ```c
        int soma (int a, int b) {   ...}
        
        ```
        
    - **Detalhe**: Todos os procedimentos devem estar declarados antes do `main()`.

## Tabela de Pontuação

| Implementação | Valor |
| --- | --- |
| escreva | 1 ponto |
| escreval | 2 pontos |
| vetor | 2 pontos |
| for completo | 1 ponto |
| procedimento | 4 pontos |

## Critérios de Avaliação

- Com exceção do procedimento (4 pontos), que aceitará entregas parciais, as demais implementações devem estar completamente funcionais para avaliação.
- Implementações parciais dos outros itens não serão consideradas para pontuação.
