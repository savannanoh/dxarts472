# dxarts472

## Final

### Summary

My project consists of three nature-inspired robots in a habitat that has familiar objects from nature, as well as exposed electronic components. The robots mimic mushrooms and have a mechanism that makes them open and close like umbrellas. Inspired by the fact that mushcrooms, trees, and other things in nature communicate via electrical signals, they have antennas on them that pick up electromagnetic signals from the outlets that are powering them, each other, and things in the environment. What the antennas pick up controls how quickly they move. Since the movements of the robots affect the electromagnetic signals, this causes a feedback loop. Each robot has a light sensor that is meant to detect when someone is in front of the robot, presumably watching it. When it detects someone, the robot stops moving. This makes the piece a sort of anti-installation, showing that while nature and the things around us are speaking to each other, they are not speaking to us, they are not performing for us, and we are simply eavesdroppers. 

### Materials 

Each of the robots consists of the following:
- Arduino Uno
    - Link to code file is below under "Relevant Files"
- Bipolar stepper motor
- Power adapter for powering the Arduino as well as the motor
- L293D IC stepper motor driver
    - I followed this tutorial for wiring the driver: https://lastminuteengineers.com/stepper-motor-l293d-arduino-tutorial/
- Photoresistor
    - Used for detecting the presence of a person
- Button
    - Used for switching the direction of the motor. Since the motors all move at different speeds, when I stop the robots I cannot guarantee where they are in their opening or closing, the button allows me to switch directions so they don't break going too far open or too far closed
- Fabric antenna
- Fabrc cover
- Umbrella mechanism
    - Sticks x6
        - Heat shrink x3
        - Bamboo skewers, cut x4
    - 3D printed threaded rod
    - 3D printed threaded nut with holes
    - 3D printed nut with holes
    - Pieces of thick wire for constraining threaded nut from rotating x3

    The robots open and close by a custom-made mechanism. The main idea is that the motor is attached to a threaded rod, which has a threaded nut that can rotate and go up and down the rod. By constraining the nut from rotating it will go up and down as the motor rotates. A non-threaded nut is attached to the tops of the wires constraining the threaded nut and sits in the same orientation. The top and bottom nuts both have six holes around the center, and this is where the sticks are attached. Each stick is made up of four pieces of cut bamboo skewer, attached with three pieces of heat shrink. Once the sticks are attached to the nuts, when the motor rotates, the threaded nut moves up and down and the sticks bend outwards and straighten, and when the fabric is attached, this makes the fabric open and close like an umbrella. 

    ![bent](/res/bent.jpg)
    ![straight](/res/straight.jpg)

    Here is a video where you can see the mechanism working: https://github.com/savannanoh/dxarts472/blob/main/videos/draft.mp4
    

### Exhibition

![exhibit image](/res/IMG_20220603_163216826.jpg)

![exhibit image](/res/IMG_20220603_163221234.jpg)

Videos:
https://github.com/savannanoh/dxarts472/blob/main/videos/exhibit1.mp4
https://github.com/savannanoh/dxarts472/blob/main/videos/exhibit2.mp4


### Relevant Files

Arduino code for the exhibition: https://github.com/savannanoh/dxarts472/blob/main/exhibition.ino

Rod model: https://github.com/savannanoh/dxarts472/blob/main/many%20rods.stl

Nut model: https://github.com/savannanoh/dxarts472/blob/main/bigger%20holes2.stl 