# Makefile for echo client and server

CXX=			g++ $(CCFLAGS)

#SERVER=		echo-server.o inet-server.o server.o
CLIENT=		Client.o ClientComunicator.o ClientController.o Main.o
OBJS =			 $(ECHO-CLIENT)

LIBS=

CCFLAGS= -g

all:	client

echo-server:$(ECHO-SERVER)
	$(CXX) -o server $(ECHO-SERVER) $(LIBS)

client:$(CLIENT)
	$(CXX) -o client $(CLIENT) $(LIBS)

clean:
	rm -f $(OBJS) $(OBJS:.o=.d)

realclean:
	rm -f $(OBJS) $(OBJS:.o=.d) server client


# These lines ensure that dependencies are handled automatically.
%.d:	%.cc
	$(SHELL) -ec '$(CC) -M $(CPPFLAGS) $< \
		| sed '\''s/\($*\)\.o[ :]*/\1.o $@ : /g'\'' > $@; \
		[ -s $@ ] || rm -f $@'

include	$(OBJS:.o=.d)
