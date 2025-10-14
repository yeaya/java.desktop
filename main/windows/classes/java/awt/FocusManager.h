#ifndef _java_awt_FocusManager_h_
#define _java_awt_FocusManager_h_
//$ class java.awt.FocusManager
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}

namespace java {
	namespace awt {

class FocusManager : public ::java::io::Serializable {
	$class(FocusManager, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	FocusManager();
	void init$();
	::java::awt::Container* focusRoot = nullptr;
	::java::awt::Component* focusOwner = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x2294EE96E1CD4412;
};

	} // awt
} // java

#endif // _java_awt_FocusManager_h_