#ifndef _sun_awt_shell_ShellFolder$4_h_
#define _sun_awt_shell_ShellFolder$4_h_
//$ class sun.awt.shell.ShellFolder$4
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

class $import ShellFolder$4 : public ::java::util::Comparator {
	$class(ShellFolder$4, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	ShellFolder$4();
	void init$();
	virtual int32_t compare(::java::io::File* f1, ::java::io::File* f2);
	virtual int32_t compare(Object$* f1, Object$* f2) override;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_ShellFolder$4_h_