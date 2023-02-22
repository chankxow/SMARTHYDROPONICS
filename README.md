# Project_matthayom_5
<h1>โครงงาน ม.5 ศิลปะหัตถกรรม ครั้งที่ 70 2565</h1>
<h2>เป็นโครงงานที่ใช้ความรู้และประสบการณ์จากการเข้าค่ายและศึกษาหาความรู้ด้วยตนเองแล้วนำมาพัฒนาต่อยอดทำโครงงานทักษะวิชาการ กับการแข่งศิลปะหัตถกรรม โครงงานคอมพิวเตอร์ประเภทซอฟแวร์คอมพิวเตอร์ ปี 2565</h2> 

<h1>อุปกรณ์</h1>

<h2>เครื่องมือและอุปกรณ์ที่ใช้ในการดำเนินงาน(software)</h2>

<h3>Blynk</h3>
<img src="https://store.kidbright.info/upload/cover-image/1595158904-oAsZux.png" style="width="50px" height="50px" ">
<p>ใช้ทำระบบควบคุมIOT</p>

<h3>Thunkable </h3>
<img src="https://www.nocodeitalia.it/wp-content/uploads/2020/12/thunkable-1-1024x191.png" style="width="50px" height="50px"">
<p>ใช้ในการทำแอปพลิเคชั่นเฉพาะ</p>

<h3>Arduino IDE</h3>
<img src="https://s3.amazonaws.com/eventick-redactor/065c62c2-f169-4c54-a2d8-fee009e9ee1b/arduinoicon2.preview.png" style="width="50px" height="50px"">
<p>ใช้ในการพัฒนาโค้ดให้สามารถทำการควบคุมบอร์ดไมโครคอนโทรลดลอร์ได้</p>

<h2>ด้านฮาร์ดแวร์ (Hardware)
</h2>

<h3>Blynk</h3>

<h3>ESP32</h3>
<img src="https://th.bing.com/th/id/R.b02136248e37bd6f90bc862c685d1f3c?rik=N%2fwa6K%2bWtqqcKw&pid=ImgRaw&r=0" style="width="50px" height="50px"">
ESP32 เป็นชื่อของไอซีไมโครคอนโทรลเลอร์ที่รองรับการเชื่อมต่อ WiFi และ Bluetooth 4.2 BLE ในตัว ผลิตโดยบริษัท Espressif จากประเทศจีน โดยราคา ณ ที่เขียนบทความอยู่นี้ มีราคาไม่เกิน 500 บาท (บอร์ดพัฒนาสำเร็จรูป) โดยตัวไอซี ESP32 มีสเปคโดยละเอียด ดังนี้

ซีพียูใช้สถาปัตยกรรม Tensilica LX6 แบบ 2 แกนสมอง สัญญาณนาฬิกา 240MHz
มีแรมในตัว 512KB
รองรับการเชื่อมต่อรอมภายนอกสูงสุด 16MB
มาพร้อมกับ WiFi มาตรฐาน 802.11 b/g/n รองรับการใช้งานทั้งในโหมด Station softAP และ Wi-Fi direct
มีบลูทูธในตัว รองรับการใช้งานในโหมด 2.0 และโหมด 4.0 BLE
ใช้แรงดันไฟฟ้าในการทำงาน 2.6V ถึง 3V
ทำงานได้ที่อุณหภูมิ -40◦C ถึง 125◦C
นอกจากนี้ ESP32 ยังมีเซ็นเซอร์ต่าง ๆ มาในตัวด้วย ดังนี้

วงจรกรองสัญญาณรบกวนในวงจรขยายสัญญาณ
เซ็นเซอร์แม่เหล็ก
เซ็นเซอร์สัมผัส (Capacitive touch) รองรับ 10 ช่อง
รองรับการเชื่อมต่อคลิสตอล 32.768kHz สำหรับใช้กับส่วนวงจรนับเวลาโดยเฉพาะ
ขาใช้งานต่าง ๆ ของ ESP32 รองรับการเชื่อมต่อบัสต่าง ๆ ดังนี้

<ul>มี GPIO จำนวน 32 ช่อง
  <li>รองรับ UART จำนวน 3 ช่อง</li>
  <li>รองรับ SPI จำนวน 3 ช่อง</li>
  <li>รองรับ I2C จำนวน 2 ช่อง</li>
  <li>รองรับ ADC จำนวน 12 ช่อง</li>
  <li>รองรับ DAC จำนวน 2 ช่อง</li>
  <li>รองรับ I2S จำนวน 2 ช่อง</li>
  <li>รองรับ PWM / Timer ทุกช่อง</li>
  <li>รองรับการเชื่อมต่อกับ SD-Card</li>
  <li>นอกจากนี้ ESP32 ยังรองรับฟังก์ชั่นเกี่ยวกับความปลอดภัยต่าง ๆ ดังนี้</li>
</ul>

รองรับการเข้ารหัส WiFi แบบ WEP และ WPA/WPA2 PSK/Enterprise
มีวงจรเข้ารหัส AES / SHA2 / Elliptical Curve Cryptography / RSA-4096 ในตัว
ในด้านประสิทธิ์ภาพการใช้งาน ตัว ESP32 สามารถทำงานได้ดี โดย

รับ – ส่ง ข้อมูลได้ความเร็วสูงสุดที่ 150Mbps เมื่อเชื่อมต่อแบบ 11n HT40 ได้ความเร็วสูงสุด 72Mbps เมื่อเชื่อมต่อแบบ 11n HT20 ได้ความเร็วสูงสุดที่ 54Mbps เมื่อเชื่อมต่อแบบ 11g และได้ความเร็วสูงสุดที่ 11Mbps เมื่อเชื่อมต่อแบบ 11b
เมื่อใช้การเชื่อมต่อผ่านโปรโตคอล UDP จะสามารถรับ – ส่งข้อมูลได้ที่ความเร็ว 135Mbps
ในโหมด Sleep ใช้กระแสไฟฟ้าเพียง 2.5uA

<h3>DHT22 เซ็นเซอร์วัดอุณหภูมิและความชื้น
</h3>
<img src="https://www.mechatronicstore.cl/wp-content/uploads/2017/05/humidity-temperature-sensor-dht22.jpg" style="width="50px" height="50px"">
<p>ใช้ในการพัฒนาโค้ดให้สามารถทำการควบคุมบอร์ดไมโครคอนโทรลดลอร์ได้</p>

<h3>E-201-C PH Sensor เซ็นเซอร์วัดค่า PH</h3>
<img src="https://s3.amazonaws.com/eventick-redactor/065c62c2-f169-4c54-a2d8-fee009e9ee1b/arduinoicon2.preview.png" style="width="50px" height="50px"">
<p>ใช้ในการพัฒนาโค้ดให้สามารถทำการควบคุมบอร์ดไมโครคอนโทรลดลอร์ได้</p>

<h3>EC sensor เซ็นเซอร์วัดค่าการนeไฟฟ้าของน ้า</h3>
<img src="https://cdn2.botland.com.pl/66532-large_default/gravity-analogowy-czujnik-zasolenia-wody-i-gleby-dfrobot-dfr0300-h.jpg" style="width="50px" height="50px"">
<p>ใช้ในการพัฒนาโค้ดให้สามารถทำการควบคุมบอร์ดไมโครคอนโทรลดลอร์ได้</p>
