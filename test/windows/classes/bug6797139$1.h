#ifndef _bug6797139$1_h_
#define _bug6797139$1_h_
//$ class bug6797139$1
//$ extends javax.swing.plaf.basic.BasicButtonUI

#include <javax/swing/plaf/basic/BasicButtonUI.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
	}
}

class bug6797139$1 : public ::javax::swing::plaf::basic::BasicButtonUI {
	$class(bug6797139$1, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicButtonUI)
public:
	bug6797139$1();
	void init$();
	using ::javax::swing::plaf::basic::BasicButtonUI::paintText;
	virtual void paintText(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* textRect, $String* text) override;
};

#endif // _bug6797139$1_h_