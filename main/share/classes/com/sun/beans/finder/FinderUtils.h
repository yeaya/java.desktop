#ifndef _com_sun_beans_finder_FinderUtils_h_
#define _com_sun_beans_finder_FinderUtils_h_
//$ class com.sun.beans.finder.FinderUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

class FinderUtils : public ::java::lang::Object {
	$class(FinderUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FinderUtils();
	void init$();
	static bool isExported($Class* c);
	static $String* packageName($Class* c);
};

			} // finder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_finder_FinderUtils_h_