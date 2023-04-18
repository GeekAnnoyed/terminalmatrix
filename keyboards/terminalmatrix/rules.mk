# This file intentionally left blank

# Build Options
#   change yes to no to disable
#
# AUDIO_ENABLE = yes
AUDIO_DRIVER = pwm_hardware

SPLIT_KEYBOARD = yes
OLED_ENABLE = yes
OLED_DRIVER = SSD1306

OPT_DEFS += -DHAL_USE_I2C=TRUE
