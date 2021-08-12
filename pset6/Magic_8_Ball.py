import random
import time 
import sys

list = ["Yes, most definitely!", 
        "The chances are high!", 
        "Not likely!", "May the odds be ever in your favour.",
        "You got no shot, kid.", "Try it out and see!",
        "15% of working", "99.9% success rate", "Congratulations, yes!",
        "Ask a probably question," "Ask again later", "Better not tell you now",
        "Cannot predict now", "Concentrate and ask again", "Dont count on it"] 
        
def userInput():
    print("Enter your question: ", end="")
    userA = input("")
    print("\nThinking...\n")
    time.sleep(3)
    print(random.choice(list))
    result()
    
def result():
    print("Would you like to ask another question?(yes/no)")
    userA = input('> ')
    if userA.lower() in ['y', 'yes','yeah']:
        userInput()
    else:
        print("Thanks for playing!")
        sys.exit(0)

print("Welcome to the Magic Ball 8")
userInput()
