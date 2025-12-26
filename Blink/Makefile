default:

	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega2560 -c -o blink.o blink.c
	avr-gcc -mmcu=atmega2560 -o blink.bin blink.o
	avr-objcopy -O ihex -R .eeprom blink.bin blink.hex
	sudo avrdude -F -V -c wiring -p ATMEGA2560 -P /dev/ttyACM0 -b 115200 -D -U flash:w:blink.hex