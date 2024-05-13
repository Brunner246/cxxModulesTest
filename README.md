# CXX MODULES SHARED LIBRARIES

## Prerequisites

| Parameter         | Value        | Version |
|-------------------|:------------:|--------:|
| OS                | Windows      | 11      |
| Compiler          | msvc         | v17.9.6 |
| Language Standard | stdcpplatest |         |
| EnableModules     | true         |         | 


[Enable modules in the Microsoft C++ compiler](https://learn.microsoft.com/en-us/cpp/cpp/modules-cpp?view=msvc-170#enable-modules-in-the-microsoft-c-compiler)


## Share modules 

`Project properties -> C/C++ -> Command Line opition -> Add /reference "path to DLL project\x64\Debug\test.modules.ixx.ifc"`

[microsoft developer forum](https://learn.microsoft.com/en-us/answers/questions/1665106/how-to-use-c-20-modules-in-shared-libraries?page=1&orderby=Helpful&comment=answer-1517573#newest-answer-comment)