#ifndef _RTFReadBGColorTest_h_
#define _RTFReadBGColorTest_h_
//$ class RTFReadBGColorTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BGTEXT")
#undef BGTEXT

namespace javax {
	namespace swing {
		class JTextPane;
	}
}

class $export RTFReadBGColorTest : public ::java::lang::Object {
	$class(RTFReadBGColorTest, 0, ::java::lang::Object)
public:
	RTFReadBGColorTest();
	void init$();
	static void lambda$main$0();
	static void main($StringArray* a);
	static void read();
	static void write();
	static ::javax::swing::JTextPane* text;
	static $String* BGTEXT;
};

#pragma pop_macro("BGTEXT")

#endif // _RTFReadBGColorTest_h_