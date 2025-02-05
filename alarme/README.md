---------------------------------------------------------EMBARCATECH----------------------------------------------------------------

UNIDADE 4 | CAPÍTULO 5 | CLOCKS E TEMPORIZADORES 
____________________________________________________________________________________________________________________________________

## Aluno (matrícula) => Joelson Santana Alves (tic370101150)

A tarefa propôs o uso da função add_alarm_in_ms(), presente
na ferramenta Pico SDK, para projetar um sistema de temporização
para o acionamento de LEDs, que atua a partir do clique em um
botão (pushbutton). 

## Funcionalidades Implementadas ao Projeto

1. Nesse projeto, caso o usuário clique no botão (pushbutton), os três LEDs serão
ligados (todos em nível alto). A partir da primeira rotina de atraso de 3 segundos,
ocorrerá uma mudança de estado onde ficará dois LEDs ligados e, em seguida, após mais 3 segundos, 
haverá apenas um LED aceso. Decorrendo mais 3 segundos e todos os LEDs se apagam;

2. O temporizador do alarme foi ajustado para um atraso de 3 segundos (3.000ms), entre os estados de acionamento dos
LEDs.

3. Essa mudança de estado dos LEDs foi implementada em
funções de call-back do temporizador, por exemplo a função  turn_off_callback().

4. O botão só pode alterar o estado dos LEDs quando o último LED
for desligado. Isso porque, durante a execução das rotinas de
temporização, o botão não pode iniciar uma nova chamada da
função call-back.

Com o emprego da Ferramenta Educacional BitDogLab, faça
um experimento com o código deste exercício utilizando o LED
RGB – GPIOs 11, 12 e 13 e o Botão A, GPIO 05.

5 - Com o uso da placa BitDogLab, foi feito um teste prático com êxito do código desta tarefa utilizando o LED
RGB (GPIOs 11, 12 e 13) e botão pushbutton A (GPIO 5). Nessa placa, vale destacar que, como se trata de um LED RGB compacto, no momento em todos os LEDs estiverem acesos, a cor resultante será a branca e quando dois estiverem acesos a cor será roxa.

6 - Também foi implementado uma rotina em software para atenuação
do efeito bouncing no botão (software debounce).

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
- 03 LEDs (vermelho, azul e verde).
- 03 Resistores de 330 Ω.
- Botão (Pushbutton).

Software
- SDK do Raspberry Pi Pico configurado;
- Compilador C compatível (como GCC);
- Acesso à platarforma Wokwi web e integrada ao VSCode;
- Ferramentas para upload do código para o Pico (VSCode por meio da biblioteca do Raspberry Pi Pico).

## Link da simulação no WOKWI: https://wokwi.com/projects/421956508567227393

## LINK DO REPOSITÓRIO GITHUB: 

## Link do vídeo desmonstrativo: https://drive.google.com/drive/folders/1TwdMEEH33i5T2z9ChqHnVZiTfNX1QGun?usp=sharing
____________________________________________________________________________________________________________________________________