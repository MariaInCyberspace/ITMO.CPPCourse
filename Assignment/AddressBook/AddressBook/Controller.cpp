#include "Controller.h"
#include "View.h"
#include "Literals.h" 

Controller::Controller()
{
    view = new View();
    lit = new Literals();
}

Controller::~Controller()
{
    delete view;
    delete lit;
    for (Person* p : allContacts) delete p;
}


void Controller::collectContact(Person* p)
{
    allContacts.push_back(p);
}

void Controller::saveContacts(std::vector<Person*>& contacts)
{
    for (Person* p : contacts) p->writeToFile();
}

std::string Controller::chooseCategory()
{
    view->displayMessage(lit->CHOOSE_CATEGORY);
    std::string category = view->getInput();
    return category;
}

Person* Controller::fillContactInfo(std::string _category)
{
    Person* p;
    view->displayMessage(lit->FIRST_NAME);
    std::string fName = view->getInput();
    view->displayMessage(lit->LAST_NAME);
    std::string lName = view->getInput();
    view->displayMessage(lit->OCCUPATION);
    std::string occup = view->getInput();
    view->displayMessage(lit->PHONENUMBER);
    std::string phone = view->getInput();
    view->displayMessage(lit->EMAIL);
    std::string email = view->getInput();

    if (_category == "c") {
        view->displayMessage(lit->WORKPLACE);
        std::string wPlace = view->getInput();
        p = new Colleague(fName, lName, occup, phone, email, wPlace);
        return p;
    }
    else if (_category == "t") {
        view->displayMessage(lit->UNIVERSITY);
        std::string univ = view->getInput();
        p = new Teacher(fName, lName, occup, phone, email, univ);
        return p;
    }
    else if (_category == "s") {
        view->displayMessage(lit->SPECIALTY);
        std::string spec = view->getInput();
        view->displayMessage(lit->UNIVERSITY);
        std::string univ = view->getInput();
        p = new Student(fName, lName, occup, phone, email, spec, univ);
        return p;
    }
    else if (_category == "f") {
        view->displayMessage(lit->RELATION);
        std::string rel = view->getInput();
        p = new FamilyMember(fName, lName, occup, phone, email, rel);
        return p;
    }
}

void Controller::runApp()
{
    std::string command = lit->CONTINUE_COMMAND;
    while (command != lit->EXIT_COMMAND) {
        std::string category = chooseCategory();
        Person* pers = fillContactInfo(category);
        collectContact(pers);
        view->displayMessage(lit->CONTINUE_PROMPT);
        command = view->getInput();
    }
    view->displayContacts(allContacts);
    saveContacts(allContacts);
}
