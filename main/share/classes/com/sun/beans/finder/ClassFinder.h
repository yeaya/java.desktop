#ifndef _com_sun_beans_finder_ClassFinder_h_
#define _com_sun_beans_finder_ClassFinder_h_
//$ class com.sun.beans.finder.ClassFinder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class ClassFinder : public ::java::lang::Object {
	$class(ClassFinder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassFinder();
	void init$();
	static $Class* findClass($String* name);
	static $Class* findClass($String* name, ::java::lang::ClassLoader* loader);
	static $Class* resolveClass($String* name);
	static $Class* resolveClass($String* name, ::java::lang::ClassLoader* loader);
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_ClassFinder_h_