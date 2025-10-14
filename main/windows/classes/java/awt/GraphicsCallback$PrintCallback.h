#ifndef _java_awt_GraphicsCallback$PrintCallback_h_
#define _java_awt_GraphicsCallback$PrintCallback_h_
//$ class java.awt.GraphicsCallback$PrintCallback
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

class GraphicsCallback$PrintCallback : public ::java::awt::GraphicsCallback {
	$class(GraphicsCallback$PrintCallback, 0, ::java::awt::GraphicsCallback)
public:
	GraphicsCallback$PrintCallback();
	void init$();
	static ::java::awt::GraphicsCallback$PrintCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::java::awt::GraphicsCallback$PrintCallback* instance;
};

	} // awt
} // java

#endif // _java_awt_GraphicsCallback$PrintCallback_h_