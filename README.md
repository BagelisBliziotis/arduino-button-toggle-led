# arduino-button-toggle-led
-A push button toggles an Led on and off. Each press flips the state  
press once to turn on, press again to turn off. State is tracked in 
software 
*How it works:
-The button is connected to digital pin 7 and the LED to pin 9. 
The sketch reads the button state and checks it against the current 
mode (`"ON"` or `"OFF"`). When a press is detected (pin goes LOW),
it flips the Led and then waits in a while loop until the button 
is released before continuing. This prevents a single press from 
registering multiple times.
-The Serial Monitor prints the pin voltage and current mode on every 
loop cycle which made debugging the logic much easier during testing.
*Components:
- Arduino Uno
- 1× push button
- 1× Led (blue)
- 1× 320Ω resistor
- Breadboard
- jumper wires
*What I learned:
State management is something I hadn't really thought about before this. 
At first I tried just reading the button directly but the LED would 
flicker because the loop runs so fast it catches the same press dozens 
of times. The while loop waiting for release was my fix it holds 
execution until the button is actually let go. Not the most elegant 
debounce but it works and it made me understand why debouncing exists 
in the first place.
DEMO:
![IMG_5927-ezgif com-optimize](https://github.com/user-attachments/assets/95e5c70e-3764-45bc-abe6-4d5ce815f853)
