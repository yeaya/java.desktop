#ifndef _TestBackgroundScrollPolicy_h_
#define _TestBackgroundScrollPolicy_h_
//$ class TestBackgroundScrollPolicy
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ROBOT")
#undef ROBOT

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTabbedPane;
		class UIManager$LookAndFeelInfo;
	}
}

class $export TestBackgroundScrollPolicy : public ::java::lang::Object {
	$class(TestBackgroundScrollPolicy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestBackgroundScrollPolicy();
	void init$();
	static void addOpaqueError(::javax::swing::UIManager$LookAndFeelInfo* laf, bool opaque);
	static void createGUI();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void lambda$main$2(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$3();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void test(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static ::java::awt::Robot* ROBOT;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTabbedPane* pane;
};

#pragma pop_macro("ROBOT")

#endif // _TestBackgroundScrollPolicy_h_