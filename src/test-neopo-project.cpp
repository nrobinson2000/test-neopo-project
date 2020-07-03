#include "Particle.h"

SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  Serial.begin(115200);
  Serial.print(RELEASE_DATE);
}

void loop() {

}
