#ifndef _sun_awt_X11_XEmbedChildProxy_h_
#define _sun_awt_X11_XEmbedChildProxy_h_
//$ class sun.awt.X11.XEmbedChildProxy
//$ extends java.awt.Component

#include <java/awt/Component.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XEmbeddingContainer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEmbedChildProxy : public ::java::awt::Component {
	$class(XEmbedChildProxy, $NO_CLASS_INIT, ::java::awt::Component)
public:
	XEmbedChildProxy();
	void init$(::sun::awt::X11::XEmbeddingContainer* container, int64_t handle);
	virtual void addNotify() override;
	virtual ::sun::awt::X11::XEmbeddingContainer* getEmbeddingContainer();
	virtual int64_t getHandle();
	int64_t handle = 0;
	::sun::awt::X11::XEmbeddingContainer* container = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbedChildProxy_h_