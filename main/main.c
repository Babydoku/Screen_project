#include <stdio.h>
#include "Display.h"




void app_main(void)
{
    Display_config disp_cfg = {
        .dev_addr = 0x3C, //0x3C
        .height_res = 64,
        .width_res = 128,
        .io_scl = GPIO_NUM_22,
        .io_sda = GPIO_NUM_21,
        .port_num = 0,
    };
  

    disp_handle display = init_display(&disp_cfg);
    esp_err_t err;
    err = add_lable(display,"Hej mitt namn är ibra, och jag är en somalie.");
    // err = add_menu(display, "Main");
    
    char *txt = "Data: ";
    float data = 0.0;
    // data = ultrasonic_measure();
    // Convert float to string 
    // sprintf(txt, "%.2f", data); // Formats the float to 2 decimal places 
    // err = add_label(display, txt);
    while(1){
        
        vTaskDelay(pdMS_TO_TICKS(30));
        //hej
    }
}