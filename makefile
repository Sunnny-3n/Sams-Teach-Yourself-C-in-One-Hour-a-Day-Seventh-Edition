CC   = cc
CFLAGS = -O2 -Wall 
PROM = $(patsubst %.c,%,$(shell find -name "*.c"))

.PHONY : all
all: $(PROM)
 
$(PROM): 
	$(CC) $(CFLAGS) $(addsuffix .c,$@) -o $@
	

.PHONY : clean
clean:
	 find  -perm /a+x ! -type "d"  | xargs rm

