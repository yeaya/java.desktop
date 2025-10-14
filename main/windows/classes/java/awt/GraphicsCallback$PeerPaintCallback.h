#ifndef _java_awt_GraphicsCallback$PeerPaintCallback_h_
#define _java_awt_GraphicsCallback$PeerPaintCallback_h_
//$ class java.awt.GraphicsCallback$PeerPaintCallback
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

class GraphicsCallback$PeerPaintCallback : public ::java::awt::GraphicsCallback {
	$class(GraphicsCallback$PeerPaintCallback, 0, ::java::awt::GraphicsCallback)
public:
	GraphicsCallback$PeerPaintCallback();
	void init$();
	static ::java::awt::GraphicsCallback$PeerPaintCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::java::awt::GraphicsCallback$PeerPaintCallback* instance;
};

	} // awt
} // java

#endif // _java_awt_GraphicsCallback$PeerPaintCallback_h_