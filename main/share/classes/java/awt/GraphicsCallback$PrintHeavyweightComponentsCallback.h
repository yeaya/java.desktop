#ifndef _java_awt_GraphicsCallback$PrintHeavyweightComponentsCallback_h_
#define _java_awt_GraphicsCallback$PrintHeavyweightComponentsCallback_h_
//$ class java.awt.GraphicsCallback$PrintHeavyweightComponentsCallback
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

class GraphicsCallback$PrintHeavyweightComponentsCallback : public ::java::awt::GraphicsCallback {
	$class(GraphicsCallback$PrintHeavyweightComponentsCallback, 0, ::java::awt::GraphicsCallback)
public:
	GraphicsCallback$PrintHeavyweightComponentsCallback();
	void init$();
	static ::java::awt::GraphicsCallback$PrintHeavyweightComponentsCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::java::awt::GraphicsCallback$PrintHeavyweightComponentsCallback* instance;
};

	} // awt
} // java

#endif // _java_awt_GraphicsCallback$PrintHeavyweightComponentsCallback_h_