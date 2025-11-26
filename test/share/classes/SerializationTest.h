#ifndef _SerializationTest_h_
#define _SerializationTest_h_
//$ class SerializationTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Serializable;
	}
}
namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export SerializationTest : public ::java::lang::Object {
	$class(SerializationTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SerializationTest();
	void init$();
	static $Object* createCopy(::java::io::Serializable* objectToCopy);
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void main($StringArray* argv);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
};

#endif // _SerializationTest_h_