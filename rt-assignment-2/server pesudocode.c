set the robot speed to 0

input_function(req, res)
{
    if input is 1 
        increase the robot speed to 0.5
    else if input is 2 
        decrease the robot speed to 0.5
    else if input is 3
        set res of robot speed to req of robot speed  
    else if input is 4
        set res of robot speed to robot speed
   
    return true
}

main funtion (int argc, char ** argv)
{
    Initialize the server node
    set the service to user_control 
    return 0

}