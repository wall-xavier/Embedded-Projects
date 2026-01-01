default:

	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega2560 -c -o button.o button.c
	avr-gcc -mmcu=atmega2560 -o button.bin button.o
	avr-objcopy -O ihex -R .eeprom button.bin button.hex
	sudo avrdude -F -V -c wiring -p ATMEGA2560 -P /dev/ttyACM0 -b 115200 -D -U flash:w:button.hex