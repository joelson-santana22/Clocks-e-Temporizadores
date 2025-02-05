---------------------------------------------------------EMBARCATECH----------------------------------------------------------------

UNIDADE 4 | CAPÍTULO 5 | CLOCKS E TEMPORIZADORES 
____________________________________________________________________________________________________________________________________

## Aluno (matrícula) => Joelson Santana Alves (tic370101150)

A tarefa propôs o uso da função add_repeating_timer_ms(), presente
na ferramenta Pico SDK, para projetar um semáforo com
temporização de 3 segundos para cada alteração de sinal. 

## Funcionalidades Implementadas ao Projeto

1. Acionamento dos LEDs (sinais do semáforo) iniciando na
cor vermelha, alterando para amarela e, em seguida, verde.

2. O temporizador foi ajustado para um atraso de 3 segundos
(3.000ms).

3. Essa mudança de estado dos LEDs foi implementa na função
de call-back do temporizador, por meio da função repeating_timer_callback().

4. A rotina principal, presente no interior da estrutura de
repetição while, imprime a seguinte informação a cada
segundo 1.000 ms:"

"
1 segundo passou
1 segundo passou
1 segundo passou
PARE!  (Vermelho)
1 segundo passou
1 segundo passou
1 segundo passou
ATENÇÃO!  (Amarelo)
1 segundo passou
1 segundo passou
1 segundo passou
SIGA!  (Verde)
1 segundo passou
1 segundo passou
1 segundo passou
..."

5 - Com o uso da placa BitDogLab, foi feito um teste prático com êxito do código desta tarefa utilizando o LED
RGB – GPIOs 11, 12 e 13. Vale destacar que, como o LED amarelo não está presente no LED RGB, o LED azul foi acionado em seu lugar para representar a cor amarela.

## Intruções
1 - O download dos arquivos do projeto necessários para sua execução pode ser feito baixando o repositório pelo como comando git clone <link do repositorio> ou através das opções CODE > Download ZIP;
2 - Pelo VSCode, na extensão do Raspberry PI Pico, selecione a opção de "Import Project" e clicando em "Change" para selecionar a pasta que contém o projeto Semáfaro;
3 - Após a importação, compile o código .c e em seguida entre no arquivo diagram.json e clique no botão de "play" para rodar a simulação no wokwi integrado ao VSCode;
4 - O projeto também pode ser utilizado na prática, para  isso basta conecta a placa BitDogLab na saída USB da sua máquina e em seguida selecione a opção run na parte inferior do VSCode;
5 - Na primeira compilação, pode ser necessário copiar o arquivo .uf2 gerado na pasta build para a unidade montada (RPI-P2);
6 - Se atente que a placa deverá está em modo BOOTSEL antes de selecionar o run.

## Requisitos

Hardware
- Microcontrolador Raspberry Pi Pico W.
- 03 LEDs (vermelho, amarelo e verde).
- 03 Resistores de 330 Ω.

Software
- SDK do Raspberry Pi Pico configurado;
- Compilador C compatível (como GCC);
- Acesso à platarforma Wokwi web e integrada ao VSCode;
- Ferramentas para upload do código para o Pico (VSCode por meio da biblioteca do Raspberry Pi Pico).

## Link da simulação no WOKWI: https://wokwi.com/projects/421956508567227393

## LINK DO REPOSITÓRIO GITHUB: 

## Link do vídeo desmonstrativo: https://drive.google.com/drive/folders/1TwdMEEH33i5T2z9ChqHnVZiTfNX1QGun?usp=sharing
____________________________________________________________________________________________________________________________________