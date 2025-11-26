#ifndef _UIDefaultKeySizeTest_h_
#define _UIDefaultKeySizeTest_h_
//$ class UIDefaultKeySizeTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Enumeration;
		class Iterator;
	}
}

class $export UIDefaultKeySizeTest : public ::java::lang::Object {
	$class(UIDefaultKeySizeTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UIDefaultKeySizeTest();
	void init$();
	static bool keySizeTest();
	static void lambda$keySizeTest$2();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static ::java::util::Enumeration* e;
	static ::java::util::Iterator* itr;
	static bool defaultTestFail;
	static bool writeTestFail;
};

#endif // _UIDefaultKeySizeTest_h_