#include "NectisGroveSPI.h"
#include "SPI.h"

#include <Arduino.h>
#include <wiring_digital.h>


NectisGroveSPI::NectisGroveSPI(SPIClass* groveSpi) : _GroveSpi(groveSpi) {

}

NectisGroveSPI::~NectisGroveSPI() {

}

void NectisGroveSPI::PowerSupplyGrove(bool on) {
	digitalWrite(GROVE_VCCB_PIN, on ? HIGH : LOW);
}

