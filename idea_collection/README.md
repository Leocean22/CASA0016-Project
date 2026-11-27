# Collect the idea of this project 
a touchable temperature colck

# Smart Weather Tactile Alarm Clock – Hardware

## Bill of Materials

| Component | Specification | Qty |
|---|---|---:|
| Controller | ESP32-C3 DevKitM-1 | 1 |
| Peltier Module | TEC1-12702, 12V | 1 |
| Motor Driver | DRV8871 | 1 |
| Aluminium Plate | Ø60 × 3 mm | 1 |
| Temperature Sensors | NTC 10K MF52103 5% | 2 |
| Vibration Sensor | SW-420 | 1 |
| Buzzer | Passive Buzzer Module | 1 |
| Heatsink | 40 × 40 mm | 1 |
| Cooling Fan | 12V 4010 | 1 |
| Power Adapter | 12V 3A | 1 |
| Buck Converter | 12V to 5V | 1 |
| Fuse | Inline Fuse | 1 |
| Thermal Paste | MX-4 or equivalent | 1 |
| Wires & Connectors | Jumper wires and power wires | 1 set |
| Enclosure | 3D-printed case | 1 |

## System Configuration

| Function | Component |
|---|---|
| Main Control | ESP32-C3 |
| Internet Connection | Wi-Fi |
| Temperature Control | Peltier Module + DRV8871 |
| Temperature Monitoring | 2 × NTC Sensors |
| Alarm | Buzzer |
| Alarm Stop | SW-420 Shake Detection |
| Cooling | Heatsink + Fan |
| Power | 12V 3A Adapter |

## Design Overview

- The aluminium plate acts as the temperature touch surface.
- The Peltier module provides heating and cooling.
- The heatsink and fan remove excess heat.
- The ESP32 controls the temperature and alarm.
- Shaking the device stops the alarm.
- Wi-Fi provides weather and time information.
