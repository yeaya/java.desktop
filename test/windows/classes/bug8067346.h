#ifndef _bug8067346_h_
#define _bug8067346_h_
//$ class bug8067346
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHECKICONOFFSET")
#undef CHECKICONOFFSET
#pragma push_macro("MARGIN")
#undef MARGIN

namespace javax {
	namespace swing {
		class JFrame;
		class JMenuBar;
	}
}

class $export bug8067346 : public ::java::lang::Object {
	$class(bug8067346, 0, ::java::lang::Object)
public:
	bug8067346();
	void init$();
	virtual void createUI();
	virtual void dispose();
	static void main($StringArray* args);
	virtual void performTest();
	int32_t testCheckIconOffset();
	int32_t testMargin();
	::javax::swing::JMenuBar* menuBar = nullptr;
	::javax::swing::JFrame* frame = nullptr;
	$StringArray* menuClasses = nullptr;
	$String* MARGIN = nullptr;
	$String* CHECKICONOFFSET = nullptr;
	static bool runTest;
};

#pragma pop_macro("CHECKICONOFFSET")
#pragma pop_macro("MARGIN")

#endif // _bug8067346_h_