#ifndef _Test7024235_h_
#define _Test7024235_h_
//$ class Test7024235
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("AUTO")
#undef AUTO

namespace javax {
	namespace swing {
		class JTabbedPane;
	}
}

class $export Test7024235 : public ::java::lang::Runnable {
	$class(Test7024235, 0, ::java::lang::Runnable)
public:
	Test7024235();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	void test();
	void test($String* step);
	static bool AUTO;
	$volatile(::javax::swing::JTabbedPane*) pane = nullptr;
	$volatile(bool) passed = false;
};

#pragma pop_macro("AUTO")

#endif // _Test7024235_h_