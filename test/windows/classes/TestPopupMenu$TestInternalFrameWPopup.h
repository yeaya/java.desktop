#ifndef _TestPopupMenu$TestInternalFrameWPopup_h_
#define _TestPopupMenu$TestInternalFrameWPopup_h_
//$ class TestPopupMenu$TestInternalFrameWPopup
//$ extends javax.swing.JInternalFrame

#include <javax/swing/JInternalFrame.h>

class TestPopupMenu;
namespace javax {
	namespace swing {
		class JPanel;
	}
}

class $export TestPopupMenu$TestInternalFrameWPopup : public ::javax::swing::JInternalFrame {
	$class(TestPopupMenu$TestInternalFrameWPopup, $NO_CLASS_INIT, ::javax::swing::JInternalFrame)
public:
	TestPopupMenu$TestInternalFrameWPopup();
	using ::javax::swing::JInternalFrame::contains;
	using ::javax::swing::JInternalFrame::enable;
	using ::javax::swing::JInternalFrame::getBounds;
	using ::javax::swing::JInternalFrame::getSize;
	using ::javax::swing::JInternalFrame::getLocation;
	using ::javax::swing::JInternalFrame::firePropertyChange;
	using ::javax::swing::JInternalFrame::add;
	using ::javax::swing::JInternalFrame::getMousePosition;
	void init$(::TestPopupMenu* this$0);
	::javax::swing::JPanel* getContainerPanel();
	using ::javax::swing::JInternalFrame::isFocusCycleRoot;
	void jbInit();
	using ::javax::swing::JInternalFrame::setUI;
	using ::javax::swing::JInternalFrame::remove;
	using ::javax::swing::JInternalFrame::show;
	using ::javax::swing::JInternalFrame::requestFocus;
	using ::javax::swing::JInternalFrame::requestFocusInWindow;
	using ::javax::swing::JInternalFrame::repaint;
	using ::javax::swing::JInternalFrame::list;
	::TestPopupMenu* this$0 = nullptr;
};

#endif // _TestPopupMenu$TestInternalFrameWPopup_h_