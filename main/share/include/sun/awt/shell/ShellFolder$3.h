#ifndef _sun_awt_shell_ShellFolder$3_h_
#define _sun_awt_shell_ShellFolder$3_h_
//$ class sun.awt.shell.ShellFolder$3
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace sun {
	namespace awt {
		namespace shell {

class $import ShellFolder$3 : public ::java::util::Comparator {
	$class(ShellFolder$3, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	ShellFolder$3();
	void init$();
	virtual int32_t compare(Object$* o1, Object$* o2) override;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_ShellFolder$3_h_