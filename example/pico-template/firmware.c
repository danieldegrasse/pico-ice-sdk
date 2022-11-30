#include "pico/stdlib.h"
#include "pico/stdio.h"
#include "boards/pico_ice.h"
#include "ice/init.h"
#include "ice/usb.h"

int
main(void)
{
    // Enable USB-UART #0 output
    stdio_init_all();

    // Init the pico-ice-sdk library
    ice_init();

    // Setup code here.

    for (;;) {
        ice_usb_task();

        // Application code here.

    }
    return 0;
}
