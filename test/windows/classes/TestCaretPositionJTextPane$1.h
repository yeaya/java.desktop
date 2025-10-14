#ifndef _TestCaretPositionJTextPane$1_h_
#define _TestCaretPositionJTextPane$1_h_
//$ class TestCaretPositionJTextPane$1
//$ extends java.awt.event.MouseListener

#include <java/awt/event/MouseListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

class TestCaretPositionJTextPane$1 : public ::java::awt::event::MouseListener {
	$class(TestCaretPositionJTextPane$1, $NO_CLASS_INIT, ::java::awt::event::MouseListener)
public:
	TestCaretPositionJTextPane$1();
	void init$();
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
};

#endif // _TestCaretPositionJTextPane$1_h_