#ifndef _com_sun_beans_finder_AbstractFinder_h_
#define _com_sun_beans_finder_AbstractFinder_h_
//$ class com.sun.beans.finder.AbstractFinder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Executable;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class AbstractFinder : public ::java::lang::Object {
	$class(AbstractFinder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractFinder();
	void init$($ClassArray* args);
	::java::lang::reflect::Executable* find($Array<::java::lang::reflect::Executable>* methods);
	bool isAssignable($ClassArray* min, $ClassArray* max);
	virtual bool isValid(::java::lang::reflect::Executable* method);
	$ClassArray* args = nullptr;
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_AbstractFinder_h_