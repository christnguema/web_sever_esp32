# web_sever_esp32
# ESP32 Web Server Project

## 🇫🇷 Français

### Description
Ce projet utilise un ESP32 pour créer un serveur web simple permettant de contrôler une LED et de lire la valeur d’un capteur de luminosité. L’ESP32 peut se connecter à un réseau Wi-Fi existant ou créer son propre réseau en mode point d’accès (AP).

### Fonctionnalités
- Contrôle d’une LED via l’interface web
- Lecture en temps réel du capteur de luminosité
- Interface web hébergée depuis le SPIFFS du microcontrôleur
- Possibilité de fonctionner en **mode station** ou **mode point d’accès**

### Matériel requis
- ESP32 (DevKit v1 recommandé)
- LED + résistance (si pas intégrée)
- Capteur de luminosité analogique
- Câbles de connexion

### Installation
1. Installer PlatformIO dans VS Code
2. Téléverser les fichiers sur l’ESP32
3. Monter le SPIFFS avec `index.html`, `style.css`, `script.js`
4. Connecter à un réseau Wi-Fi ou laisser l’ESP32 créer son AP
5. Accéder au serveur via l’IP affichée dans le moniteur série

### Création et connexion au réseau de l’ESP32
1. Si l’ESP32 est en **mode point d’accès (AP)**, il diffuse un SSID par défaut (ex : `christ_esp32`).  
2. Sur votre ordinateur ou smartphone, recherchez le réseau Wi-Fi `christ_esp32`.  
3. Connectez-vous avec le mot de passe défini dans le code (`123456789`).  
4. Une fois connecté, ouvrez un navigateur et entrez l’adresse IP de l’ESP32, généralement `192.168.4.1`.  
5. L’interface web s’affiche, vous permettant de contrôler la LED et de lire la luminosité en temps réel.

### Utilisation
- Accéder à l’interface web
- Cliquer sur **ON** / **OFF** pour contrôler la LED
- Observer la luminosité affichée en temps réel

---

## 🇬🇧 English

### Description
This project uses an ESP32 to create a simple web server that allows controlling an LED and reading the value from a light sensor. The ESP32 can connect to an existing Wi-Fi network or create its own access point (AP) network.

### Features
- LED control via web interface
- Real-time light sensor readings
- Web interface served from the ESP32’s SPIFFS
- Can operate in **station mode** or **access point mode**

### Required Hardware
- ESP32 (DevKit v1 recommended)
- LED + resistor (if not built-in)
- Analog light sensor
- Connection wires

### Installation
1. Install PlatformIO in VS Code
2. Upload files to the ESP32
3. Mount SPIFFS with `index.html`, `style.css`, `script.js`
4. Connect to a Wi-Fi network or let the ESP32 create its AP
5. Access the server via the IP displayed in the serial monitor

### Creating and connecting to the ESP32 network
1. If the ESP32 is in **access point (AP) mode**, it broadcasts a default SSID (e.g., `christ_esp32`).  
2. On your computer or smartphone, search for the Wi-Fi network `christ_esp32`.  
3. Connect using the password defined in the code (`123456789`).  
4. Once connected, open a browser and enter the ESP32’s IP address, usually `192.168.4.1`.  
5. The web interface will load, allowing you to control the LED and read the light sensor in real time.

### Usage
- Open the web interface
- Click **ON** / **OFF** to control the LED
- Watch the real-time light sensor readings

---

## 🇩🇪 Deutsch

### Beschreibung
Dieses Projekt verwendet einen ESP32, um einen einfachen Webserver zu erstellen, der es ermöglicht, eine LED zu steuern und den Wert eines Licht Sensors auszulesen. Der ESP32 kann sich mit einem vorhandenen WLAN verbinden oder ein eigenes Access Point (AP) Netzwerk erstellen.

### Funktionen
- LED-Steuerung über Webinterface
- Echtzeit-Lichtwertanzeige vom Sensor
- Webinterface über SPIFFS des ESP32
- Betrieb im **Station-Modus** oder **Access Point-Modus** möglich

### Benötigte Hardware
- ESP32 (DevKit v1 empfohlen)
- LED + Widerstand (falls nicht eingebaut)
- Analoger Lichtsensor
- Anschlusskabel

### Installation
1. PlatformIO in VS Code installieren
2. Dateien auf den ESP32 hochladen
3. SPIFFS mit `index.html`, `style.css`, `script.js` mounten
4. Mit einem WLAN verbinden oder ESP32 eigenes AP erstellen lassen
5. Server über die im Serial Monitor angezeigte IP erreichen

### Erstellung und Verbindung mit dem ESP32-Netzwerk
1. Wenn der ESP32 im **Access Point (AP)-Modus** ist, sendet er ein Standard-SSID (z.B. `christ_esp32`).  
2. Auf Ihrem Computer oder Smartphone nach dem Wi-Fi-Netzwerk `christ_esp32` suchen.  
3. Mit dem im Code definierten Passwort verbinden (`123456789`).  
4. Nach erfolgreicher Verbindung einen Browser öffnen und die IP-Adresse des ESP32 eingeben, normalerweise `192.168.4.1`.  
5. Das Webinterface erscheint und ermöglicht die Steuerung der LED und die Anzeige der Lichtwerte in Echtzeit.

### Nutzung
- Webinterface öffnen
- Auf **ON** / **OFF** klicken, um die LED zu steuern
- Echtzeit-Lichtwerte beobachten
