Os algoritmos implementados foram:

- Bubble Sort
- Selection Sort
- Insertion Sort
- Quick Sort
- Merge Sort
- Shell Sort

Cada algoritmo foi implementado em um arquivo separado e organizado por funções.

---

Estrutura do Projeto

- main.c - Menu principal e testes
- sorting.h - Protótipos das funções
- bubble_sort.c
- selection_sort.c
- insertion_sort.c
- quick_sort.c
- merge_sort.c
- shell_sort.c

Funcionamento

O programa gera um array de números aleatórios e permite que o usuário escolha qual algoritmo deseja executar através de um menu interativo.

Após a execução, o tempo de processamento é exibido utilizando a função `clock()` da biblioteca `<time.h>`.

Testes Realizados

Os algoritmos foram testados com arrays de diferentes tamanhos para comparação de desempenho.

Resultados observados:

- Bubble, Selection e Insertion apresentaram maior tempo de execução para arrays grandes.
- Quick Sort e Merge Sort tiveram melhor desempenho.
- Shell Sort apresentou desempenho intermediário.

Conclusão

- Os testes demonstram a diferença de complexidade entre algoritmos O(n²) e O(n log n), evidenciando a importância da escolha adequada do método de ordenação dependendo do tamanho do conjunto de dados.
