#ifndef _java_awt_Canvas_h_
#define _java_awt_Canvas_h_
//$ class java.awt.Canvas
//$ extends java.awt.Component
//$ implements javax.accessibility.Accessible

#include <java/awt/Component.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class Graphics;
		class GraphicsConfiguration;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferStrategy;
		}
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $export Canvas : public ::java::awt::Component, public ::javax::accessibility::Accessible {
	$class(Canvas, 0, ::java::awt::Component, ::javax::accessibility::Accessible)
public:
	Canvas();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::GraphicsConfiguration* config);
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual void createBufferStrategy(int32_t numBuffers) override;
	virtual void createBufferStrategy(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::image::BufferStrategy* getBufferStrategy() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual bool postsOldMouseEvents() override;
	virtual void setGraphicsConfiguration(::java::awt::GraphicsConfiguration* gc) override;
	virtual $String* toString() override;
	virtual void update(::java::awt::Graphics* g) override;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0xE04A7A764A4BCE12;
};

	} // awt
} // java

#endif // _java_awt_Canvas_h_