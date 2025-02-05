#include <stdio.h>
#include "pico/stdlib.h"   // Inclui a biblioteca padrão para funcionalidades básicas como GPIO, temporização e comunicação serial.
#include "hardware/timer.h" // Inclui a biblioteca para gerenciamento de temporizadores de hardware.

#define LED_PIN_GREEN 11
#define LED_PIN_RED 13
#define LED_PIN_YELLOW 12


// Variável global para controlar o estado do LED e a cor atual.
int led_state = 0;

// Função de callback que será chamada repetidamente pelo temporizador
bool repeating_timer_callback(struct repeating_timer *t) {
    // Atualiza a cor do LED com base no estado atual
    if (led_state == 0) {
        gpio_put(LED_PIN_RED, true);
        gpio_put(LED_PIN_YELLOW, false);
        gpio_put(LED_PIN_GREEN, false);
        printf("PARE!  (Vermelho)\n");
    } else if (led_state == 1) {
        gpio_put(LED_PIN_RED, false);
        gpio_put(LED_PIN_YELLOW, true);
        gpio_put(LED_PIN_GREEN, false);
        printf("ATENÇÃO!  (Amarelo)\n");
    } else {
        gpio_put(LED_PIN_RED, false);
        gpio_put(LED_PIN_YELLOW, false);
        gpio_put(LED_PIN_GREEN, true);
        printf("SIGA!  (Verde)\n");
    }

    // Atualiza o estado do LED para a próxima cor
    led_state = (led_state + 1) % 3;

    // Retorna true para manter o temporizador repetindo. Se retornar false, o temporizador para.
    return true;
}

int main() {
    // Inicializa a comunicação serial, permitindo o uso de funções como printf.
    stdio_init_all();

    // Inicializar os pinos GPIO dos LEDs
    gpio_init(LED_PIN_RED);
    gpio_set_dir(LED_PIN_RED, true);
    gpio_init(LED_PIN_YELLOW);
    gpio_set_dir(LED_PIN_YELLOW, true);
    gpio_init(LED_PIN_GREEN);
    gpio_set_dir(LED_PIN_GREEN, true);

    // Declaração de uma estrutura de temporizador de repetição.
    struct repeating_timer timer;

    // Configura o temporizador para chamar a função de callback a cada 3 segundos.
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    // Loop infinito que mantém o programa em execução.
    while (true) {
        // Envia uma mensagem a cada segundo
        printf("1 segundo passou\n");
        sleep_ms(1000);
    }

    return 0;
}
