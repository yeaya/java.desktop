#ifndef _bug4275046_h_
#define _bug4275046_h_
//$ class bug4275046
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EXPECTED_VALUE")
#undef EXPECTED_VALUE

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTable;
	}
}

class $export bug4275046 : public ::java::lang::Object {
	$class(bug4275046, 0, ::java::lang::Object)
public:
	bug4275046();
	void init$();
	void checkResult();
	void createGUI();
	static void main($StringArray* args);
	void runTest();
	void test();
	static $StringArray* colNames;
	static $Array<::java::lang::Object, 2>* data;
	static $String* EXPECTED_VALUE;
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JTable* table = nullptr;
	$volatile(::java::awt::Point*) tableLoc = nullptr;
	$volatile(::java::awt::Rectangle*) cellRect = nullptr;
	$volatile($Object*) editedValue = nullptr;
	$volatile(bool) testResult = false;
	::java::awt::Robot* robot = nullptr;
};

#pragma pop_macro("EXPECTED_VALUE")

#endif // _bug4275046_h_