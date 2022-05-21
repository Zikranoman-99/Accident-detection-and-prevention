ABSTRACT:

This project is Accident Detection and Alerting System using 8051 Microcontroller can be used when an individual riding his/her vehicle, meets with an accident, there is a chance that the individual may suffer from a serious injury or expire instantaneously and there is no one around to help him. This system is a solution to the problem. The system acts as an accident identification system that gathers and sends the vehicle information that met with an accident, and conveys it to the nearest control room. For this the user vehicle is fixed and vibration sensor along with microcontroller with a GSM module and when a user vehicle meets with any accident, the vibration sensor detects and gives its output. This output is then detected by the microcontroller. The microcontroller sends this change detection signal to a GSM module. GSM Module sends send the location of the accident via a SMS. We can give anyone number, for example, ,police number, ambulance number, doctor number etc. The LCD present in the system would be used to display the status.


COMPONENTS REQUIRED:

The components required for this work are very cheap and easily available. List of components:
• 8051 MICROCONTROLLER (AT89C51)

• LCD DISPLAY

• VIBRATION SENSOR


• ULTRASONIC SENSOR

• GSM MODULE

• GPS

• ARDUINO

Software Used:

• KEIL UVISION

• ARDUINO

• PROTEUS

Since we are simulating in Proteus software, we are using Virtual Terminal inplace of GSM MODULE.

WORKING OF BLOCK DIAGRAM:

This block diagram is the basic mechanism of the project. The vibration sensor will
provide the input required. Any vibration in the sensor will reflect a change in the
velocity, this causes the transduced present to convert the mechanical force that is caused
by vibration or a change in motion into an electrical current. This is done due to the
principle of the piezoelectric effect. Piezoelectricity is the electric charge that
accumulates in certain material when mechanical stress is applied to the material. The
microcontroller will process this “amount of vibration” which is fundamentally an
electric signal. Based on the amount of vibration, it either displays whether an accident
has occurred or not. The amount of vibration will be related to the amplitude change that
occurs and the consequent change in amplitude of the vibration sensor. If an accident has
occurred, it would display a message on the LCD stating that an accident has occurred,
otherwise it would display that an accident has not occurred. If an accident has occurred,
the GPS and GSM modules will come into play. A GPS module would send the
coordinates of the accident site to the microcontroller which is connected to the GSM
module. The GSM module would be used to send the message to a nearby control room
or is the user has provided a phone number, the message would be sent to the registered
mobile.

WORKING OF PROTEUS:

a. When the circuit is switched on “INITIALISING” is displayed on the LCD Module for some
time.

b. The Vibration Sensor attached to the 8051 Microcontroller on pin P3.2 continuously checks for
the vibrations.

c. If there is no accident detected (no signal is sent to the microcontroller) and a message of
“ACCIDENTDETECTED: NO” is displayed on the LCD Module.

d. If an accident is detected, vibration sensor sends a signal to the microcontroller and a message of “ACCIDENT DETECTED: YES” is displayed on the LCD Module.

e. Microcontroller also sends a signal to the GSM Module (connected to pinP3.0and P3.1) when
the accident is detected.

f. The GSM Module sends a message “ACCIDENT DETECTED” to the numbers specified in the
code.

g. TheGSMModule also sends alert message tothe app and the numbers specified.

h. The Microcontroller also sends a high logic to the Arduino (connected to the pin P0.0) when an
accident is detected.

i. When a high logic is detected on the Arduino, the signal is given to the GPS Module.

j. The GPS location (longitude, latitude, altitude and time) is displayed on the the serial monitor
and also the accident severity of the area is detected through machine.

ARDUINO:

1 Open the code given in the arduino in your Arduino IDE
2 Before compiling the program , make sure you include the Tiny-gps library
3 Compile the code
4 Convert the code to it's HEX File
4 Upload the HEX file in Arduino present in the proteus