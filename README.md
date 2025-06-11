# Aqua Khoria Water Dripper
Scripts used for the Aqua Khoria show's water dripper at the [SAT](http://sat.qc.ca/) (2016). The device was at the top of the Satosphere, 
dripping 30 feets into a water pool. Infos and images [here](https://sat.qc.ca/fr/evenements/aqua).
## How it works
A solenoid valve was controlled by an arduino which was connected to a mac mini. Puredata received OSC commands and wrote bytes on the serial
port.
### Files
* Arduino: Sketch controlling the solenoid valve
* Processing: Sketch to test locally the connection with the arduino
* Puredata: Canvas showing what was used for the live show
