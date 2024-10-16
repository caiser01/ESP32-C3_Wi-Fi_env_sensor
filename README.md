# ESP32-C3 Wi-Fi environment sensor node
<p>A Wi-Fi connected temperature, humidity, and pressure sensor node based around the Espressif ESP32-C3-MINI-1 and the Bosch BME280 Humidity/Pressure/Temperature sensor.</p>

<p align="center">
<img title="Revision 1.0 PCB" alt="rev 1.0 PCB" src="assets/rev_1_0_PCB.png" width="500">
</p>

<p>The primary goal of this project is to provide a simple platform for monitoring the temperature and humidity of the spaces inside one's home. These wireless sensor nodes can be easily integrated with the free software packages such as Home Assistant (https://www.home-assistant.io) and ESPHome (https://esphome.io). Alternatively, the user can write their own fully custom firmware using ESP-IDF, Arduino, or MicroPython.</p>

<p>Through simple monitoring of the temperature and humidity in the different rooms of one's home it is possible to:
<br>
<ul>
  <li>Gain insight into the effectiveness of the home's heating and cooling (HVAC) system</li>
  <li>Determine if a space may need a humidifier/dehumidifier</li>
  <li>Identify spaces that may need additional insulation</li>
  <li>Find spaces with doors or windows that do not seal tightly</li>
</ul>
</p>
<p>Additionally, the barometric pressure sensing capability can provide realtime insight into changing local weather conditions.</p>

## Design
<p>This device was designed for measuring the basic ambient environmental conditions of an indoor space so that they may be remotely displayed instantly and/or logged for long-term monitoring. The ESP32-C3-MINI-1 was chosen for its small footprint and the numerous available coding frameworks including ESP-IDF, Arduino, MicroPython, and ESPHome. The device includes a built in charger for a lithium battery. The user has the option to power the sensor node from a USB-C cable or from a rechargeable lithium battery. Firmware flashing is also performed through the USB-C connector via the ESP32-C3's built in USB interface. Depending on the software and framework used, over-the-air (OTA) firmware flashing is also possible via Wi-Fi.</p>
