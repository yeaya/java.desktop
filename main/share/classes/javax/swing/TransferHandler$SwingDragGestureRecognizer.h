#ifndef _javax_swing_TransferHandler$SwingDragGestureRecognizer_h_
#define _javax_swing_TransferHandler$SwingDragGestureRecognizer_h_
//$ class javax.swing.TransferHandler$SwingDragGestureRecognizer
//$ extends java.awt.dnd.DragGestureRecognizer

#include <java/awt/dnd/DragGestureRecognizer.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureListener;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class TransferHandler$SwingDragGestureRecognizer : public ::java::awt::dnd::DragGestureRecognizer {
	$class(TransferHandler$SwingDragGestureRecognizer, $NO_CLASS_INIT, ::java::awt::dnd::DragGestureRecognizer)
public:
	TransferHandler$SwingDragGestureRecognizer();
	void init$(::java::awt::dnd::DragGestureListener* dgl);
	virtual void gestured(::javax::swing::JComponent* c, ::java::awt::event::MouseEvent* e, int32_t srcActions, int32_t action);
	virtual void registerListeners() override;
	virtual void unregisterListeners() override;
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$SwingDragGestureRecognizer_h_