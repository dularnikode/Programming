import pyttsx3
import datetime
import speech_recognition as sr
engine=pyttsx3.init('sapi5')
voices=engine.getProperty('voices')
print(voices[0].id)
engine.setProperty('voice',voices[1].id)
def speak(audio):
    engine.say(audio)
    engine.runAndWait()
def takecommmand():#it takes microphone input form the userr and gives it as string
    r=sr.Recognizer()
    with sr.Microphone as source:
        print("Listning...")
        r.pause_threshold=1
        audio=r.listen(source)
    try:
        print("Recognizing")
        query=r.recognize_google(audio,language='en-in')
        print(f"user said:{query}\n")
    except Exception as e:
        #print(e)
        print("say that again please")
        return "None" 
    return query 
def wishMe():
    hour=int(datetime.datetime.now().hour)
    if hour>=0 and hour<=12:
        speak("good morning")
    elif hour>=12 and hour<18:
        speak("good afternoon")
    else:
        speak("Good Evening")
    speak("Hello I am jarvis how may i help you Dular Sir?")
if __name__=="__main__":
    wishMe()
    takecommmand()
