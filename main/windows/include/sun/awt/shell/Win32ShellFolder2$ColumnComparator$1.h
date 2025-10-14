#ifndef _sun_awt_shell_Win32ShellFolder2$ColumnComparator$1_h_
#define _sun_awt_shell_Win32ShellFolder2$ColumnComparator$1_h_
//$ class sun.awt.shell.Win32ShellFolder2$ColumnComparator$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace sun {
	namespace awt {
		namespace shell {
			class Win32ShellFolder2$ColumnComparator;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $import Win32ShellFolder2$ColumnComparator$1 : public ::java::util::concurrent::Callable {
	$class(Win32ShellFolder2$ColumnComparator$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	Win32ShellFolder2$ColumnComparator$1();
	void init$(::sun::awt::shell::Win32ShellFolder2$ColumnComparator* this$0, ::java::io::File* val$o, ::java::io::File* val$o1);
	virtual $Object* call() override;
	::sun::awt::shell::Win32ShellFolder2$ColumnComparator* this$0 = nullptr;
	::java::io::File* val$o1 = nullptr;
	::java::io::File* val$o = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$ColumnComparator$1_h_