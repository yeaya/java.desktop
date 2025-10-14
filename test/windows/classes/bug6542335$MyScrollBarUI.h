#ifndef _bug6542335$MyScrollBarUI_h_
#define _bug6542335$MyScrollBarUI_h_
//$ class bug6542335$MyScrollBarUI
//$ extends javax.swing.plaf.basic.BasicScrollBarUI

#include <javax/swing/plaf/basic/BasicScrollBarUI.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}

class $export bug6542335$MyScrollBarUI : public ::javax::swing::plaf::basic::BasicScrollBarUI {
	$class(bug6542335$MyScrollBarUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollBarUI)
public:
	bug6542335$MyScrollBarUI();
	void init$();
	virtual ::java::awt::Rectangle* getThumbBounds() override;
};

#endif // _bug6542335$MyScrollBarUI_h_