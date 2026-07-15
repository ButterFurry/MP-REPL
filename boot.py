from machine import Pin, SPI
import network
import webrepl
import time
import config

if config.is_first_boot == True:
    import config_menu
    config.is_first_boot = False



ethernet_spi = SPI(0, 2_000_000, mosi=Pin(19), miso=Pin(16), sck=Pin(18))
nic = network.WIZNET6K(ethernet_spi, Pin(17), Pin (20))
nic.active(True)
nic.ifconfig('dhcp')

retrys = 0
while retrys <= config.retry_count:
    if not nic.isconnected():
        print("Waiting for connection...")
        retrys += 1
        time.sleep(1)
    else:
        break


print(nic.ifconfig())

webrepl.start()