#ifndef _Test8019180_h_
#define _Test8019180_h_
//$ class Test8019180
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("ITEMS")
#undef ITEMS
#pragma push_macro("LATCH")
#undef LATCH

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
	}
}

class $export Test8019180 : public ::java::lang::Runnable {
	$class(Test8019180, 0, ::java::lang::Runnable)
public:
	Test8019180();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	static ::java::util::concurrent::CountDownLatch* LATCH;
	static $StringArray* ITEMS;
	::javax::swing::JComboBox* test = nullptr;
};

#pragma pop_macro("ITEMS")
#pragma pop_macro("LATCH")

#endif // _Test8019180_h_