static int g_val = 2020;//全局变量
//如果没加static,g_val=2020可以被源8.2.3文件引用，如果加了 static，g_val=2020就不能被源8.2.3文件引用
//static会改变变量的作用域-让静态的局部变量只能在自己所在的源文件内部使用，出了源文件就无法使用了