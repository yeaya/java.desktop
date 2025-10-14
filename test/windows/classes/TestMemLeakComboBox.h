#ifndef _TestMemLeakComboBox_h_
#define _TestMemLeakComboBox_h_
//$ class TestMemLeakComboBox
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class UIManager$LookAndFeelInfo;
	}
}

class $export TestMemLeakComboBox : public ::java::lang::Object {
	$class(TestMemLeakComboBox, 0, ::java::lang::Object)
public:
	TestMemLeakComboBox();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$test$1();
	static void lambda$test$2();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void test();
	static ::javax::swing::JFrame* frame;
	static $String* failed;
};

#endif // _TestMemLeakComboBox_h_