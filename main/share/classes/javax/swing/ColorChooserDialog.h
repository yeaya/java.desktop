#ifndef _javax_swing_ColorChooserDialog_h_
#define _javax_swing_ColorChooserDialog_h_
//$ class javax.swing.ColorChooserDialog
//$ extends javax.swing.JDialog

#include <javax/swing/JDialog.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dialog;
		class Frame;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
		}
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JColorChooser;
	}
}

namespace javax {
	namespace swing {

class ColorChooserDialog : public ::javax::swing::JDialog {
	$class(ColorChooserDialog, $NO_CLASS_INIT, ::javax::swing::JDialog)
public:
	ColorChooserDialog();
	using ::javax::swing::JDialog::add;
	using ::javax::swing::JDialog::getMousePosition;
	void init$(::java::awt::Dialog* owner, $String* title, bool modal, ::java::awt::Component* c, ::javax::swing::JColorChooser* chooserPane, ::java::awt::event::ActionListener* okListener, ::java::awt::event::ActionListener* cancelListener);
	void init$(::java::awt::Frame* owner, $String* title, bool modal, ::java::awt::Component* c, ::javax::swing::JColorChooser* chooserPane, ::java::awt::event::ActionListener* okListener, ::java::awt::event::ActionListener* cancelListener);
	virtual void initColorChooserDialog(::java::awt::Component* c, ::javax::swing::JColorChooser* chooserPane, ::java::awt::event::ActionListener* okListener, ::java::awt::event::ActionListener* cancelListener);
	using ::javax::swing::JDialog::remove;
	using ::javax::swing::JDialog::repaint;
	using ::javax::swing::JDialog::isFocusCycleRoot;
	using ::javax::swing::JDialog::list;
	virtual void reset();
	using ::javax::swing::JDialog::show;
	virtual void show() override;
	::java::awt::Color* initialColor = nullptr;
	::javax::swing::JColorChooser* chooserPane = nullptr;
	::javax::swing::JButton* cancelButton = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ColorChooserDialog_h_