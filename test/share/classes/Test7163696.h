#ifndef _Test7163696_h_
#define _Test7163696_h_
//$ class Test7163696
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("AUTO")
#undef AUTO

namespace javax {
	namespace swing {
		class JScrollBar;
	}
}

class $export Test7163696 : public ::java::lang::Runnable {
	$class(Test7163696, 0, ::java::lang::Runnable)
public:
	Test7163696();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	void test();
	static bool AUTO;
	::javax::swing::JScrollBar* bar = nullptr;
};

#pragma pop_macro("AUTO")

#endif // _Test7163696_h_