#OOPR-Exer-7
#Start writing your code here
class Ticket:
    counter=0
    def __init__(self,passenger_name,source,destination):
        self.__passenger_name=passenger_name
        self.__source=source
        self.__destination=destination
        self.__ticket_id
    
    def valid_source_destination():
        cnt=False
        dest=["Mumbai","Chennai","Pune","Kolkata"]
        if self.__source=="Delhi":
            for i in dest:
                if i== self.__destination:
                    cnt=True
        return cnt
    def generate_ticket():
        if valid_source_destination()==True:
            Mobile.counter+=1
            if len(str(Mobile.counter))==1:
                self.__ticket_id="D"+self.__destination[0]+"0"+str(Mobile.counter)
            else:
                self.__ticket_id="D"+self.__destination[0]+str(Mobile.counter)
        else:
            self.__ticket_id=None
            
    def get_ticket_id(): 
        return self.__ticket_id
    def get_passenger_name():
        return self.__passenger_name
    def get_source():
        return self.__source
    def get_destination():
        return self.__destination
