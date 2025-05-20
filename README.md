# Cartas Super Trunfo ( Faculdade )

Este projeto foi feito em linguagem C como atividade da faculdade. A ideia é simular o cadastro de cartas do jogo Super Trunfo usando informações de cidades.

# O que o programa faz

- Pede para o usuário digitar:
  - Estado (ex: SP)
  - Código da cidade
  - Nome da cidade
  - População
  - PIB (em milhões)
  - Área (em km²)
  - Quantidade de pontos turísticos

- Calcula automaticamente:
  - Densidade populacional
  - PIB por pessoa (per capita)

- Mostra todos os dados organizados na tela

## Como rodar o programa no Windows

Você precisa ter o **GCC** instalado!!

Depois, siga os passos:

1. Abra o terminal (PowerShell ou CMD)
2. Vá até a pasta onde está o arquivo `.c`. Por exemplo:

cd C:\Users\SeuNome\Desktop\Estudo

3. Digite este comando para compilar o código:

gcc cartas_super_trunfo.c -o cartas

4. Depois, execute o programa com:

.\cartas

Pronto! O programa vai rodar no terminal e pedir os dados.

### Exemplo de uso

```
=== Cadastro da Carta ===
Estado (sigla): SP
Codigo da cidade: 10
Nome da cidade: São Paulo
Populacao: 12300000
PIB (em milhoes): 230000
Area (em km^2): 1521
Numero de pontos turisticos: 20

=== Carta da Cidade ===
Estado: SP
Codigo: 10
Cidade: São Paulo
Populacao: 12300000
PIB: R$ 230000.00 milhoes
Area: 1521.00 km^2
Pontos Turisticos: 20
Densidade Populacional: 8085.46 hab/km^2
PIB per capita: R$ 18699.19
```

---

Esse projeto é simples e ajuda a treinar variáveis, entrada de dados, operações e organização de saída no terminal.
