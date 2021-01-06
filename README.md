# FP-IDS : Intrusion Detection Using Vibration Sensor SW-420 Notification with Twilio

  * Nama  : Milenia Ulwan Zafira 
  * NRP   : 05311840000020
  
## Penjelasan
![Prototype alat](https://github.com/MilenFifi/FP-IDS/blob/main/84482.jpg)
Gambar diatas merupakan prototype alat untuk final project "Intrusion Detection Using Vibration Sensor SW-420 Notification with Twilio", alat yang dibutuhkan dalam pengerjaan alat ini antara lain:
  1. Arduino Uno
  2. Led
  3. Bread Board / Project Board
  4. Vibration Sensor SW-420 / Vibration Module
  5. Resistor 330ohm
  6. Kabel Jumper Male-to-Male

## Cara Pengerjaan:
Bagian Alat:
1. Merangkai alat seperti gambar diatas.
2. Upload coding arduino pada alat, coding dapat dilihat pada [Coding Arduino](https://github.com/MilenFifi/FP-IDS/blob/main/meas.ino)
3. Mencoba dengan membuka Serial Monitor. "/n"
Bagian Twilio:
1. buat akun pada website twilio sampai bisa buat project
2. Buat Project dan sambungkan pada Whatsapp seperti gambar dibawah
![WA Twilio](https://github.com/MilenFifi/FP-IDS/blob/main/twilio%20join.PNG)
![Twilio WA](https://github.com/MilenFifi/FP-IDS/blob/main/twilio.PNG)
3. Lalu buat coding python seperti di [Coding Python](https://github.com/MilenFifi/FP-IDS/blob/main/Vib.py)
4. Install Twilio pada terminal dengan ketik ``pip install twilio``
5. Install library serial dengam ketik ``pip install pyserial``
6. Run Program
![Alat Getar](https://github.com/MilenFifi/FP-IDS/blob/main/84425.jpg)
![Deteksi](https://github.com/MilenFifi/FP-IDS/blob/main/Capture.PNG)

*NB : ingat untuk merubah Autentikasi Token pada coding python
