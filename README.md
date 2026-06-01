# Miniature-Shake-Table
Arduino-based miniature shake table for controlled seismic testing of soil specimens. Built with a stepper motor, motion driver, and linear stage, it helps compare the dynamic response of normal soil and waste-plastic mixed soil under repeatable excitation.


# Miniature Shake Table for Waste-Plastic Mixed Soil Testing

A compact, Arduino-driven miniature shake table built to apply controlled seismic-like excitation to soil specimens and study how waste-plastic mixing affects dynamic soil response.

## Overview

This project presents the design and development of a miniature shake table used for laboratory-scale earthquake simulation. The system is intended for comparing the response of normal soil and waste-plastic mixed soil under repeatable dynamic loading.

The table uses an Arduino Uno to generate motion profiles, a stepper motor for actuation, and a DM860H/TB6600-class driver to move a linear stage. Acceleration response is measured during testing and used to compare damping, peak response, and energy dissipation between specimens.

<img width="1600" height="900" alt="3" src="https://github.com/user-attachments/assets/0af58994-093b-48c4-931e-3b1d305f418a" />



## Project Goals

- Build a low-cost miniature shake table for soil dynamics experiments.
- Generate repeatable motion profiles such as sinusoidal excitation.
- Test soil specimens with and without waste plastic reinforcement.
- Record and compare acceleration response under identical input conditions.
- Support future work in closed-loop control and multi-axis excitation.

## Features

- Arduino Uno-based motion control.
- STEP/DIR/ENA driver interface.
- Stepper-motor-driven linear motion stage.
- Suitable for controlled lab-scale soil excitation.
- Designed for sinusoidal and custom excitation profiles.
- Supports response measurement with an accelerometer.
- Modular structure for future upgrades and data logging.

## System Architecture

The system is divided into three main parts:

- **Mechanical subsystem**: chassis, linear rails, moving stage, coupler, and soil test box.
- **Electrical subsystem**: Arduino Uno, stepper driver, power supply, wiring, and sensor interface.
- **Control subsystem**: firmware for motion generation, calibration, homing, and test execution.


## Hardware Summary

## Wiring Diagram

<img width="609" height="462" alt="image" src="https://github.com/user-attachments/assets/6a5ab656-6dc7-418d-baf3-937eba0205b6" />


### Mechanical Components
- Linear rails or smooth rods with LM-type bearings.
- Moving platform for specimen mounting.
- Flexible coupler to reduce misalignment effects.
- Soil test box for holding prepared specimens.
- Structural frame for base support.

### Electrical Components
- Arduino Uno controller.
- Stepper motor driver: DM860H or TB6600.
- NEMA 34 stepper motor.
- 24–48 V DC power supply.
- Accelerometer for motion response measurement.

## Bill of Materials

A detailed BOM should be placed in `hardware/bom/bom.md`. At minimum, include:

- Arduino Uno R3
- DM860H driver
- Stepper motor (NEMA 34)
- Lead screw or transmission mechanism
- Linear rails and carriage
- Power supply
- Accelerometer
- Soil test box
- Fasteners, mounts, and couplers

## Firmware

The Arduino firmware generates the motion pulses for the driver and controls the shake table motion profile. The project is designed around STEP/DIR/ENA control and can support simple sinusoidal excitation as well as future custom profiles.

Recommended firmware files:
- `shake_table_controller.ino`: main program.
- `config.h`: pin definitions and tuning parameters.
- `profiles.h`: motion profile functions and lookup tables.

## Motion Profiles

The report uses a sinusoidal excitation profile for planning and testing. The platform is intended to reproduce controlled motion histories that can be used to compare soil response under identical input conditions.

Example motion types:
- Sine wave excitation.
- Sweep/chirp excitation.
- Recorded time-history playback.
- Future earthquake waveform replay.

## Test Procedure

1. Prepare soil specimens.
2. Mount the specimen in the soil box.
3. Mount the accelerometer on the carriage or specimen.
4. Run the selected motion profile.
5. Record acceleration response.
6. Repeat for normal soil and waste-plastic mixed soil.
7. Compare peak acceleration, RMS response, and frequency content.

## Experimental Focus

This project supports the study of waste-plastic mixed soil for earthquake protection under buildings. The shake table provides repeatable excitation so that differences in response can be attributed to material behavior rather than inconsistent loading.

The expected result is that waste-plastic mixed soil shows improved damping and lower acceleration response compared to untreated soil.

## Results and Analysis

Store processed plots and comparison data inside `experiments/analysis/` and `experiments/data/processed/`.

Useful outputs to include:
- Time vs acceleration plots.
- Peak acceleration comparison.
- RMS comparison.
- Frequency-domain response plots.
- Notes on damping and energy dissipation.

## Safety Notes

- Keep hands clear of moving parts during operation.
- Use an emergency stop where possible.
- Isolate motor power properly.
- Secure all wiring and power connections.
- Route sensor lines away from motor cables to reduce noise.
- Ensure the frame is stable before testing.

## Future Work

- Closed-loop control using on-table feedback.
- Multi-axis excitation.
- Higher payload carriage.
- Automated data acquisition.
- Better synchronization with video capture.
- Support for additional motor and driver options.


## Author

Arpan Mukherjee  
Electronics and Communication Engineering  
Dr. B. C. Roy Engineering College
