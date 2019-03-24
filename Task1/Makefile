obj-m += helloworld.o
obj-m += helloworld_who.o

all:
	make -C/lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C/lib/modules/$(shell uname -r)/build M=$(PWD) clean
