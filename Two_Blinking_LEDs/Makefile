default:

	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega2560 -c -o TwoBlinks.o TwoBlinks.c
	avr-gcc -mmcu=atmega2560 -o TwoBlinks.bin TwoBlinks.o
	avr-objcopy -O ihex -R .eeprom TwoBlinks.bin TwoBlinks.hex
	sudo avrdude -F -V -c wiring -p ATMEGA2560 -P /dev/ttyACM0 -b 115200 -D -U flash:w:TwoBlinks.hex