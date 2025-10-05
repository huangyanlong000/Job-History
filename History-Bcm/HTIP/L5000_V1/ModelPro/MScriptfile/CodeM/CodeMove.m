%this file can move the code creted by model to the project of the Master-Project

%删除Source文件夹下的所有c文件
delete('D:\Branch\L5000\User\A-SWC\*.c')
disp("已经删除Source文件夹下的所有c文件......");

%删除Source文件夹下的所有h文件
delete('D:\Branch\L5000\User\A-SWC\*.h')
disp("已经删除Source文件夹下的所有h文件......");

movefile D:\Branch\L5000\ModelPro\Code\TNC2_ert_rtw\*.h  D:\Branch\L5000\User\A-SWC;
movefile D:\Branch\L5000\ModelPro\Code\TNC2_ert_rtw\*.c  D:\Branch\L5000\User\A-SWC;
disp('Transmit task is complete! No Warnning! No Error!');