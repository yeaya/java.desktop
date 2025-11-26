#ifndef _InternalFrameIsNotCollectedTest$CustomInternalFrame_h_
#define _InternalFrameIsNotCollectedTest$CustomInternalFrame_h_
//$ class InternalFrameIsNotCollectedTest$CustomInternalFrame
//$ extends javax.swing.JInternalFrame

#include <javax/swing/JInternalFrame.h>

class $export InternalFrameIsNotCollectedTest$CustomInternalFrame : public ::javax::swing::JInternalFrame {
	$class(InternalFrameIsNotCollectedTest$CustomInternalFrame, $HAS_FINALIZE, ::javax::swing::JInternalFrame)
public:
	InternalFrameIsNotCollectedTest$CustomInternalFrame();
	using ::javax::swing::JInternalFrame::isFocusCycleRoot;
	using ::javax::swing::JInternalFrame::contains;
	using ::javax::swing::JInternalFrame::enable;
	using ::javax::swing::JInternalFrame::getBounds;
	using ::javax::swing::JInternalFrame::getSize;
	using ::javax::swing::JInternalFrame::getLocation;
	using ::javax::swing::JInternalFrame::firePropertyChange;
	using ::javax::swing::JInternalFrame::add;
	using ::javax::swing::JInternalFrame::getMousePosition;
	using ::javax::swing::JInternalFrame::list;
	void init$($String* title);
	virtual void finalize() override;
	using ::javax::swing::JInternalFrame::setUI;
	using ::javax::swing::JInternalFrame::remove;
	using ::javax::swing::JInternalFrame::show;
	using ::javax::swing::JInternalFrame::requestFocus;
	using ::javax::swing::JInternalFrame::requestFocusInWindow;
	using ::javax::swing::JInternalFrame::repaint;
	static $volatile(bool) finalized;
	static $Object* waiter;
};

#endif // _InternalFrameIsNotCollectedTest$CustomInternalFrame_h_