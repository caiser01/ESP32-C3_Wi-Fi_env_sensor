# ESP32-C3 Wi-Fi environment sensor node
A Wi-Fi connected temperature, humidity, and pressure sensor node based around the Espressif ESP32-C3-MINI-1 and the Bosch BME280.
<p align="center">
<img title="Revision 1.0 PCB" alt="rev 1.0 PCB" src="assets/rev_1_0_PCB.png" width="500">
</p>
This device was designed for measuring the basic ambient environmental conditions of an indoor space so that they may be remotely displayed instantly and/or logged for long-term monitoring. The ESP32-C3-MINI-1 was chosen for its small footprint and the numerous available coding frameworks including ESP-IDF, Arduino, MicroPython, and ESPHome. The device includes a built in charger for a lithium battery. The user has the option to power the sensor node from a USB-C cable or from a rechargeable lithium battery. Firmware flashing is also performed through the USB-C connector via the ESP32-C3's built in USB interface. Depending on the software and framework used, over-the-air (OTA) firmware flashing is also possible via Wi-Fi.
