#ifndef _bug6953396$1$1_h_
#define _bug6953396$1$1_h_
//$ class bug6953396$1$1
//$ extends javax.swing.plaf.basic.BasicViewportUI

#include <javax/swing/plaf/basic/BasicViewportUI.h>

class bug6953396$1;
namespace javax {
	namespace swing {
		class JComponent;
	}
}

class bug6953396$1$1 : public ::javax::swing::plaf::basic::BasicViewportUI {
	$class(bug6953396$1$1, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicViewportUI)
public:
	bug6953396$1$1();
	void init$(::bug6953396$1* this$0);
	virtual void installDefaults(::javax::swing::JComponent* c) override;
	virtual void uninstallDefaults(::javax::swing::JComponent* c) override;
	::bug6953396$1* this$0 = nullptr;
};

#endif // _bug6953396$1$1_h_