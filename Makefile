SERVICE = svc

$(SERVICE):
	cl /Fe"$(SERVICE)" tinky.c Advapi32.lib 
