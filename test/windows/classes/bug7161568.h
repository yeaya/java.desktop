#ifndef _bug7161568_h_
#define _bug7161568_h_
//$ class bug7161568
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("N")
#undef N

namespace javax {
	namespace swing {
		class JFrame;
		class JTabbedPane;
	}
}

class $export bug7161568 : public ::java::lang::Object {
	$class(bug7161568, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug7161568();
	void init$();
	static void createAndShowUI();
	static void lambda$main$0();
	static void main($StringArray* args);
	static const int32_t N = 50;
	static ::javax::swing::JTabbedPane* tabbedPane;
	static ::javax::swing::JFrame* frame;
};

#pragma pop_macro("N")

#endif // _bug7161568_h_