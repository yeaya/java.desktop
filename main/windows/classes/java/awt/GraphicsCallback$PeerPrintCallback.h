#ifndef _java_awt_GraphicsCallback$PeerPrintCallback_h_
#define _java_awt_GraphicsCallback$PeerPrintCallback_h_
//$ class java.awt.GraphicsCallback$PeerPrintCallback
//$ extends java.awt.GraphicsCallback

#include <java/awt/GraphicsCallback.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace java {
	namespace awt {

class GraphicsCallback$PeerPrintCallback : public ::java::awt::GraphicsCallback {
	$class(GraphicsCallback$PeerPrintCallback, 0, ::java::awt::GraphicsCallback)
public:
	GraphicsCallback$PeerPrintCallback();
	void init$();
	static ::java::awt::GraphicsCallback$PeerPrintCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::java::awt::GraphicsCallback$PeerPrintCallback* instance;
};

	} // awt
} // java

#endif // _java_awt_GraphicsCallback$PeerPrintCallback_h_