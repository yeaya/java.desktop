#ifndef _ComponentSetNameTest_h_
#define _ComponentSetNameTest_h_
//$ class ComponentSetNameTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}

class $export ComponentSetNameTest : public ::java::lang::Object {
	$class(ComponentSetNameTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ComponentSetNameTest();
	void init$();
	static void main($StringArray* args);
	static void printTestInfo(::javax::swing::JComponent* component, $String* looknFeelClassName);
	static void testSetName(::javax::swing::JComponent* component, $String* looknFeelClassName);
};

#endif // _ComponentSetNameTest_h_