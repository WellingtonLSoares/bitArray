# Armazenar valores usando Bitwise em C

## <b>Sobre o código:</b> 
- Esse código foi desenvolvido usando a <b>Linguagem C</b>, na disciplina de <b>Laboratório de Programação</b> orientada pelo professor <b>Marcio Costas Santos</b>.

- <b>Problema apresentado pelo professor</b>: ao ser executado, o programa lê inteiros que são digitados pelo usuário (inteiros entre 0 e 5000 apenas). Ao usuário digitar -1, o programa deve imprimir todos os números digitados em ordem (crescente ou decrescente, a escolha dos alunos) e sem as repetições.

- O problema apresentado tinha um desafio de <b>armazenar números entre 0 e 5000 usando um vetor de 200 posições</b> e <b>a solução para o problema foi usar operadores bit a bit (Bitwise)</b> que permite "armazenar" até 32 valores (0 até 31) em cada posição do vetor, que é a quantidade de bits que cada posição do vetor do tipo inteiro possui.

- <b>Conhecimentos usados: Lógica de Programação, [Operadores Bitwise](https://www.programiz.com/c-programming/bitwise-operators)</b>.

## <b>Como baixar o código na sua máquina:</b>
- Para baixar o  código diretamente <b>[CLIQUE AQUI](https://github.com/WellingtonLSoares/bitArray/archive/refs/heads/main.zip)</b>.

- Ou baixe o programa usando o comando <b>git clone</b>, porém é preciso ter o git instalado na sua máquina:
```
git clone https://github.com/WellingtonLSoares/bitArray
```

## <b>Como compilar o código:</b>
- Neste exemplo usaremos o <b>GCC</b> para compilar o código então se você não tiver o <b>GCC</b> instalado na sua máquina a compilação não poderá ser feita.

- No mesmo diretório do arquivo baixado execute o seguinte comando no terminal:
```
gcc main.c -o nome-do-programa
```

## <b>Como executar o código:</b>
- Se tudo ocorreu bem no passo anterior foi gerado um arquivo na pasta do projeto com o nome <b>nome-do-programa</b>.

- Para executar o arquivo escreva o seguinte comando no terminal:
```
./nome-do-programa
```

## <b>Exemplo de compilação e execução do código:</b>
```
wellington@wellignton-13:~/C/LaboratorioDeProgramacao/TR3$ gcc main.c -o main
wellington@wellignton-13:~/C/LaboratorioDeProgramacao/TR3$ ./main
Digite um numero entre 0 e 5000: 0
Digite um numero entre 0 e 5000: 1
Digite um numero entre 0 e 5000: 10
Digite um numero entre 0 e 5000: 32
Digite um numero entre 0 e 5000: 31
Digite um numero entre 0 e 5000: 64
Digite um numero entre 0 e 5000: 72
Digite um numero entre 0 e 5000: 1000
Digite um numero entre 0 e 5000: 5000
Digite um numero entre 0 e 5000: 5001
Digite um numero entre 0 e 5000: 456
Digite um numero entre 0 e 5000: 853
Digite um numero entre 0 e 5000: 865 
Digite um numero entre 0 e 5000: 4913
Digite um numero entre 0 e 5000: -1

Valores digitados: 0
Valores digitados: 1
Valores digitados: 10
Valores digitados: 31
Valores digitados: 32
Valores digitados: 64
Valores digitados: 72
Valores digitados: 456
Valores digitados: 853
Valores digitados: 865
Valores digitados: 1000
Valores digitados: 4913
Valores digitados: 5000
```

### <b>Aproveite o código</b>✌️	