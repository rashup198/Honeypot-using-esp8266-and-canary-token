# Honeypot-using-esp8266-and-canary-token

A honeypot is a sacrificial computer designed to decoy cyberattacks. It acts as a hacker as a target and uses the hacker as an attack to get information about cybercriminals and how they work or to distract them from other targets. A honeypot looks like a real computer with its apps and files, causing cybercriminals to think it's a legitimate target. For example, a honeypot could track a company's customer billing system - a target for criminals looking for credit card numbers. Once hackers are in, we can monitor them and measure their behavior for clues on how to truly cooperate. Honeypots intentionally create a safe environment to attract attackers. For example, a honeypot might have ports that respond to port scans or weak passwords. Vulnerable ports can be left behind to lure attackers into a honeypot environment instead of a more secure network. Honeypots are not configured to solve specific problems, such as firewalls or antivirus software. Instead, it's information that helps you understand threats to your business and spot new ones as they arise. Using the intelligence derived from honeypots, safety must be prioritized and focused.

The ESP8266 is a low-cost, Wi-Fi-enabled microcontroller chip designed for Internet of Things (IoT) development. Developed by Express if Systems, it was released in 2014 and quickly gained popularity. The chip integrates Wi-Fi connectivity with a powerful 32-bit microcontroller unit, allowing devices to connect to Wi-Fi networks and access the internet. It supports both infrastructure and soft AP modes, offering flexibility in networking options. With Arduino compatibility, programming the ESP8266 becomes accessible using the popular Arduino IDE. The chip provides GPIO pins for connecting and controlling other components, and it comes in different versions with varying memory options. Furthermore, there are development boards available that integrate the ESP8266, facilitating prototyping and development. This affordable solution has found widespread use in IoT applications, ranging from home automation to industrial systems. Its combination of Wi-Fi functionality, affordability, and ease of use has made the ESP8266 a preferred choice among developers for building.


![image](https://github.com/rashup198/Honeypot-using-esp8266-and-canary-token/assets/88549100/f7b614fc-5142-492b-bf30-976ffb0f6376)

The Arduino Integrated Development Environment (IDE) plays an important role in the Arduino programming world. It is a powerful software platform that allows users to create and send code to Arduino board regardless of programming background. Arduino IDE provides a user-friendly interface that can be easily used even by electronics and programming beginners. It has many features and tools to assist in the development process, including a code editor with syntax highlighting, a library manager for easy integration of additional functions, and a viewer control for real-time communication with the Arduino board. The IDE also supports a simplified version of the C++ programming language, making it easy for users to write and distribute code. In addition, the Arduino IDE provides various platforms for designing and creating interactive projects, allowing connection with various Arduino boards. Overall, the Arduino IDE is an essential tool for beginners and experts alike, allowing people to bring their new ideas to life using Arduino boards.

The objective of this research project is to develop a honeypot environment using the ESP8266 microcontroller and Arduino Uno. The honeypot will simulate vulnerable services with weak username and password combinations to attract potential attackers. By capturing and logging the activities of these attackers, the project aims to gain valuable insights into their methodologies and techniques. Additionally, the project aims to enhance the functionality of the honeypot by integrating hardware components and implementing real-time monitoring and response mechanisms. The incorporation of Canary Tokens and email alerts will provide an immediate response capability, allowing administrators to promptly address potential security breaches. Overall, the objective is to create a comprehensive honeypot system that effectively detects, logs, and responds to unauthorized access attempts, thereby increasing understanding of attackers' tactics and improving network security.


![image](https://github.com/rashup198/Honeypot-using-esp8266-and-canary-token/assets/88549100/25c65139-83b2-4e7a-aa28-470e1e9ced7c)


When attackers interact with honeypots, their actions can be captured and recorded for analysis. Here is a step-by-step guide on how an attacker can attack a honeypot and hijack its data:

Step 1: Attract attackers: Honeypots are designed to degrade attackers from being a bad person or service. For example, an insecure web server can pretend to be an FTP server or an SSH server. Attackers discover honeypots through a variety of methods, such as scanning IP ranges or using tools to detect malicious systems.

Step 2: Initiate Communication: When an attacker tries to contact or interact with the honeypot, their actions trigger a response from the honeypot system.
This response can be a banner message, a login ID, or other actions on the simulated system.

Step 3: Monitor attacker behavior: When attackers contact the honeypot, their every action is captured and logged. This includes the commands they execute, the files they download or install, and any network connections they create. The honeypot system collects this information for analysis and subsequent audits.

Step 4: Capture Network Traffic: A honeypot can capture an attacker's network traffic for further analysis.
This may include capturing packets with tools like Wireshark for tcpdump. By analyzing network traffic, security professionals can understand attackers' methods, tools, and risks they may have targeted.

Step 5: Record Session Commands: Record the commands the attacker executes in the honeypot environment. This information helps security professionals understand attack techniques and identify any new attacks they use.

Step 6: Assess the Killer's Behavior: Analyze the information gathered to understand the killer's motivations, methods, and goals.
This analysis will include analyzing patterns, providing important insights into interactive situations and their tactics and tools. The collected data can also provide threat intelligence, helping to identify and mitigate similar attacks in the future.

Step 7: Design Defenses: Insights from learning about attackers' behavior can help improve network security. Security professionals who understand the tactics used by attackers can design and implement defenses to prevent similar attacks. This may include fixing vulnerabilities, updating the security configuration, or strengthening network defenses.



![image](https://github.com/rashup198/Honeypot-using-esp8266-and-canary-token/assets/88549100/0925aada-9d0b-46cf-a4db-3e615c6a4fdb)


Details about the attacker
![image](https://github.com/rashup198/Honeypot-using-esp8266-and-canary-token/assets/88549100/693c81a4-2071-4399-a695-1b66c5d7a765)

Location of the attacker
![image](https://github.com/rashup198/Honeypot-using-esp8266-and-canary-token/assets/88549100/d9155cb3-07a3-4086-8c09-94a88c0934b0)




