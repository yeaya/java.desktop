#ifndef _UIClientPropertyKeyTest_h_
#define _UIClientPropertyKeyTest_h_
//$ class UIClientPropertyKeyTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JComponent;
		class UIManager$LookAndFeelInfo;
	}
}

class $export UIClientPropertyKeyTest : public ::java::lang::Object {
	$class(UIClientPropertyKeyTest, 0, ::java::lang::Object)
public:
	UIClientPropertyKeyTest();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::JComponent* serializeDeserialize(::javax::swing::JComponent* comp);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void testSerialization();
	static void testSetUI();
	static void validate(::javax::swing::JComponent* comp);
	static $Object* key;
};

#endif // _UIClientPropertyKeyTest_h_