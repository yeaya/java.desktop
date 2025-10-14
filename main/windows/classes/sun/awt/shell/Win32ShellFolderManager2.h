#ifndef _sun_awt_shell_Win32ShellFolderManager2_h_
#define _sun_awt_shell_Win32ShellFolderManager2_h_
//$ class sun.awt.shell.Win32ShellFolderManager2
//$ extends sun.awt.shell.ShellFolderManager

#include <java/lang/Array.h>
#include <sun/awt/shell/ShellFolderManager.h>

#pragma push_macro("STANDARD_VIEW_BUTTONS")
#undef STANDARD_VIEW_BUTTONS
#pragma push_macro("VIEW_DETAILS")
#undef VIEW_DETAILS
#pragma push_macro("VIEW_LIST")
#undef VIEW_LIST
#pragma push_macro("VIEW_NEWFOLDER")
#undef VIEW_NEWFOLDER
#pragma push_macro("VIEW_PARENTFOLDER")
#undef VIEW_PARENTFOLDER

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class SecurityManager;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace sun {
	namespace awt {
		namespace shell {
			class ShellFolder;
			class ShellFolder$Invoker;
			class Win32ShellFolder2;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolderManager2 : public ::sun::awt::shell::ShellFolderManager {
	$class(Win32ShellFolderManager2, 0, ::sun::awt::shell::ShellFolderManager)
public:
	Win32ShellFolderManager2();
	void init$();
	static ::java::io::File* checkFile(::java::io::File* file);
	static ::java::io::File* checkFile(::java::io::File* file, ::java::lang::SecurityManager* sm);
	static $Array<::java::io::File>* checkFiles($Array<::java::io::File>* files);
	static $Array<::java::io::File>* checkFiles(::java::util::List* files);
	static $Array<::java::io::File>* checkFiles(::java::util::stream::Stream* filesStream, ::java::lang::SecurityManager* sm);
	static int32_t compareNames($String* name1, $String* name2);
	static int32_t compareShellFolders(::sun::awt::shell::Win32ShellFolder2* sf1, ::sun::awt::shell::Win32ShellFolder2* sf2);
	virtual ::sun::awt::shell::ShellFolder$Invoker* createInvoker() override;
	virtual ::sun::awt::shell::ShellFolder* createShellFolder(::java::io::File* file) override;
	static ::sun::awt::shell::Win32ShellFolder2* createShellFolder(::sun::awt::shell::Win32ShellFolder2* parent, ::java::io::File* file);
	static ::sun::awt::shell::Win32ShellFolder2* createShellFolderFromRelativePIDL(::sun::awt::shell::Win32ShellFolder2* parent, int64_t pIDL);
	virtual $Object* get($String* key) override;
	static ::sun::awt::shell::Win32ShellFolder2* getDesktop();
	static ::sun::awt::shell::Win32ShellFolder2* getDrives();
	static ::sun::awt::shell::Win32ShellFolder2* getNetwork();
	static ::sun::awt::shell::Win32ShellFolder2* getPersonal();
	static ::sun::awt::shell::Win32ShellFolder2* getRecent();
	static ::java::awt::Image* getStandardViewButton(int32_t iconIndex);
	static void initializeCom();
	virtual bool isComputerNode(::java::io::File* dir) override;
	bool isDrive(::java::io::File* dir);
	virtual bool isFileSystemRoot(::java::io::File* dir) override;
	static bool lambda$checkFiles$0(::java::lang::SecurityManager* sm, ::java::io::File* file);
	static $Array<::java::io::File>* lambda$checkFiles$1(int32_t x$0);
	static void uninitializeCom();
	static ::sun::util::logging::PlatformLogger* log;
	static const int32_t VIEW_LIST = 2;
	static const int32_t VIEW_DETAILS = 3;
	static const int32_t VIEW_PARENTFOLDER = 8;
	static const int32_t VIEW_NEWFOLDER = 11;
	static $Array<::java::awt::Image>* STANDARD_VIEW_BUTTONS;
	static ::sun::awt::shell::Win32ShellFolder2* desktop;
	static ::sun::awt::shell::Win32ShellFolder2* drives;
	static ::sun::awt::shell::Win32ShellFolder2* recent;
	static ::sun::awt::shell::Win32ShellFolder2* network;
	static ::sun::awt::shell::Win32ShellFolder2* personal;
	static $Array<::java::io::File>* roots;
	static ::java::util::List* topFolderList;
};

		} // shell
	} // awt
} // sun

#pragma pop_macro("STANDARD_VIEW_BUTTONS")
#pragma pop_macro("VIEW_DETAILS")
#pragma pop_macro("VIEW_LIST")
#pragma pop_macro("VIEW_NEWFOLDER")
#pragma pop_macro("VIEW_PARENTFOLDER")

#endif // _sun_awt_shell_Win32ShellFolderManager2_h_