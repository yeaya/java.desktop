#ifndef _Test6325652_h_
#define _Test6325652_h_
//$ class Test6325652
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JInternalFrame;
	}
}

class $export Test6325652 : public ::java::lang::Object {
	$class(Test6325652, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test6325652();
	void init$(::javax::swing::JFrame* frame);
	static void click($ints* keys);
	static ::javax::swing::JInternalFrame* create(int32_t index);
	static void main($StringArray* args);
	virtual void select();
	static void stepFirst();
	virtual void stepFirstValidate();
	static void stepSecond();
	virtual void stepSecondValidate();
	static const int32_t WIDTH = 300;
	static const int32_t HEIGHT = 300;
	static ::java::awt::Robot* robot;
	::javax::swing::JInternalFrame* internal = nullptr;
};

#pragma pop_macro("HEIGHT")
#pragma pop_macro("WIDTH")

#endif // _Test6325652_h_