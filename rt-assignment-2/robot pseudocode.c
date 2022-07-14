Initialise the publisher and clients
set robot speeds to 0

funtion callback()
    assign left, right, center values;
    Initialise service 
    call the clients

    take maximum values on the left ;
    take maximum values on the right;
    take maximum values on the center;

    set diffrence of left and right;
    set minimum value to compute absolute diffrence;
    if(minimum value is less than zero)
        set minimum value *=-1;
    if(minimum value is greater than 1)
        set minimum value = 1;
    else if(minimum value is lesser than -1)
        minimum value = -1;
    
    if(center is lesser than 1)
        if(flag is equal to 1)
            "obstacle detected";
        if(difference is greater than 0)
            turn right;
            linear.velocity.x =0;
            angular.velocity.z=difference;
        else
            angular.velocity.z =-1;
            linear.velocity.x =minimum value;
    else if(difference is less than 0)
            turn left;
            linear.velocity.x =0;
            angular.velocity.z=difference;
        else
            angular.velocity.z =1;
            linear.velocity.x =minimum value;
    else
        if(flag is equal 0)
            "move forward"
            flag = 1;
        if(robot speed + (center/3) is greater and equal to robot speed)
            linear.velocity.x = robot speed;
        else
            linear.velocity.x = robot speed + (center/3);
            angular.velocity.z=0;
        
        publish the robot speed 

main function(int argc, char *argv)
    Initialise the node robot;
    set the publisher to the cmd_vel;
    set the service;
    initialise and set the subscriber to base_scan;
    return 0;
    

