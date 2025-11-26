#ifndef _sun_awt_shell_ShellFolderManager_h_
#define _sun_awt_shell_ShellFolderManager_h_
//$ class sun.awt.shell.ShellFolderManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export ShellFolderManager : public ::java::lang::Object {
	$class(ShellFolderManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ShellFolderManager();
	void init$();
	static ::java::io::File* checkFile(::java::io::File* f);
	static ::java::io::File* checkFile(::java::io::File* f, ::java::lang::SecurityManager* sm);
	static $Array<::java::io::File>* checkFiles($Array<::java::io::File>* fs);
	static $Array<::java::io::File>* checkFiles(::java::util::stream::Stream* fs, ::java::lang::SecurityManager* sm);
	virtual ::sun::awt::shell::ShellFolder$Invoker* createInvoker();
	virtual ::sun::awt::shell::ShellFolder* createShellFolder(::java::io::File* file);
	virtual $Object* get($String* key);
	virtual bool isComputerNode(::java::io::File* dir);
	virtual bool isFileSystemRoot(::java::io::File* dir);
	static bool lambda$checkFiles$0(::java::lang::SecurityManager* sm, ::java::io::File* f);
	static $Array<::java::io::File>* lambda$checkFiles$1(int32_t x$0);
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_ShellFolderManager_h_