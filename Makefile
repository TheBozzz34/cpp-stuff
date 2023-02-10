CC = g++
CFLAGS  = -g -Wall

TARGET = main

SOURCEDIR = src
BUILDDIR = build

SOURCES = $(wildcard $(SOURCEDIR)/*.cpp)

$(TARGET): $(SOURCES)
	mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -o $(BUILDDIR)/$(TARGET) $(SOURCES)

clean:
	$(RM) -r $(BUILDDIR)



