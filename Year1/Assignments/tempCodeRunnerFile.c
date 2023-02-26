printf("\nPlease enter your %d digit PIN:\n", size);

            // this for loop gets the first array value and makes sure its not a character or a number not betwwen 1 and 9 and keeps going through all array values until it hits the size value
            for(i = 0; i < size; i++)
            {
                scanf("%d", &pin_verify[i]);

                // this while loop keeps getting inputs from the user until its not a character
                while(getchar() != '\n')
                {
                    printf("\nNo characters or floats allowed!\n");

                    printf("\nPlease re-enter your %d digit PIN: \n", size); // asks user to re-enter and will go back through loop
                    
                    i=0; // resets for loop so user re enters entire password
                    
                    scanf("%d", &pin_verify[i]);

                } // end while
                
                // checks that input is valid
                if(pin_verify[i] < 0 || pin_verify[i] > 9) 
                {
                    printf("\nInvalid input!\n");

                    printf("\nPlease re-enter your %d digit PIN: \n", size);
                    
                    pin_check_1 = 0;

                    i = -1; // as for loop will add 1, this complely resets i value to 0

                } // end if

            } // end for

            // for loop to compare pin with original pin
            for(i = 0; i < size; i++)
            {
                //checks that input is correct
                if(pin[i] != pin_verify[i]) 
                {
                    printf("\nIncorrect PIN. \nYou will now be returned to the main menu.\n");
                    counter_false++; // keeps track of incorrect inputs of pin

                    pin_check_1 = 0;

                    i = size; // will leave for loop as for condition has been met

                } // end else if

                else
                {
                    pin_check_1 = 1;

                }

            } // end for
            
            // only goes in if user enters correct pin
            if(pin_check_1 == 1)
            {
                printf("\nThat is the correct PIN.\nYou will now be returned to the main menu.\n");
                counter_true++; // keeps track of correct inputs of pin

            } // end if