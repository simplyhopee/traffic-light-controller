# Traffic Light Controller Project

## Overview
This project simulates a real-world traffic light system using Arduino and LEDs. The lights cycle through red, yellow, and green using timed delays to represent real traffic behavior.

This is a beginner-friendly robotics/embedded systems project that teaches:
- Digital output control
- Timing and sequencing
- Basic system simulation using Arduino

---

## Components Used
- Arduino Uno
- Red LED
- Yellow LED
- Green LED
- 220Ω resistors
- Breadboard
- Jumper wires

---

## How It Works
The system runs in a continuous loop:
- Green light → traffic moves
- Yellow light → warning / slow down
- Red light → stop

Each state runs for a fixed amount of time before switching.

---

## Wiring Diagram
- Red LED → Pin 8  
- Yellow LED → Pin 9  
- Green LED → Pin 10  
- All LEDs → GND through 220Ω resistors  

---

## Images / Demo

### Circuit Setup
![Circuit Diagram](circuit_diagram.png)

### Simulation Demo
![Traffic Light Demo](images/demo.gif)

---

## Future Improvements
- Add pedestrian button system
- Add buzzer alerts
- Add LCD countdown timer
- Expand to full intersection system

## Author
Shamira Robinson  
Computer Engineering Student | Future Robotics Engineer
