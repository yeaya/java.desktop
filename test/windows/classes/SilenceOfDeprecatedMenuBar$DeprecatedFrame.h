#ifndef _SilenceOfDeprecatedMenuBar$DeprecatedFrame_h_
#define _SilenceOfDeprecatedMenuBar$DeprecatedFrame_h_
//$ class SilenceOfDeprecatedMenuBar$DeprecatedFrame
//$ extends javax.swing.JFrame

#include <javax/swing/JFrame.h>

namespace javax {
	namespace swing {
		class JRootPane;
	}
}

class SilenceOfDeprecatedMenuBar$DeprecatedFrame : public ::javax::swing::JFrame {
	$class(SilenceOfDeprecatedMenuBar$DeprecatedFrame, $NO_CLASS_INIT, ::javax::swing::JFrame)
public:
	SilenceOfDeprecatedMenuBar$DeprecatedFrame();
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	void init$();
	virtual ::javax::swing::JRootPane* createRootPane() override;
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::list;
};

#endif // _SilenceOfDeprecatedMenuBar$DeprecatedFrame_h_