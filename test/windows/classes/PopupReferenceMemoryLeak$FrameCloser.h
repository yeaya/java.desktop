#ifndef _PopupReferenceMemoryLeak$FrameCloser_h_
#define _PopupReferenceMemoryLeak$FrameCloser_h_
//$ class PopupReferenceMemoryLeak$FrameCloser
//$ extends javax.swing.AbstractAction

#include <javax/swing/AbstractAction.h>

class PopupReferenceMemoryLeak;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export PopupReferenceMemoryLeak$FrameCloser : public ::javax::swing::AbstractAction {
	$class(PopupReferenceMemoryLeak$FrameCloser, $NO_CLASS_INIT, ::javax::swing::AbstractAction)
public:
	PopupReferenceMemoryLeak$FrameCloser();
	void init$(::PopupReferenceMemoryLeak* this$0, ::javax::swing::JFrame* f);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::PopupReferenceMemoryLeak* this$0 = nullptr;
	::javax::swing::JFrame* frame = nullptr;
};

#endif // _PopupReferenceMemoryLeak$FrameCloser_h_