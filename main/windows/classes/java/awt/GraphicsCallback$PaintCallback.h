#ifndef _java_awt_GraphicsCallback$PaintCallback_h_
#define _java_awt_GraphicsCallback$PaintCallback_h_
//$ class java.awt.GraphicsCallback$PaintCallback
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

class GraphicsCallback$PaintCallback : public ::java::awt::GraphicsCallback {
	$class(GraphicsCallback$PaintCallback, 0, ::java::awt::GraphicsCallback)
public:
	GraphicsCallback$PaintCallback();
	void init$();
	static ::java::awt::GraphicsCallback$PaintCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::java::awt::GraphicsCallback$PaintCallback* instance;
};

	} // awt
} // java

#endif // _java_awt_GraphicsCallback$PaintCallback_h_