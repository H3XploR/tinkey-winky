#include <windows.h>
#include <winsvc.h>
#include <stdio.h>
int main(void){
	SC_HANDLE hSCManager = OpenSCManagerA(NULL, SERVICES_ACTIVE_DATABASE, SC_MANAGER_ALL_ACCESS);
	if (hSCManager == NULL){
		printf("OpenSCManagerA n'a pas fonctiionne. code d'erreur: %d\n", GetLastError());
		return 1;
	}
	printf("OpenSCManagerA est ouvert\n");
	SC_HANDLE hservice = CreateServiceA(hSCManager,
						"tinky",
						"tinky",
						SC_MANAGER_ALL_ACCESS,
						SERVICE_WIN32_OWN_PROCESS | SERVICE_INTERACTIVE_PROCESS,
						SERVICE_DEMAND_START,
						SERVICE_ERROR_IGNORE,
						//ICI JE DOIS SPECIFIER LE CHEMIN d'ACCESS DU KEYLOGGER MAIS IL N'EST PAS ENCORE CODER DONC J'ARRETE CE FICHIER ET PASSE DIRECTEMENT C'T'AVANT DERNIER);
	return 0;
}
