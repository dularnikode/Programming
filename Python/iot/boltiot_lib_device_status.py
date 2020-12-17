#commnad to install bolt library(:-sudo pip3 install boltiot)

#prgram to check device status
from boltiot import Bolt
api_key = "db712f9f-d302-4d72-98cb-76d539de52ec"
device_id  = "BOLT6093987"
mybolt = Bolt(api_key, device_id)
response = mybolt.restart()
print (response)



#program to on and off the led

from boltiot import Bolt
api_key = "db712f9f-d302-4d72-98cb-76d539de52ec" #get this id form your bolt cloud account
device_id  = "BOLT6093987" #get this id from your bolt cloud account
mybolt = Bolt(api_key, device_id)
response = mybolt.digitalWrite('0','HIGH')
response = mybolt.digitalWrite('0','HIGH')
print (response)


#
