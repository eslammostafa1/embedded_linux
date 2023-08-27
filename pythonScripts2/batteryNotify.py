import time
from plyer import notification

import psutil

battery = psutil.sensors_battery()
percent = str(round(battery.percent, 1))

title = "battery percentage"
message = percent + "% Remaining"

while True:
    notification.notify(title= title,
        message= message,
        timeout= 20,
    )
    time.sleep(60*60)
