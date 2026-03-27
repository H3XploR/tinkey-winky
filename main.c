#include <windows.h>
#include <winsvc.h>
#include <stdio.h>
int main(void){
	SC_HANDLE scHandle = OpenSCManagerA(NULL, SERVICES_ACTIVE_DATABASE, SC_MANAGER_ALL_ACCESS);
	if (scHandle == NULL){
		printf("OpenSCManagerA n'a pas fonctiionne. code d'erreur: %d\n", GetLastError());
		return 1;
	}
	printf("OpenSCManagerA est ouvert\n");
	return 0;
}
