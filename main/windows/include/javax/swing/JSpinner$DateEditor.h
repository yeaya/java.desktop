#ifndef _javax_swing_JSpinner$DateEditor_h_
#define _javax_swing_JSpinner$DateEditor_h_
//$ class javax.swing.JSpinner$DateEditor
//$ extends javax.swing.JSpinner$DefaultEditor

#include <javax/swing/JSpinner$DefaultEditor.h>

namespace java {
	namespace text {
		class DateFormat;
		class SimpleDateFormat;
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
		class SpinnerDateModel;
	}
}

namespace javax {
	namespace swing {

class $import JSpinner$DateEditor : public ::javax::swing::JSpinner$DefaultEditor {
	$class(JSpinner$DateEditor, $NO_CLASS_INIT, ::javax::swing::JSpinner$DefaultEditor)
public:
	JSpinner$DateEditor();
	using ::javax::swing::JSpinner$DefaultEditor::contains;
	using ::javax::swing::JSpinner$DefaultEditor::enable;
	using ::javax::swing::JSpinner$DefaultEditor::getBounds;
	using ::javax::swing::JSpinner$DefaultEditor::getSize;
	using ::javax::swing::JSpinner$DefaultEditor::getLocation;
	using ::javax::swing::JSpinner$DefaultEditor::firePropertyChange;
	using ::javax::swing::JSpinner$DefaultEditor::add;
	using ::javax::swing::JSpinner$DefaultEditor::getMousePosition;
	void init$(::javax::swing::JSpinner* spinner);
	void init$(::javax::swing::JSpinner* spinner, $String* dateFormatPattern);
	void init$(::javax::swing::JSpinner* spinner, ::java::text::DateFormat* format);
	static $String* getDefaultPattern(::java::util::Locale* loc);
	virtual ::java::text::SimpleDateFormat* getFormat();
	virtual ::javax::swing::SpinnerDateModel* getModel();
	using ::javax::swing::JSpinner$DefaultEditor::setUI;
	using ::javax::swing::JSpinner$DefaultEditor::requestFocus;
	using ::javax::swing::JSpinner$DefaultEditor::requestFocusInWindow;
	using ::javax::swing::JSpinner$DefaultEditor::repaint;
	using ::javax::swing::JSpinner$DefaultEditor::remove;
	using ::javax::swing::JSpinner$DefaultEditor::list;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$DateEditor_h_