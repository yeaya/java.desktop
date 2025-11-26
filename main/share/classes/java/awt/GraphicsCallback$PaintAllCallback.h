#ifndef _java_awt_GraphicsCallback$PaintAllCallback_h_
#define _java_awt_GraphicsCallback$PaintAllCallback_h_
//$ class java.awt.GraphicsCallback$PaintAllCallback
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

class GraphicsCallback$PaintAllCallback : public ::java::awt::GraphicsCallback {
	$class(GraphicsCallback$PaintAllCallback, 0, ::java::awt::GraphicsCallback)
public:
	GraphicsCallback$PaintAllCallback();
	void init$();
	static ::java::awt::GraphicsCallback$PaintAllCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::java::awt::GraphicsCallback$PaintAllCallback* instance;
};

	} // awt
} // java

#endif // _java_awt_GraphicsCallback$PaintAllCallback_h_