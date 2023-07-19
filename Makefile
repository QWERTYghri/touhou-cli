#
# Compilation makefile
#

include conf.mk

.PHONY: all install remove clean

all: touhou

touhou: ./src/main.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LIB) $(OFLAGS) -o $@ $^

install:
	mkdir -p $(INSTALL_PATH)
	install touhou $(INSTALL_PATH)
remove:
	-rm -rf $(INSTALL_PATH)/touhou

clean:
	-rm -rf *.out touhou
