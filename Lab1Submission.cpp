#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double battery, money, completed_deliveries, pay, miles, tips;
    string charging_question, weather, final_question;
    bool working;
    battery = 100;
    money = 0.00;
    completed_deliveries = 0;
    pay= 5.00;
    working = true;

    while(working == true){
        if(battery < 30){
            cout << "Do you want to charge your car?(Y/N): ";
            cin >> charging_question;
            cout << "---------------------------------------------------------------------------------------------------------------\n";
            cout << "---------------------------------------------------------------------------------------------------------------\n";

            if(charging_question == "Y"){
                if(battery >= 76){
                    cout << "You cant charge it. Sorry.";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "Do you want to charge your car?(Y/N): ";
                    cin >> charging_question;
                }
                else{
                    battery = battery + 25;
                }
            }
            else if(charging_question == "N"){
                
            }

        }

        else{
            
            cout << "---------------------------------------------------------------------------------------------------------------\n";
            cout << "---------------------------------------------------------------------------------------------------------------\n";
        }

        cout << "How long is the delivery distace in miles?: ";
        cin >> miles;
        cout << "---------------------------------------------------------------------------------------------------------------\n";
        cout << "---------------------------------------------------------------------------------------------------------------\n";

        if(miles == 0 || miles == 1 || miles == 2){
            if(battery == 0 || battery == 5){ 
                cout << "You cannot do this delivery. Your vehicle does not have enough battery.";
                cout << "Do you want to charge your car?(Y/N): ";
                cin >> charging_question;
            }

            else{
                battery = battery - 10;

                cout << "How much did you get in tips?: ";
                cin >> tips;
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "What was the weather like during your delivery?(C for Clear, R for Rain, S for Snow): \n";
                cin >> weather;
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                
                if(tips == 0){
                    cout << "Unlucky. Should have been a better delivery driver.\n";
                    money = money + 5.00;
                    completed_deliveries = completed_deliveries + 1;
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "Do you want to end your shift?(Y/N): \n";
                    cin >> final_question;
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";

                    if(final_question == "Y"){
                        working = false;
                    }

                    else if(final_question == "N"){
                        
                    }
                }

                else if(tips < 0){
                    cout << "Not possible. You cant get a negative tip.\n";
                    money = money + 5.00;
                    completed_deliveries = completed_deliveries + 1;
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "Do you want to end your shift?(Y/N): \n";
                    cin >> final_question;
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";

                    if(final_question == "Y"){
                        working = false;
                    }

                    else if(final_question == "N"){
                        
                    }
                }

                else{
                    cout << "Good job.\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";

                    if(weather == "C"){
                        money = money + 5.00 + tips + 0;
                        completed_deliveries = completed_deliveries + 1;
                        cout << "Do you want to end your shift?(Y/N): ";
                        cin >> final_question;
                        cout << "---------------------------------------------------------------------------------------------------------------\n";
                        cout << "---------------------------------------------------------------------------------------------------------------\n";

                        if(final_question == "Y"){
                            working = false;
                        }

                        else if(final_question == "N"){
                            
                        }
                    }

                    else if(weather == "R"){
                        money = money + 5.00 + tips + 2.00;
                        completed_deliveries = completed_deliveries + 1;
                        cout << "Do you want to end your shift?(Y/N): ";
                        cin >> final_question;
                        cout << "---------------------------------------------------------------------------------------------------------------\n";
                        cout << "---------------------------------------------------------------------------------------------------------------\n";

                        if(final_question == "Y"){
                            working = false;
                        }

                        else if(final_question == "N"){
                            
                        }
                    }

                    else if(weather == "S"){
                        if(tips > 8){
                            money = money + 5.00 + tips + 3.00;
                            completed_deliveries = completed_deliveries + 1;
                            cout << "You get an additional hero bonus. Thanks for being our hero :).";
                            cout << "---------------------------------------------------------------------------------------------------------------\n";
                            cout << "---------------------------------------------------------------------------------------------------------------\n";

                            cout << "Do you want to end your shift?(Y/N): ";
                            cin >> final_question;
                            cout << "---------------------------------------------------------------------------------------------------------------\n";
                            cout << "---------------------------------------------------------------------------------------------------------------\n";

                            if(final_question == "Y"){
                                working = false;
                            }

                            else if(final_question == "N"){
                                
                            }
                        }

                        else{
                            money = money + 5.00 + tips + 8.00;
                            completed_deliveries = completed_deliveries + 1;
                            cout << "Do you want to end your shift?(Y/N): ";
                            cin >> final_question;
                            cout << "---------------------------------------------------------------------------------------------------------------\n";
                            cout << "---------------------------------------------------------------------------------------------------------------\n";   

                            if(final_question == "Y"){
                                working = false;
                            }

                            else if(final_question == "N"){
                                
                            }
                        }
                    }
                }

            }
        }

        else if(miles == 3 || miles == 4 || miles == 5){
            if(battery == 0 ||battery == 5 || battery == 10|| battery == 15){
                cout << "You cannot do this delivery. Your vehicle does not have enough battery";
                cout << "Do you want to charge your car?(Y/N): ";
                cin >> charging_question;
            }
            else{
                battery = battery - 20;

                cout << "How much did you get in tips?: ";
                cin >> tips;
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "What was the weather like during your delivery?(C for Clear, R for Rain, S for Snow): ";
                cin >> weather;
                
                if(tips == 0){
                    cout << "Unlucky. Should have been a better delivery driver.";
                    money = money + 5.00;
                    completed_deliveries = completed_deliveries + 1;
                    cout << "Do you want to end your shift?(Y/N): ";
                    cin >> final_question;
                        if(final_question == "Y"){
                            working = false;
                        }
                        else if(final_question == "N"){
                            
                        }
                }
                else if(tips < 0){
                    cout << "Not possible. You cant get a negative tip.";
                    money = money + 5.00;
                    completed_deliveries = completed_deliveries + 1;
                    cout << "Do you want to end your shift?(Y/N): ";
                    cin >> final_question;
                        if(final_question == "Y"){
                            working = false;
                        }
                        else if(final_question == "N"){
                            
                        }
                }
                else{
                    cout << "Good job.\n";
                    if(weather == "C"){
                        money = money + 5.00 + tips + 0;
                        completed_deliveries = completed_deliveries + 1;
                        cout << "Do you want to end your shift?(Y/N): ";
                    cin >> final_question;
                        if(final_question == "Y"){
                            working = false;
                        }
                        else if(final_question == "N"){
                            
                        }
                    }
                    else if(weather == "R"){
                        money = money + 5.00 + tips + 2.00;
                        completed_deliveries = completed_deliveries + 1;
                        cout << "Do you want to end your shift?(Y/N): ";
                        cin >> final_question;
                        if(final_question == "Y"){
                            working = false;
                        }
                        else if(final_question == "N"){
                            
                        }
                    }
                    else if(weather == "S"){
                        if(tips > 8){
                            money = money + 5.00 + tips + 3.00;
                            completed_deliveries = completed_deliveries + 1;
                            cout << "You get an additional hero bonus. Thanks for being our hero :).";
                            cout << "Do you want to end your shift?(Y/N): ";
                            cin >> final_question;
                            if(final_question == "Y"){
                                working = false;
                            }
                            else if(final_question == "N"){
                                
                            }
                        }
                        else{
                            money = money + 5.00 + tips + 8.00;
                            completed_deliveries = completed_deliveries + 1;
                            cout << "Do you want to end your shift?(Y/N): ";
                            cin >> final_question;
                            if(final_question == "Y"){
                                working = false;
                            }
                            else if(final_question == "N"){
                                
                            }
                        }
                    }
                }
            }
        }
//Up to this part I belive is good
        else if(miles > 5){
            if(battery == 0||battery == 5|| battery == 10||battery == 15|| battery == 20|| battery == 25){
                cout << "You cannot do this delivery. Your vehicle does not have enough battery";
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "---------------------------------------------------------------------------------------------------------------\n";

                cout << "Do you want to charge your car?(Y/N): ";
                cin >> charging_question;
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "---------------------------------------------------------------------------------------------------------------\n";
            }
            else{
                battery = battery - 30;

                cout << "How much did you get in tips?: ";
                cin >> tips;
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "What was the weather like during your delivery?(C for Clear, R for Rain, S for Snow): ";
                cin >> weather;
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                cout << "---------------------------------------------------------------------------------------------------------------\n";
                
                if(tips == 0){
                    cout << "Unlucky. Should have been a better delivery driver.";
                    money = money + 5.00;
                    completed_deliveries = completed_deliveries + 1;
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "Do you want to end your shift?(Y/N): ";
                    cin >> final_question;
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";

                    if(final_question == "Y"){
                        working = false;
                    }

                    else if(final_question == "N"){
                        
                    }
                }

                else if(tips < 0){
                    cout << "Not possible. You cant get a negative tip.";
                    money = money + 5.00;
                    completed_deliveries = completed_deliveries + 1;
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "Do you want to end your shift?(Y/N): ";
                    cin >> final_question;
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    if(final_question == "Y"){
                        working = false;
                    }

                    else if(final_question == "N"){
                        
                    }
                }

                else{
                    cout << "Good job.\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";
                    cout << "---------------------------------------------------------------------------------------------------------------\n";

                    if(weather == "C"){
                        money = money + 5.00 + tips + 0;
                        completed_deliveries = completed_deliveries + 1;
                        cout << "Do you want to end your shift?(Y/N): ";
                        cin >> final_question;
                        cout << "---------------------------------------------------------------------------------------------------------------\n";
                        cout << "---------------------------------------------------------------------------------------------------------------\n";

                        if(final_question == "Y"){
                            working = false;
                        }

                        else if(final_question == "N"){
                            
                        }
                    }

                    else if(weather == "R"){
                        money = money + 5.00 + tips + 2.00;
                        completed_deliveries = completed_deliveries + 1;
                        cout << "Do you want to end your shift?(Y/N): ";
                        cin >> final_question;
                        cout << "---------------------------------------------------------------------------------------------------------------\n";
                        cout << "---------------------------------------------------------------------------------------------------------------\n";

                        if(final_question == "Y"){
                            working = false;
                        }

                        else if(final_question == "N"){
                            
                        }
                    }

                    else if(weather == "S"){
                        if(tips > 8){
                            money = money + 5.00 + tips + 3.00;
                            completed_deliveries = completed_deliveries + 1;
                            cout << "You get an additional hero bonus. Thanks for being our hero :).";
                            cout << "---------------------------------------------------------------------------------------------------------------\n";
                            cout << "---------------------------------------------------------------------------------------------------------------\n";

                            cout << "Do you want to end your shift?(Y/N): ";
                            cin >> final_question;

                            if(final_question == "Y"){
                                working = false;
                            }

                            else if(final_question == "N"){
                                
                            }
                        }

                        else{
                            money = money + 5.00 + tips + 8.00;
                            completed_deliveries = completed_deliveries + 1;
                            cout << "Do you want to end your shift?(Y/N): ";
                            cin >> final_question;
                            cout << "---------------------------------------------------------------------------------------------------------------\n";
                            cout << "---------------------------------------------------------------------------------------------------------------\n";

                            if(final_question == "Y"){
                                working = false;
                            }

                            else if(final_question == "N"){
                                
                            }
                        }
                    }
                }
            }
        }

        else{
            cout << "A negative number is not possible. Please try again.\n";
            cout << "---------------------------------------------------------------------------------------------------------------\n";
            cout << "---------------------------------------------------------------------------------------------------------------\n";
        }
    }


    if(completed_deliveries >= 10){
        cout << "You are a delivery legend.\n";
        cout << "Battery: ";
        cout << battery;
        cout << "\nMoney: ";
        cout << money;
        cout << "\nCompleted Deliveries: ";
        cout << completed_deliveries;
    }

    else if(completed_deliveries == 7 || completed_deliveries == 8 || completed_deliveries == 9){
        cout << "You had a great shift.\n";
        cout << "Battery: ";
        cout << battery;
        cout << "\nMoney: ";
        cout << money;
        cout << "\nCompleted Deliveries: ";
        cout << completed_deliveries;
    }

    else if(completed_deliveries == 4|| completed_deliveries == 5|| completed_deliveries == 6){
        cout << "Solid work.\n";
        cout << "Battery: ";
        cout << battery;
        cout << "\nMoney: ";
        cout << money;
        cout << "\nCompleted Deliveries: ";
        cout << completed_deliveries;
    }

    else if(completed_deliveries == 0|| completed_deliveries == 1|| completed_deliveries == 2|| completed_deliveries == 3){
        cout << "Slow night.\n";
        cout << "Battery: ";
        cout << battery;
        cout << "\nMoney: ";
        cout << money;
        cout << "\nCompleted Deliveries: ";
        cout << completed_deliveries;
    }
    
}