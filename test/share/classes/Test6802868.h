#ifndef _Test6802868_h_
#define _Test6802868_h_
//$ class Test6802868
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dimension;
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JInternalFrame;
	}
}

class $export Test6802868 : public ::java::lang::Object {
	$class(Test6802868, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test6802868();
	void init$(::javax::swing::JFrame* frame);
	virtual void firstAction();
	virtual void firstTest();
	virtual void firstValidation();
	static void main($StringArray* args);
	void resizeFrame();
	virtual void secondAction();
	virtual void secondTest();
	virtual void secondValidation();
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JInternalFrame* internal = nullptr;
	::java::awt::Dimension* size = nullptr;
	::java::awt::Point* location = nullptr;
};

#endif // _Test6802868_h_