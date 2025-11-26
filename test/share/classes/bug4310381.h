#ifndef _bug4310381_h_
#define _bug4310381_h_
//$ class bug4310381
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TestUI;
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JPanel;
		class JTabbedPane;
		class UIManager$LookAndFeelInfo;
	}
}

class $export bug4310381 : public ::java::lang::Object {
	$class(bug4310381, 0, ::java::lang::Object)
public:
	bug4310381();
	void init$();
	static void createContentPane();
	static void disposeUI();
	static void init();
	static void lambda$disposeUI$3();
	static void lambda$main$0();
	static void lambda$main$1(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$2();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void showUI();
	static ::TestUI* test;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTabbedPane* tab;
	static ::javax::swing::JPanel* panel;
	static ::java::util::concurrent::CountDownLatch* testLatch;
};

#endif // _bug4310381_h_