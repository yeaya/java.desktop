#ifndef _javax_swing_JSpinner$NumberEditor_h_
#define _javax_swing_JSpinner$NumberEditor_h_
//$ class javax.swing.JSpinner$NumberEditor
//$ extends javax.swing.JSpinner$DefaultEditor

#include <javax/swing/JSpinner$DefaultEditor.h>

namespace java {
	namespace awt {
		class ComponentOrientation;
	}
}
namespace java {
	namespace text {
		class DecimalFormat;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace swing {
		class JSpinner;
		class SpinnerNumberModel;
	}
}

namespace javax {
	namespace swing {

class $import JSpinner$NumberEditor : public ::javax::swing::JSpinner$DefaultEditor {
	$class(JSpinner$NumberEditor, $NO_CLASS_INIT, ::javax::swing::JSpinner$DefaultEditor)
public:
	JSpinner$NumberEditor();
	using ::javax::swing::JSpinner$DefaultEditor::contains;
	using ::javax::swing::JSpinner$DefaultEditor::enable;
	using ::javax::swing::JSpinner$DefaultEditor::getBounds;
	using ::javax::swing::JSpinner$DefaultEditor::getSize;
	using ::javax::swing::JSpinner$DefaultEditor::getLocation;
	using ::javax::swing::JSpinner$DefaultEditor::firePropertyChange;
	using ::javax::swing::JSpinner$DefaultEditor::add;
	using ::javax::swing::JSpinner$DefaultEditor::getMousePosition;
	void init$(::javax::swing::JSpinner* spinner);
	void init$(::javax::swing::JSpinner* spinner, $String* decimalFormatPattern);
	void init$(::javax::swing::JSpinner* spinner, ::java::text::DecimalFormat* format);
	static $String* getDefaultPattern(::java::util::Locale* locale);
	virtual ::java::text::DecimalFormat* getFormat();
	virtual ::javax::swing::SpinnerNumberModel* getModel();
	using ::javax::swing::JSpinner$DefaultEditor::requestFocus;
	using ::javax::swing::JSpinner$DefaultEditor::requestFocusInWindow;
	using ::javax::swing::JSpinner$DefaultEditor::repaint;
	using ::javax::swing::JSpinner$DefaultEditor::remove;
	using ::javax::swing::JSpinner$DefaultEditor::list;
	virtual void setComponentOrientation(::java::awt::ComponentOrientation* o) override;
	using ::javax::swing::JSpinner$DefaultEditor::setUI;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$NumberEditor_h_