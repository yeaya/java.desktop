#ifndef _java_awt_GraphicsCallback$PaintHeavyweightComponentsCallback_h_
#define _java_awt_GraphicsCallback$PaintHeavyweightComponentsCallback_h_
//$ class java.awt.GraphicsCallback$PaintHeavyweightComponentsCallback
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

class GraphicsCallback$PaintHeavyweightComponentsCallback : public ::java::awt::GraphicsCallback {
	$class(GraphicsCallback$PaintHeavyweightComponentsCallback, 0, ::java::awt::GraphicsCallback)
public:
	GraphicsCallback$PaintHeavyweightComponentsCallback();
	void init$();
	static ::java::awt::GraphicsCallback$PaintHeavyweightComponentsCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::java::awt::GraphicsCallback$PaintHeavyweightComponentsCallback* instance;
};

	} // awt
} // java

#endif // _java_awt_GraphicsCallback$PaintHeavyweightComponentsCallback_h_