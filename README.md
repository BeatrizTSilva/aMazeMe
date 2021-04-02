### Command Line
```bash
$aed$./amazeme <nome>.maps
```

## Tests

Para verificarem se o vosso programa produz a solução correcta para cada ficheiro de extensão 1maps, deverão produzir a diferença entre o vosso ficheiro de extensão query e o nosso (naturalmente, necessitarão alterar o nome dos nossos ficheiros de extensão query para que os não percam quando executarem o vosso programa; em alternativa podem guardá-los numa directoria à parte). O comando no modo linha é:

diff <file1> <file2>

Se <file2> estiver noutra directoria (por exemplo, em profs enquanto sub-directoria daquela em que estão a trabalhar) o comando será:

diff <file1> <./profs/file2>

Se os ficheiros forem iguais este comando não produz qualquer output.

Caso produza output será boa ideia enviarem esse output para um ficheiro para que o possam inspeccionar:

diff <file1> <file2> > <diff_file>

em <diff_file> ficará o output produzido pelo comando diff.

## Test Files
Simples01.zip - só variante 1, baixa dimensão e caminhos curtos
Simples02.zip - só variante 2, baixa dimensão e caminhos curtos
Simples03.zip - só variante 1, baixa dimensão
Simples04.zip - só variante 2, baixa dimensão
Simples05.zip - todos os tipos de problemas mal definidos e afins...
Intermedios01.zip - só variante 1, e tempos na faixa do segundo (excepto o último que será a soma dos primeiros)
Intermedios02.zip - só variante 2, e tempos na faixa dos 10 segundos
Extremos01.zip - só variante 2 para esticar a corda temporal (o maior resolve-se em pouco mais que 5 minutos)
mais em breve...

Se os alunos pretenderem gerar testes diferentes dos que estão publicados nesta página, poderão:

    1. Construí-los a partir de composições dos que estão na página. Por exemplo, juntando dois ficheiros de extensão ".maps" num só.
       Se fizerem isto, terão de juntar os respectivos ficheiros de extensão ".check", pela mesma ordem;
    2. Construí-los por extracção de um só problema de algum ficheiro de extensão ".maps".
       Se fizerem isto terão de criar um ficheiro de extensão ".check" copiando para ele a solução do problema extraído;
    3. Sugerir ao corpo docente algumas características que desejem testar, para que se produza o teste e soluções;
    4. Em última opção, construí-los de raíz e pedir ao corpo docente o envio e/ou publicação das soluções.


## Some Rules
As flags de compilação a usar na M(m)akefile submetida deverão ser apenas as seguintes: -Wall -ansi -O3;
