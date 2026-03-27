SERVICE = svc
KEYLOGGER = winkey

all: service keylogger 

service: 
	cl /Fe"$(SERVICE)" tinky.c Advapi32.lib 

keylogger: 
	cl /Fe"$(KEYLOGGER)" winkey.c User32.lib 

