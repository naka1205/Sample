

This function or variable may be unsafe.

解决方法：

点击：项目->属性->C/C++->预处理器->预处理器定义

加上：_CRT_SECURE_NO_WARNINGS



fatal error LNK1561: 必须定义入口点

解决方法:

点击：项目->属性->链接器->高级->入口点

加上：WinMainCRTStartup

或者

点击：右键->属性->链接器->系统->子系统，下拉框选择：窗口 (/SUBSYSTEM:WINDOWS)