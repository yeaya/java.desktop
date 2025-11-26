#ifndef _javax_swing_ColorChooserDialog$3_h_
#define _javax_swing_ColorChooserDialog$3_h_
//$ class javax.swing.ColorChooserDialog$3
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class ColorChooserDialog;
	}
}

namespace javax {
	namespace swing {

class ColorChooserDialog$3 : public ::java::awt::event::ActionListener {
	$class(ColorChooserDialog$3, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	ColorChooserDialog$3();
	void init$(::javax::swing::ColorChooserDialog* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::javax::swing::ColorChooserDialog* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ColorChooserDialog$3_h_