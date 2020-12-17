import smtplib
for i in range(0,2):
    smtpserver=smtplib.SMTP("smtp.gmail.com",587)
    smtpserver.ehlo()
    smtpserver.starttls()
    setattrmtpserver.ehlo()
    smtpserver.login('dularnikode1@gmail.com','dular@#$1')
    header='To:'+'dmnikode@mitaoe.ac.in'+'\n'+'From '+'dularnikode1@gmail.com'+'\n'+'Subject:Alert\n'
    msg=header+'Temperature have crossed Threshold'
    smtpserver.sendmail('dularnikode1@gmail.com','dmnikode@mitaoe.ac.in',msg)
    print('Email Send Successfully! :)')
    smtpserver.close()
    

"""
import smtplib
from smtplib import SMTPException

sender = "dularnikode1@gmail.com"
receiver = ["dmmnikode@mitaoe.ac.in"]
message = "Temperature have crossed Threshold"

try:
    session = smtplib.SMTP('smtp.gmail.com',587)
    session.ehlo()
    session.starttls()
    session.ehlo()
    session.login(sender,'dular@#$1')
    session.sendmail(sender,receiver,message)
    session.quit()
except SMTPException:
    print('Error')
"""

def prompt(prompt):
    return raw_input(prompt).strip()

fromaddr = prompt("From: ")
toaddrs  = prompt("To: ").split()
print "Enter message, end with ^D (Unix) or ^Z (Windows):"

# Add the From: and To: headers at the start!
msg = ("From: %s\r\nTo: %s\r\n\r\n"
       % (fromaddr, ", ".join(toaddrs)))
while 1:
    try:
        line = raw_input()
    except EOFError:
        break
    if not line:
        break
    msg = msg + line

print "Message length is " + repr(len(msg))

server = smtplib.SMTP('localhost')
server.set_debuglevel(1)
server.sendmail(fromaddr, toaddrs, msg)
server.quit()
