from boltiot import Bolt
api_key = "8680003d-0afd-43ef-a0a8-cf11b63cb6a7"
device_id  = "BOLT6093987"
mybolt = Bolt(api_key, device_id)
response = mybolt.restart()
print (response)
