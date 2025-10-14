#ifndef _bug4870644_h_
#define _bug4870644_h_
//$ class bug4870644
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dimension;
		class Point;
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComponent;
		class JFrame;
		class JMenu;
		class JPopupMenu;
		class UIManager$LookAndFeelInfo;
	}
}

class $export bug4870644 : public ::java::lang::Object {
	$class(bug4870644, 0, ::java::lang::Object)
public:
	bug4870644();
	void init$();
	virtual void blockTillDisplayed(::javax::swing::JComponent* comp);
	void lambda$blockTillDisplayed$0(::javax::swing::JComponent* comp);
	static void lambda$main$1(::javax::swing::UIManager$LookAndFeelInfo* laf);
	void lambda$new$2();
	void lambda$new$3();
	void lambda$new$4();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	::javax::swing::JButton* b1 = nullptr;
	::javax::swing::JButton* b2 = nullptr;
	::javax::swing::JButton* b3 = nullptr;
	::javax::swing::JFrame* frame = nullptr;
	::javax::swing::JMenu* menu = nullptr;
	::javax::swing::JPopupMenu* popup = nullptr;
	static ::java::awt::Robot* robot;
	static bool passed;
	$volatile(::java::awt::Point*) p = nullptr;
	$volatile(::java::awt::Dimension*) d = nullptr;
};

#endif // _bug4870644_h_