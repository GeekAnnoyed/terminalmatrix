# ANAVI Knobs 3

Mini mechanical keyboard with 3 clickable rotary encoders, USB-C, RP2040 microcontroller and I2C slot for mini OLED display.

* Keyboard Maintainer: [Leon Anavi](https://github.com/leon-anavi)
* Hardware Supported: ANAVI Knobs 3
* Hardware Availability: [Crowd Supply](https://www.crowdsupply.com/anavi-technology/anavi-macro-pad-10), [GitHub repository](https://github.com/AnaviTechnology/anavi-knobs-3)

Make example for this keyboard (after setting up your build environment):

    make anavi/knobs3:default

Flashing example for this keyboard:

    make anavi/knobs3:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key on the left half, or top right key on the right half, and then plug in the USB cable on that keyboard half.
* **Physical reset button**: Double tap the reset button on the XIAO RP2040.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available.
