#ifndef _JFrameMenuSerializationTest_h_
#define _JFrameMenuSerializationTest_h_
//$ class JFrameMenuSerializationTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export JFrameMenuSerializationTest : public ::java::lang::Object {
	$class(JFrameMenuSerializationTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JFrameMenuSerializationTest();
	void init$();
	static void lambda$main$0(::java::beans::PropertyChangeEvent* evt);
	static void lambda$main$1();
	static void lambda$main$2(::java::io::ObjectOutputStream* oos);
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
};

#endif // _JFrameMenuSerializationTest_h_