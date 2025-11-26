#ifndef _bug8008657_h_
#define _bug8008657_h_
//$ class bug8008657
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class ComponentOrientation;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JSpinner;
		class JTextField;
	}
}

class $export bug8008657 : public ::java::lang::Object {
	$class(bug8008657, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8008657();
	void init$();
	static void cleanUp();
	static void createAndShowUI();
	static void createDateSpinner();
	static void createNumberSpinner();
	static void executeCase($String* lookAndFeelString);
	static $String* getOrientation(::java::awt::ComponentOrientation* orientation);
	static ::javax::swing::JTextField* getTextField();
	static void lambda$executeCase$0();
	static void lambda$executeCase$1();
	static void lambda$testSpinner$2();
	static void lambda$testSpinner$3(bool checkHorizontalAligment);
	static void lambda$testSpinner$4(bool checkHorizontalAligment);
	static void main($StringArray* args);
	static void testSpinner(bool checkHorizontalAligment);
	static bool tryLookAndFeel($String* lookAndFeelString);
	static ::java::awt::Robot* robot;
	static ::javax::swing::JSpinner* spinner;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug8008657_h_