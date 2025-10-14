#ifndef _javax_swing_JSpinner$ListEditor_h_
#define _javax_swing_JSpinner$ListEditor_h_
//$ class javax.swing.JSpinner$ListEditor
//$ extends javax.swing.JSpinner$DefaultEditor

#include <javax/swing/JSpinner$DefaultEditor.h>

namespace javax {
	namespace swing {
		class JSpinner;
		class SpinnerListModel;
	}
}

namespace javax {
	namespace swing {

class $export JSpinner$ListEditor : public ::javax::swing::JSpinner$DefaultEditor {
	$class(JSpinner$ListEditor, $NO_CLASS_INIT, ::javax::swing::JSpinner$DefaultEditor)
public:
	JSpinner$ListEditor();
	using ::javax::swing::JSpinner$DefaultEditor::contains;
	using ::javax::swing::JSpinner$DefaultEditor::enable;
	using ::javax::swing::JSpinner$DefaultEditor::getBounds;
	using ::javax::swing::JSpinner$DefaultEditor::getSize;
	using ::javax::swing::JSpinner$DefaultEditor::getLocation;
	using ::javax::swing::JSpinner$DefaultEditor::firePropertyChange;
	using ::javax::swing::JSpinner$DefaultEditor::add;
	using ::javax::swing::JSpinner$DefaultEditor::getMousePosition;
	void init$(::javax::swing::JSpinner* spinner);
	virtual ::javax::swing::SpinnerListModel* getModel();
	using ::javax::swing::JSpinner$DefaultEditor::setUI;
	using ::javax::swing::JSpinner$DefaultEditor::requestFocus;
	using ::javax::swing::JSpinner$DefaultEditor::requestFocusInWindow;
	using ::javax::swing::JSpinner$DefaultEditor::repaint;
	using ::javax::swing::JSpinner$DefaultEditor::remove;
	using ::javax::swing::JSpinner$DefaultEditor::list;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$ListEditor_h_