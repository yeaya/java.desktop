#ifndef _SwingTest_h_
#define _SwingTest_h_
//$ class SwingTest
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class SwingTest : public ::java::lang::Runnable {
	$class(SwingTest, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SwingTest();
	void init$($Class* type);
	virtual void run() override;
	static void start($Class* type);
	void start();
	static const int32_t WIDTH = 640;
	static const int32_t HEIGHT = 480;
	$Class* type = nullptr;
	::java::util::Iterator* methods = nullptr;
	::javax::swing::JFrame* frame = nullptr;
	$Object* object = nullptr;
	::java::lang::reflect::Method* method = nullptr;
	$Throwable* error = nullptr;
};

#pragma pop_macro("HEIGHT")
#pragma pop_macro("WIDTH")

#endif // _SwingTest_h_