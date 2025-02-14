# minitalk
🚀 Minitalk: The Art of Sending Signals! 🌟 Ever wanted to communicate without Wi-Fi or sockets? Minitalk lets you send messages bit by bit using only UNIX signals (SIGUSR1 &amp; SIGUSR2)! 🛰️ Part of 42 School, this project challenges you to master low-level communication, bitwise operations, and real-time message handling! 🔥

# ❄️ Minitalk - Signal-Based Communication in C ❄️

<img src="https://capsule-render.vercel.app/api?type=wave&color=gradient&height=150&section=header&text=Minitalk%20Project&fontSize=30&desc=Let%20it%20snow!%20❄️&descAlign=70"/>

![Status](https://img.shields.io/badge/Status-In%20Progress-blue?style=for-the-badge)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![Signals](https://img.shields.io/badge/Signals-SIGUSR1/SIGUSR2-red?style=for-the-badge)



🛰️ **Ever wanted to communicate without Wi-Fi, Bluetooth, or sockets?**  
Welcome to **Minitalk**, where we send messages **bit by bit** using **pure UNIX signals**!  

💡 This project is part of **42 School** and challenges you to implement a **client-server communication system** with **just SIGUSR1 and SIGUSR2**. Sounds simple? **Think again!** 😏  

---

## ✨ **Why Minitalk is Special?**  
🔹 **No TCP/IP, Just Signals** – Forget about traditional networking!  
🔹 **Multiple Clients Supported** – Server keeps listening non-stop!  
🔹 **Bit-Level Transmission** – Master the art of encoding messages with bits!  
🔹 **Error-Free & Memory-Safe** – No leaks, no crashes, just smooth communication!  
🔹 **Bonus: Unicode Support & Acknowledgments**  

---

## 📡 **How It Works?**  
1️⃣ **Server waits for messages** 🖥️  
2️⃣ **Client sends characters bit by bit** 💡  
3️⃣ **Server deciphers the bits & prints the message** 📝  

🔧 **No magic, just clever use of UNIX signals!**  

---

## 🎯 **Project Goals**  
✅ **Master UNIX signals** (`SIGUSR1`, `SIGUSR2`)  
✅ **Implement efficient message transmission**  
✅ **Handle multiple clients dynamically**  
✅ **No memory leaks, no crashes, no unnecessary delays**  

---

📂 minitalk/
 ├── 📄 client.c      # Client program
 ├── 📄 server.c      # Server program
 ├── 📄 minitalk.h    # Header file
 ├── 📄 Makefile      # Compilation script
 ├── 📄 README.md     # This file!


## 🛠️ **Installation & Usage**  
1️⃣ Clone the repo  
git clone https://github.com/yourusername/minitalk.git
cd minitalk

2️⃣ Compile
make

3️⃣ Run the server
./server

4️⃣ Send a message from the client
./client <server_pid> "Hello, Minitalk!"

❄️ Snowflake Aesthetic ❄️
🌨️🌨️🌨️🌨️🌨️🌨️🌨️  
❄️  Minitalk: Signals Only!  ❄️  
🌨️🌨️🌨️🌨️🌨️🌨️🌨️  
