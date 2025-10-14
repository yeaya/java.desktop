#ifndef _TestDialog4FileChooserTest_h_
#define _TestDialog4FileChooserTest_h_
//$ class TestDialog4FileChooserTest
//$ extends javax.swing.JDialog

#include <java/lang/Array.h>
#include <javax/swing/JDialog.h>

namespace java {
	namespace awt {
		class Panel;
		class TextArea;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
	}
}

class TestDialog4FileChooserTest : public ::javax::swing::JDialog {
	$class(TestDialog4FileChooserTest, $NO_CLASS_INIT, ::javax::swing::JDialog)
public:
	TestDialog4FileChooserTest();
	using ::javax::swing::JDialog::add;
	using ::javax::swing::JDialog::getMousePosition;
	void init$(::javax::swing::JFrame* frame, $String* name);
	virtual void displayMessage($String* messageIn);
	using ::javax::swing::JDialog::isFocusCycleRoot;
	using ::javax::swing::JDialog::list;
	virtual void printInstructions($StringArray* instructions);
	using ::javax::swing::JDialog::remove;
	using ::javax::swing::JDialog::repaint;
	using ::javax::swing::JDialog::show;
	::java::awt::TextArea* instructionsText = nullptr;
	::java::awt::TextArea* messageText = nullptr;
	int32_t maxStringLength = 0;
	::java::awt::Panel* buttonP = nullptr;
	::javax::swing::JButton* run = nullptr;
	::javax::swing::JButton* passB = nullptr;
	::javax::swing::JButton* failB = nullptr;
};

#endif // _TestDialog4FileChooserTest_h_