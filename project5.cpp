#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char nama[20], alamat[20], T_lahir[20], pas[10], usr [15], username[15], pass[10];
char ver;
int pilihan, status=1, salah, jenis, pil;
void head();
void login();
void buat_akun();
void setting();
void home();
void keluar();
void rawat();
void kwitansi();
int menu, buat, sisa=4;

//untuk membuat login dan buat akun

int main(void){	
	head();	
	printf("\t1. LOGIN \n");
	printf("\t2. BUAT AKUN \n");
	printf("\t3. SETTING\n");
	printf("\t4. KELUAR \n");
	printf("jika anda belum memiliki akun, klik <-BUAT AKUN-> terlebih dahulu.\n\n");
	printf("pilih nomor menu : ");
	scanf("%d", &menu);	
	system("cls");
	switch(menu){
		case 1:
			login();
		break;
		case 2:
			buat_akun();
		break;
		case 3:
			setting();
		break;
		case 4:
			keluar();
		break;
		default:
			printf("\n\n   Menu yang anda masukkan salah..\n\n\n");
	}

}

void login(){
			
	    	if (buat!=0){
	    			printf("\n\t\t\t\t LOGIN \n\n");
		 			printf("Masukkan username dan pasword yang telah Anda buat.\n\n\n");
			   while(status <=5 ){
				   	printf("Masukkan username- :");
				    scanf("%s", &username);
				    printf("Masukkan password- :");
				    scanf("%s", &pass);
				    system("cls");
			      if(strcmp(username, usr)==0 && strcmp (pass, pas)== 0){
			         printf("\t\t\t............Anda berhasil login............ \n\n\n");
			         system("PAUSE"); 
			         system("cls");
				     home();
			      } 
			      
			      else if(strcmp(username,usr)==0 && strcmp(pass, pas)!=0){
			         system("cls");
			         printf("\nPassword yang anda masukkan salah..!!\n\n");
			         printf("Kesempatan login anda sisa %d\n", sisa);
			         printf("\t\t\t\tSilahkan coba lagi....\n\n");
			         
			         
				  }
				  
				  else if(strcmp(username,usr)!=0 && strcmp(pass, pas)==0){
				  	 system("cls");
				  	 printf("\nUsername yang anda masukkan salah..!!\n\n");
				  	 printf("Kesempatan login anda sisa %d\n", sisa);
			         printf("\t\t\t\tSilahkan coba lagi....\n\n");
			         
				  }
				  
				  else{
				  	 system("cls");
			         printf("\nPasswoard dan Username yang anda masukkan salah..!!\n\n");
			         printf("Kesempatan login anda sisa %d\n", sisa);
			         printf("\t\t\t\tSilahkan coba lagi....\n\n");
			         
			      
			      }
			         
			         salah++;
			         
			         
			          if(salah == 5){
			    		system("cls");
			            printf("\nAnda telah menginputkan %d kali kesalahan.\n\n",status);
			            printf("  Akun anda di blokir ...\n\n\n");
			            printf("\t\t\t\t\t...........TERIMAKASIH..............\n");
			         }
			      sisa=4;
			      sisa=sisa-status;
			      status++;
			      
			   }
			   
			}
			else{
				printf("\n\n\t\t\t\t\t ~~~~~~~~~~ MOHON MAAF ~~~~~~~~~~\n\n");
				printf("  Anda belum membuat akun............\n\n\n");
				system("PAUSE");
				system("cls");
				main();
			}
	}


void buat_akun(){
			printf("\n\tbuat akun: \n\n");
			printf("Nama	      :"); fflush(stdin); gets(nama);
			printf("Alamat	      :"); fflush(stdin); gets(alamat);
			printf("Tanggal_lahir :"); fflush(stdin); gets(T_lahir);
			printf("Username      :"); scanf("%s",&usr);
			printf("Paswoard      :"); scanf("%s",&pas);
			printf("\n");
		    printf("klik Y/T untuk melanjutkan verifikasi akun :");
		    scanf("%s", &buat);
		    system("cls");
		   if (buat=='y' || buat=='Y'){
			   	printf("\n\t\t\t\t......SELAMAT......\n\n");
			   	printf("\t\t\t   Anda telah sukses membuat akun baru\n\n");
			   	printf("------------------------------------------------------------------\n");
			   	printf("Nama			:%s\n",nama);
			   	printf("Alamat			:%s\n",alamat);
			   	printf("Tanggal_lahir	:%s\n",T_lahir);
			   	printf("Username		:%s\n",usr);
			   	printf("passwoard		:%s\n\n\n",pas);
		    	printf("klik ENTER-->..\n\n\n");
		  		system("PAUSE");
		    	system("cls");
		    	main();
			    
			}
		   	else if (buat=='T' || buat=='t'){
					   	printf("Anda gagal membuat akun baru.\n\n");
					   	printf("\t\t\t\t\t...........TERIMAKASIH..............\n\n");
					   	buat=0;
				   		system("PAUSE");
				   		system("cls");
				   		main();
					   	
					   	
					}
		   	else{
				   	printf("\n\t Pilihan yang anda masukkan salah..\n\n");	
			   		buat=0;
			   		system("PAUSE");
			   		system("cls");
			   		main();
					
			}
}

void setting(){
		int set;
			printf("1. show account\n");
			printf("2. edit account\n");
			printf("3. back \n\n");
			printf("   masukkan pilihan : ");
			scanf("%d",&set);
			system("cls");
			switch(set){
				case 1:
					if(buat!=0 && buat=='Y' || buat=='y'){
						printf("\n\tAccount\n\n");
						printf("Username	:%s\n",usr);
						printf("passwoard	:%s\n\n\n",pas);
						system("PAUSE");
						system("cls");
						setting();	
					}
				
					else {
						printf("\n\n  Anda belum membuat akun............\n\n\n");
						system("PAUSE");
						system("cls");
						setting();
						
					}
						
				break;
				case 2:
					if(buat!=0 && buat=='Y' || buat=='y'){
						system("cls");
						printf("\n\tEdit account\n\n");
						printf("Account lama :\n");
						printf("Username	:%s\n",usr);
						printf("passwoard	:%s\n\n",pas);
						printf("edit :\n");
						printf("Masukkan Username dan passwoard baru:\n");
						printf("Username :"); 
						scanf("%s",&usr);
						printf("Passwoard :"); 
						scanf("%s",&pas);
						printf("\n\n");
						printf("sukse klik ENTER");
						system("PAUSE");
						system("cls");
						setting();	
					}
			
					else{
						printf("\n\n  Anda belum membuat akun............\n\n\n");
						system("PAUSE");
						system("cls");
						setting();
					}	
				break;	
				case 3:
				main();
				break;
				default:
				printf("\n   pilihan yang anda masukkan salah..\n");
				system("PAUSE");
				system("cls");
				setting();
				break;
				
			}
}
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



//untuk Home aplikasi/menu yang ada di aplikasi.

void home(){
 int menu2;
 system("cls");
 printf("\t\t\t\t__________________________________________________\n");
 printf("\t\t\t\t|                  Selamat Datang                |\n");
 printf("\t\t\t\t|                 Doctor Emergancy               |\n");
 printf("\t\t\t\t|________________________________________________|\n\n");
 printf("Menu : \n");
 printf("1. profil\n");
 printf("2. Rawat\n");
 printf("3. Rumah sakit\n"); 
 printf("4. Logout\n\n");
 printf("Masukkan nomor menu pilihan anda : ");
 scanf("%d", &menu2);
 system("cls");
 switch (menu2){
	 case 1:
	 	        printf("\n\t\t\t\t......PROFIL ANDA......\n\n");
			   	printf("____________________________________________________________\n");
			   	printf("Nama	 		 :\t%s\n",nama);
			   	printf("Alamat		 	:\t%s\n",alamat);
			   	printf("tanggal_lahir	:\t%s\n",T_lahir);
			   	printf("Username	 	:\t%s\n",usr);
			   	printf("passwoard	 	:\t%s\n",pas);
			   	system("PAUSE");
			   	system("cls");
			   	home();
			   	
	 	break;
	 case 2:
	 	rawat();
	 	system("PAUSE");
	 	home();
	 	break;
	 case 3:
	    printf("isi2\n");
	    system("PAUSE");
	 	home();
	    break;
	 case 4:
	    main();
	    break;
	 default:
	   	 printf("\t\t\t\tERROR\n\n");
		 printf("\n  Nomor menu yang anda masukkan tidak ada\n\n");
		 system("PAUSE");
		 home();
	 	

	 }
 
}

//untuk menu rawat
void rawat(){	

	printf("\n\t\t\t\t______________________________________________\n");
	printf("  \t\t\t\t|                  PERAWATAN                 |\n");
	printf("  \t\t\t\t|____________________________________________|\n\n");
	printf("1. Rawat Inap\n");
	printf("2. Rawat Jalan\n\n");
	printf("Pilihan Rawat :");
	scanf("%d",&pil);
	system("cls");
	switch (pil){
		case 1:
			printf("\n\t\t\t________________________________________________");
			printf("\n\t\t\t|                                              |");
			printf("\n\t\t\t|                   RAWAT INAP                 |");
			printf("\n\t\t\t|______________________________________________|");
			printf("\n\t\t\t| � Jenis kamar                                |");
			printf("\n\t\t\t| � Waktu rawat                                |");
			printf("\n\t\t\t| � Jenis penyakit                             |");
			printf("\n\t\t\t| � Data pasien                                |");
			printf("\n\t\t\t| � Data pemesan                               |");
			printf("\n\t\t\t| � Biaya                                      |");
			printf("\n\t\t\t|______________________________________________|\n");
			printf("Tekan Y untuk lanjut :");
			scanf("%s",&ver);
			system("cls");
			if (ver=='y' || ver=='Y'){
				system("cls");
				printf("\t\t---------------------------------------------------------------------------------\n");
				printf("\t\t|                        RUMAH SAKIT PREMIER INDONESIA                          |\n ");
				printf("\t\t|            Jl.Air Sagu 2 No.21 Ulujami-Pesanggrahan, Jakarta Selatan          |\n");
				printf("\t\t|-------------------------------------------------------------------------------|\n\n");
				printf(" Silahkan lakukan pengisian formulir dengan urut: \n");
				printf("1. jenis kamar \n");
				printf("2. jenis perawatan \n");
				printf("Masukkan pilihan :"); 
				scanf("%d",&jenis);
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
			printf("\n\t\t\t________________________________________________");
			printf("\n\t\t\t|                                              |");
			printf("\n\t\t\t|                  RAWAT JALAN                 |");
			printf("\n\t\t\t|______________________________________________|");
			printf("\n\t\t\t| � Waktu rawat                                |");
			printf("\n\t\t\t| � Jenis penyakit                             |");
			printf("\n\t\t\t| � Data pasien                                |");
			printf("\n\t\t\t| � Data pemesan                               |");
			printf("\n\t\t\t| � Biaya                                      |");
			printf("\n\t\t\t|______________________________________________|");
			printf("Tekan Y untuk lanjut :");
			scanf("%d",&ver);
			if(ver=='y' || ver=='Y'){
				
			}
			else{
				printf("anda gagal melanjutkan \n");
				system("PAUSE");
				system("cls");
				rawat();
			}
		break;
		
		default:
			printf("....................\n");
			system("PAUSE");
			system("cls");
			rawat();
		break;
	}
	
	
}	

	
