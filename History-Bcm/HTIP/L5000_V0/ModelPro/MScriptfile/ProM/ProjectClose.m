%this file can close the project

%close the all Windows
close all;
disp('close the all Windows！');

%close the simulink.slx
close_system;
disp('close the simulink.slx！');

%close the project
proj = openProject("D:/Branch/L5000/ModelPro/L5000.prj");
close(proj);
disp('Close the Project of the L5000！');