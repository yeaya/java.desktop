#ifndef _sun_awt_shell_Win32ShellFolder2$ColumnComparator_h_
#define _sun_awt_shell_Win32ShellFolder2$ColumnComparator_h_
//$ class sun.awt.shell.Win32ShellFolder2$ColumnComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace sun {
	namespace awt {
		namespace shell {
			class Win32ShellFolder2;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolder2$ColumnComparator : public ::java::util::Comparator {
	$class(Win32ShellFolder2$ColumnComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	Win32ShellFolder2$ColumnComparator();
	void init$(::sun::awt::shell::Win32ShellFolder2* shellFolder, int32_t columnIdx);
	virtual int32_t compare(::java::io::File* o, ::java::io::File* o1);
	virtual int32_t compare(Object$* o, Object$* o1) override;
	::sun::awt::shell::Win32ShellFolder2* shellFolder = nullptr;
	int32_t columnIdx = 0;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$ColumnComparator_h_