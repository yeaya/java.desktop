#ifndef _DNDTextToScaledArea_h_
#define _DNDTextToScaledArea_h_
//$ class DNDTextToScaledArea
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("TEXT")
#undef TEXT

namespace java {
	namespace awt {
		class Component;
		class GraphicsDevice;
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTextArea;
	}
}

class $export DNDTextToScaledArea : public ::java::lang::Object {
	$class(DNDTextToScaledArea, 0, ::java::lang::Object)
public:
	DNDTextToScaledArea();
	void init$();
	static void createAndShowGUI(::java::awt::GraphicsDevice* device);
	static void dragAndDrop(::java::awt::Robot* robot, ::java::awt::Point* src, ::java::awt::Point* dst);
	static ::java::awt::Point* getPoint(::java::awt::Component* component, double scale);
	static void lambda$test$0(::java::awt::GraphicsDevice* device);
	static void lambda$test$1();
	static void lambda$test$2();
	static void main($StringArray* args);
	static void test(::java::awt::GraphicsDevice* device);
	static const int32_t SIZE = 300;
	static $String* TEXT;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextArea* srcTextArea;
	static ::javax::swing::JTextArea* dstTextArea;
	static $volatile(::java::awt::Point*) srcPoint;
	static $volatile(::java::awt::Point*) dstPoint;
	static $volatile(bool) passed;
};

#pragma pop_macro("SIZE")
#pragma pop_macro("TEXT")

#endif // _DNDTextToScaledArea_h_