// Project Uno - Mathematics Quiz

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Input Variables
    int score{0}, gotoCount{0}, choice, option, answer1, answer2, answer3, points, decision;
    char finalchoice;
    string topics[6] = {"N/A", "Algebra", "BODMAS", "2D Shapes", "Statistics", "Trigonometry"};
    string levels[3] = {"Easy", "Medium", "Hard"};
    string mode;

    m:
    cout << "Would you like to take part in my 2023 Maths Quiz? Please Respond with Yes (1) or No (0) ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Thank you! Let's Begin!";
    }else if (choice == 0)
    {
        cout << "Alright, Have A Good Day!";
        exit(0);
    }else{
        cout << "Error... Reloading...";
        goto m;
    }

    math:
    cout << "\n\n\t Select Which Math Topic You Would Like To Work On for this Quiz: \n";
    cout << "1) Algebra \n";
    cout << "2) BODMAS \n";
    cout << "3) 2D Shapes \n";
    cout << "4) Statistics \n";
    cout << "5) Trigonometry \n";
    cout << "6) Find Your Total Score \n";

    cout << "\n\n Please Enter Your Choice! ";
    cin >> option;

    switch(option)
    {
        default:
            cout << "\n\t Thank You! \n";
            exit(0);

        case 1:
            cout << "\n";
            cout << "You have picked the topic, 'Algebra' \n";
            cout << "\n\t Select A Mode of Difficulty: \n";
            cout << "7) Easy \n";
            cout << "8) Medium \n";
            cout << "9) Hard \n";
            cin >> decision;

            switch (decision)
            {
            case 7:
                levels[0] = mode;
                cout << "\n";
                cout << "There will consist of 3 Questions. Please put each answer in a numeric form not worded. \n";
                
                cout << "\t Question 1: \n";
                cout << "What is the value of x in the following equation => 3x + 5y = 80 - when y is equal to 7? ";
                cin >> answer1;
                if (answer1 == 15)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

                cout << "\t Question 2: \n";
                cout << "What is the value of x in the following equation => x + 9 = 18 - 2x? ";
                cin >> answer2;
                if (answer2 == 3)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

                cout << "\t Question 3: \n";
                cout << "x is equal to 6, y is equal to 3, and z is equal to 0. Here is an equation => 4x - 5y + 9z. What is the value of this equation? ";
                cin >> answer3;
                if (answer3 == 9)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

            break;

            case 8:
                levels[1] = mode;
                cout << "\n";
                cout << "There will consist of 3 Questions. Answer them as best as you can. \n";

                cout << "\t Question 1: \n";
                cout << "Ben pays $40 per month to attend a weekly yoga class. \n";
                cout << "His sister Elsa gets a discount at her yoga class and pays $35 per month. \n";
                cout << "Over the course of one year, how much more money does Ben pay a year to attend his yoga class? \n";
                cout << "\n";

                cin >> answer1;
                if (answer1 == 60)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

                cout << "\t Question 2: \n";
                cout << "If f(x) = 17x - 30, find f(2) - f(1) \n";
                cout << "\n";

                cin >> answer2;
                if (answer2 == 17)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

                cout << "\t Question 3: \n";
                cout << "If p × q = p + q + p/q, the value of 8 × 2 is: \n";
                cout << "\n";

                cin >> answer3;
                if (answer3 == 14)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

            break;

            case 9:
                levels[2] = mode;
                cout << "There will consist of 3 Questions. Wishing you the best of Luck! \n";

                cout << "\t Question 1: \n";
                cout << "If 3x - y = 12, what is the value of 8^x / 2^y ? Use A Calculator if Needed. \n";
                cin >> answer1;
                if (answer1 == 4096)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

                cout << "\t Question 2: \n";
                cout << "Find x + y, if: 5x + 8y = 67 and 2x - y = 31 \n";
                cin >> answer2;
                if (answer2 == 14)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

                cout << "\t Question 3: \n";
                cout << "Two inlet pipes lead into a large water tank. One pipe can fill the tank in 45 minutes; ";
                cout << "the other can fill it in 40 minutes. \n To the nearest tenth of a minute, how long would it take ";
                cout << "the two pipes together to fill the tank if both were opened at the same time? Provide only the value. ";
                cin >> answer3;
                if (answer3 == 21.2)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

            break;
                      
            }

        break;

        case 2:
            cout << "\n";
            cout << "You have picked the topic, 'BODMAS' \n";
            cout << "\n\t Select A Mode of Difficulty: \n";
            cout << "a) Easy \n";
            cout << "b) Medium \n";
            cout << "c) Hard \n";
            cin >> decision;

            switch (decision)
            {
                case 'a':
                    levels[0] = mode;
                    cout << "You will have 3 equations to answer. Do them to the best of your ability. \n";
                    cout << "\n";

                    cout << "\t Question 1: \n";
                    cout << "What is 5 + (3 × 2) − 4? ";
                    cin >> answer1;
                    if (answer1 == 9)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "What is (8 ÷ 2) × (4 − 1)? ";
                    cin >> answer2;
                    if (answer2 == 12)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "Maria is planning a party and needs to buy decorations. She decides to purchase \n";
                    cout << " balloons in packs of 12 and party hats in packs of 8. She wants to decorate the \n";
                    cout << " venue with an equal number of balloons and party hats. If she plans to buy 5 packs \n";
                    cout << " of balloons and 3 packs of party hats, how many balloons will she have left after \n";
                    cout << " using the same number for decorations, and how many decorations will she have in total? ";
                    cin >> answer3;

                    if (answer3 == 36)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    break;

                case 'b':
                    levels[1] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. \n";

                    cout << "\t Question 1: \n";
                    cout << "Maria has $150. She decides to spend half of it on a new book series, \n";
                    cout << " then gives 1/4 of the remaining money to her friend. How much money does ";
                    cout << " Maria have left? Have your answer in a decimal. ";

                cin >> answer1;
                if (answer1 == 56.25)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

                cout << "\t Question 2: \n";
                cout << "Evaluate the following expression => 18 - (4 x 3) + (24/4) \n";

                cin >> answer2;
                if (answer2 == 21)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }

                cout << "\t Question 3: \n";
                cout << "Solve the expression => (15/3) + (7 x 2) - 5 \n";

                cin >> answer3;
                if (answer3 == 16)
                {
                    cout << "Correct! \n";
                    score += 1;
                    cout << "\n";
                }else{
                    cout << "Incorrect! \n";
                    cout << "\n";
                }
                    break;

                case 'c':  
                    levels[2] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Provide your answer in decimal if needed.\n";

                    cout << "\t Question 1: \n";
                    cout << "Emily is planning a road trip. She drives at a speed of 60 miles per hour for the first 2 hours, \n";
                    cout << " then increases her speed by 20% for the next 3 hours. If she maintains this increased speed for the \n ";
                    cout << " entire journey, how many miles will she travel in total? Only provide the value. \n";

                    cin >> answer1;
                    if (answer1 == 240)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "Evaluate the following expression => (3/4) x (2^3 + √25) - (1/2)\n";

                    cin >> answer2;
                    if (answer2 == 8.5)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "A company produces widgets at a rate of 120 widgets per hour. After a quality improvement, \n";
                    cout << "the production rate increases by 25% each month. If they produce widgets at this increased rate \n";
                    cout << "for 6 months, how many widgets will they have in total? Only provide the value. \n";

                    cin >> answer3;
                    if (answer3 == 402187.5)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    break;
            }         
            break;

        case 3:
            cout << "\n";
            cout << "You have picked the topic, '2D Shapes' \n";
            cout << "\n\t Select A Mode of Difficulty: \n";
            cout << "N) Easy \n";
            cout << "O) Medium \n";
            cout << "P) Hard \n";
            cin >> decision;

            switch (decision)
                case 'N':
                    levels[0] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Provide your answer in decimal if needed and Only provide the value. \n";

                    cout << "\t Question 1: \n";
                    cout << "If a rectangle has a length of 8 units and a width of 5 units, what is its perimeter? \n";
                    cin >> answer1;

                    if (answer1 == 26)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "The radius of a circle is 6 cm. What is the circumference of the circle? \n";
                    cin >> answer2;

                    if (answer2 == 37.7)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3 \n";
                    cout << "A triangle has a base of 10 meters and a height of 6 meters. What is the area of the triangle? \n";
                    cin >> answer3;

                    if (answer3 == 30)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }
                break;

                case 'O':
                    levels[1] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Provide your answer in decimal if needed and Only provide the value. \n";

                    cout << "\t Question 1: \n";
                    cout << "The interior angles of a regular hexagon each measure 120 degrees. What is the sum of all the interior angles of the hexagon? \n";
                    cin >> answer1;

                    if (answer1 == 720)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect!";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "A parallelogram has a base of 12 units and a height of 8 units. What is the area of the parallelogram? \n";
                    cin >> answer2;

                    if (answer2 == 96)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "The radius of a circle is 5 cm. What is the area of the circle? \n";
                    cin >> answer3;

                    if (answer3 == 78.54)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }
                break;

                case 'P':
                    levels[2] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Provide your answer in decimal (2 decimal places) if needed and Only provide the value. \n";

                    cout << "\t Question 1: \n";
                    cout << "Sarah has a garden in the shape of a combination of a rectangle and a semicircle. \n";
                    cout << "The rectangular part has a length of 10 meters and a width of 6 meters. The semicircular \n";
                    cout << "part has a diameter of 8 meters. Calculate the total area of Sarah's garden. \n";
                    cin >> answer1;

                    if (answer1 == 98.57)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "What is the angle of a right angled triangle with opposite side 8cm and adjacent side 6cm using the SOH? \n";
                    cin >> answer2;

                    if (answer2 == 53.13)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "A composite figure is made up of a quare and a semicircle.\n";
                    cout << "The side length of the square is 10 units. Find the total area\n";
                    cout << "of the composite figure. \n";
                    cin >> answer3;

                    if (answer3 == 125.71)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }
                break;
        break;

        case 4:
            cout << "\n";
            cout << "You have picked the topic, 'Statistics' \n";
            cout << "\n\t Select A Mode of Difficulty: \n";
            cout << "X) Easy \n";
            cout << "Y) Medium \n";
            cout << "Z) Hard \n";
            cin >> decision;

            switch (decision)
                case 'X':
                    levels[0] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Only provide the value. \n";

                    cout << "\t Question 1: \n";
                    cout << "In a class of 30 students, the teacher \n";
                    cout << "recorded the scores of a recent math quiz. \n";
                    cout << "The average score was 75, and the standard deviation \n";
                    cout << "was 5. What is the sum of all the scores? ";
                    cin >> answer1;

                    if (answer1 == 2250)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "A survey was conducted to find out how many hours per week \n";
                    cout << "people spend watching TV. The data collected from 50 participants \n";
                    cout << "showed an average of 4 hours with a standard deviation of 1.5 hours. \n";
                    cout << "What is the total number of hours spent watching TV by all participants? ";
                    cin >> answer2;

                    if (answer2 == 200)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "The heights (in inches) of a group of friends are as follows: 65, 68, 72, 70, \n";
                    cout << "\t and 67. Find the range of their heights. ";
                    cin >> answer3;

                    if (answer3 == 7)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    break;

                case 'Y':  
                    levels[1] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Only provide the value. \n";

                    cout << "\t Question 1: \n";
                    cout << "The scores of a class of 25 students in a statistics exam are as follows: 65, 68, 70, \n";
                    cout << "72, 75, 78, 80, 82, 85, 88, 90, 92, 95, 98, 100, 102, 105, 108, 110, 112, 115, 118, 120, \n";
                    cout << "122, 125. Determine the standard deviation of the scores. ";
                    cin >> answer1;

                    if (answer1 == 18.61)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "A group of friends recorded the time (in minutes) it took them to complete a puzzle. The \n";
                    cout << "data is as follows: 15, 20, 25, 30, 35, 40, 45, 50. Calculate the interquartile range (IQR) \n";
                    cout << "of the puzzle completion times. ";
                    cin >> answer2;

                    if (answer2 == 25)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "A company conducted a survey to determine the ages of its employees. The mean age is 35 years, \n";
                    cout << "and the variance is 25. If the distribution is approximately normal, what percentage of employees \n";
                    cout << "is younger than 40 years old? ";
                    cin >> answer3;

                    if (answer3 == 84)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    break;

                case 'Z':
                    levels[2] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Only provide the value. \n";

                    cout << "\t Question 1: \n";
                    cout << "The scores of a group of students in a challenging mathematics competition are normally distributed \n";
                    cout << "with a mean of 75 and a standard deviation of 10. If the top 5% of students receive awards, what is \n";
                    cout << "the minimum score needed to earn an award? ";
                    cin >> answer1;

                    if (answer1 == 88)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "The heights of a group of professional basketball players are normally distributed with a mean of 200 cm \n";
                    cout << "and a standard deviation of 10 cm. If a player is in the top 2% in terms of height, what is the minimum \n";
                    cout << "height required to be in the top 2%? ";
                    cin >> answer2;

                    if (answer2 == 219.14)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "The scores of a group of students on a difficult exam are normally distributed with a mean of 75 and a \n";
                    cout << "standard deviation of 10. If the top 5% of students receive an award, what is the minimum score required \n";
                    cout << "to receive the award? ";
                    cin >> answer3;

                    if (answer3 == 90)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }   

                    break;
            break;
        case 5:
            cout << "\n";
            cout << "You have picked the topic, 'Trigonometry' \n";
            cout << "\n\t Select A Mode of Difficulty: \n";
            cout << "R) Easy \n";
            cout << "S) Medium \n";
            cout << "T) Hard \n";
            cin >> decision;

            switch(decision);
                case 'R':
                    levels[0] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Only provide the value. \n";

                    cout << "\t Question 1: \n";
                    cout << "If sin(θ) = 0.6, what is the value of cos(θ)? ";
                    cin >> answer1;

                    if (answer1 == 4/5 || answer1 == 0.2)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "Given that tan(α) = 2, what is the value of cot(α)? ";
                    cin >> answer2;

                    if (answer2 == 1/2 || answer2 == 0.5)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "If cos(β) = 4/7, what is the value of sin(β)? ";
                    cin >> answer3;

                    if (answer3 == 0.82)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    break;

                case 'S':
                    levels[1] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Only provide the value. \n";

                    cout << "\t Question 1: \n";
                    cout << "In a right-angled triangle, if the length of one leg \n";
                    cout << "is 12 and the hypotenuse is 15, what is the sine of the \n";
                    cout << "angle opposite the leg? ";
                    cin >> answer1;

                    if (answer1 == 4/5 || answer1 == 0.8)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "If cos(α) = 3/5, find the value of tan(α)? ";
                    cin >> answer2;

                    if (answer2 == 4/3 || answer2 == 1.33)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "Given that sin(β) = 5/13, determine the value of cot(β)? ";
                    cin >> answer3;

                    if (answer3 == 13/5 || answer3 == 2.6)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    break;

                case 'T':
                    levels[2] = mode;
                    cout << "\n";
                    cout << "There will consist of 3 Questions. Answer them as best as you can. Only provide the value. \n";

                    cout << "\t Question 1: \n";
                    cout << "In a triangle ABC, angle A is 30 degrees, and side a is 10 units. \n";
                    cout << "If b = 2a, find the length of side c using the law of Sines. ";
                    cin >> answer1; 

                    if (answer1 == 17.32)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 2: \n";
                    cout << "The angle of elevation to the top of a tower is 45 degrees from a \n";
                    cout << "point P on the ground. If the distance from P to the base of the \n";
                    cout << "tower is 20 meters, find the height of the tower. ";
                    cin >> answer2;

                    if (answer2 == 20)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }

                    cout << "\t Question 3: \n";
                    cout << "Given that sin(θ) = 3/5, and cos(ϕ) = 4/5, find the value of tan(θ + ϕ). ";
                    cin >> answer3;

                    if (answer3 == -24/7 || answer3 == -3.43)
                    {
                        cout << "Correct! \n";
                        score += 1;
                        cout << "\n";
                    }else{
                        cout << "Incorrect! \n";
                        cout << "\n";
                    }
                    break;
            break;
        case 6:
            cout << "\n\n You have chosen to see how many marks you have obtained through all the quizzess you have taken. \n";
            cout << "Good Job for taking part in these quizzes, even if you only did 1. \n";
            cout << "\n";
            cout << "Based on your progress, you have gone through about " << gotoCount << " times. \n";
            cout << "And Based on all the quizzes you have taken, you have a total score of " << score << " points. \n";
            cout << "Have A Great Day! \n";

            exit(0);
    }

    cout << "Thank you for Playing! \n";
    
    cout << "Would you like to continue (Y/N): ";
    cin >> finalchoice;

    l:
    if (finalchoice == 'Y' || 'y')
    {
        gotoCount++;
        goto math;
    }else if (finalchoice == 'N' || 'n'){
        exit(0);
    }else{
        cout << "Error \n";
        goto l;
    }

    return 0;
}
