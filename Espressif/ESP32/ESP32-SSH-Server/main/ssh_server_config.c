/* ssh_server_config.c
 *
 * Copyright (C) 2014-2024 wolfSSL Inc.
 *
 * This file is part of wolfSSH.
 *
 * wolfSSH is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * wolfSSH is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with wolfSSH.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "ssh_server_config.h"

int ssh_server_config_init(void)
{
    int ret = ESP_OK;
    ESP_LOGI("init", "ssh_server_config_init");

    /* TODO make public the esp_util show_macro() */
/*  show_macro("NO_ESPIDF_DEFAULT",         STR_IFNDEF(NO_ESPIDF_DEFAULT)); */
    return ret;
}


