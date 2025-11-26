#ifndef _java_awt_GraphicsCallback$PrintAllCallback_h_
#define _java_awt_GraphicsCallback$PrintAllCallback_h_
//$ class java.awt.GraphicsCallback$PrintAllCallback
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

class GraphicsCallback$PrintAllCallback : public ::java::awt::GraphicsCallback {
	$class(GraphicsCallback$PrintAllCallback, 0, ::java::awt::GraphicsCallback)
public:
	GraphicsCallback$PrintAllCallback();
	void init$();
	static ::java::awt::GraphicsCallback$PrintAllCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::java::awt::GraphicsCallback$PrintAllCallback* instance;
};

	} // awt
} // java

#endif // _java_awt_GraphicsCallback$PrintAllCallback_h_