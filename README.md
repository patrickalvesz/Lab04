# GRUPO 04N12

Patrick Alves Gonçalves - 42214440 - 10409363

Nicholas dos Santos Leal - 42210771 - 10409210

Gustavo Ibara - 42210720 - 10389067

# Perguntas

1) No código, criamos três instâncias do objeto célula (ou seja, três valores na lista) usando um loop for e a função malloc. Cada nova célula é adicionada ao início da lista.

2) Construímos uma função chamada imprime que percorre a lista encadeada e imprime o valor de cada célula. Ela faz isso de forma recursiva, chamando a si mesma para o próximo elemento da lista até que não haja mais elementos (ou seja, até que o ponteiro para o próximo elemento seja NULL).

3) A quantidade de memória gasta por cada instância da célula é calculada usando a função sizeof da linguagem C, que retorna o tamanho em bytes do tipo ou objeto que você passa para ela. No nosso caso, passamos o tipo celula, então sizeof(celula) retorna o tamanho de uma célula em bytes.

4) Construímos uma função chamada remove_elemento que remove os elementos da lista. Ela faz isso de forma recursiva, chamando a si mesma para o próximo elemento da lista após liberar a memória do elemento atual.

5) Na função remove_elemento, usamos a função free da biblioteca padrão do C para liberar a memória alocada para cada célula quando ela é removida da lista.

6) Vamos supor que temos um computador com 1GB (Gigabyte) de memória RAM disponível.

A estrutura celula tem um int e um ponteiro *prox. O int ocupa 4 bytes e um ponteiro ocupa 8 bytes. Portanto, o tamanho total de uma celula seria de 16 bytes.

Sabemos que: 1 GB = 1,073,741,824 bytes.

Agora, podemos calcular o número máximo de células que podem ser alocadas dividindo a memória total disponível pelo tamanho de uma célula:

Número máximo de células = Memória total disponível / Tamanho de uma célula = 1,073,741,824 bytes / 16 bytes = 67,108,864 células

Portanto, teoricamente, poderíamos alocar cerca de 67 milhões de células na memória

# Print de Execução

![image](https://github.com/patrickalvesz/Lab04/assets/127363163/e548e537-3063-4b20-9652-2cf7485e92a0)

