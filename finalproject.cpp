#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

string nama, alamat, T_lahir, pas, usr , username, pass;
char ver, buat, a;
int pilihan, status=1, salah, jenis, pil;
void head();
void login();
void buat_akun();
void setting();
void home();
void keluar();
void rawat();
void kwitansi();
void konsultasi();
void callcenter();
int menu, w, sisa=4, keluhan[16];

struct node
{
	string nama;
 	int umur;
 	float tinggi;
 	node *next;
};

node *awal_ptr = NULL;
node *posisi;
int option = 0;



//untuk membuat login dan buat akun,
//
//int main(){	
//
//	do
//	{
//	head();
//	
//	cout<<"\t1. LOGIN \n"<<endl;
//	cout<<"\t2. BUAT AKUN \n"<<endl;
//	cout<<"\t3. LOGOUT \n"<<endl;
//    cout<<"jika anda belum memiliki akun, klik <-BUAT AKUN-> terlebih dahulu.\n\n"<<endl;
//	cout<<"Masukkan Pilihan Menu : "; cin>>menu;	
//	system("cls");
//	switch(menu){
//		case 1:
//			login();
//		break;
//		case 2:
//			buat_akun();
//		break;
//			
//	}
//  }while(menu!=3);
//   keluar();
//
//}
//
//void login(){
//			
//	    	if (buat!=0){
//	    			cout<<"\n\t\t\t\t LOGIN "<<endl<<endl;
//	    			cout<<"Masukkan username dan pasword yang telah Anda buat.\n\n"<<endl;
//			   while(status <=5 ){
//			   		cout<<"Masukkan username- :"; cin>>username;
//			   		cout<<"Masukkan password- :"; cin>>pass;
//				   	printf("Masukkan username- :");
//				    system("cls");
//			      if((username==usr) && (pass== pas)){
//			      	cout<<"\t\t\t............Anda berhasil login............ \n\n"<<endl;
//			         system("PAUSE"); 
//			         system("cls");
//				     home();
//			      } 
//			      
//			      else if((username==usr) && (pass!=pas)){
//			         system("cls");
//			         cout<<"\nPassword yang anda masukkan salah..!!\n"<<endl;
//			         cout<<"Kesempatan login anda sisa"<< sisa<<endl;
//			         cout<<"\t\t\t\tSilahkan coba lagi....\n"<<endl;
//			        
//				  }
//				  
//				  else if((username!=usr)&& (pass==pas)){
//				  	 system("cls");
//			         cout<<"\nPassword yang anda masukkan salah..!!\n"<<endl;
//			         cout<<"Kesempatan login anda sisa"<< sisa<<endl;
//			         cout<<"\t\t\t\tSilahkan coba lagi....\n"<<endl;
//			         
//				  }
//				  
//				  else{
//				  	 system("cls");
//			         printf("\nPasswoard dan Username yang anda masukkan salah..!!\n\n");
//			         cout<<"Kesempatan login anda sisa"<< sisa<<endl;
//			         cout<<"\t\t\t\tSilahkan coba lagi....\n"<<endl;
//			         
//			      
//			      }
//			         
//			         salah++;
//			         
//			         
//			          if(salah == 5){
//			    		system("cls");
//			    		cout<<"\nAnda telah menginputkan"<< status<< "kesalahan.\n"<<endl;
//			    		cout<<"\t\t\t\t\t...........TERIMAKASIH.............."<<endl;
//			         }
//			      sisa=4;
//			      sisa=sisa-status;
//			      status++;
//			      
//			   }
//			   
//			}
//			else{
//				cout<<"\n\n\t\t\t\t\t ~~~~~~~~~~ MOHON MAAF ~~~~~~~~~~\n"<<endl;
//				cout<<"  Anda belum membuat akun............\n\n"<<endl;
//				system("PAUSE");
//				system("cls");
//				main();
//			}
//	}
//
//
//void buat_akun(){
//			cout<<"\n\tbuat akun: \n"<<endl;
//			cout<<"Nama	        :"; getline(cin>> ws, nama);
//			cout<<"Alamat	     	:"; getline(cin>> ws, alamat);
//			cout<<"Tanggal_lahir 	:"; getline(cin>> ws, T_lahir);
//			cout<<"Username      	:"; cin>>usr;
//			cout<<"Paswoard      	:"; cin>>pas;
//			cout<<endl;
//		    cout<<"klik Y/T untuk melanjutkan verifikasi akun :";
//		    cin>>buat;
//		    system("cls");
//		   if ((buat=='y')|| (buat=='Y')){
//			   	cout<<"\n\t\t\t\t......SELAMAT......\n"<<endl;
//			   	cout<<"\t\t\t   Anda telah sukses membuat akun baru\n"<<endl;
//			   	cout<<"------------------------------------------------------------------"<<endl;
//			   	cout<<"Nama		:"<<nama<<endl;
//			   	cout<<"Alamat		:"<<alamat<<endl;
//			   	cout<<"Tanggal_lahir	:"<<T_lahir<<endl;
//			   	cout<<"Username	:"<<usr<<endl;
//			   	cout<<"passwoard	:"<<pas<<endl;
//		    	cout<<"klik ENTER-->..\n\n"<<endl;
//		  		system("PAUSE");
//		    	system("cls");
//		    	main();
//			    
//			}
//		   	else if((buat=='T')|| (buat=='t')){
//					   	cout<<"Anda gagal membuat akun baru.\n"<<endl;
//					   	cout<<"\t\t\t\t\t...........TERIMAKASIH..............\n"<<endl;
//					   	buat=0;
//				   		system("PAUSE");
//				   		system("cls");
//				   		main();
//					   	
//					   	
//					}
//		   	else{
//				   	cout<<"\n\t Pilihan yang anda masukkan salah..\n\n"<<endl;	
//			   		buat=0;
//			   		system("PAUSE");
//			   		system("cls");
//			   		main();
//					
//			}
//}

//void setting(){
//		int set;
//			printf("1. show account\n");
//			printf("2. edit account\n");
//			printf("3. back \n\n");
//			printf("   masukkan pilihan : ");
//			scanf("%d",&set);
//			system("cls");
//			switch(set){
//				case 1:
//					if(buat!=0 && buat=='Y' || buat=='y'){
//						printf("\n\tAccount\n\n");
//						printf("Username	:%s\n",usr);
//						printf("passwoard	:%s\n\n\n",pas);
//						system("PAUSE");
//						system("cls");
//						setting();	
//					}
//				
//					else {
//						printf("\n\n  Anda belum membuat akun............\n\n\n");
//						system("PAUSE");
//						system("cls");
//						setting();
//						
//					}
//						
//				break;
//				case 2:
//					if(buat!=0 && buat=='Y' || buat=='y'){
//						system("cls");
//						printf("\n\tEdit account\n\n");
//						printf("Account lama :\n");
//						printf("Username	:%s\n",usr);
//						printf("passwoard	:%s\n\n",pas);
//						printf("edit :\n");
//						printf("Masukkan Username dan passwoard baru:\n");
//						printf("Username :"); 
//						scanf("%s",&usr);
//						printf("Passwoard :"); 
//						scanf("%s",&pas);
//						printf("\n\n");
//						printf("sukse klik ENTER");
//						system("PAUSE");
//						system("cls");
//						setting();	
//					}
//			
//					else{
//						printf("\n\n  Anda belum membuat akun............\n\n\n");
//						system("PAUSE");
//						system("cls");
//						setting();
//					}	
//				break;	
//				case 3:
//				main();
//				break;
//				default:
//				printf("\n   pilihan yang anda masukkan salah..\n");
//				system("PAUSE");
//				system("cls");
//				setting();
//				break;
//				
//			}
//}
void head(){
	printf("\t\t\t\t----------------------------------------------\n");
	printf("\t\t\t\t|           SELAMAT DATANG DI APLIKASI       |\n");
	printf("\t\t\t\t|                DOCTOR EMERGENCY            |\n");
	printf("\t\t\t\t|           ..........................       |\n");
	printf("\t\t\t\t----------------------------------------------\n");
	
}
void  keluar(){
	 printf("\n\n\t\t\t\t                 Terima Kasih               \n");
	 printf("\t\t\t\t              Sampai Jumpa kembali             \n");
	 printf("\t\t\t\t------------------------------------------------\n");
}



//untuk Home aplikasi doctor emergency/menu yang ada di aplikasinya.
int main (){
int menu2;
	 do{
	 
	 system("cls");
	 printf("\t\t\t\t__________________________________________________\n");
	 printf("\t\t\t\t             Selamat Datang di                 \n");
	 printf("\t\t\t\t               Doctor Emergancy                   \n");
	 printf("\t\t\t\t__________________________________________________\n\n");
	 printf("Menu : \n");
	 printf("1. profil\n");
	 printf("2. Konsultasi\n");
	 printf("3. Rawat\n"); 
	 printf("4. Obat\n");
	 printf("5. Call center\n");
	 printf("6. Keluar\n\n");
	 printf("Masukkan nomor menu pilihan anda : ");
	 scanf("%d", &menu2);
	 system("cls");
	 switch (menu2){
		 case 1:
		 	        cout<<"\n\t\t\t\t......PROFIL ANDA......\n"<<endl;
				   	cout<<"____________________________________________________________"<<endl;
				   	cout<<"Nama		:"<<nama<<endl;
				   	cout<<"Alamat		:"<<alamat<<endl;
				   	cout<<"tanggal_lahir	:"<<T_lahir<<endl;
				   	cout<<"Username	:"<<usr<<endl;
				   	cout<<"passwoard	:"<<pas<<endl;
				   	system("PAUSE");
				   	system("cls");
				   	
				   	
		 	break;
		 case 2:
		 	konsultasi();
		 	system("PAUSE");
		 	break;
		 case 3:
		    rawat();
		    system("PAUSE");
		    break;
		 case 4:
		   
		    system("PAUSE");
		    break;
		 case 5:
		 	
		 	system("PAUSE");
		 	break;
		 }
	}while(menu2!=6);
	   		main();
	 
}

void konsultasi(){
 	do
 	{
 	cout << "MENU PILIHAN : " << endl;
 	cout << "1. Tambahkan Data Konsultan." << endl;
 	cout << "2. Hapus Data Konsultan." << endl;
 	cout << "3. Tampilkan Data Konsultan."<< endl;
 	cout << "0. Keluar program." << endl;
 	cout << endl << " Pilihan >> ";
 	cin >> option;
 	system("cls");
 	switch (option)
 	{
 		case 1 :
 			cout<<"\t\t\t DATA 	PASIEN \n"<<endl;
			node *baru;
			baru = new node;
			cout << "Masukkan Nama : "; cin>> baru->nama;
			cout << "Masukkan Umur : "; cin >> baru->umur;
			cout << "Masukkan Tinggi : "; cin >> baru->tinggi;
			baru->next = NULL;
			if(awal_ptr == NULL)
			{
				awal_ptr=baru;
				awal_ptr->next = NULL;
			}
			else
			{
				baru->next = awal_ptr;
				awal_ptr = baru;
			}
			system("cls");
			w=0;
			do {
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
			cout<<"Apakah ada keluhan lain (y/t)? "; cin>>x;
			w=w+1;
			system("cls");
			} while (x == 'y' || x == 'Y');
			
			system("pause");
			system("cls");
			
			if (keluhan[w]== 1 ){
				if(keluhan[w]==4){
					if(keluhan[w]==7){
						if(keluhan[w]==6){
							if(keluhan[w]==9){
								cout<<"Penyakit anda ISPA"<<endl;
							}else{
								cout<<"Penyakit anda ISPA"<<endl;
							}
						
						}else{
							cout<<"Penyakit anda ISPA"<<endl;
						}
					}else{
						cout<<"Penyakit anda ISPA"<<endl;
					}
					
				}
				
			}else if(keluhan[w]==1 || keluhan[w]==2) {
				cout<<"penyakit 2 \n";
			}else{
				cout<<"tidak ada penyakit \n";
				}
			
			system("pause");
			
 		break;
 		case 2 :
		 	node *temp1, *temp2;
		 	if (awal_ptr == NULL)
		 		cout << "Belum ada  Data!" << endl;
		 	else
		 	{
		 		temp1 = awal_ptr;
		 		if (temp1->next == NULL)
		 		{
		 			delete temp1;
		 			awal_ptr = NULL;
		 		}
		 		else
		 		{
		 			while (temp1->next != NULL)
					{
		 				temp2 = temp1;
		 				temp1 = temp1->next;
		 			}
		 		delete temp1;
		 		temp2->next = NULL;
				}
		 	}
		 	system("cls");
 		break;
 		case 3 :
				node *temp;
			 	temp = awal_ptr;
			 	cout << endl;
			 	if (temp == NULL)
			 	cout << "Belum ada Data!" << endl;
			 	else
			 	{
					while (temp != NULL)
				 		{
				 			cout << "Nama : " << temp->nama << endl;
				 			cout << "Umur : " << temp->umur << endl;
				 			cout << "Tinggi : " << temp->tinggi<<endl;
				 			cout << endl;
				 			temp = temp->next;
				 		}
				
		 		}
			 		
		system("cls");	 	
 		break;
 	
 	}
 	}
 	while (option != 0);
 	
}

//untuk menu call center
void callcenter(){
		cout<<"\n\t\t\t\t______________________________________________\n"<<endl;
		cout<<"  \t\t\t\t|                  CAll CENTER               |\n"<<endl;
		cout<<"  \t\t\t\t|____________________________________________|\n\n"<<endl;
		cout<<" Jalan Gunung Anyar VII, Surabaya, Indonesia"<<endl;
		cout<<" Phone : (+62 81)234567"<<endl;
		cout<<" Email : info@rsemergency"<<endl;	
}
//untuk menu rawat
void rawat(){	
	cout<<"\n\t\t\t\t______________________________________________\n"<<endl;
	cout<<"  \t\t\t\t|                  PERAWATAN                 |\n"<<endl;
	cout<<"  \t\t\t\t|____________________________________________|\n\n"<<endl;
	cout<<"1. Rawat Inap\n"<<endl;
	cout<<"2. Rawat Jalan\n\n"<<endl;
	cout<<"Pilihan Rawat :";
	cin>>pil;
	system("cls");
	switch (pil){
		case 1:
			cout<<"\n\t\t\t________________________________________________"<<endl;
			cout<<"\n\t\t\t|                                              |"<<endl;
			cout<<"\n\t\t\t|                   RAWAT INAP                 |"<<endl;
			cout<<"\n\t\t\t|______________________________________________|"<<endl;
			cout<<"\n\t\t\t|  Jenis kamar                                |"<<endl;
			cout<<"\n\t\t\t|  Waktu rawat                                |"<<endl;
			cout<<"\n\t\t\t|  Jenis penyakit                             |"<<endl;
			cout<<"\n\t\t\t|  Data pasien                                |"<<endl;
			cout<<"\n\t\t\t|  Data pemesan                               |"<<endl;
			cout<<"\n\t\t\t|  Biaya                                      |"<<endl;
			cout<<"\n\t\t\t|______________________________________________|\n"<<endl;
			cout<<"Tekan Y untuk lanjut :"<<endl;
			cin>>ver;
			system("cls");
			if (ver=='y' || ver=='Y'){
				system("cls");
				cout<<"\t\t---------------------------------------------------------------------------------\n"<<endl;
				cout<<"\t\t|                        RUMAH SAKIT PREMIER INDONESIA                          |\n "<<endl;
				cout<<"\t\t|            Jl.Air Sagu 2 No.21 Ulujami-Pesanggrahan, Jakarta Selatan          |\n"<<endl;
				cout<<"\t\t|-------------------------------------------------------------------------------|\n\n"<<endl;
				cout<<" Silahkan lakukan pengisian formulir dengan urut: \n"<<endl;
				cout<<"1. jenis kamar \n"<<endl;
				cout<<"2. jenis perawatan \n"<<endl;
				cout<<"Masukkan pilihan :"; 
				cin>>jenis;
				switch(jenis){
					case 1 :
						printf("jenis kamar");
					break;
					case 2:
						printf("jenis perawatan");
					break;
					default:
						rawat();				 
				}		
			}
			else{
				rawat();
			}
		break;
		case 2:
			cout<<"\n\t\t\t________________________________________________"<<endl;
			cout<<"\n\t\t\t|                                              |"<<endl;
			cout<<"\n\t\t\t|                  RAWAT JALAN                 |"<<endl;
			cout<<"\n\t\t\t|______________________________________________|"<<endl;
			cout<<"\n\t\t\t|  Waktu rawat                                |"<<endl;
			cout<<"\n\t\t\t|  Jenis penyakit                             |"<<endl;
			cout<<"\n\t\t\t|  Data pasien                                |"<<endl;
			cout<<"\n\t\t\t|  Data pemesan                               |"<<endl;
			cout<<"\n\t\t\t|  Biaya                                      |"<<endl;
			cout<<"\n\t\t\t|______________________________________________|"<<endl;
			cout<<"Tekan Y untuk lanjut :";
			cin>>ver;
			if(ver=='y' || ver=='Y'){
				
			}
			else{
				cout<<"anda gagal melanjutkan \n"<<endl;
				system("PAUSE");
				system("cls");
				rawat();
			}
		break;
		
		default:
			cout<<"....................\n"<<endl;
			system("PAUSE");
			system("cls");
			rawat();
		break;
	}
	
	
}	

