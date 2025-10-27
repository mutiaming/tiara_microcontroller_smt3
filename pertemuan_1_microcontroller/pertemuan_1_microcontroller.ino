int semester = 3;
String kelas = "C";
String matakuliah = "Microprosessor & Microcontroller";
bool kondisi = true;
void setup() {
  // put your setup code here, to run once:
  // pemanggilan variable
  // cara 1
  Serial.begin(9600);
  Serial.print("Kelas: ");
  Serial.println(kelas);

  // cara 2
  Serial.println("Kelas: " + (String) kelas); //kalau variablenya selain string harus di convert dulu pakai(string)
  Serial.println("Semester: " + semester);    //kalau ini memang sudah string jadi tidak usah

  //pengkondisian
  // untuk membandingkan 2 nilai: jika tidak ingin peduli dengan tipe datanya gunakan ==
  //                              jika tipe mempedulikan tipe data harus sama maka gunakan ===
  // untuk tidak sama dengan : !=
  // untuk membandingkan lebih besar > untuk lebih besar samadngan >= untuk lebih kecil < dst...
    if(kondisi == true){
      Serial.println("Hari ini ada kelas di: ");
      Serial.println("Kelas: " + (String) kelas);
    } else{
      Serial.println("Hari ini tidak ada kelas");
    }


}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1; i<=6; i++){
    Serial.println("Angka ke: " + (String)i);
    delay(2000);
  }
    Serial.println(" ");
  
}
