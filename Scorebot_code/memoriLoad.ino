#include "EEPROM.h"
#include "Project-lib/globalDef.h"

void memoryLoad() {
	EEPROM.get(0, sets);	//carico i valori in memoria dentro alla variabile globale sets
}

void memorySave(settingsBoard *set) {
	EEPROM.put(0, set);
	memcpy(&sets,set,sizeof(settingsBoard));
}
