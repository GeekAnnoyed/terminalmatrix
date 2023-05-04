/*
Copyright 2022 fgoodwin <fgoodwin@north-tech.net>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define SERIAL_DEBUG

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

#define EE_HANDS

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0     // USART TX pin
#define SERIAL_USART_RX_PIN GP1    // USART RX pin


#define SPLIT_USB_DETECT
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define PMW33XX_CPI 500


#define SPI_DRIVER SPID0
#define PMW33xx_CS_PIN GP18
#define PMW3360_CS_MODE 3
#define PMW3360_CS_DIVISOR 64
#define SPI_SCK_PIN 	GP18
// #define SPI_SCK_PAL_MODE 5
#define SPI_MOSI_PIN 	GP16
// #define SPI_MOSI_PAL_MODE 5
#define SPI_MISO_PIN 	GP19
// #define SPI_MISO_PAL_MODE 5
#define ROTATIONAL_TRANSFORM_ANGLE +127



/** Improve trackball firmware upload speed at boot. */
#define PMW3360_FIRMWARE_UPLOAD_FAST
