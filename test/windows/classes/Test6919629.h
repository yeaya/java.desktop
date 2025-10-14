#ifndef _Test6919629_h_
#define _Test6919629_h_
//$ class Test6919629
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export Test6919629 : public ::java::lang::Object {
	$class(Test6919629, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test6919629();
	void init$();
	virtual void check();
	static void main($StringArray* args);
	virtual void test();
	::javax::swing::JFrame* f = nullptr;
	::java::lang::ref::WeakReference* ref = nullptr;
};

#endif // _Test6919629_h_