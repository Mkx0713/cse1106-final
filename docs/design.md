Temperature Monitoring System

System Design:
The Raspberry P will run a C program that monitors temperature values and controls an LED based on the readings 

Program Steps:
1. Start the program and initialize the system.
2. Read the temperature from the input.
3. Compare the temperature with the set threshold.
4. If the temperature is too high, turn on the LED
5. Otherwise, keep the LED off.
6. Display the temperature and status.
7. Save the results on the CSV file.
8. Repeat the process until the program is stopped.

Components:
Raspberry Pi: Runs the program. 
C Program: Reads and processes temperature values.
LED: Indicates high temperature 
CSV File: Stores the results. 
