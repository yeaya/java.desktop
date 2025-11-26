#ifndef _sun_awt_X11_XEmbedCanvasPeer$XEmbedDropTarget_h_
#define _sun_awt_X11_XEmbedCanvasPeer$XEmbedDropTarget_h_
//$ class sun.awt.X11.XEmbedCanvasPeer$XEmbedDropTarget
//$ extends java.awt.dnd.DropTarget

#include <java/awt/dnd/DropTarget.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetListener;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEmbedCanvasPeer$XEmbedDropTarget : public ::java::awt::dnd::DropTarget {
	$class(XEmbedCanvasPeer$XEmbedDropTarget, $NO_CLASS_INIT, ::java::awt::dnd::DropTarget)
public:
	XEmbedCanvasPeer$XEmbedDropTarget();
	void init$();
	virtual void addDropTargetListener(::java::awt::dnd::DropTargetListener* dtl) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbedCanvasPeer$XEmbedDropTarget_h_