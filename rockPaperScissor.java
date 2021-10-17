// rock paper scissor game

import java.util.Random;
import java.util.Scanner;
public class rockPaperScissor {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Random ra = new Random();
        System.out.print("Enter the Players Name: ");
        String name = sc.nextLine();
        // Greeting the Player
        System.out.println("Hey,"+name+"! Welcome, to our Rock Paper Scissor Game.\n");
        System.out.println("Guidelines to play the Game>> \n> The Match will have 5 rounds\n> Press --\t 0>> Rock,\t 1>> Paper,\t 2>> Scissor.");

        int comp = 0;
        int you = 0;
        for (int i = 0; i < 5; i++)
        {
        System.out.println("Its Your turn !\n\t Enter a number (e.g. 0 or 1 or 2)");
        int user_input = sc.nextInt();
        switch(user_input) //Displaying the users Choice
        {
            case 0:
                System.out.println("You Selected Rock\n");
                break;
            case 1:
                System.out.println("You Selected Paper\n");
                break;    
            case 2:
                System.out.println("You Selected Scissor\n");
                break;
            default:
                System.out.println("Enter a valid number\n");
        }

        System.out.println("Now, Its the Computers Turn !");
        int computer_input = ra.nextInt(3);
        switch(computer_input) //Displaying the Computers Choice
        {
            case 0:
                System.out.println("The Computer Selected Rock\n");
                break;
            case 1:
                System.out.println("The Computer Selected Paper\n");
                break;    
            case 2:
                System.out.println("The computer Selected Scissor\n");
                break;
            
        }
        
        //Incrementing points according to the Match
        if (user_input == computer_input) 
        {
            System.out.println("Match Drawn!\n");
            comp += 1;
            you +=1 ;
        }
        else if((user_input == 0 && computer_input == 2) || (user_input == 1 && computer_input == 0) || (user_input ==2 && computer_input == 1))
        {
            System.out.println("You Win :)\n");
            you += 1;        }
        else
        {
            System.out.println("You Lose :( \n");
            comp += 1;
        }

    } //closing the for loop

    // Displaying the Results
    if (you == comp)
    {
        System.out.println("The Match is Drawn!\n");
    }
    else if (you > comp)
    {
        System.out.println("Congratulations! You win the Match :)\n");
    }
    else if (you < comp)
    {
        System.err.println("Sorry :( You lose the Match, Better Luck Next Time!\n");
    }
        
    }
}
