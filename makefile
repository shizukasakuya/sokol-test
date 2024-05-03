CC=clang
CFLAGS=-x objective-c -DSOKOL_METAL -I./include -I./dependencies/sokol
LDFLAGS=-framework Cocoa -framework QuartzCore -framework Metal -framework MetalKit

metal:
	$(CC) $(CFLAGS) src/main.c -o out $(LDFLAGS)

clean:
	rm -f out

.PHONY: clean
