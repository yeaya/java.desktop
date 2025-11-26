#ifndef _bug8072767_h_
#define _bug8072767_h_
//$ class bug8072767
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST1")
#undef TEST1
#pragma push_macro("TEST2")
#undef TEST2

namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTable;
	}
}

class $export bug8072767 : public ::java::lang::Object {
	$class(bug8072767, 0, ::java::lang::Object)
public:
	bug8072767();
	void init$();
	static void createAndShowGUI();
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$main$2();
	static void main($StringArray* args);
	static $String* TEST1;
	static $String* TEST2;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTable* table;
	static $volatile(::java::awt::Point*) point;
	static bool testPass;
};

#pragma pop_macro("TEST1")
#pragma pop_macro("TEST2")

#endif // _bug8072767_h_