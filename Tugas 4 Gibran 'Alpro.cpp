#include <iostream>
using namespace std;


int main() {
    string start, mulai, next,nextcheat, namaKarakter,endingdua, name,ending, efekupgrade,efekjajan,
    reset,balik,efekperang,efekperangdua,pilihmap,efekperangr,spesial,kalah;
    
    int menu, karakter, hp, dmg, Mana, senjata, armor, dmgmonst, upgrade,upgradeitem,jumlahBP,
    jumlahRP,pilihlevelsatu,pilihleveldua,hpkanibal,dmgkanibal,dmgboss,hpboss,perang,critefek;
    double crit;
    
    int coin = 2000;
    
    cout << "---------------------------------" << endl;
    cout << "><><><><><> THE ISLE ><><><><><><" << endl;
    cout << "---------------------------------" << endl;
    cout << "--------<>><><><><><<><>---------" << endl;
    cout << " Input Anything to Start Game : ";
    cin >> nextcheat;
    
    if (nextcheat == "menu"){
        goto menu;
    }
    else if (nextcheat == "karakter"){
        goto pilihkarakter;
    }
    else if (nextcheat == "senjata"){
        goto pilihsenjata;
    }
    else if (nextcheat == "cit"){
        hp += 5000;
        Mana += 5000;
        crit +=3;
        dmg += 4000;
        coin = 99999;
        goto menu;
    }
    
    /// } = 1 \\\
    
    cout << "\033[2J\033[1;1H";
    cout << "************************************************************************"<< endl;
    cout << "You are 3 people on holiday to the Ndgigi Islands, on the way when your" << endl;
    cout << "flight suddenly your plane is shot down by something" << endl;
    cout << "------------------------------------------------------------------------"<< endl;
    cout << "Input anything to continue" << endl;
    cin >> next;
    
    cout << "\033[2J\033[1;1H";
    cout << "---!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!---" << endl;
    cout << "!!!------------------------ THE PLANE CRASHED!!! --------------------------" << endl;
    cout << "half awake you see that everyone is dragged apart and the pilot and copilot " << endl;
    cout << "died in the crash" << endl;
    cout << "---------------------------------------------------------------------------"<< endl;
    cout << "Input anything to continue" << endl;
    cin >> next;
    
    cout << "\033[2J\033[1;1H";
    cout << "************************************ NAME ************************************** "<< endl;
    cout << "YOU WAKE UP CAGED ALONE, THEN YOU LISTEN TO YOUR CAGE GUARD WHISPERING THAT YOUR "<< endl;
    cout << "FRIEND WAS HELD ON A DIFFERENT ISLAND." << endl;
    cout << "-------------------------------------------------------------------------------- "<< endl;
    cout << "THE GUARD SEEES YOU GET UP AND IMMEDIATELY ASKS WHAT YOUR NAME IS" << endl;
    cout << "PLAYER NAME : ";
    cin >> name;
    
    cout << "\033[2J\033[1;1H";
    cout << "------------------------------------------------------------"<< endl;
    cout << "THE GUARD TAUNTING YOU AND YOU PULL HIM OUT OF THE IRON CAGE" <<endl;
    cout << "THEN YOU TAKE THE KEY AND LEAVE!" << endl;
    cout << "------------------------------------------------------------"<< endl;
    cout << "Input anything to continue" << endl;
    cin >> next;
    
    
    
    pilihkarakter:
    while (true) {
        cout << "\033[2J\033[1;1H";
        cout << "----------------------------CHOOSE YOUR CHARACTER--------------------------------" << endl;
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << " 1.Dadang    Hp:1000 DMG:100 CRIT= 0,1 MANA= 1000 *Tinju maut" << endl;
        cout << " (Petinju yang sedang berlibur)" << endl;
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << " 2.Uyuy      HP:800  DMG:150 CRIT= 0,2 MANA= 1000 *Mata elang" << endl;
        cout << " (Atlit Panahan 2 tahun lalu)" << endl;
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << " 3.Gerung    HP:900  DMG:75 CRIT= 0,1  MANA= 1000 *racik obat" << endl;
        cout << " (Dokter umum kurang sukses)" << endl;
        cout << " CHOOSE :";
        cin >> karakter;

        if (karakter == 1) {
            namaKarakter = "Dadang";
            spesial = "Tinju Maut";
            hp = 1000;
            dmg = 100;
            crit = 0.1;
            Mana = 1000;
            break;
        } else if (karakter == 2) {
            namaKarakter = "Uyuy";
            spesial = "Mata elang";
            hp = 800;
            dmg = 150;
            crit = 0.1;
            Mana = 1000;
            break;
        } else if (karakter == 3) {
            namaKarakter = "Gerung";
            spesial = "racik obat";
            hp = 900;
            dmg = 75;
            crit = 0.1;
            Mana = 1000;
            break;
        } else {
            cout << "character invalid";
            break;
        }
    }
    
    /// } = 2 \\\
    
    pilihsenjata:
    while (true) {
        cout << "\033[2J\033[1;1H";
        cout << "------------------------------CHOOSE YOUR WEAPON---------------------------------" << endl;
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << " Golok              (1)" << endl;
        cout << " DMG + 50  " << endl;
        cout << " Panah              (2)" << endl;
        cout << " CRIT + 0.2" << endl;
        cout << " Boneka santet      (3)" << endl;
        cout << " MANA + 200" << endl;
        cout << " Back to character  (4)" << endl;
        cout << " CHOOSE :" << endl;
        cin >> senjata;

        if (senjata == 1) {
            dmg += 50;
            break;
        } else if (senjata == 2) {
            crit += 0.2;
            break;
        } else if (senjata == 3) {
            Mana += 200;
            break;
        } else if (senjata == 4) {
            goto pilihkarakter;
            break;
        } else {
            cout << "Weapon invalid";
            break;
        }
    }
    
    /// } = 2 \\\
    
    while (true){
        cout << "\033[2J\033[1;1H";
        cout << "-------------------------------CHOOSE YOUR ARMOR---------------------------------" << endl;
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << " Rompi kang parkir   (1)" << endl;
        cout << " defense + 10           " << endl;
        cout << " Helm bangunan       (2)" << endl;
        cout << " defense + 10           " << endl;
        cout << " Kaos band           (3)" << endl;
        cout << " no efek skena only     " << endl;
        cout << " Back to Weapon      (4)" << endl;
        cout << " CHOOSE :" << endl;
        cin >> armor;

        if (armor == 1) {
            dmgmonst -= 10;
            break;
        } 
        else if (armor == 2) {
            dmgmonst -= 10;
            break;
        } 
        else if (armor == 3) {
            cout << " ";
            break;
        }
        else if (armor == 4) {
            goto pilihsenjata;
            break;
        } 
        else {
            cout << "Armor invalid";
            break;
        }
    }
    
     /// } = 2 \\\
     
    menu:
    
    cout << "\033[2J\033[1;1H";
    cout << "Welcome to the game " << name << endl;
    cout << efekperangr << endl;;
    cout << "Stats" << endl;
    cout << "HP   = " << hp   <<   "  Dmg  = " << dmg  << endl;
    cout << "Crit = " << crit <<   "     Mana = " << Mana << endl;
    cout << "Red Plants  = " << jumlahRP << endl;
    cout << "Blue Plants = " << jumlahBP << endl;
    cout << "Gold        = " << coin << endl;

    cout << "Goals            (1)" << endl;
    cout << "UPGRADE          (2)" << endl;
    cout << "SHOP             (3)" << endl;
    cout << "START            (4)" << endl;
    cout << "RESET CHARACTER  (5)" << endl;
    cout << "Choose: ";
    cin >> menu;
    
    goals:
    switch (menu) {
        /////////////////////////
        case 1:
            cout << "\033[2J\033[1;1H";
            cout << "GOALS" << endl
                 << "-ESCAPE FROM THE ISLAND" << endl
                 << "-SAVE YOUR FRIENDS" << endl
                 << "-SURVIVE" << endl
                 << "BACK? (y/n)";
            cin >> balik;
            if (balik == "y") {
                goto menu;
            }
            else if (balik == "n") {
                goto goals;
            }
            break;
            
            
        ////////////akhir case 1///////    
        case 2:
        while (true) {
            cout << "\033[2J\033[1;1H";
            cout << efekupgrade << endl;
            cout << "HP =" << hp << " DMG =" << dmg << " MANA =" << Mana << endl;
            cout << "($1000) UPGRADE WEAPON DMG  +25   (1)" << endl;
            cout << "($1000) UPGRADE ARMOR  HP   +20   (2)" << endl;
            cout << "($1000) UPGRADE MANA   MANA +20   (3)" << endl;
            cout << " BACK                             (4)" << endl;
            cout << "Coins = " << coin << endl;
            cout << "Choose: ";
            cin >> upgrade;

        switch (upgrade) {
            case 1:
                if (coin >= 1000) {
                    dmg += 25;
                    efekupgrade = "DMG + 25";
                    coin -= 1000;
                } else {
                    efekupgrade = "Not enough coins";
                }
                break;
            case 2:
                if (coin >= 1000) {
                    hp += 20;
                    efekupgrade = "HP + 20";
                    coin -= 1000;
                } else {
                    efekupgrade = "Not enough coins";
                }
                break;
            case 3:
                if (coin >= 1000) {
                    Mana += 20;
                    efekupgrade = "MANA + 20";
                    coin -= 1000;
                } else {
                    efekupgrade = "Not enough coins";
                }
                break;
            case 4:
                goto menu;
                
            default:
                efekupgrade = "INVALID INPUT";
                }
        }
        //// } = 2 ////
        ///////////// akhir case 2
        
        case 3:
    while (true) {
        cout << "\033[2J\033[1;1H";
        cout << "SHOP" << endl;
        cout << efekjajan << endl;
        cout << "Red plants = " << jumlahRP << endl;
        cout << "Blue plants = " << jumlahBP << endl;
        cout << "($300) Red plants     HP    +100   (1)" << endl;
        cout << "($300) Blue plants    MANA  +60    (2)" << endl;
        cout << " BACK                              (3)" << endl;
        cout << "Coins = " << coin << endl;
        cout << "Choose: ";
        cin >> upgradeitem;

        switch (upgradeitem) {
            case 1:
                if (coin >= 300 && jumlahRP < 2) {
                    coin -= 300;
                    jumlahRP += 1;
                   
                } 
                else if (coin < 300) {
                    efekjajan = "Not enough coins";
                } 
                else {
                    efekjajan = "Red plant limit reached.";
                }
                break;
                
            case 2:
                if (coin >= 300 && jumlahBP < 2) {
                    coin -= 300;
                    jumlahBP += 1;
                    
                } 
                else if (coin < 300) {
                    efekjajan = "Not enough coins";
                } 
                else {
                    efekjajan = "Blue plant limit reached.";
                }
                break;
                
            case 3:
               goto menu;
                break;
                
            default:
                    efekjajan = "Invalid input";
        }
    }
    /// } = 2 ///
    ///////////// akhir case 3
    
    case 4:
            start:
            cout << "\033[2J\033[1;1H";
            cout << "START (y/n)";
            cin  >> pilihmap;
            
            
            
            mapsatu:
            if (pilihmap == "y"){
            cout << "\033[2J\033[1;1H";
            cout << "MAP 1" << endl;
            cout << "1.Level 1" << endl;
            cout << "2.Level 2" << endl;
            cout << "3.Level 3" << endl;
            cout << "4.Level 4" << endl;
            cout << "5.Level 5" << endl;
            cout << "6.Level 6" << endl;
            cout << "7.Boss level"<<endl;
            cout << "8.BACK" << endl;
            cout << "CHOOSE LEVEL :";
            cin  >> pilihlevelsatu;
            
            if (pilihlevelsatu == 1){
                dmgkanibal = 50;
                hpkanibal =500;
            }
            else if (pilihlevelsatu == 2){
                dmgkanibal = 60;
                hpkanibal = 550;
            }
            else if (pilihlevelsatu == 3){
                dmgkanibal = 70;
                hpkanibal = 600;
            }
            else if (pilihlevelsatu == 4){
                dmgkanibal = 80;
                hpkanibal = 650;
            }
            else if (pilihlevelsatu == 5){
                dmgkanibal = 90;
                hpkanibal = 700;
            }
            else if (pilihlevelsatu == 6){
                dmgkanibal = 100;
                hpkanibal = 800;
            }
            else if (pilihlevelsatu == 7){
                dmgkanibal = 100;
                hpkanibal = 800;
            }
            else if (pilihlevelsatu == 8){
                goto menu;
            }
            else {
                cout << "INVALID INPUT ";
                goto mapsatu;
            }
            }
            
            else if(pilihmap == "n"){
                goto menu;
            }
            else {
                goto start;
            }
////akhir menu map 4 
//// perperangan
        while (true) {
                
                cout << "\033[2J\033[1;1H";
                cout << efekperang << endl;
                cout << efekperangdua << endl;
                cout <<"--" << namaKarakter <<" Stats--" <<endl;
                cout << " HP             : " << hp << endl;
                cout << " Damage         : " << dmg << endl;
                cout << " MANA           : " << Mana << endl;
                cout << " Red plants     : " << jumlahRP << endl;
                cout << " Blue plants    : " << jumlahBP << endl;
                cout << "---Enemy stats---" << endl;
                cout << " CANIBAL   HP   : " << hpkanibal << endl;
                cout << " CANIBAL Damage : " << dmgkanibal << endl;
                cout << "------------------";
                
                cout << endl << endl;
            
                cout << " 1. Attack " << endl;
                cout << " 2. " << spesial << endl;
                cout << " 3. Use Red plants " << endl;
                cout << " 4. Use blue plants" << endl;
                cout << "Choose your Move :";
                cin  >> perang;
                
                critefek = dmg*crit;
                //
                if (perang == 1) {
                    hpkanibal -= dmg + critefek ;
                    hp -= dmgkanibal;
                    Mana -= 50;

                    efekperang =" Enemy Hurt ! "  ;
                    efekperangdua =" Enemy attacked back !" ;
                 }
                //
                else if (perang == 2) {
                    
                    if (karakter == 1){
                        hpkanibal -= dmg + critefek * 2 ;
                        hp -= dmgkanibal;
                        Mana -= 5;
                        
                        efekperang = " Enemy Hurt ! " ;
                        efekperangdua = " Enemy attacked back !"  ;
                    }
                    else if (karakter == 2){
                        hpkanibal -= dmg + critefek * 2 ;
                        hp -= dmgkanibal;
                        Mana -= 5;
                        
                        efekperang = " Enemy Hurt ! " ;
                        efekperangdua = " Enemy attacked back !" ;
                    }
                    else if (karakter == 3){
                        hp += 500;
                        Mana -= 5;
                        
                        efekperang = " You've Healed 500 HP" ;
                        efekperangdua = "";
                    }
                 }
                //
                else if (perang == 4) {
                    
                    Mana += 60;

                    efekperang = "Your Mana Have Been Restored" ;
                    efekperangdua = "MANA + 60";
                    
                 }
                 //
                 //KALO KALAH//
            if (hp <= 0) {
                cout << endl;
                efekperangr =  "You Have Been Defeated" ;
                cout << "You have been defeated" << endl;
                cout << "input any to exit";
                cin >> kalah;
                return 0;
                
            }
                //KALO MENANG//
            
            else if (hpkanibal <= 0 ) {
                    cout << endl;
            if (pilihlevelsatu == 1) {
                coin += 2500;
                efekperangr = "Reward 2500 coins" ;
            } 
            else if (pilihlevelsatu == 2) {
                coin += 3000;
                efekperangr = "Reward 3000 coins" ;
            } 
            else if (pilihlevelsatu == 3) {
                coin += 3500;
                efekperangr = "Reward 3500 coins" ;
                goto endingsatu;
            } 
            else if (pilihlevelsatu == 4) {
                coin += 4000;
                efekperangr = "Reward 4000 coins" ;
            } 
            else if (pilihlevelsatu == 5) {
                coin += 4500;
                efekperangr = "Reward 4500 coins" ;
            } 
            else if (pilihlevelsatu == 6) {
                coin += 5000;
                efekperangr = "Reward 5000 coins" ;
            } 
            else if (pilihlevelsatu == 7) {
                coin += 10000;
                efekperangr = "Reward 10000 coins" ;
                goto endingdua;
                
                 
            }

                efekperangr = "Enemy Have Been Defeated! " ;
                cout << " Click Any To Continue : ";
                goto menu;
                break;
            }
        }
        // akhir case 4\\
        // } = 2 \\
        
        caselima:
        case 5:
            cout << "Are you sure? (y/n)";
            cin >> reset;
            if (reset == "y" ) {
                goto pilihkarakter;
            }
            else if (reset == "n" ) {
                goto menu;
            }
             else {
                 goto caselima;
             }
            
        
        
// } while menu //
}
// ending choice //
            endingsatu:
            cout << "You found a little ship would you go and leave your friend  behind? (y/n)" << endl;
            cin >> ending;
                if (ending == "y"){
                    cout << "ENDING 1" << endl;
                    cout << "YOU SURVIVED AND PUBLISHED A BOOK ABOUT YOUR EXPERIENCE" << endl;
                    cout << "BUT ENDED UP BEING KILLED BY ONE OF YOUR FRIENDS WHO WAS ALSO A SURVIVOR" << endl;
                    return 0;
                }
                else if (ending == "n"){
                    goto menu;
                }
                else {
                    goto endingsatu;
                }
            
            endingdua:
                cout << "ENDING 2" << endl;
                cout << "YOU KILLED THE BOSS AND SAVED ALL YOUR FRIENDS" << endl;
                cout << "YOU SURVIVED AND PUBLISHED A BOOK ABOUT YOUR EXPERIENCE" << endl;
                cout << "AND LIVE WITH THAT CRUEL MEMORY" << endl;
                return 0;
                

// } end    
}