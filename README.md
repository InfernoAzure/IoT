Introduction:
    This project demonstrates basic home automation using Google assistant and Node MCU.
    
Working:
    This project uses MQTT publish – subscribe based messaging protocol. To publish and subscribe the mqtt protocol needs a broker, online UI known as Adafruit is used. The publish client is smartphone and subscribe client is Node MCU. The IFTTT app is used to subscribe for data from the server.
For the IF condition we send data using the Google Assistant. For the DO condition, the node mcu will get data from the server (Adafruit). If we say “Switch on LED” to the google assistant, the LED will switch on. Similarly, the LED can be switched off. We will see more about IFTTT later.

Publish:
    Publishing means uploading data on to the server. In our case the server is adafruit. Publishing data to the server involves the following steps:
1.Connect the client to the internet 
2.Connect the client to the server.
3.Publish data to server.

Publishing data through google assistant: 
    To publish data from google assistant to adafruit, we need to make use of a mobile app called IFTTT.

IFTTT:
    If This Then That, also known as IFTTT is a free web-based service to create chains of simple conditional statements, called applets.
An applet is triggered by changes that occur within other web services such as Gmail, Facebook, Telegram, Instagram, or Pinterest. 
For example, an applet may send an e-mail message if the user tweets using a hashtag, or copy a photo on Facebook to a user's archive if someone tags a user in a photo. 
In addition to the web-based application, the service runs on iOS and Android. In February 2015, IFTTT renamed its original application to IF, and released a new suite of apps called Do, which lets users create shortcut applications and actions. As of 2015, IFTTT users created about 20 million recipes each day. All of the functionalities of the Do suite of apps have since been integrated into a redesigned IFTTT app.

Subscribe:
    Subscribing data from the server involves the following steps.
1.Connect the client to the internet.
2.Connect the client to the server.
3.Subscribe data from the server.

A relay can be used to connect a light bulb or any electrical appliance and can be automated using the Google Assistant.


