NAME = svc


$(NAME):
	cl /Fe"$(NAME)" main.c Advapi32.lib 
