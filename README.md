# Line Following Robot 🚗🤖

### Autonomous Embedded Control System Using Arduino Uno

## 📌 Project Overview

This project presents the complete design, simulation, PCB development, and implementation of an autonomous Line Following Robot using:

* Arduino Uno (ATmega328P)
* Infrared (IR) reflective sensors
* L293D H-Bridge motor driver
* Custom PCB design
* Proteus simulation environment

The robot detects a black line on a white surface using IR sensors and dynamically adjusts motor direction in real-time using embedded control logic.

This repository contains full documentation, simulation files, circuit schematics, PCB layout, manufacturing files, and source code.

## 🎯 Project Objectives

* Design a fully autonomous line-following robot
* Implement real-time sensor feedback control
* Develop and simulate complete hardware architecture in Proteus
* Design and export a manufacturable PCB layout
* Integrate hardware and embedded software systems
* Demonstrate applied robotics and control systems principles

## 🧠 System Architecture

The robot system consists of the following subsystems:

1. **Sensing Unit**

   * Infrared reflective sensors
   * Analog signal conditioning circuit

2. **Control Unit**

   * Arduino Uno (ATmega328P microcontroller)
   * Embedded C/C++ control algorithm

3. **Actuation Unit**

   * L293D Motor Driver (H-Bridge)
   * Dual DC motors

4. **Power Supply Unit**

   * Regulated 5V supply
   * Battery input with voltage regulation stage

## ⚙️ Working Principle

The robot continuously reads sensor outputs and applies decision-based motor control logic:

| Left Sensor | Right Sensor | Action        |
| ----------- | ------------ | ------------- |
| LOW         | LOW          | Move Forward  |
| HIGH        | LOW          | Turn Left     |
| LOW         | HIGH         | Turn Right    |
| HIGH        | HIGH         | Stop / Adjust |

The control algorithm ensures real-time line tracking using discrete logic conditions.

## 🔧 Hardware Components

* Arduino Uno (ATmega328P)
* IR Sensor Modules (2)
* L293D Motor Driver IC
* DC Geared Motors
* Custom Designed PCB
* Voltage Regulation Circuit
* Battery Power Source

## 💻 Software & Tools Used

* Arduino IDE (Embedded C/C++)
* Proteus Design Suite (Simulation)
* PCB Layout Design Software
* Git & GitHub (Version Control)

## 📂 Repository Structure

```
Line-Follower-Robot
│
├── README.md
│
├── Documentation/
│   └── ROBOTICS.pdf
│
├── Code/
│   └── line_follower.ino
│
├── Simulation/
│   └── ictProject.pdsprj
│
├── Circuit_Diagram/
│   ├── Proteus schematic.png
│   ├── Infrared circuit diagram.png
│   ├── Analog signal conditioning circuit.png
│   ├── Power supply circuit diagram.png
│   ├── System block architecture.png
│
├── PCB_Design/
│   ├── 2D PCB.png
│   ├── 3D PCB.png
│
├── PCB_Gerber_Files/
│   └── Gerber_pcbb_PCB_pcbb_2025-12-29.zip
│
└── Images/
    ├── Flowchart.png
    └── Result graph.png
```

## 🖥️ Simulation

The complete circuit was designed and validated using Proteus simulation.

Simulation includes:

* Microcontroller program execution
* Sensor signal emulation
* Motor driver switching behavior
* Real-time system response

## 📊 PCB Design & Manufacturing

A custom PCB was developed to integrate:

* Microcontroller interface
* Sensor input stage
* Motor driver circuitry
* Power regulation section

Manufacturing-ready Gerber files are included in the repository.

## 📈 Results

The robot successfully:

* Detects and follows a predefined path
* Corrects direction based on sensor feedback
* Operates with stable voltage regulation
* Demonstrates real-time embedded control functionality

## 📄 Full Technical Report

The complete technical documentation is available here:

📁 `Documentation/ROBOTICS.pdf`

## 📜 License

This project is for academic and educational purposes.

