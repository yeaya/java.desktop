#ifndef _sun_awt_X11_XEmbeddingContainer_h_
#define _sun_awt_X11_XEmbeddingContainer_h_
//$ class sun.awt.X11.XEmbeddingContainer
//$ extends sun.awt.X11.XEmbedHelper
//$ implements sun.awt.X11.XEventDispatcher

#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/awt/X11/XEventDispatcher.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XEmbedChildProxyPeer;
			class XEvent;
			class XWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEmbeddingContainer : public ::sun::awt::X11::XEmbedHelper, public ::sun::awt::X11::XEventDispatcher {
	$class(XEmbeddingContainer, $NO_CLASS_INIT, ::sun::awt::X11::XEmbedHelper, ::sun::awt::X11::XEventDispatcher)
public:
	XEmbeddingContainer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void add(int64_t child);
	virtual bool checkXEmbed(int64_t child);
	virtual void childResized(::java::awt::Component* child);
	virtual ::java::awt::Component* createChildProxy(int64_t child);
	virtual void deinstall();
	virtual void detachChild(int64_t child);
	virtual void dispatchEvent(::sun::awt::X11::XEvent* xev) override;
	virtual void focusGained(int64_t child);
	virtual void focusLost(int64_t child);
	virtual void forwardKeyEvent(int64_t child, ::java::awt::event::KeyEvent* e);
	virtual ::sun::awt::X11::XEmbedChildProxyPeer* getChild(int64_t child);
	virtual void handleClientMessage(::sun::awt::X11::XEvent* xev);
	virtual void install(::sun::awt::X11::XWindow* embedder);
	virtual void notifyChildEmbedded(int64_t child);
	virtual $String* toString() override;
	::java::util::HashMap* children = nullptr;
	::sun::awt::X11::XWindow* embedder = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbeddingContainer_h_