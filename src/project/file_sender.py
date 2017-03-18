#!/usr/bin/env python
# Send data to an Arduino and report responses.
from time import time, sleep, asctime, localtime
from datetime import datetime
from serial import Serial
import sys, tty, termios

print 'Opening serial port'
print 'Opening text file'
ser = Serial('/dev/ttyACM0', 9600) #Where /dev/ttyXYZ is port to which Arduino connects
sleep(3)                      # Let board initialize
counter = 0;  
with open("numbers_text_file", "r+") as f:
        for line in f:
                for c in line:
                    counter=counter+1
                    txt = c    
                    #txt = raw_input('>>') # Used for file_sender < text_file
                    if '\n' in txt:
                        print 'Sending ENTER'
                        print ord(txt)
                    elif '\t' in txt:
                        print 'Sending TAB'
                        print ord(txt)                      
                    elif ' ' in txt:
                        print 'Sending SPACE'
                        print ord(txt)  
                    else:
                        print 'Sending  "{}"'.format(txt)
                        print ord(txt)
                    ser.write(txt)  
                    sleep(0.001)                   
                    s = ser.read()          # Get result from arduino (DEBUG)
                    if '\n' in s:
                        print 'Readback ENTER at {} :: {}'.format(datetime.utcnow().strftime('%H:%M:%S.%f')[:-3], counter)
                    elif '\t' in s:
                        print 'Readback TAB at {} :: {}'.format(datetime.utcnow().strftime('%H:%M:%S.%f')[:-3], counter)                     
                    elif ' ' in s:
                        print 'Readback SPACE at {} :: {}'.format(datetime.utcnow().strftime('%H:%M:%S.%f')[:-3], counter)
                    else:
                        print 'Readback "{}" at {} :: {}'.format(s, datetime.utcnow().strftime('%H:%M:%S.%f')[:-3], counter)
                    sleep(2.25)
                    
                

                 

            
        
                          
