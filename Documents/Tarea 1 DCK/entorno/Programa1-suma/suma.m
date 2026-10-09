arg_list = argv();
if length(arg_list) >= 2
    a = str2double(arg_list{1});
    b = str2double(arg_list{2});
else
    a = 0.1;
    b = 0.2;
endif
printf("%.17g\n", a + b);