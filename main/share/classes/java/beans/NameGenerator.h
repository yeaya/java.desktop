#ifndef _java_beans_NameGenerator_h_
#define _java_beans_NameGenerator_h_
//$ class java.beans.NameGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace beans {

class NameGenerator : public ::java::lang::Object {
	$class(NameGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NameGenerator();
	void init$();
	static $String* capitalize($String* name);
	virtual void clear();
	virtual $String* instanceName(Object$* instance);
	static $String* unqualifiedClassName($Class* type);
	::java::util::Map* valueToName = nullptr;
	::java::util::Map* nameToCount = nullptr;
};

	} // beans
} // java

#endif // _java_beans_NameGenerator_h_