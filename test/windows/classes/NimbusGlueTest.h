#ifndef _NimbusGlueTest_h_
#define _NimbusGlueTest_h_
//$ class NimbusGlueTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
		class JToolBar;
	}
}

class $export NimbusGlueTest : public ::java::lang::Object {
	$class(NimbusGlueTest, 0, ::java::lang::Object)
public:
	NimbusGlueTest();
	void init$();
	static ::javax::swing::JButton* createButton(int32_t id);
	static void createUI();
	static void main($StringArray* args);
	static void performTest();
	static bool tryLookAndFeel($String* lookAndFeelString);
	static ::javax::swing::JFrame* frame;
	static ::java::awt::Robot* robot;
	static $volatile($String*) errorMessage;
	static ::javax::swing::JToolBar* bar;
};

#endif // _NimbusGlueTest_h_