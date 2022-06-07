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

• TINKERCAD

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

2 Before compiling the program , make sure you include the Tiny-gps library.

3 Compile the code

4 Convert the code to it's HEX File

5 Upload the HEX file in Arduino present in the proteus

TINKERCAD:

                                FIRESENSOR+TEMPERATURE SENSOR:
 
We are combining the temperature sensor and the smoke/gas sensor to indicate if there is any temperature rise or smoke release .The sensors are connected inside the car. Automobile engineers and experts say that short circuits in vehicles
usually happens when the electrical wiring system is tampered to fit extra accessories. Sometimes due to overheating of the engine there might be some amount of smoke that could be released inside the car that can create panic to the passengers. If incase the smoke is extremely dangerous as in more than the given threshold value,90ppm then the buzzer will make noise which indicates the passengers to evacuate the vehicle.
TEMPERATURE SENSOR Indicates if there is any temperature change due to the presence of fire at a close proximity to the car and transmits newly recorded temperature to the cloud and checks if it is lesser than or greater than the threshold value mentioned in the code as and displays a signal to LCD display accordingly. Gas sensor: It senses if there is any gas released internally or anywhere near the car and buzzes when it senses any danger, that is around 90 ppm. The presence of this gas or smoke could be due to a fire present in and around the car or due to overheating of the car’s engine or due to short circuit of the wiring system
inside the car.

Tinkedcad model link: https://www.tinkercad.com/things/25hOVfaRbio-gas-and-temp-sensor/editel sharecode=ZbSeyWVhA4RyHJtEdC8O61f-MRetOuBVNf8nPilWJmQ


                        OBSTACLE DETECTION+WATER LEVEL DETECTION:

Water level detection: We are using ultrasonic sensor to detect the water level beneath the car so that we can take safety measures during natural calamities like floods. This sensor will be placed underneath the car and will majorly sense the amount of water present underneath the car and will store in the cloud. Once the water level increases to the danger level
mentioned in the code that is more than 15cms the message stating ‘HIGH’ will be sent to the owner and the Buzzer will go on. This way the owner can try and move the car to a higher raised place or a different location. 

Obstacle detection: We are using ultrasonic sensor to detect obstacle outside the car to prevent any accidents. In this we will set the conditions for safety and danger so that the driver can acknowledge the situation. If any obstacle appears within the danger zone that is 15cms as mentioned in the code written by us, the car will take action on its own by applying the brakes
and it buzzes to alert the driver. The application of brakes will go on automatically with out any human interference if we are encounter anything closer to 15cms. In this project, since we cant replicate a real braking system, we have represented the whole braking system with a motor as shown in the circuit diagram

                                                    WORKING:
The circuit we made in TINKERCAD consist of ultrasonic sensor, Arduino microcontroller, buzzer and a motor. Ultrasonic sensors will sense the distance between obstacle and the vehicle. Our Arduino is programmed to activate buzzer if the distance between vehicle and obstacle is reduced below a certain threshold. If our sensor senses the object is too close to vehicle then it
will control the motor to implement braking and slowing down of vehicle.

If distance <=100cm and >=75cm: LED would turn ON to warn the driver

If distance <=74cmand distance>=20cm: Buzzer would turn ON, LED would turn ON

If distance <=19 and distance>=5: The motor would come to OFF state, buzzer and LED
would be turned OFF

Tinkedcad model link: https://www.tinkercad.com/things/3mWaCdfhtcC-tarp-project/editel?sharecode=v_H_o0TI43X3-z38PJtLS469D4THdzkrAB_E9fD-BAo
