#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/sysctl.h>
#include <filesystem>
#include <cstdlib>
#include <IOKit/IOKitLib.h>
#include <unistd.h>
#include "enc.h"
using namespace std;
namespace fs = filesystem;
void mycommand(){
    cout << "Hello, Command " << endl;
}

int mc(int argc, char* argv[]){
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << "<command>" << endl;
        return 1;
    }
    
    string command = argv[1];
    
    if (command == "my") {
        mycommand();
    }else{
        cerr << "Unknown command " << command << endl;
        return 1;
    }
    return 0;
}
int cpu(){
    int nm[2];
        size_t len = 4;
        uint32_t count;

        nm[0] = CTL_HW; nm[1] = HW_AVAILCPU;
        sysctl(nm, 2, &count, &len, NULL, 0);

        if(count < 1) {
            nm[1] = HW_NCPU;
            sysctl(nm, 2, &count, &len, NULL, 0);
            if(count < 1) { count = 1; }
        }
        printf("%u CPUs available\n", count);
        return 0;
}
int folder_structure(){
    fs::path p = "/";
    for (auto& entry: fs::directory_iterator(p)) {
        cout << entry.path() << endl;
    }
    return 0;
}
int envpath(){
//    getenv("PATH"); // The system's PATH environment variable, which specifies directories to search for executable files
//    getenv("HOME"); // The current user's home directory
//    getenv("SHELL"); // The path to the current user's preferred shell
//    getenv("USER"); // The current logged-in user's name
//    getenv("LOGNAME"); // The name of the user currently logged into the system
//    getenv("TMPDIR"); // The directory for temporary files
//    getenv("SSH_AUTH_SOCK"); // The path of the socket that is used for SSH authentication
//    getenv("MAIL"); // The path to the current user's mailbox
//    getenv("LANG"); // The current locale settings for the system
//    getenv("TERM"); // The terminal type for the current emulation
//    getenv("DISPLAY"); // The identifier for the X display (if using X11 forwarding with SSH)
//    getenv("HTTP_PROXY"); // The URL of the proxy server for HTTP connections
//    getenv("HTTPS_PROXY"); // The URL of the proxy server for HTTPS connections
//    getenv("FTP_PROXY"); // The URL of the proxy server for FTP connections
//    getenv("EDITOR"); // The default text editor
//    getenv("VISUAL"); // The default visual text editor
//    getenv("PWD"); // The current working directory
//    getenv("OLDPWD"); // The previous working directory
//    getenv("PAGER"); // The default pager program
//    getenv("MANPATH"); // The search path for manual pages
//    getenv("XPC_FLAGS"); // Flags used by XPC services
//    getenv("XPC_SERVICE_NAME"); // The name of the XPC service
//    getenv("SHLVL"); // The shell level
//    getenv("SECURITYSESSIONID"); // The ID of the current security session
//    getenv("__CF_USER_TEXT_ENCODING"); // The text encoding preference for the user
 
        cout << getenv("LOGNAME") << endl;
 
    return 0;
}
int envList(){
    // __XCODE_BUILT_PRODUCTS_DIR_PATHS=/Users/abdukodirkhojiyev/Library/Developer/Xcode/DerivedData/encoder_cppt-ewborbyqxuxhyldkajzfyhuvpwbf/Build/Products/Debug
    
    // NSUnbufferedIO=YES
    
    // COMMAND_MODE=unix2003
    
    // __CFBundleIdentifier=com.apple.dt.Xcode
    
    // USER=abdukodirkhojiyev
    
    // LOGNAME=abdukodirkhojiyev
    
    // CA_ASSERT_MAIN_THREAD_TRANSACTIONS=0
    
    // HOME=/Users/abdukodirkhojiyev
    
    // PWD=/Users/abdukodirkhojiyev/Library/Developer/Xcode/DerivedData/encoder_cppt-ewborbyqxuxhyldkajzfyhuvpwbf/Build/Products/Debug
    
    // CA_DEBUG_TRANSACTIONS=0
    
    // DYLD_LIBRARY_PATH=/Users/abdukodirkhojiyev/Library/Developer/Xcode/DerivedData/encoder_cppt-ewborbyqxuxhyldkajzfyhuvpwbf/Build/Products/Debug:/usr/lib/system/introspection
    
    // __CF_USER_TEXT_ENCODING=0x1F5:0x0:0x0
    
    // IDE_DISABLED_OS_ACTIVITY_DT_MODE=1
    
    // OS_ACTIVITY_TOOLS_OVERSIZE=YES
    
    // __XPC_DYLD_LIBRARY_PATH=/Users/abdukodirkhojiyev/Library/Developer/Xcode/DerivedData/encoder_cppt-ewborbyqxuxhyldkajzfyhuvpwbf/Build/Products/Debug
    // SQLITE_ENABLE_THREAD_ASSERTIONS=1
    
    // OS_ACTIVITY_TOOLS_PRIVACY=YES
    
    // METAL_DEVICE_WRAPPER_TYPE=1
    
    // DYLD_FRAMEWORK_PATH=/Users/abdukodirkhojiyev/Library/Developer/Xcode/DerivedData/encoder_cppt-ewborbyqxuxhyldkajzfyhuvpwbf/Build/Products/Debug
    // METAL_DEBUG_ERROR_MODE=0
    
    // LLVM_PROFILE_FILE=/dev/null
    
    // PATH=/Applications/Xcode.app/Contents/Developer/usr/bin:/usr/bin:/bin:/usr/sbin:/sbin
    
    // SSH_AUTH_SOCK=/private/tmp/com.apple.launchd.nPxy16AC06/Listeners
    
    // TMPDIR=/var/folders/3l/m656wz2d15l170f8pt6mggxh0000gn/T/
    
    // __XPC_DYLD_FRAMEWORK_PATH=/Users/abdukodirkhojiyev/Library/Developer/Xcode/DerivedData/encoder_cppt-ewborbyqxuxhyldkajzfyhuvpwbf/Build/Products/Debug
    
    // __XPC_LLVM_PROFILE_FILE=/dev/null
    
    // SHELL=/bin/zsh
    
    // XPC_FLAGS=0x0
    
    // XPC_SERVICE_NAME=application.com.apple.dt.Xcode.8289527.8432384
    
    // CFLOG_FORCE_DISABLE_STDERR=1
    
    
    extern char **environ;
    for (char **env = environ; *env != 0; env++) {
            char *thisEnv = *env;
            std::cout << thisEnv << std::endl; // prints in key=value format
        }
    return 0;
}
int main (){
    cout << "Hello" << endl;
    return 0;
}
