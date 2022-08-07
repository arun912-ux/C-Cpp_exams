from time import sleep
import pynput
from pynput import keyboard

string_to_type = "Hello! How are you?"

sleep(2)

c = keyboard.Controller()
for char in string_to_type:
    sleep(0.0005)
    c.tap(char)


