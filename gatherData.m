%** Benjamin Joye                                               **
%** Watertech Holdings, LLC.                                    **
%** T-00001 Rev A Fluid Sensor Data Acquisition Software        **
%** Publish Date: 6/16/2017                                     **


function [dataString1,dataString2,dataString3,dataString41,dataString42] = gatherData()

global s1;

if (s1.bytesavailable > 0)
    fread(s1,s1.bytesavailable);
end

dataString1 = '';
dataString2 = '';
dataString3 = '';
dataString4 = '';
dataString41 = '';
dataString42 = '';
error = 0;

fprintf(s1,'0:r \r');
pause(2);
data = fread(s1,s1.bytesavailable);
dataLength = length(data);
if (dataLength>8 && error == 0)
    for x=1:1:dataLength
        
        if (data(x) == 13 || data(x) == 10)
        end
        if (data(x) == 46)
            dataString1(x) = '.';
        end   
        if (data(x) == 48)
            dataString1(x) = '0';
        end
        if (data(x) == 49)
            dataString1(x) = '1';
        end        
        if (data(x) == 50)
            dataString1(x) = '2';
        end  
        if (data(x) == 51)
            dataString1(x) = '3';
        end
        if (data(x) == 52)
            dataString1(x) = '4';
        end
        if (data(x) == 53)
            dataString1(x) = '5';
        end
        if (data(x) == 54)
            dataString1(x) = '6';
        end
        if (data(x) == 55)
            dataString1(x) = '7';
        end
        if (data(x) == 56)
            dataString1(x) = '8';
        end
        if (data(x) == 57)
            dataString1(x) = '9';
        end
    end
    dataString1 = strcat(dataString1,' °C');
else
    error = 1;
    return
end
clear data

fprintf(s1,'1:r \r');
pause(2);
data = fread(s1,s1.bytesavailable);
dataLength = length(data);
if (dataLength>7 && error == 0) 
    
    for x=1:1:dataLength
        
        if (data(x) == 46)
            dataString2(x) = '.';
        end   
        if (data(x) == 48)
            dataString2(x) = '0';
        end
        if (data(x) == 49)
            dataString2(x) = '1';
        end        
        if (data(x) == 50)
            dataString2(x) = '2';
        end  
        if (data(x) == 51)
            dataString2(x) = '3';
        end
        if (data(x) == 52)
            dataString2(x) = '4';
        end
        if (data(x) == 53)
            dataString2(x) = '5';
        end
        if (data(x) == 54)
            dataString2(x) = '6';
        end
        if (data(x) == 55)
            dataString2(x) = '7';
        end
        if (data(x) == 56)
            dataString2(x) = '8';
        end
        if (data(x) == 57)
            dataString2(x) = '9';
        end
    end
    dataString2 = strcat(dataString2,'');
else
    error = 1;
    return
end    
clear data
    
fprintf(s1,'2:r \r');
pause(2);
data = fread(s1,s1.bytesavailable);
dataLength = length(data);
if (dataLength>3 && error == 0) 
    
    for x=1:1:dataLength
        
        if (data(x) == 46)
            dataString3(x) = '.';
        end   
        if (data(x) == 48)
            dataString3(x) = '0';
        end
        if (data(x) == 49)
            dataString3(x) = '1';
        end        
        if (data(x) == 50)
            dataString3(x) = '2';
        end  
        if (data(x) == 51)
            dataString3(x) = '3';
        end
        if (data(x) == 52)
            dataString3(x) = '4';
        end
        if (data(x) == 53)
            dataString3(x) = '5';
        end
        if (data(x) == 54)
            dataString3(x) = '6';
        end
        if (data(x) == 55)
            dataString3(x) = '7';
        end
        if (data(x) == 56)
            dataString3(x) = '8';
        end
        if (data(x) == 57)
            dataString3(x) = '9';
        end
    end
    dataString3 = strcat(dataString3,' mV');
else 
    error = 1;
    return
end    
clear data

fprintf(s1,'3:r \r');
pause(2);
data = fread(s1,s1.bytesavailable);
dataLength = length(data);
if (dataLength>20 && error == 0) 

    for x=1:1:dataLength

        if (data(x) == 44)
            dataString4(x) = ',';
        end
        if (data(x) == 46)
            dataString4(x) = '.';
        end   
        if (data(x) == 48)
            dataString4(x) = '0';
        end
        if (data(x) == 49)
            dataString4(x) = '1';
        end        
        if (data(x) == 50)
            dataString4(x) = '2';
        end  
        if (data(x) == 51)
            dataString4(x) = '3';
        end
        if (data(x) == 52)
            dataString4(x) = '4';
        end
        if (data(x) == 53)
            dataString4(x) = '5';
        end
        if (data(x) == 54)
            dataString4(x) = '6';
        end
        if (data(x) == 55)
            dataString4(x) = '7';
        end
        if (data(x) == 56)
            dataString4(x) = '8';
        end
        if (data(x) == 57)
            dataString4(x) = '9';
        end
    end
    
    index = 1;
    for x=1:1:length(dataString4)
        if (dataString4(x) == ',' && index == 1)
            dataString41 = dataString4(1:(x-1));
            index = index + 1;
        end
        if (dataString4(x) == ',' && index ~= 1)
            if (index == 3)
                n = x;
            end
            if (index == 4)
                dataString42 = dataString4((n+1):(x-1));
            end
            
            index = index + 1;
        end
    end
else 
    error = 1;
    return
end
clear data

if (s1.bytesavailable > 0)
    fread(s1,s1.bytesavailable);
end