"""
This is a custom library made for extra functions i thought might be useful
"""

import machine
import time


def stats():
    sensor = machine.ADC(4)
    conversion_factor = 3.3 / 65535

    reading = sensor.read_u16() * conversion_factor

    temperature:float = 27 - (reading - 0.706) / 0.001721

    uptime = time.time()

    return f"Core Temperature: {temperature} \n Uptime (s): {uptime}"

