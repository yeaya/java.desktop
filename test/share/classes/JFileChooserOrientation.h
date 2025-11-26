#ifndef _JFileChooserOrientation_h_
#define _JFileChooserOrientation_h_
//$ class JFileChooserOrientation
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GridBagLayout;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JComboBox;
		class JFileChooser;
		class JFrame;
		class JLabel;
		class JPanel;
		class JTextArea;
		class UIManager$LookAndFeelInfo;
	}
}

class $export JFileChooserOrientation : public ::java::lang::Object {
	$class(JFileChooserOrientation, 0, ::java::lang::Object)
public:
	JFileChooserOrientation();
	void init$();
	static void createManualTestUI();
	static void fail();
	static void main($StringArray* args);
	static void pass();
	static void showFileChooser();
	static bool tryLookAndFeel($String* lookAndFeelString);
	static ::javax::swing::JFrame* frame;
	static ::java::awt::GridBagLayout* layout;
	static ::javax::swing::JPanel* panel;
	static ::javax::swing::JPanel* lookAndFeelPanel;
	static ::javax::swing::JPanel* orientationPanel;
	static ::javax::swing::JPanel* passFailPanel;
	static ::javax::swing::JTextArea* instructionsTextArea;
	static ::javax::swing::JLabel* lookAndFeelLabel;
	static ::javax::swing::JLabel* orientationLabel;
	static ::javax::swing::JComboBox* lookAndFeelComboBox;
	static ::javax::swing::JComboBox* orientationComboBox;
	static ::javax::swing::JButton* fileChooserButton;
	static ::javax::swing::JButton* passButton;
	static ::javax::swing::JButton* failButton;
	static ::javax::swing::JFileChooser* openChooser;
	static $Array<::javax::swing::UIManager$LookAndFeelInfo>* lookAndFeelArray;
	static $String* orientationLTR;
	static $String* orientationRTL;
	static $String* fileChooserString;
};

#endif // _JFileChooserOrientation_h_