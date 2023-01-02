#include <bits/stdc++.h>
#include <windows.h>
#include<ctype.h>

using namespace std;

string namaPasien, alamatPasien;
char gender, lanjut, pilih, bayar, booking;
int umur, waktu, konsul, buatJanji, biayaKonsultasi, pertemuan, hasil, totalBayar, option;
int x = 0;
int totalBiaya;
	
string selamat[30]={"S","E","L","A","M","A","T"," ","D","A","T","A","N","G"};
string animasiLogin[32]={".",".",".",".",".",".","A","n","d","a"," ","B","e","r","h","a","s","i","l"," ","l","o","g","i","n",".",".",".",".",".","."};

string nama, alamat, T_lahir, pas, usr , username, pass, cs, Gmail;
char  buat, a, bln[15], menu_obat, pilexit, akunbaru;
int pilihan,datapilihan, status=1, salah, jenis,i=0, pil,pa=0,pb=0,pc=0;
int menu, menu2, w, sisa=4, a1=1, y, hr, thn, u=1, al=1;
char keluhan[16], ulang;
int l,j, lod=1, tamp=1, buatbaru;
long total=0, tunai, kembali;

int indata, periode, umurPasien, tlp;
long int totalPesan, totalObat, totalDokter, biayakamar, biayaobat, biayadokter, totalbiaya;
char pilRawat, kamar;
string namaps, alamatps, mail, namapk, namaKamar, np;
char rawat, booking4, booking5, booking6, booking7, booking8,  cek, dopil, perawat, kmr, dokter, bidok;

int main();
void s_datapilihanng();
void Dasboard(void);
void obat(void);



// Struct data pasien
struct data_pasien {
    int No_regis;
    string nama;
	string alamat;
	long long int nik;
 	int umur;
 	float tinggi;
};

// Struct node BST (Binary Search Tree)
struct Node {
	data_pasien data;
  	Node *left;
  	Node *right;
  	int height ;
};

int max( int a , int b)
{
	return (a>b)?a:b ;
}

int height(struct Node *N)
{
	if(N==NULL)
		return 0 ;
	return N->height ;
}

// Fungsi membuat node baru
Node *createNode(data_pasien data) {
  	Node *node = new Node();
  	node->data = data;
  	node->height = 1 ;
  	node->left = NULL;
  	node->right = NULL;
  	return node;
}

// Fungsi menambahkan node baru ke BST
void insert(Node *&root, data_pasien data) {
  	if (root == NULL) {
    root = createNode(data);
    return;
  }

  	if (data.nik < root->data.nik) {
    insert(root->left, data);
  } else {
    insert(root->right, data);
  }
}
// Fungsi mencetak data node  (inorder)
void inorder(Node *root) {
  	if (root == NULL) {
    return;
  }

  	inorder(root->left);

  // Mencetak data dari root
  	cout << "\t NIK    : " << root->data.nik << endl;
  	cout << "\t Nama   : " << root->data.nama<< endl;
  	cout << "\t Alamat : " << root->data.alamat << endl;
  	inorder(root->right);
}
// Fungsi menghapus data BST
Node *deleteNode(Node *root, int nik) {
  	// Jika root masih kosong, tidak ada data yang bisa dihapus
  	if (root == NULL) {
  	cout << "Data Tidak Ditemukan \n";
    return NULL;
 	}

// Jika no seri yang dicari lebih kecil root, cari di subtree kiri
  	if (nik < root->data.nik) {
    root->left = deleteNode(root->left, nik);
    cout << "Data berhasil dihapus \n";
  	} else if (nik > root->data.nik) {
    root->right = deleteNode(root->right, nik);
    cout << "Data berhasil dihapus \n";
  	} else {

    // Jika root satu subtree atau tidak memiliki subtree sama sekali
    if (root->left == NULL) {
    Node *temp = root->right;
    delete root;
    return temp;
    } else if (root->right == NULL) {
    Node *temp = root->left;
    delete root;
    return temp;
    } else {
    // Jika root terdapat subtree, cari node terkecil di subtree kanan
    Node *temp = root->right;
    while (temp->left != NULL) {
	temp = temp->left;}
	// Salin data dari node terkecil ke root
  	root->data = temp->data;

  	// Hapus node terkecil di subtree kanan
  	root->right = deleteNode(root->right, temp->data.nik);
}}
return root;
}

struct data
 {
 char kode[10], nama[20];
 long banyak, harga, jual;
 } produk[50];


//membuat fungsi delay	
void delay(){
	int delay;
	delay=1;
	while(delay<500000){
		delay++;
	}
}
void delaymax(){
	int delay;
	delay=1;
	while(delay<10000000){
		delay++;
	}
}

//menentukan titik kordinat display loading
void gotoxy(int x, int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

//fungsi Loading
void loading(void){
	system("color B0");	
	
	for(l=40; l<=70; l++){
	gotoxy(l,11);
	cout<<". ";

	gotoxy(l,12);
	cout<<"_";

	gotoxy(l,15); 
	delaymax(); delay();
	cout<<"_";
	
	}
	
	for(l=1; l<=100; l++){
		system("color B4");	
		if(l<=32){
			gotoxy(39+l,10);
			cout<<animasiLogin[l-1]<<" ";
			gotoxy(40,14);
			cout<<"      L O A D I N G  "<<l<<" %     ";
		}else {
				gotoxy(40,14);
				cout<<"      L O A D I N G  "<<l<<" %     "; 		
		}
		
		gotoxy(5+l,19);
		cout<<"=>";
		gotoxy(105-l,20);
		cout<<"<=";
		delay();
	}
	
	delaymax(); 	delay();		
	system("cls");
	system("color 09");
	for(int k=12; k<17; k++){
		gotoxy(44,k);
		delay(); delaymax(); 
		delay(); delaymax(); 
		cout<<":";
		gotoxy(76,28-k);
		delay();
		cout<<":";
		delaymax(); delaymax();
		delaymax(); 
		delaymax(); delaymax(); 	delaymax();
	}
	delaymax(); delay();
	delaymax(); delaymax();
	int c=1;
	for(int k=1; k<30; k++){
		gotoxy(73-k,11);
		delay();
		cout<<"....";

		if(k>=6 || k<=22){
		gotoxy(45+k+c, 14);
		cout<<selamat[k-1]<<" ";
		delay();
		c+=1;
		}else{
		}
		gotoxy(44+k,16);
		cout<<"....";
		delaymax(); delaymax(); 	delaymax();
		delaymax(); delaymax(); 
	}
		delaymax(); delaymax(); 	delaymax();
		delaymax(); delaymax(); 	delaymax();
		delaymax(); delaymax(); 	delaymax();

}

//membuat garis
long line()
 {
 	for(int j=0; j<90; j++){
 		cout<<"_";
	 }
 	cout<<endl;
 }
 
 
/*========================================dibawah ini merupakan fungsi utama dan fungsi void ==================================
===========================================================================================================================
*/

void utama(){
	cout<<"\t===================================================================================== "<<endl;
	cout<<"\t|                           RUMAH SAKIT UPN VETERAN HEALTHY                          |"<<endl;
	cout<<"\t|    Jl. Rungkut Madya No.1, Gn. Anyar, Kec. Gn. Anyar, Kota SBY, Jawa Timur 60294   |"<<endl;
	cout<<"\t|            email: RSUVH@gmail.com  Website: www.upnveteranhealty.ac.id             |"<<endl;
	cout<<"\t-------------------------------------------------------------------------------------"<<endl<<endl;
}

void terimakasih(){
	 cout<<"/n\t                      TERIMAKASIH\n";
	 cout<<"\t                  semoga lekas sembuh\n";
	 cout<<"\t         info lengkap : www.upnveteranhealty.com\n";
	 cout<<"\t                 CC : xxxxxxxxxx\n";
}

//fungsi tampilan header
void head(void){
	al=1;
	
	if(tamp==1){
//		setcolor(E,7);
		for(int j=32; j<77; j++){
	 	gotoxy(j,1);
	 	cout<<"_";
	 	delay();
	 	cout<<"\n\t\t\t\t|                                            |\n";
	 	cout<<"\t\t\t\t|          SELAMAT DATANG DI APLIKASI        |\n";
		cout<<"\t\t\t\t|               DOCTOR EMERGENCY             |\n";
		cout<<"\t\t\t\t|              UPN  VETERAN JATIM            |\n";
		cout<<"\t\t\t\t|          ..........................        |\n";
		
		gotoxy(77-al,7);
		if(j==32){
			cout<<"_|";
			al=al+1;
		}else if(j==76){
			cout<<"|_";
			al=al+1;
		}else{
			cout<<"_";
	 		al=al+1;
		}
		delay();
	 	delaymax();
	 }
	 tamp+=1;
	cout<<endl<<endl;
	al=1;
	}else{
		cout<<"\n\t\t\t\t_____________________________________________\n";
		cout<<"\t\t\t\t|         SELAMAT DATANG DI APLIKASI         |\n";
		cout<<"\t\t\t\t|              DOCTOR EMERGENCY              |\n";
		cout<<"\t\t\t\t|             UPN  VETERAN JATIM             |\n";
		cout<<"\t\t\t\t|         ..........................         |\n";
		cout<<"\t\t\t\t|____________________________________________|\n\n";
	}

//	system("color E0");
}

/////////////////////////////////////////////// ini menu pilihan konsultasi //////////////////////////////////////////////////////// 

//fungsi gejala
void gejala() {
	system("cls");
			
			w=0;
			do {
			cout<<"\n\t\t INPUT KELUHAN "<<w+1<<endl;
					cout<<"\n";
					cout<<"\t\t\t\t\t________________________"<<endl;
					cout<<"\t\t\t\t\t|       KELUHAN        |"<<endl;
					cout<<"\t\t\t\t\t|______________________|"<<endl;
					cout<<"_____________________________________________________________________________________________________"<<endl;
					cout<<"|    KODE  |         GEJALA         |     KODE   |    GEJALA     |      KODE     |       GEJALA     |"<<endl;
					cout<<"|__________|________________________|____________|_______________|_______________|__________________|"<<endl;
					cout<<"|    A     |         DEMAM          |      B     |   FLU BIASA   |       C       |   SAKIT PERUT    |"<<endl;
					cout<<"|__________|________________________|____________|_______________|_______________|__________________|"<<endl;
					cout<<"|    A     |   TENGGROKAN SAKIT     |      B     |     DEMAM     |       C       | PERUT KEMBUN     |"<<endl;
					cout<<"|__________|________________________|____________|_______________|_______________|__________________|"<<endl;
					cout<<"|    A     | NYERI SAAT MENENALAN   |      B     |  BATUK KERING |       C       |  SERING BAB      |"<<endl;
					cout<<"|__________|________________________|____________|_______________|_______________|__________________|"<<endl;
					cout<<"|    A     |     BATUK KERING       |      B     |     PILEK     |       C       |   KELELAHAN      |"<<endl;
					cout<<"|__________|________________________|____________|_______________|_______________|__________________|"<<endl;
					cout<<"|    A     |         PILEK          |      B     |  SESAK NAPAS  |       C       | PENURUNAN BERAT  |"<<endl;
					cout<<"|__________|________________________|____________|_______________|_______________|__________________|"<<endl;
					cout<<"|    A     |                        |      B     |               |       C       |                  |"<<endl;
					cout<<"|__________|________________________|____________|_______________|_______________|__________________|\n\n"<<endl;
			cout<<"Masukkan kode keluhan : "; cin>>keluhan[w];
			cout<<"Apakah ada keluhan lain (y/t)? "; cin>>a;
			w=w+1;
			system("cls");
			} while (a == 'y' || a == 'Y');
	
}


/////////////////////////////////fungsi menu konsultasi///////////////////////////////////
void konsultasi(){
	// Membuat root
  	Node *root = NULL;
	// Variabel menyimpan data data_pasien
	data_pasien data;
	do
 	{
 	utama();
 	cout<<endl<<endl;
 	cout << "MENU PILIHAN : " << endl;
 	cout << "1. Tambahkan datapilihan Konsultan." << endl;
 	cout << "2. Hapus datapilihan Konsultan." << endl;
 	cout << "3. Tampilkan datapilihan Konsultan."<< endl;
 	cout << "0. Keluar program." << endl;
 	cout << endl << " Pilihan >> ";
 	cin >> option;
 	system("cls");
 	switch (option)
 	{
 		case 1 :
			cout<<"\t\t\t DATA 	PASIEN \n"<<endl;
			cout << "Masukkan NIK      : "; cin >> data.nik;
			cout << "Masukkan Nama     : "; getline(cin>> ws,data.nama);
			cout << "Masukkan Alamat   : "; getline(cin>> ws,data.alamat);
			cout << "Masukkan Umur     : "; cin >> data.umur;
			cout << "Masukkan Tinggi   : "; cin >> data.tinggi;
    		insert(root, data);
    					system ("cls");
//    		cin.ignore(numeric_limits<streamsize>::max());
    		system("pause");

			pa=0,pb=0,pc=0;
			i=0;
			gejala();
			do{
				if(keluhan[i]=='a' ||keluhan[i]=='A' ){
				 	pa=pa+1;	
				 	
				} else if (keluhan[i]=='b' || keluhan[i]=='B') {
					pb=pb+1;
				
				} else if (keluhan[i]=='c' || keluhan[i]=='C') {
					pc=pc+1;
				
				} else {
					cout<<"Belum ada inputan"<<endl;
				}
				i+=1;

			}while(i!=w);
			
				if (pa>pb && pa>pc){
					cout<<"\n\t\t________________________________________________" <<endl;
					cout<<"\t\t|                    TERVONIS                   |" <<endl;
					cout<<"\t\t|                                               |" <<endl;
					cout<<"\t\t| Nama       : "<<data.nama<<setw(20)<<"|"<<setw(1) <<endl;
					cout<<"\t\t| Alamat     : "<<data.alamat<<setw(25)<<"|"<<setw(1) <<endl;
					cout<<"\t\t| Umur       : "<<data.umur<<setw(20)<<"|"<<setw(1)<<endl;
					cout<<"\t\t| Penyakit   : ISPA                             |" <<endl;
					cout<<"\t\t| Penyebab   :  infeksi virus atau bakteri pada |"<<endl;
					cout<<"\t\t|               saluran pernapasan              |"<<endl;
					cout<<"\t\t|_______________________________________________|" <<endl;
				} else if (pb>pa && pb>pc){
					cout<<"\n\t\t________________________________________________" <<endl;
					cout<<"\t\t|                    TERVONIS                   |" <<endl;
					cout<<"\t\t|                                               |" <<endl;
					cout<<"\t\t| Nama       : "<<data.nama<<setw(20)<<"|"<<setw(1) <<endl;
					cout<<"\t\t| Alamat     : "<<data.alamat<<setw(25)<<"|"<<setw(1) <<endl;
					cout<<"\t\t| Umur       : "<<data.umur<<setw(20)<<"|"<<setw(1)<<endl;
					cout<<"\t\t| Penyakit   : Covid                            |" <<endl;
					cout<<"\t\t| Penyebab   : terinveksi virus SARS-CoV-2      |" <<endl;
					cout<<"\t\t|_______________________________________________|" <<endl;
				} else if(pc>pa && pc>pb){
					cout<<"\n\t\t________________________________________________" <<endl;
					cout<<"\t\t|                    TERVONIS                   |" <<endl;
					cout<<"\t\t|                                               |" <<endl;
					cout<<"\t\t| Nama       : "<<data.nama<<setw(20)<<"|"<<setw(1) <<endl;
					cout<<"\t\t| Alamat     : "<<data.alamat<<setw(25)<<"|"<<setw(1) <<endl;
					cout<<"\t\t| Umur       : "<<data.umur<<setw(20)<<"|"<<setw(1)<<endl;
					cout<<"\t\t| Penyakit   : Cacingan                         |" <<endl;
					cout<<"\t\t| Penyebab   : terinfeksi parasit cacing ke     |" <<endl;
					cout<<"\t\t|              dalam tubuh                      |" <<endl;
					cout<<"\t\t|_______________________________________________|" <<endl;
				}else{
					cout<<"\t\n\n\npenyakit anda belum diketahui"<<endl<<endl;
					cout<<"Silhkan pilihan 1 gejala lagi"<<endl;
					system("pause");
					gejala();
			}
			system("pause");
			system("cls");
 		break;
 		
 		case 2 :
	  		int nikhapus;
			cout << "\t\nMasukkan NIK : ";
			cin >> nikhapus;
			// Menghapus data infobuku dari BST
			root = deleteNode(root, nikhapus);
		 	system("pause");
		 	system("cls");
 		break;
 		case 3 :
				system ("cls");
				inorder(root);
				system("pause");
				system ("cls");	
 		break;
 	}
 	}
 	while (option != 0);
	
}

/////////////////////////////////////////// ini menu pilihan rawat inap dan rawat jalan ////////////////////////////////////////////////////////////

void rawat_pasien(){
	int konsul;
	do{
	system("cls");
	gorawat:
	utama();
	cout<<"Menu rawat"<<endl;
	cout<<"1. Rawat inap "<<endl;
	cout<<"2. Rawat jalan "<<endl;
	cout<<"3. keluar"<<endl;
	cout<<"masukkan menu pilihan : "; cin>>menu;
	system("cls");
	switch(menu){
		case 1:
			menu:
				
				menu1:
				totalPesan=0;
				totalDokter=0;
            	totalDokter=0;
            	totalBayar=0;
				    system("cls");
				 cout<<endl;
				    cout<<"|===========================================================|"<<endl;
				    cout<<"|                         RAWAT INAP                        |"<<endl;
				    cout<<"|===========================================================|"<<endl;
				    cout<<"|                                                           |"<<endl;
				    cout<<"|      Jenis penyakit (5)                                  |"<<endl;
				    cout<<"|      Dokter (5)                                          |"<<endl;
				    cout<<"|      Jenis kamar (VVIP, VIP, GENERAL )                   |"<<endl;
				    cout<<"|      Lama waktu rawat inap                               |"<<endl;
				    cout<<"|      Data pasien                                         |"<<endl;
				    cout<<"|      Biaya dokter, biaya kamar, biaya obat               |"<<endl;
				    cout<<"|      Data obat (4 penyakit)                              |"<<endl;
				    cout<<"|===========================================================|"<<endl<<endl;
				    cout<<"Tekan Y untuk melanjukan : ";
				    cin>>lanjut;
				    if (lanjut=='y'||lanjut=='Y')
				    {
				     goto menu2;
				    }else
				    {
				     cout<<endl<<endl<<endl<<endl;
				  cout<<"                             TERIMA KASIH"<<endl;
				  goto gorawat;
				 }
				menu2:
				 system("cls");
				        cout<<endl;
					cout<<"\t===================================================================================== "<<endl;
					cout<<"\t|                           RUMAH SAKIT UPN VETERAN HEALTHY                          |"<<endl;
					cout<<"\t|    Jl. Rungkut Madya No.1, Gn. Anyar, Kec. Gn. Anyar, Kota SBY, Jawa Timur 60294   |"<<endl;
					cout<<"\t|            email: RSUVH@gmail.com  Website: www.upnveteranhealty.ac.id             |"<<endl;
					cout<<"\t-------------------------------------------------------------------------------------"<<endl<<endl;
				        cout<<"  Syarat untuk mendapatkan pelayanan perawatan inap di Rumah Sakit Premier Indonesia,"<<endl;
				        cout<<"  Anda harus mengisi semua form berikut secara berurut (wajib). Terima kasih."<<endl<<endl;
				  cout<<"  1. Jenis Kamar"<<endl;
				  cout<<"  2. Jenis Perawatan, Obat dan Dokter"<<endl<<endl;
				  cout<<"  Lakukan Pengisian Form Mulai dari [1-2]= ";
				  cin>>indata;
				  cout<<endl;
				  switch (indata)
				  {
				
				jenis_kamar:
				   case 1:
				    system("cls");
				    cout<<endl;
				    			cout<<" ================================================================"<<endl;
				                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                 "<<endl;
				                cout<<" ================================================================"<<endl;
				    			cout<<" _______________________________________________________________ "<<endl;
				                cout<<" | No.|"<<"   Jenis Kamar                                           |"<<endl;
				                cout<<" |______________________________________________________________|"<<endl;
				                cout<<" | 1  |   VVIP                                                  |"<<endl;
				                cout<<" | 2  |   VIP                                                   |"<<endl;
				                cout<<" | 3  |   GENERAL                                               |"<<endl;
				                cout<<" |____|_________________________________________________________|"<<endl<<endl;
				             cout<<" Pilihan Anda[1/2/3]= ";
				             cin>>kamar;
				             cout<<endl;
				
				            if (kamar == '1')
				            {
					            totalPesan=0;
					             system("cls");
					             cout<<endl;
				                cout<<"                               VvIP"<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl;
				                cout<<"  Fasilitas Kamar"<<endl<<endl;
				                cout<<"  1. Air Conditioner                      11. Meja"<<endl;
				                cout<<"  2. 1 Bed                                12. Smart TV 72''"<<endl;
				                cout<<"  3. 1 Kamar mandi (air panas & dingin)   13. Sofabed"<<endl;
				                cout<<"  4. Bedside cabinet                      14. Kulkas"<<endl;
				                cout<<"  5. Kursi tunggu                         15. Bed penunggu"<<endl;
				                cout<<"  6. Overbed table                        16. Telepon"<<endl;
				                cout<<"  7. Meja TV                              17. Ruang keluarga"<<endl;
				                cout<<"  8. Almari pakaian                       18. 1 Set meja makan"<<endl;
				                cout<<"  9. Refigrator                           19. Kitchen set"<<endl;
				                cout<<"  10. Dispencer                           20. Mini bar"<<endl<<endl;
				                cout<<"  Tarif Kamar per malam Rp. 3.500.000,-"<<endl;
				                cout<<"  Pesan sekarang (y/n): ";
				                cin>>booking;
				                cout<<endl;
				
				                if (booking == 'y'||booking=='Y')
				                {
				                 system("cls");
				                    cout<<"  Silahkan Masukkan Data Pemesanan"<<endl;
				                    cout<<"  Nama Pemesan Kamar   :";
				                    getline(cin>> ws,namapk);
				                    cout<<"  Periode (malam)      :";
				                    cin>>periode;
				                    cout<<"  No. telepon          :";
				                    cin>>tlp;
				                    cout<<"  Email                :";
				                    getline(cin>>ws,mail);
				                    cout<<"  Alamat               :";
				                    getline(cin>>ws,alamat);
				                    cout<<endl;
				                    system("cls");
				                    cout<<endl;
				                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
				                    cout<<"  Data Pemesan Kamar Perawatan"<<endl;
				                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
				                    cout<<"  | Nama Pemesan Kamar    || "<<namapk<<"      "     <<endl;
				                    cout<<"  | Periode (malam)       || "<<periode<<" malam "<<endl;
				                    cout<<"  | No. Telepon           || "<<tlp<<"\n";
				                    cout<<"  | Email                 || "<<mail<<"     "     <<endl;
				                    cout<<"  | Alamat                || "<<alamat<<"  "      <<endl;
				    				 totalPesan=(periode*3500000);
				                    cout<<"  | Biaya Kamar per malam || Rp 3500000,-"        <<endl;
				                    cout<<"  | Total Biaya Kamar     || Rp "<<totalPesan<<",-                *sesuai periode"<<endl;
				                    cout<<"  -------------------------------------------------------------------------------------"<<endl<<endl;
				                    cout<<"  Pilih Jenis Perawatan (y/n): ";
				                    cin>>pilih;
				                    cout<<endl;
				
				                    if (pilih == 'y'||pilih=='Y')
				                    {
				                        goto menu2;
				                    }
				                    else
				                    {
				                        goto menu1;
				                    }
				                }
				                else
				                {
				                    goto jenis_kamar;
				                }
				            }
				            else if (kamar == '2')
				            {
				            	totalPesan=0;
				             	system("cls");
				             	cout<<endl;
				                cout<<"                             VIP"<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl;
				                cout<<"  Fasilitas Kamar"<<endl<<endl;
				                cout<<"  1. Air Conditioner                      11. Meja"<<endl;
				                cout<<"  2. 1 Bed                                12. Smart TV 72''"<<endl;
				                cout<<"  3. 1 Kamar mandi (air panas & dingin)   13. Sofabed"<<endl;
				                cout<<"  4. Bedside cabinet                      14. Kulkas"<<endl;
				                cout<<"  5. Kursi tunggu                         15. Bed penunggu"<<endl;
				                cout<<"  6. Overbed table "<<endl;
				                cout<<"  7. Meja TV "<<endl;
				                cout<<"  8. Almari pakaian"<<endl;
				                cout<<"  9. Refigrator "<<endl;
				                cout<<"  10. Dispencer"<<endl<<endl;
				                cout<<"  Tarif Kamar per malam Rp. 2.500.000,-"<<endl;
				                cout<<"  Pesan sekarang (y/n): ";
				                cin>>booking;
				                cout<<endl;
				
				                if (booking == 'y'||booking=='Y')
				                {
				                 system("cls");
				                    cout<<"  Silahkan Masukkan Data Pemesanan"<<endl;
				                    cout<<"  Nama Pemesan Kamar   :";
				                    getline(cin>> ws,namapk);
				                    cout<<"  Periode (malam)      :";
				                    cin>>periode;
				                    cout<<"  No. telepon          :";
				                    cin>>tlp;
				                    cout<<"  Email                :";
				                    getline(cin>>ws,mail);
				                    cout<<"  Alamat               :";
				                    getline(cin>>ws,alamat);
				                    cout<<endl;
				                    system("cls");
				                    cout<<endl;
				                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
				                    cout<<"  Data Pemesan Kamar Perawatan"<<endl;
				                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
				                    cout<<"  | Nama Pemesan Kamar    || "<<namapk<<"      "     <<endl;
				                    cout<<"  | Periode (malam)       || "<<periode<<" malam "<<endl;
				                    cout<<"  | No. Telepon           || "<<tlp<<"\n";
				                    cout<<"  | Email                 || "<<mail<<"     "     <<endl;
				                    cout<<"  | Alamat                || "<<alamat<<"  "      <<endl;
				    				 totalPesan=(periode*2500000);
				                    cout<<"  | Biaya Kamar per malam || Rp 2500000,-"        <<endl;
				                    cout<<"  | Total Biaya Kamar     || Rp "<<totalPesan<<",-                *sesuai periode"<<endl;
				                    cout<<"  -------------------------------------------------------------------------------------"<<endl<<endl;
				                    cout<<"  Pilih Jenis Perawatan (y/n): ";
				                    cin>>pilih;
				                    cout<<endl;
				
				                    if (pilih == 'y'||pilih=='Y')
				                    {
				                        goto menu2;
				                    }
				                    else
				                    {
				                        goto menu1;
				                    }
				                }
				                else
				                {
				                    goto jenis_kamar;
				                }
				            }
				            else if (kamar == '3')
				            {
				            	totalPesan=0;
					            system("cls");
					            cout<<endl;
				                cout<<"                            GENERAL"<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl;
				                cout<<" Fasilitas Kamar"<<endl<<endl;
				                cout<<" 1. Air Conditioner"<<endl;
				                cout<<" 2. 1 Bed"<<endl;
				                cout<<" 3. 1 Kamar mandi (air panas & dingin)"<<endl;
				                cout<<" 4. 1 Set sofa"<<endl;
				                cout<<" 5. Bedside cabinet"<<endl;
				                cout<<" 6. bed penunggu"<<endl;
				                cout<<" 7. Kursi tunggu"<<endl;
				                cout<<" 8. Meja"<<endl;
				                cout<<" 9. Lemari kecil"<<endl;
				                cout<<" 10. TV 21'' "<<endl<<endl;
				                cout<<" Tarif Kamar per malam Rp. 1.300.000,-"<<endl;
				                cout<<" Pesan sekarang (y/n): ";
				                cin>>booking;
				                cout<<endl;
				
				                if (booking == 'y'||booking=='Y')
				                {
				                 system("cls");
				                    cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
				                    cout<<"  Nama Pemesan Kamar   :";
				                    getline(cin>> ws,namapk);
				                    cout<<"  Periode (malam)      :";
				                    cin>>periode;
				                    cout<<"  No. telepon          :";
				                    cin>>tlp;
				                    cout<<"  Email                :";
				                    getline(cin>>ws,mail);
				                    cout<<"  Alamat               :";
				                    getline(cin>>ws,alamat);
				                    cout<<endl;
				                    system("cls");
				                    cout<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl;
				                    cout<<"  Data Pemesan Kamar Perawatan"<<endl;
				                    cout<<"  -------------------------------------------------------------------------------------"<<endl;
				                    cout<<"  | Nama Pemesan Kamar    || "<<namapk<<"      "     <<endl;
				                    cout<<"  | Periode (malam)       || "<<periode<<" malam "<<endl;
				                    cout<<"  | No. Telepon           || "<<tlp<<"\n";
				                    cout<<"  | Email                 || "<<mail<<"     "     <<endl;
				                    cout<<"  | Alamat                || "<<alamat<<"  "      <<endl;
				                    totalPesan=(periode*1300000);
				                    cout<<"  | Biaya Kamar per malam || Rp 1300000,-"        <<endl;
				                    cout<<"  | Total Biaya Kamar     || Rp "<<totalPesan<<",-                *sesuai periode"<<endl;
				                    cout<<"  -------------------------------------------------------------------------------------"<<endl<<endl;
				                    cout<<"  Pilih Jenis Perawatan (y/n): ";
				                    cin>>pilih;
				
				                    if (pilih == 'y'||pilih=='Y')
				                    {
				                        goto menu2;
				                    }
				                    else
				                    {
				                        goto menu1;
				                    }
				                }
				                else
				                {
				                    goto jenis_kamar;
				                    
				                }
				            }
				            else
				            {
				       
				            }
				            system("cls");
				            cout<<endl;
				            cout<<" -------------------------------------------------------------------------------------"<<endl;
				            cout<<" Data Pasien"<<endl;
				            cout<<" -------------------------------------------------------------------------------------"<<endl;
				            cout<<" | Nama Pasien                        || " <<np<<"      "     <<endl;
				            cout<<" | umur Pasien                        || " <<umurPasien<<" Tahun"<<endl;
				            cout<<" | Gender [L/P]                       || " ;
				            if (gender == 'l'||gender=='L')
				            {
				                cout<<"Laki-laki"<<endl;
				            }
				            else if (gender =='p'||gender=='P')
				            {
				                cout<<"Perempuan"<<endl;
				            }
				            system("pause");
				            system("cls");
							jenis_perawatan:
				   break;
				
				  case 2:
				   system("cls");
				   cout<<endl;
					cout<<"\t===================================================================================== "<<endl;
					cout<<"\t|                           RUMAH SAKIT UPN VETERAN HEALTHY                          |"<<endl;
					cout<<"\t|    Jl. Rungkut Madya No.1, Gn. Anyar, Kec. Gn. Anyar, Kota SBY, Jawa Timur 60294   |"<<endl;
					cout<<"\t|            email: RSUVH@gmail.com  Website: www.upnveteranhealty.ac.id             |"<<endl;
					cout<<"\t-------------------------------------------------------------------------------------"<<endl<<endl;
				   			cout<<" ___________________________________________________________"<<endl;
				            cout<<" | No.|"<<"   Pelayanan medis Spesialistik                      |"<<endl;
				            cout<<" |__________________________________________________________|"<<endl;
				            cout<<" | 1  |   Pelayanan Spesialis penyakit dalam                |"<<endl;
				            cout<<" | 2  |   Pelayanan spesialis Penyakit kulit dan kelamin    |"<<endl;
				            cout<<" | 3  |   Pelayanan spesialis bedah                         |"<<endl;
				            cout<<" |____|_____________________________________________________|"<<endl<<endl;
				            cout<<"Pelayanan yang Anda Butuhkan [1/2/3]= ";
				            cin>>rawat;
				            cout<<endl;
				
				            if (rawat == '1')
				            {
				            	totalDokter=0;
				            	totalDokter=0;
				            	totalBayar=0;
				             	system("cls");
				                cout<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl;
				                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                "<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl;
				       			cout<<" Pelayanan Spesialis Penyakit Dalam"<<endl<<endl;
				                cout<<" |#############|    Prof.dr.Djoko Widodo,Sp.PD-KPTI"<<endl;
				                cout<<" |             |    Spesialis:"<<endl;
				                cout<<" |             |    Penyakit dalam"<<endl;
				                cout<<" |    PHOTO    |"<<endl;
				                cout<<" |             |"<<endl;
				                cout<<" |             |"<<endl;
				                cout<<" |             |"<<endl;
				                cout<<" |#############|"<<endl<<endl;
				                cout<<" Biaya perawatan untuk 1 kali pegecekan dokter (per hari 3x cek)"<<endl;
				                cout<<" Rp. 3.500.000- (belum termasuk biaya obat dan kamar)"<<endl;
				                cout<<" Biaya obat untuk per hari (untuk 3x minum) Rp 1.300.000"<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl<<endl;
				   				 cout<<" Pesan sekarang (y/n): ";
				                cin>>booking4;
				                cout<<endl;
				                if (booking4 == 'y'||booking4=='Y')
				                {
				                 system("cls");
				     				cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
				                    cout<<" Nama Pasien            : ";
				                    getline(cin>>ws,np);
				                    cout<<" umur Pasien            : ";
				                    cin>>umurPasien;
				                    cout<<" Gender [L/P]           : ";
				                    cin>>gender;
				                    cout<<endl;
				                    system("cls");
				                    cout<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl;
				                    cout<<" Data Pasien"<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl;
				                    cout<<" | Nama Pasien                   || "<<np<<"      "     <<endl;
				                    cout<<" | umur Pasien                   || "<<umurPasien<<" Tahun"<<endl;
				                    cout<<" | Gender [L/P]                  || "<<gender;
				                    if (gender == 'l'||gender=='L')
				                    {
				                        cout<<"Laki-laki"<<endl;
				                    }
				                    else if (gender =='p'||gender=='P')
				                    {
				                        cout<<"Perempuan"<<endl;
				                    }
				                    cout<<" | Periode                       || "<<periode<<" Malam "<<endl;
				                    totalDokter=(periode*1300000);
				     				totalObat=(periode*3500000);
				     				totalBayar=(totalObat+totalDokter);
				                    cout<<" | Biaya Dokter                  || Rp 3500000,-                 *per 1x perawatan"<<endl;
				                    cout<<" | Biaya Obat                    || Rp 1300000,-                 *per 1x perawatan"<<endl;
				                    cout<<" | Total Biaya Perawatan Pasien  || Rp "<<totalBayar<<",-             *sesuai periode perawatan"<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl<<endl;
				                    cout<<" Cek Pemesanan(y/n)   : ";
				                    cin>>cek;
				                    cout<<endl;
				                }
				                else
				                {
				                    goto jenis_perawatan;
				                }
				            }
				
				            else if (rawat == '2')
				            {
				            	totalDokter=0;
				            	totalDokter=0;
				            	totalBayar=0;
				            	system("cls");
				                cout<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl;
				                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                "<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl;
				                cout<<" Pelayanan Spesialis Penyakit Kulit dan Kelamin"<<endl<<endl;
				                cout<<" |#############|    dr.Rinadewi Astriningrum, Sp.KK"<<endl;
				                cout<<" |             |    Spesialis:"<<endl;
				                cout<<" |             |    Penyakit Kulit dan Kelamin"<<endl;
				                cout<<" |    PHOTO    |"<<endl;
				                cout<<" |             |"<<endl;
				                cout<<" |             |"<<endl;
				                cout<<" |             |"<<endl;
				                cout<<" |#############|"<<endl<<endl;
				                cout<<" Biaya perawatan untuk 1 kali pegecekan dokter (per hari 3x cek)"<<endl;
				                cout<<" Rp. 3.300.000- (belum termasuk biaya obat dan kamar)"<<endl;
				                cout<<" Biaya obat untuk per hari (untuk 3x minum) Rp 1.000.000"<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl<<endl;
				                cout<<" Pesan sekarang (y/n): ";
				                cin>>booking5;
				                cout<<endl;
				                if (booking5 == 'y'||booking5=='Y')
				                {
				                    system("cls");
				                    cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
				                    cout<<" Nama Pasien            : ";
				                    getline(cin>>ws,np);
				                    cout<<" umur Pasien            : ";
				                    cin>>umurPasien;
				                    cout<<" Gender [L/P]           : ";
				                    cin>>gender;
				                    cout<<endl;
				                    system("cls");
				                    cout<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl;
				                    cout<<" Data Pasien"<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl;
				                    cout<<" | Nama Pasien                   || "<<np<<"      "     <<endl;
				                    cout<<" | umur Pasien                   || "<<umurPasien<<" Tahun"<<endl;
				                    cout<<" | Gender [L/P]                  || ";
				                    if (gender == 'l'||gender=='L')
				                    {
				                        cout<<"Laki-laki"<<endl;
				                    }
				                    else if (gender =='p'||gender=='P')
				                    {
				                        cout<<"Perempuan"<<endl;
				                    }
				                    cout<<" | Periode                       || "<<periode<<" Malam "<<endl;
				                    totalObat=(periode*1000000);
				                    totalDokter=(periode*3300000);
				                    totalBayar=(totalObat+totalDokter);
				                    cout<<" | Biaya Dokter                  || Rp 3300000,-                      *per 1x perawatan"<<endl;
				                    cout<<" | Biaya Obat                    || Rp 1000000,-                      *per 1x perawatan"<<endl;
				                    cout<<" | Total Biaya Perawatan Pasien  || Rp "<<totalBayar<<",-             *sesuai periode perawatan"<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl<<endl;
				                    cout<<" Cek Pemesanan(y/n)   : ";
				                    cin>>cek;
				                    cout<<endl;
				                }
				                else
				                {
				                    goto jenis_perawatan;
				                }
				            }
				
				            else if (rawat == '3')
				            {
				            	totalDokter=0;
				            	totalDokter=0;
				            	totalBayar=0;
				            	 system("cls");
				                cout<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl;
				                cout<<"                  RUMAH SAKIT PREMIER INDONESIA                "<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl;
				                cout<<" Pelayanan Spesialis Bedah Umum"<<endl<<endl;
				                cout<<" |#############|    dr.H Agoes Sarnanto I, SpB"<<endl;
				                cout<<" |             |    Spesialis:"<<endl;
				                cout<<" |             |    Bedah Umum"<<endl;
				                cout<<" |    PHOTO    |"<<endl;
				                cout<<" |             |"<<endl;
				                cout<<" |             |"<<endl;
				                cout<<" |             |"<<endl;
				                cout<<" |#############|"<<endl<<endl;
				                cout<<" Biaya perawatan untuk 1 kali pegecekan dokter (per hari 3x cek)"<<endl;
				                cout<<" Rp. 2.800.000- (belum termasuk biaya obat dan kamar)"<<endl;
				                cout<<" Biaya obat untuk per hari (untuk 3x minum) Rp 1.200.000"<<endl;
				                cout<<" ---------------------------------------------------------------"<<endl<<endl;
				                cout<<" Pesan sekarang (y/n): ";
				                cin>>booking7;
				                cout<<endl;
				                if (booking7 == 'y'||booking7=='Y')
				                {
				                    system("cls");
				                    cout<<" Silahkan Masukkan Data Pemesanan"<<endl;
				                    cout<<" Nama Pasien            : ";
				                    getline(cin>>ws,np);
				                    cout<<" umur Pasien            : ";
				                    cin>>umurPasien;
				                    cout<<" Gender [L/P]           : ";
				                    cin>>gender;
				                    cout<<endl;
				                    system("cls");
				                    cout<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl;
				                    cout<<" Data Pasien"<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl;
				                    cout<<" | Nama Pasien                        || "<<np<<"      "     <<endl;
				                    cout<<" | umur Pasien                        || "<<umurPasien<<" Tahun"<<endl;
				                    cout<<" | Gender [L/P]                       || ";
				                    
				                    if (gender == 'l'||gender=='L')
				                    {
				                        cout<<"Laki-laki"<<endl;
				                    }
				                    else if (gender =='p'||gender=='P')
				                    {
				                        cout<<"Perempuan"<<endl;
				                    }
				                    cout<<" | Periode                            || "<<periode<<" Malam "<<endl;
				                     totalObat=(periode*1200000);
				    				 totalDokter=(periode*2800000);
				    				 totalBayar=(totalObat+totalDokter);
				    				 cout<<" | Biaya Dokter                      || Rp 2800000,-                 *per 1x perawatan"<<endl;
				                    cout<<" | Biaya Obat                         || Rp 1200000,-                 *per 1x perawatan"<<endl;
				                    cout<<" | Total Biaya Perawatan Pasien       || Rp "<<totalBayar<<",-             *sesuai periode perawatan"<<endl;
				                    cout<<" -------------------------------------------------------------------------------------"<<endl<<endl;
				                	cout<<"\nLakukan pembayaran lewat bank (BCA/MANDIRI/BNI/BRI) "<<endl;
									cout<<" BCA     : 123411"<<endl;
									cout<<" BNI     : 123412"<<endl;
									cout<<" MANDIRI : 123413"<<endl;
									cout<<" BRI     : 123414"<<endl;
				                    cout<<" Cek Pemesanan(y/n)   : ";
				                    cin>>cek;
				                    cout<<endl;
				                }
				                else
				                {
				                    goto jenis_perawatan;
				                }
				            }
				
				            else
				            {
				  
				            }
				
				  default:
				            cout<<"  Maaf, Permintaan Anda Tidak Tersedia"<<endl<<endl;
				  break;
				 }
				
				        if (cek == 'y'||cek=='Y')
				        {
				        system("cls");
				        cout<<endl;
					cout<<"\t===================================================================================== "<<endl;
					cout<<"\t|                           RUMAH SAKIT UPN VETERAN HEALTHY                          |"<<endl;
					cout<<"\t|    Jl. Rungkut Madya No.1, Gn. Anyar, Kec. Gn. Anyar, Kota SBY, Jawa Timur 60294   |"<<endl;
					cout<<"\t|            email: RSUVH@gmail.com  Website: www.upnveteranhealty.ac.id             |"<<endl;
					cout<<"\t-------------------------------------------------------------------------------------"<<endl<<endl;
				        cout<<"                               SURAT KETERANGAN PERAWATAN                            "<<endl;
				        cout<<endl;
				        cout<<"  Rincian Pemesanan"<<endl;
				        cout<<"  -----------------"<<endl;
				        cout<<"  Nama Pemesan kamar       : "<<namapk<<endl;
				        cout<<"  Jenis kamar yang Dipesan : " ;
				        
				        if(kamar=='1'){
				        	cout<<"VVIP"<<endl;
						}else if(kamar=='2'){
							cout<<"VIP"<<endl;
						}else if(kamar=='3'){
							cout<<"GENERAL"<<endl;
						}else{
							cout<<endl;
						}			
						cout<<"  Periode                  : "<<periode<<endl;
				        cout<<"  No.Telepon               : "<<tlp<<endl;
				        cout<<"  Email                    : "<<mail<<endl;
				        cout<<"  Alamat                   : "<<alamat<<endl;
				        cout<<endl;
				        cout<<"  Identitas Pasien"<<endl;
				        cout<<"  ----------------"<<endl;
				        cout<<"  Nama Pasien              : "<<np<<endl;
				        cout<<"  umurPasien                     : "<<umurPasien<<" Tahun"<<endl;
				        cout<<"  Gender                   : ";
				        if (gender == 'l' ||  gender =='L')
				            {
				                cout<<"Laki-laki"<<endl;
				            }
				        else
				            {
				                cout<<"Perempuan"<<endl;
				            }
				        cout<<"  Periode (malam)          : "<<periode<<" Malam"<<endl;
				        cout<<"  Jenis Perawatan          : ";
				        if (rawat == '1')
				            {
				                cout<<"Pelayanan Spesialis penyakit dalam"<<endl;
				                cout<<"  Dokter                   : Prof.dr.Djoko Widodo,Sp.PD-KPTI"<<endl;
				                cout<<"  Obat                     : - Statin"<<endl;
				                cout<<"                             - Nitrats"<<endl;
				                cout<<"                             - Bicorandil"<<endl;
				                cout<<"                             - Ranolazine"<<endl;
				                cout<<"                             - Ivabradine"<<endl;       
				   }
				        else if (rawat =='2')
				            {
				                cout<<"Pelayanan spesialis Penyakit kulit dan kelamin"<<endl;
				                cout<<"  Dokter                   : dr.Rinadewi Astriningrum, Sp.KK"<<endl;
				                cout<<"  Obat                       - Miconazole"<<endl;
				                cout<<"                             - Scabimite"<<endl;
				                cout<<"                             - Elocon"<<endl;
				            }
				        else if(rawat =='3')
				         {
				             cout<<"Pelayanan spesialis bedah"<<endl;
				             cout<<"  Dokter                   : dr.Ira Agustine Mutiara,Sp.THT-KL"<<endl;
				             cout<<"  Obat                     : - QnJelly Gamat"<<endl;
				             cout<<"                             - Nebacetin oint"<<endl;
				             cout<<"                             - Nebacetin Powder"<<endl;
				         }else
				         {
				
				         }
				        cout<<endl;
				        cout<<"  Rincian Biaya "<<endl;
				        cout<<"  -------------"<<endl;
				        cout<<"  Biaya Kamar              : Rp "<<totalPesan<<endl;
				        cout<<"  Biaya Dokter             : Rp "<<totalDokter<<endl;
				        cout<<"  Biaya Obat               : Rp "<<totalObat<<endl;
				        cout<<endl<<endl;
				        totalbiaya=(totalPesan+totalObat+totalDokter);
				        cout<<" Total Biaya               : Rp "<<totalbiaya<<endl;
						cout<<"\nLakukan pembayaran lewat bank (BCA/MANDIRI/BNI/BRI) "<<endl;
						cout<<" BCA     : 123411"<<endl;
						cout<<" BNI     : 123412"<<endl;
						cout<<" MANDIRI : 123413"<<endl;
						cout<<" BRI     : 123414"<<endl;
				        }
				    else if (cek == 'n'||cek=='N')
				        {
				            cout<<" Permintaan anda belum bisa di proses"<<endl;
				        }

				    cout<<"===================================================================================="<<endl<<endl;
				    cout<<"Kembali ke menu utama [Y/N]= ";
				    cin>>pilexit;
				
				    if (pil == 'y'||pil=='Y')
				    {
				        goto gorawat;
				    }
				    else if(pil=='n'||pil=='N')
				    {
				        cout<<endl<<endl<<endl<<endl;
				  cout<<"                             TERIMA KASIH"<<endl;
				   goto gorawat;
				    }
				
			break;
			
		case 2:
			do{
			utama();
			cout << "\nUntuk mendapatkan pelayanan di UPN Veteran Jawa Timur Healthy\n";
			cout << "Anda harus mengisi formulir dibawah ini (wajib) \t \n";
			cout << "2. Buat Janji \n";
			cout<<  "9. keluar"<<endl;
			cout << "Pilih dan Lakukan Pengisian Formulir diatas [1 / 2]:  ";
			cin >> datapilihan;
			
			switch(datapilihan)
			{
				case 1:
					system("cls");
					cout << "JADWAL PRAKTEK KLINIK\n";
					cout << "1. SENIN - KAMIS : 08:00 s/d 20:00 \n";
					cout << "2. JUMAT : 08:30 s/d 19:00 \n";
					cout << "3. SABTU - MINGGU : 07:00 s/d 18:00 \n";
					cout << "Buat Janji sesuai jadwal [1/2/3] ";
					cin >> buatJanji;
					cout << endl;
					if (buatJanji == 1){
						cout << "SENIN - KAMIS " << endl;
						cout << "anda memilih hari ini ? klik (y) untuk membuat janji  \n";
						cin >> booking;
						if(booking =='y' || booking=='Y'){
						cout << " silahkan isi Formulir dibawah ini :" << endl;
						cout << "Nama: ";  getline(cin>>ws, namaPasien);
						cout << "Usia: ";  cin >> umur;
						cout << "Alamat: "; getline(cin>>ws, alamatPasien);
						cout << endl;
						} else {
							cout<<"Anda gagal membuat perjanjian "<<endl;
							goto gorawat;
						}
					} else if (buatJanji == 2){
						cout << "JUMAT" << endl;
						cout << "anda memilih hari ini ? klik (y) untuk membuat janji  \n";
						cin >> booking;
						
						if (booking =='y' || booking=='Y'){
						cout << "silahkan isi Formulir dibawah ini :" << endl;
						cout << "Nama: ";  getline(cin>>ws, namaPasien);
						cout << "Usia: ";  cin >> umur;
						cout << "Alamat: "; getline(cin>>ws, alamatPasien);
						cout << endl;
						cout << "Selamat anda sudah terdaftar dan membuat janji untuk bertemu dengan psikolog dan psikiater andalan kami \n";
						cout << "Tunjukkan struk kepada resepsionist sebagai bukti pendaftaran dan melanjutkan ke pembayaran\n";
						}else {
							cout<<"Anda gagal membuat perjanjian "<<endl;
							goto gorawat;
						}
					} else if (buatJanji == 3){
						cout << "SABTU - MINGGU" << endl;
						cout << "anda memilih hari ini ? klik (y) untuk membuat janji  \n";
						cin >> booking;
						
						if (booking =='y' || booking=='Y'){
						cout << "silahkan isi Formulir dibawah ini :" << endl;
						cout << "Nama: ";  getline(cin>>ws, namaPasien);
						cout << "Usia: ";  cin >> umur;
						cout << "Alamat: "; getline(cin>>ws, alamatPasien);
						cout << "Jenis Kelamin: "; cin >> gender;
						cout << endl;
						} else {
							cout<<"Anda gagal membuat perjanjian "<<endl;
							goto gorawat;
						}
						pertemuan = 50000;
						totalBiaya = biayaKonsultasi * pertemuan;
						
	
					} else {
						cout<<"Anda gagal membuat perjanjian "<<endl;
						goto gorawat;
					}
	
					break;
	
					x++;
				}
				}while (bayar == 'y' || bayar == 'Y');
				system("cls");
				cout << "Selamat anda sudah terdaftar dan membuat janji untuk bertemu dengan psikolog dan psikiater andalan kami \n";
				cout << "Tunjukkan struk kepada resepsionist sebagai bukti pendaftaran dan melanjutkan ke pembayaran\n";
				cout << endl;
				cout << "   =============== \n";
				cout << "     PEMBAYARAN \n";
				cout << "   =============== \n";
			
				cout << " Nama   \t: " << namaPasien << endl;
				cout << " Usia   \t: " << umur << "tahun " << endl;
				cout << " Alamat \t: " << alamatPasien << endl;
				for (int a = 0; a < x; a++)
				totalBiaya = 50000;
				cout << "berapa kali pertemuan = ";
				cin >> pertemuan;
				totalBiaya = 50000;
				hasil = pertemuan * totalBiaya;
				cout << "Total Harga  : Rp. " << hasil << endl;
				cout<<"\nLakukan pembayaran lewat bank (BCA/MANDIRI/BNI/BRI) "<<endl;
				cout<<" BCA     : 123411"<<endl;
				cout<<" BNI     : 123412"<<endl;
				cout<<" MANDIRI : 123413"<<endl;
				cout<<" BRI     : 123414"<<endl;
	        	cout << "==============================" << endl;
	            cout << "Pembayaran Berhasil, Semangat sembuh. Tetap jaga kesehatan ya!!! " << endl; 
				system("pause");
				system("cls");   
			break;
		}
	}while(menu!=3);
}

/////////////////////////////////////////// ini menu pilihan obat dan pembelian obat dengan online ////////////////////////////////////////////////////////////
//fungsi menu obat
void obat(void){

	do{
	total=0;
	system("cls");
	utama();
	cout<<"\n\tMENU OBAT "<<endl;
	cout<<"\t1. Beli Obat"<<endl;
	cout<<"\t9. Keluar"<<endl;
	cout<<"\t   Masukkan menu pilihan : "; cin>>menu;
	system("cls");
	switch(menu){
		case 1: 
			utama();


			cout<<endl;
			cout<<"\n\tNama kastemer\t: "; getline(cin>>ws,cs);
			cout<<"\ttanggal\t\t: ";cin>>hr;
			cout<<"\tbulan\t\t: ";cin>>bln;
			cout<<"\ttahun\t\t: ";cin>>thn;
			system("cls");
			do{
			
			cout<<"\t\t\t\tUPN VETERAN HEALTHY\n";
			line();
			cout<<endl;
			cout<<"nomor transaksi\t: No. 00"<<a1<<endl;
			cout<<"\n  OBAT-OBATAN YANG TERSEDIA"<<endl;
			cout<<"  __________________________________________________________________"<<endl;
			cout<<"  |   Nomor  |         Obat           |     Kode   |     Harga     |"<<endl;
			cout<<"  |__________|________________________|____________|_______________|"<<endl;
			cout<<"  |    1     |       paracetamol      |     pcl    |     2000      |"<<endl;
			cout<<"  |    2     |         Vitamin        |     vit    |     10000     |"<<endl;
			cout<<"  |    3     |        OBH batuk       |     obh    |     16000     |"<<endl;
			cout<<"  |    4     |         ponstan        |     pst    |     3000      |"<<endl;
			cout<<"  |    5     |   Minyak kayu putih    |     mkp    |     8000      |"<<endl;
			cout<<"  |    6     |      minyak angin      |     mya    |     11000     |"<<endl;
			cout<<"  |    7     |      tolak angin       |     tlka   |     3000      |"<<endl;
			cout<<"  |    8     |        Betadine        |     btd    |     3000      |"<<endl;
			cout<<"  |    9     |      Alkohol 70%       |     alk    |     20000     |"<<endl;
			cout<<"  |__________|________________________|____________|_______________|\n"<<endl;
			cout<<"banyak beli jenis produk\t: ";cin>>y;
	
			for(int j=0; j<y; j++ ){
				line();
				cout<<"\njenis beli produk ke- "<<j+1<<endl;
			    cout<<"masukan kode produk\t\t: ";cin>>produk[j].kode;
			    cout<<"jumlah beli produk\t\t: ";cin>>produk[j].banyak;
			     if (!strcmp(produk[j].kode,"PCL")||!strcmp(produk[j].kode,"pcl"))
			    {
			      strcpy(produk[j].nama,"Paracetamol");
			      produk[j].harga=2000;
			      }
			   else if (!strcmp(produk[j].kode,"VIT")||!strcmp(produk[j].kode,"vit"))
			    {
			      strcpy(produk[j].nama,"Vitamin");
			      produk[j].harga=10000;
			      }
			   else if (!strcmp(produk[j].kode,"OBH")||!strcmp(produk[j].kode,"obh"))
			    {
			      strcpy(produk[j].nama,"OBH batuk");
			      produk[j].harga=16000;
			      }
			
			   else if (!strcmp(produk[j].kode,"PST")||!strcmp(produk[j].kode,"pst"))
			    {
			      strcpy(produk[j].nama,"Ponstan");
			      produk[j].harga=3000;
			      }
			   else if (!strcmp(produk[j].kode,"BLS")||!strcmp(produk[j].kode,"bls"))
			    {
			      strcpy(produk[j].nama,"Balsem");
			      produk[j].harga=6000;
			      }
			   else if (!strcmp(produk[j].kode,"MKP")||!strcmp(produk[j].kode,"mkp"))
			    {
			      strcpy(produk[j].nama,"Minyak kayu putih");
			      produk[j].harga=8000;
			      }
			   else if (!strcmp(produk[j].kode,"MYA")||!strcmp(produk[j].kode,"mya"))
			    {
			      strcpy(produk[j].nama,"Minyak angin");
			      produk[j].harga=11000;
			      }
			   else if (!strcmp(produk[j].kode,"TLKA")||!strcmp(produk[j].kode,"tlka"))
			    {
			      strcpy(produk[j].nama,"Tolak angin");
			      produk[j].harga=3000;
			      }
			   else if (!strcmp(produk[j].kode,"BTD")||!strcmp(produk[j].kode,"btd"))
			    {
			      strcpy(produk[j].nama,"Betadine");
			      produk[j].harga=3000;
			      }
			   else if (!strcmp(produk[j].kode,"ALK")||!strcmp(produk[j].kode,"alk"))
			    {
			      strcpy(produk[j].nama,"Alkohol 70%");
			      produk[j].harga=20000;
			      }
			   else
			    {
			      strcpy(produk[j].nama,"??????");
			      produk[j].harga=0;
			  }
			}
			
			system("cls");
			utama();
			line();
			cout<<endl;
			cout<<bln<<"/"<<hr<<"/"<<setiosflags(ios::left)<<setw(22)<<thn;
			cout<<setiosflags(ios::right)<<setw(8)<<cs<<"/"<<"NMH00"<<a<<endl;
			line();
			cout<<" No.\t\tNama\t\t\tharga\t\tbanyak\t\tharga"<<endl;
			cout<<"    \t\tproduk\t\t\troduk\t\tbeli\t\tjual"<<endl;

			cout<<endl;
			for (int l=0;l<y ; l++)
			{
			   cout<<setiosflags(ios::left)<<setw(2)<<l+1<<setw(2);
			   cout<<setiosflags(ios::left)<<setw(23)<<produk[l].nama;
			   cout<<setiosflags(ios::left)<<setw(20)<<produk[l].harga;
			   cout<<setiosflags(ios::left)<<setw(15)<<produk[l].banyak;
			   produk[l].jual=produk[l].harga*produk[l].banyak;
			   cout<<setiosflags(ios::right)<<setw(17)<<produk[l].jual;
			   total=total+produk[l].jual;
			   cout<<endl;
			}
			cout<<endl;
			a1+=1;
			line();
			cout<<"Apakah ingin melakukan transaksi lagi (y/n)?? : "; cin>>menu_obat;
			system("cls");
		}while(menu_obat=='y' || menu_obat=='Y');
			line();	
			cout<<"\t\t\ttotal\t      : "<<total<<endl<<endl;
			cout<<"Obat yang anda beli akan segera dikirim."<<endl;
        	cout<<"\nLakukan pembayaran lewat bank (BCA/MANDIRI/BNI/BRI) "<<endl;
			cout<<" BCA     : 123411"<<endl;
			cout<<" BNI     : 123412"<<endl;
			cout<<" MANDIRI : 123413"<<endl;
			cout<<" BRI     : 123414"<<endl;
			cout<<endl<<endl;
			terimakasih();
			 system("pause");
			 system("cls");
			break;
		}
	}while(menu!=9);
	system("cls");
}

//////////////////////////////////////////////////// ini merupakan fungsi yang menampung menu call center ///////////////////////////////////////////////////
//fungsi menu call center
void callcenter(){
		cout<<"\n\t\t\t\t_____________________________________________"<<endl;
		cout<<"  \t\t\t\t|                  CAll CENTER               |"<<endl;
		cout<<"  \t\t\t\t|____________________________________________|"<<endl;
		cout<<" \t\t\t|============================================================|"<<endl;
		cout<<" \t\t\t| Out Location : Jl. Rungkut Madya No.1, Gn. Anyar,          |"<<endl; 
		cout<<" \t\t\t|                Kec. Gn. Anyar, Kota SBY, Jawa Timur 60294  |"<<endl;
		cout<<" \t\t\t| Phone Office : (+62 81)234567                              |"<<endl;
		cout<<" \t\t\t| Email Address: RSUVH@gmail.com                             |"<<endl; 
        cout<<" \t\t\t| Website      : www.upnveteranhealty.ac.id                  |"<<endl;
		cout<<" \t\t\t| instagram    : @RSUPNVETERANHEALTHY                        |"<<endl;
		cout<<" \t\t\t|============================================================|"<<endl;	
}

//////////////////////////////////////////////////// ini merupakan fungsi yang menampung menu pilihan ///////////////////////////////////////////////////
//fungsi menu pilihan
void Dasboard(){
	//menampilkan animasi loading 
	if(lod==1){
	loading();
	delay();
	lod=lod+1;
	goto lood;
	}else{
		goto lood;
	}
	
	lood:
	pilihanMenu:
	 do{
	 system("color 70");
	 system("cls");
	 for(int l=30; l<80; l++){
	 	gotoxy(l,1);
	 	cout<<"=";
	 	gotoxy(l,2);
	 	cout<<"  ";
		cout<<"\n\t\t\t\t\t       DOCTOR EMERGENCY\n";
		cout<<"\t\t\t\t\t      UPN  VETERAN JATIM\n";
		gotoxy(80-al,6);
	 	cout<<"=";
	 	al=al+1;
	 	delay();delaymax();
	 }
	 //menu di aplikasi dokter emergency
	 cout<<"\n\n\tMenu : \n";
	 cout<<"\t1. profil\n";
	 cout<<"\t2. Konsultasi\n";
	 cout<<"\t3. Rawat\n"; 
	 cout<<"\t4. Obat\n";
	 cout<<"\t5. Call center\n";
	 cout<<"\t0. Keluar\n\n";
	 cout<<"\tMasukkan nomor menu pilihan anda : ";
	 cin>>menu;
	 system("cls");
	 switch (menu){
		 case 1:
		 		al=1;
		 		utama();
	 	        cout<<"\n\n\t\t\t\t     ......PROFIL ANDA......\n"<<endl;
				cout<<endl;
			   	cout<<"\tNama             : "<<nama<<endl;
			   	cout<<"\tAlamat           : "<<alamat<<endl;
			   	cout<<"\tTanggal_lahir    : "<<T_lahir<<endl;
			   	cout<<"\tAlamat Gmail     : "<<Gmail<<endl<<endl;
			   	system("PAUSE");
			   	system("cls");
			   	al=1;
				   	
		 	break;
		 case 2:
		 	al=1;
			konsultasi();
		 	
		 	break;
		 case 3:
		 	al=1;
		    rawat_pasien();
		    system("PAUSE");
		    break;
		 case 4:
		   	al=1;
		   	obat();
		    
		    break;
		 case 5:
		 	al=1;
		 	callcenter();
		 	system("PAUSE");
		 	break;
		default:
		 	al=1;
		 	break;
		 }

	}while(menu!=0);
	main();	
}

//untuk membuat login dan buat akun atau int main
int main(){	
	system("color E0");
	lod=1;
	al=1;
	do
	{
	head();
	cout<<"\t1. LOGIN "<<endl;
	cout<<"\t2. BUAT AKUN "<<endl;
	cout<<"\t3. LOGOUT \n"<<endl;
    cout<<"\t<<jika anda belum memiliki akun, klik <-BUAT AKUN-> terlebih dahulu.>>\n\n"<<endl;
	cout<<"\tMasukkan Pilihan Menu : "; cin>>menu;	
	system("cls");
	switch(menu){
		case 1:
			if (buat!=0){
	    			cout<<"\n\t\t\t\t LOGIN "<<endl<<endl;
	    			cout<<"\tMasukkan username dan pasword yang telah Anda buat.\n\n"<<endl;
			   while(status <=5 ){
			   		cout<<"\tMasukkan username :"; cin>>username;
			   		cout<<"\tMasukkan password :"; cin>>pass;
				    system("cls");
			      if((username==usr) && (pass== pas)){
			         Dasboard();
				    break;
			      } 			      
			      else if((username==usr) && (pass!=pas)){
			         system("cls");
			         cout<<"\nPassword yang anda masukkan salah..!!\n"<<endl;
			         cout<<"Kesempatan login anda sisa "<< sisa<<endl;
			         cout<<"\t\t\t\tSilahkan coba lagi....\n"<<endl;			        
				  }				  
				  else if((username!=usr)&& (pass==pas)){
				  	 system("cls");
			         cout<<"\nPassword yang anda masukkan salah..!!\n"<<endl;
			         cout<<"Kesempatan login anda sisa "<< sisa<<endl;
			         cout<<"\t\t\t\tSilahkan coba lagi....\n"<<endl;			         
				  }				  
				  else{
				  	 system("cls");
			         printf("\nPasswoard dan Username yang anda masukkan salah..!!\n\n");
			         cout<<"Kesempatan login anda sisa "<< sisa<<endl;
			         cout<<"\t\t\t\tSilahkan coba lagi....\n"<<endl;			         			      
			      }			         
			         salah++;			        			         
			          if(salah == 5){
			    		system("cls");
			    		cout<<"\nAnda telah menginputkan"<< status<< "kesalahan.\n"<<endl;
			    		cout<<"\t\t\t\t\t...........TERIMAKASIH.............."<<endl;
			         }
			      sisa=4;
			      sisa=sisa-status;
			      status++;			      
			   }			   
			}
			else{
				cout<<"\n\n\t\t\t\t\t ~~~~~~~~~~ MOHON MAAF ~~~~~~~~~~\n"<<endl;
				cout<<"  Anda belum membuat akun............\n\n"<<endl;
				system("PAUSE");
				system("cls");
				main();
			}
			
		break;
		
		case 2:	
			if(buatbaru==1){
				cout<<"\n\n      Anda telah memiliki akun \n"<<endl;
				cout<<"      Apakah anda ingin membuat akun baru dan menghapus akun lama (Y/T) ??  : " ; cin>>akunbaru;
				if(akunbaru=='y' || akunbaru=='Y'){
					system("cls");
					goto buat;
				}else{
					system("cls");
					main;
				}
			}else
			{
			buat:
			cout<<"\n\tbuat akun: \n"<<endl;
			cout<<"    Nama	        : "; getline(cin>> ws, nama);
			cout<<"    Alamat	     	: "; getline(cin>> ws, alamat);
			cout<<"    Tanggal_lahir 	: "; getline(cin>> ws, T_lahir);
			cout<<"    Alamat Gmail        : "; getline(cin>>ws, Gmail);
			cout<<"    Username      	: "; cin>>usr;
			cout<<"    Paswoard      	: "; cin>>pas;
			cout<<endl;
		    cout<<"    klik Y/y untuk melanjutkan verifikasi akun : ";
		    cin>>buat;
		    system("cls");
		   if ((buat=='y')|| (buat=='Y')){
		   		buatbaru=1;
			   	cout<<"\n\t\t\t......SELAMAT......\n"<<endl;
			   	cout<<"\t\t   Anda telah sukses membuat akun baru\n"<<endl;
			   	cout<<"------------------------------------------------------------------"<<endl;
			   	cout<<"   Nama                 : "<<nama<<endl;
			   	cout<<"   Alamat               : "<<alamat<<endl;
			   	cout<<"   Tanggal_lahir        : "<<T_lahir<<endl;
			   	cout<<"   Alamat Gmail         : "<<Gmail<<endl;
			   	cout<<"   Username             : "<<usr<<endl;
			   	cout<<"   passwoard            : "<<pas<<endl<<endl;
		    	cout<<" klik ENTER-->..\n\n"<<endl;
		  		system("PAUSE");
		    	system("cls");
		    	buatbaru=1;
		    	main();		    
			}
		   	else if((buat=='T')|| (buat=='t')){
					   	cout<<"\n\tAnda gagal membuat akun baru.\n"<<endl;
					   	cout<<"\t\t\t\t\t...........TERIMAKASIH..............\n"<<endl;
					   	buat=0;
				   		system("PAUSE");
				   		system("cls");
				   		main();					   					   	
					}
		   	else{
				   	cout<<"\n\t Pilihan yang anda masukkan salah..\n\n"<<endl;	
			   		buat=0;
			   		system("PAUSE");
			   		system("cls");
			   		main();					
			}
			}
			

		break;
	} 
  }while(menu != 3);
	return 0;
}



