# MCU name
MCU = atmega32u2
# Bootloader selection
BOOTLOADER = atmel-dfu


# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no       # Mouse keys
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output


ENCODER_ENABLE = yes
EXTRAKEY_ENABLE = yes
UNICODE_ENABLE = yes

#define MATRIX_IO_DELAY 30
#define DEBOUNCE 5
#define USB_POLLING_INTERVAL_MS 10
