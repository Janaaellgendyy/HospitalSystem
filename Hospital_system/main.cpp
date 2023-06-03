#include <iostream>
using namespace std;

class patients_data{
public:
    string patientName;
    string patientGender;
    string patientAddress;
    string patientPhone;
    string clinicName;
    string patientDisease;
    string patientMedication;
    string patientSurgery;
    string doctorName;
    string nurseName;
    int patientAge;
public:
    patients_data(){
        patientName = " ";
        patientGender = " ";
        patientAddress = " ";
        patientPhone = " ";
        patientAge = 0;
    }
    patients_data(string patientName, string patientGender, string patientAddress, string patientPhone, int patientAge, string clinicName, string patientDisease, string patientMedication, string patientSurgery, string doctorName, string nurseName) {
        this -> patientName = patientName;
        this -> patientGender = patientGender;
        this -> patientAddress = patientAddress;
        this -> patientPhone = patientPhone;
        this -> clinicName = clinicName;
        this -> patientDisease = patientDisease;
        this -> patientMedication = patientMedication;
        this -> patientSurgery = patientSurgery;
        this -> doctorName = doctorName;
        this -> nurseName = nurseName;
        this -> patientAge = patientAge;
    }

};

class doctor {
public:
    string doctorName;
    string doctorAddress;
    string doctorPhone;
    string doctorSpecialization;
    int doctorAge;

public:
    doctor() {
        doctorName = " ";
        doctorAddress = " ";
        doctorPhone = " ";
        doctorSpecialization = " ";
        doctorAge = 0;
    }
    doctor(string doctorName, string doctorAddress, string doctorPhone, string doctorSpecialization, int doctorAge) {
        this -> doctorName = doctorName;
        this -> doctorAddress = doctorAddress;
        this -> doctorPhone = doctorPhone;
        this -> doctorSpecialization = doctorSpecialization;
        this -> doctorAge = doctorAge;
    }

};

class nurse {
public:
    string nurseName;
    string nurseGender;
    string nurseAddress;
    string nursePhone;
    int nurseAge;
public:
    nurse() {
        nurseName = " ";
        nurseGender = " ";
        nurseAddress = " ";
        nursePhone = " ";
        nurseAge = 0;
    }
   nurse(string nurseName, string nurseGender, string nurseAddress, string nursePhone, int nurseAge) {
        this -> nurseName = nurseName;
        this -> nurseGender = nurseGender;
        this -> nurseAddress = nurseAddress;
        this -> nursePhone = nursePhone;
        this -> nurseAge = nurseAge;
    }

};

class hospital{
public:
    string hospitalAddress;
    string hospitalPhone;
    string hospitalbranch;
    int AvailableRooms;
public:
    hospital() {
        hospitalAddress = " ";
        hospitalPhone = " ";
        hospitalbranch = " ";
        AvailableRooms = 0;
    }
    hospital(string hospitalAddress, string hospitalPhone, string hospitalbranch, int AvailableRooms) {
        this -> hospitalAddress = hospitalAddress;
        this -> hospitalPhone = hospitalPhone;
        this -> hospitalbranch = hospitalbranch;
        this -> AvailableRooms = AvailableRooms;
    }

};


class node {
public:
    patients_data p;
    doctor d;
    nurse n;
    hospital h;
    node *next;
    node *prev;
    node(patients_data pdata, doctor ddata, nurse ndata, hospital hdata) {
        p = pdata;
        d = ddata;
        n = ndata;
        h = hdata;
        next = NULL;
        prev = NULL;
    }

};

class Doublylinkedlist {
private:
    node *head;
public:
    int count;
    Doublylinkedlist() {
        head = NULL;
        count = 0;
    }
    bool isEmpty() {
        if (head == NULL) {
            return true;
        }
        else {
            return false;
        }
    }


    void print_patient () {
        node *temp = head;
        bool found = false;
        if (head == NULL) {
            cout << "DATA NOT FOUND" << endl;
        }
        else {
            while (temp != NULL){
                string patient;
                cout << "Enter the name of the patient: " << endl;
                cin >> patient;
                if (temp -> p.patientName == patient){
                    found = true;
                    break;
                }
                temp = temp -> next;
            }
        }
        if (found){
            cout << "Patient Data: " << endl;
            cout << temp -> p.patientName << endl << temp -> p.patientGender << endl << temp -> p.patientAddress <<
            endl << temp -> p.patientPhone << endl << temp -> p.patientAge << endl << temp -> p.clinicName << endl
            << temp -> p.patientDisease << endl << temp -> p.patientMedication << endl << temp -> p.patientSurgery
            << endl << temp -> p.doctorName << endl << temp -> p.nurseName << endl;
        }
        else
            cout << "DATA NOT FOUND" << endl;
    }
    void print_doctor () {
        node *temp = head;
        bool found = false;
        if (head == NULL) {
            cout << "DATA NOT FOUND" << endl;
        }
        else {
            while (temp != NULL){
                string doctor;
                cout << "Enter the name of the doctor: " << endl;
                cin >> doctor;
                if (temp -> d.doctorName == doctor){
                    found = true;
                    break;
                }
                temp = temp -> next;
            }
        }
        if (found){
            cout << "Doctor Data: " << endl;
            cout << temp -> d.doctorName << endl << temp -> d.doctorAddress <<
            endl << temp -> d.doctorPhone << endl << temp -> d.doctorSpecialization
            << endl << temp -> d.doctorAge << endl;
        }
        else
            cout << "DATA NOT FOUND" << endl;
    }
    void print_nurse () {
        node *temp = head;
        bool found = false;
        if (head == NULL) {
            cout << "DATA NOT FOUND" << endl;
        }
        else {
            while (temp != NULL){
                string nurse;
                cout << "Enter the name of the nurse: " << endl;
                cin >> nurse;
                if (temp -> n.nurseName == nurse){
                    found = true;
                    break;
                }
                temp = temp -> next;
            }
        }
        if (found){
            cout << "Nurse Data: " << endl;
            cout << temp -> n.nurseName << endl << temp -> n.nurseGender << endl
            << temp -> n.nurseAddress << endl << temp -> n.nursePhone << endl
            << temp -> n.nurseAge << endl;
        }
        else
            cout << "DATA NOT FOUND" << endl;
    }
    void print_hospital () {
        node *temp = head;
        bool found = false;
        if (head == NULL) {
            cout << "DATA NOT FOUND" << endl;
        }
        else {
            while (temp != NULL){
                string hospital;
                cout << "Enter the branch of the hospital: " << endl;
                cin >> hospital;
                if (temp -> h.hospitalbranch == hospital){
                    found = true;
                    break;
                }
                temp = temp -> next;
            }
        }
        if (found){
            cout << "hospital Data: " << endl;
            cout << temp -> h.hospitalAddress << endl << temp -> h.hospitalPhone
            << endl << temp -> h.hospitalbranch << endl << temp -> h.AvailableRooms << endl;
        }
        else
            cout << "DATA NOT FOUND" << endl;
    }

void add_data_first(patients_data a, doctor b, nurse c, hospital d) {
        node *temp = new node(a, b, c, d);
        if (isEmpty() == true) {
            head = temp;
        }
        else {
            temp -> next = head;
            head -> prev = temp;
            head = temp;
        }
        count++;
    }

    void removepatient(){
        node * temp = head;
        bool found = false;

        if (head == NULL){
            cout << "DATA NOT FOUND" << endl;
        }
        else {
            while (temp != NULL){
                string patient;
                cout << "Enter the name of the patient: " << endl;
                cin >> patient;
                if (temp -> p.patientName == patient){
                    found = true;
                    break;
                }
                temp = temp -> next;
            }
        }
        if (found){
            node * p = NULL;
            p = head;
            head = head -> next;
            delete (p);
            count --;
            cout << "DATA DELETED SUCCESSFULLY!" << endl;
        }
    }
    void removeDoctor(){
        node * temp = head;
        bool found = false;

        if (head == NULL){
            cout << "DATA NOT FOUND" << endl;
        }
        else {
            while (temp != NULL){
                string doctor;
                cout << "Enter the name of the doctor: " << endl;
                cin >> doctor;
                if (temp -> d.doctorName == doctor){
                    found = true;
                    break;
                }
                temp = temp -> next;
            }
        }
        if (found){
            node * p = NULL;
            p = head;
            head = head -> next;
            delete (p);
            count --;
            cout << "DATA DELETED SUCCESSFULLY!" << endl;
        }
    }
    void removeNurse(){
        node * temp = head;
        bool found = false;

        if (head == NULL){
            cout << "DATA NOT FOUND" << endl;
        }
        else {
            while (temp != NULL){
                string nurse;
                cout << "Enter the name of the nurse: " << endl;
                cin >> nurse;
                if (temp -> n.nurseName == nurse){
                    found = true;
                    break;
                }
                temp = temp -> next;
            }
        }
        if (found){
            node * p = NULL;
            p = head;
            head = head -> next;
            delete (p);
            count --;
            cout << "DATA DELETED SUCCESSFULLY!" << endl;
        }
    }
    void removeHospital(){
        node * temp = head;
        bool found = false;

        if (head == NULL){
            cout << "DATA NOT FOUND" << endl;
        }
        else {
            while (temp != NULL){
                string hospital;
                cout << "Enter the name of the hospital: " << endl;
                cin >> hospital;
                if (temp -> h.hospitalbranch == hospital){
                    found = true;
                    break;
                }
                temp = temp -> next;
            }
        }
        if (found){
            node * p = NULL;
            p = head;
            head = head -> next;
            delete (p);
            count --;
            cout << "DATA DELETED SUCCESSFULLY!" << endl;
        }
    }

    patients_data searchByNamep(string name){
        if (isEmpty() == false){
            node *temp = head;
            while (temp != NULL){
                if (name == temp -> p.patientName){
                    return temp -> p;
                }
                temp = temp -> next;
            }
        }
        else {
            cout << "List is Empty" << endl;
        }
    }
    doctor searchByNamed(string name){
        if (isEmpty() == false){
            node *temp = head;
            while (temp != NULL){
                if (name == temp -> d.doctorName){
                    return temp -> d;
                }
                temp = temp -> next;
            }
        }
        else {
            cout << "List is Empty" << endl;
        }
    }
    nurse searchByNamen(string name){
        if (isEmpty() == false){
            node *temp = head;
            while (temp != NULL){
                if (name == temp -> n.nurseName){
                    return temp -> n;
                }
                temp = temp -> next;
            }
        }
        else {
            cout << "List is Empty" << endl;
        }
    }
    hospital searchByBranch(string branch){
        if (isEmpty() == false){
            node *temp = head;
            while (temp != NULL){
                if (branch == temp -> h.hospitalbranch){
                    return temp -> h;
                }
                temp = temp -> next;
            }
        }
        else {
            cout << "List is Empty" << endl;
        }
    }
    patients_data searchByPhonep(string phone){
        if (isEmpty() == false){
            node *temp = head;
            while (temp != NULL){
                if (phone == temp -> p.patientPhone){
                    return temp -> p;
                }
                temp = temp -> next;
            }
        }
        else {
            cout << "List is Empty" << endl;
        }
    }
    doctor searchByPhoned(string phone){
        if (isEmpty() == false){
            node *temp = head;
            while (temp != NULL){
                if (phone == temp -> d.doctorPhone){
                    return temp -> d;
                }
                temp = temp -> next;
            }
        }
        else {
            cout << "List is Empty" << endl;
        }
    }
    nurse searchByPhonen(string phone){
        if (isEmpty() == false){
            node *temp = head;
            while (temp != NULL){
                if (phone == temp -> n.nursePhone){
                    return temp -> n;
                }
                temp = temp -> next;
            }
        }
        else {
            cout << "List is Empty" << endl;
        }
    }
    hospital searchByPhoneh(string phone){
        if (isEmpty() == false){
            node *temp = head;
            while (temp != NULL){
                if (phone == temp -> h.hospitalPhone){
                    return temp -> h;
                }
                temp = temp -> next;
            }
        }
        else {
            cout << "List is Empty" << endl;
        }
    }

};



int main() {
 Doublylinkedlist Data;
 patients_data p;
 doctor d;
 nurse n;
 hospital h;


    while (true) {
        cout << "Welcome to the Hospital Management System" << endl;
        cout << "1. Add Patients Data" << endl;
        cout << "2. Add Doctor Data" << endl;
        cout << "3. Add Nurse Data" << endl;
        cout << "4. Add Hospital Data" << endl;
        cout << "5. print patient data" << endl;
        cout << "6.print doctor data " << endl;
        cout << "7.print nurse data " << endl;
        cout << "8.print hospital data " << endl;
        cout << "9.search patient by name " << endl;
        cout << "10.search patient by phone " << endl;
        cout << "11.search doctor by name " << endl;
        cout << "12.search doctor by phone " << endl;
        cout << "13.search nurse by name " << endl;
        cout << "14.search nurse by phone " << endl;
        cout << "15.search hospital by branch " << endl;
        cout << "16.search hospital by phone " << endl;
        cout << "17. Delete patient data " << endl;
        cout << "18. Delete doctor data " << endl;
        cout << "19. Delete nurse data " << endl;
        cout << "20. Delete hospital data " << endl;
        cout << "21. Exit " << endl;
        cout << "Enter Your Choice: ";
        int choice;
        cin >> choice;

        if (choice == 1){
            cout << "Enter Patient Name: " << endl;
            cin >> p.patientName ;

            cout << "Enter Patient Gender: " << endl;
            cin >> p.patientGender;

            cout << "Enter Patient Address: " << endl;
            cin >> p.patientAddress;

            cout << "Enter Patient Phone: " << endl;
            cin >> p.patientPhone;

            cout << "Enter patient Age: " << endl;
            cin >> p.patientAge;

            cout << "Enter Clinic Name: " << endl;
            cin >> p.clinicName;

            cout << "Enter Patient Disease: " << endl;
            cin >> p.patientDisease;

            cout << "Enter Patient Medication: " << endl;
            cin >> p.patientMedication;

            cout << "Enter Patient Surgery: "<< endl;
            cin >> p.patientSurgery;

            cout << "Enter Doctor Name: " << endl;
            cin >> p.doctorName;

            cout << "Enter Nurse Name: " << endl;
            cin >> p.nurseName;

            Data.add_data_first(p, d, n, h);
        }
        else if (choice == 2){
            cout << "Enter Doctor Name: " << endl;
            cin >> d.doctorName;

            cout << "Enter Doctor Address: " << endl;
            cin >> d.doctorAddress;

            cout << "Enter Doctor Phone: " << endl;
            cin >> d.doctorPhone;

            cout << "Enter Doctor Specialization: " << endl;
            cin >> d.doctorSpecialization;

            cout << "Enter Doctor Age: " << endl;
            cin >> d.doctorAge;

            Data.add_data_first(p, d, n, h);
        }
        else if (choice == 3){
            cout << "Enter Nurse Name: ";
            cin >> n.nurseName;

            cout << "Enter Nurse Gender: ";
            cin >> n.nurseGender;

            cout << "Enter Nurse Address: ";
            cin >> n.nurseAddress;

            cout << "Enter Nurse Phone: ";
            cin >> n.nursePhone;

            cout << "Enter Nurse Age: ";
            cin >> n.nurseAge;
        }
        else if (choice == 4){
            cout << "Enter Hospital Address: ";
            cin >> h.hospitalAddress;

            cout << "Enter Hospital Phone: ";
            cin >> h.hospitalPhone;

            cout << "Enter Hospital Branch: ";
            cin >> h.hospitalbranch;

            cout << "Enter Available Rooms: ";
            cin >> h.AvailableRooms;

            Data.add_data_first(p, d, n, h);
        }
        else if(choice == 5){
            Data.print_patient();
        }
        else if (choice == 6){
            Data.print_doctor();
        }
        else if (choice == 7){
            Data.print_nurse();
        }
        else if (choice == 8){
            Data.print_hospital();
        }
        else if (choice == 9){
            string name;
            cout << "Enter Patient Name: ";
            cin >> name;
            patients_data r = Data.searchByNamep(name);
            if (name == "") {
                cout << "Patient Not Found" << endl;
            }
            else {
                cout << "Patient Name: " << r.patientName << endl << "Patient phone: " << r.patientPhone <<
                     endl << "Patient Gender: " << r.patientGender << endl << "Patient Address: " << r.patientAddress
                     << endl << "Patient Age: " << r.patientAge << endl << "Clinic Name: " << r.clinicName << endl <<
                     "Patient Disease: " << r.patientDisease << endl << "Patient Medication: " << r.patientMedication
                     << endl << "Patient Surgery: " << r.patientSurgery << endl << "Doctor Name: " << r.doctorName << endl << "Nurse Name: " << r.nurseName << endl;
            }
        }
        else if (choice == 10){
            string phone;
            cout << "Enter Patient Phone: ";
            cin >> phone;
            patients_data r = Data.searchByPhonep(phone);
            if (phone == ""){
                cout << "Patient Not Found" << endl;
            }
            else{
                cout << "Patient Name: " << r.patientName << endl << "Patient phone: " << r.patientPhone <<
                     endl << "Patient Gender: " << r.patientGender << endl << "Patient Address: " << r.patientAddress
                     << endl << "Patient Age: " << r.patientAge << endl << "Clinic Name: " << r.clinicName << endl <<
                     "Patient Disease: " << r.patientDisease << endl << "Patient Medication: " << r.patientMedication
                     << endl << "Patient Surgery: " << r.patientSurgery << endl << "Doctor Name: " << r.doctorName << endl << "Nurse Name: " << r.nurseName << endl;
            }
        }
        else if (choice == 11){
            string name;
            cout << "Enter Doctor Name: ";
            cin >> name;
            doctor y = Data.searchByNamed(name);
            if (name == ""){
                cout << "Doctor Not Found" << endl;
            }
            else{
                cout << "Doctor Name: " << y.doctorName << endl << "Doctor Phone: " << y.doctorPhone << endl
                     << "Doctor Address: " << y.doctorAddress << endl << "Doctor Specialization: " << y.doctorSpecialization
                     << endl << "Doctor Age: " << y.doctorAge << endl;
            }
        }
        else if (choice == 12){
            string phone;
            cout << "Enter Doctor Phone: ";
            cin >> phone;
            doctor y = Data.searchByPhoned(phone);
            if (phone == ""){
                cout << "Doctor Not Found" << endl;
            }
            else{
                cout << "Doctor Name: " << y.doctorName << endl << "Doctor Phone: " << y.doctorPhone << endl
                     << "Doctor Address: " << y.doctorAddress << endl << "Doctor Specialization: " << y.doctorSpecialization
                     << endl << "Doctor Age: " << y.doctorAge << endl;
            }
        }
        else if (choice == 13){
            string name;
            cout << "Enter Nurse Name: ";
            cin >> name;
            nurse z = Data.searchByNamen(name);
            if (name == ""){
                cout << "Nurse Not Found" << endl;
            }
            else {
                cout << "Nurse Name: " << z.nurseName << endl << "Nurse Phone: " << z.nursePhone << endl <<
                     "Nurse Gender" << z.nurseGender << endl << "Nurse Address: " << z.nurseAddress << endl <<
                     "Nurse Age: " << z.nurseAge << endl;
            }
        }
        else if (choice == 14) {
            string phone;
            cout << "Enter Nurse Phone: ";
            cin >> phone;
            nurse z = Data.searchByPhonen(phone);
            if (phone == ""){
                cout << "Nurse Not Found" << endl;
            }
            else{
                cout << "Nurse Name: " << z.nurseName << endl << "Nurse Phone: " << z.nursePhone << endl <<
                     "Nurse Gender" << z.nurseGender << endl << "Nurse Address: " << z.nurseAddress << endl <<
                     "Nurse Age: " << z.nurseAge << endl;
            }
        }
        else if (choice == 15){
            string branch;
            cout << "Enter Hospital branch: ";
            cin >> branch;
            hospital x = Data.searchByBranch(branch);
            if (branch == ""){
                cout << "Hospital Not Found" << endl;
            }
            else{
                cout << "Hospital Branch: " << x.hospitalbranch << endl << "Hospital Phone: " << x.hospitalPhone << endl
                     << "Hospital Address: " << x.hospitalAddress << endl << "Available Rooms: " << x.AvailableRooms << endl;
            }
        }
        else if (choice == 16){
            string phone;
            cout << "Enter Hospital Phone: ";
            cin >> phone;
            hospital x = Data.searchByPhoneh(phone);
            if (phone == ""){
                cout << "Hospital Not Found" << endl;
            }
            else{
                cout << "Hospital Branch: " << x.hospitalbranch << endl << "Hospital Phone: " << x.hospitalPhone << endl
                     << "Hospital Address: " << x.hospitalAddress << endl << "Available Rooms: " << x.AvailableRooms << endl;
            }
        }
        else if (choice == 17){
            Data.removepatient();
        }
        else if (choice == 18){
            Data.removeDoctor();

        }
        else if (choice == 19){
            Data.removeNurse();

        }
        else if (choice == 20){
            Data.removeHospital();

        }
        else if (choice == 21){
            cout << "Thank You For Using Our System" << endl;
            return 0;
        }
    }

}


