
#ifndef HTTP_DOWNLOAD_INCLUDE_H
#define HTTP_DOWNLOAD_INCLUDE_H

#include "stdint.h"
#include "esp_err.h"


typedef struct
{
    esp_err_t               result;
    const char *            message;
    uint32_t                size;
    uint32_t                addr;
}download_evt_t;


typedef void (*user_download_callback_t)(download_evt_t * evt);

void http_download_init(const char * host, const char * path, uint32_t addr,user_download_callback_t cb);

#endif
