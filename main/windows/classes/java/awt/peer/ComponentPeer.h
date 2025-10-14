#ifndef _java_awt_peer_ComponentPeer_h_
#define _java_awt_peer_ComponentPeer_h_
//$ interface java.awt.peer.ComponentPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_OPERATION")
#undef DEFAULT_OPERATION
#pragma push_macro("NO_EMBEDDED_CHECK")
#undef NO_EMBEDDED_CHECK
#pragma push_macro("RESET_OPERATION")
#undef RESET_OPERATION
#pragma push_macro("SET_BOUNDS")
#undef SET_BOUNDS
#pragma push_macro("SET_CLIENT_SIZE")
#undef SET_CLIENT_SIZE
#pragma push_macro("SET_LOCATION")
#undef SET_LOCATION
#pragma push_macro("SET_SIZE")
#undef SET_SIZE

namespace java {
	namespace awt {
		class AWTEvent;
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Color;
		class Component;
		class Dimension;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
			class PaintEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
			class VolatileImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ContainerPeer;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace java {
	namespace awt {
		namespace peer {

class $export ComponentPeer : public ::java::lang::Object {
	$interface(ComponentPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void applyShape(::sun::java2d::pipe::Region* shape) {}
	virtual bool canDetermineObscurity() {return false;}
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) {}
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) {}
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) {return nullptr;}
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) {return nullptr;}
	virtual void destroyBuffers() {}
	virtual void dispose() {}
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) {}
	virtual ::java::awt::Image* getBackBuffer() {return nullptr;}
	virtual ::java::awt::image::ColorModel* getColorModel() {return nullptr;}
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) {return nullptr;}
	virtual ::java::awt::Graphics* getGraphics() {return nullptr;}
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() {return nullptr;}
	virtual ::java::awt::Point* getLocationOnScreen() {return nullptr;}
	virtual ::java::awt::Dimension* getMinimumSize() {return nullptr;}
	virtual ::java::awt::Dimension* getPreferredSize() {return nullptr;}
	virtual void handleEvent(::java::awt::AWTEvent* e) {}
	virtual bool handlesWheelScrolling() {return false;}
	virtual bool isFocusable() {return false;}
	virtual bool isObscured() {return false;}
	virtual bool isReparentSupported() {return false;}
	virtual void layout() {}
	virtual void paint(::java::awt::Graphics* g) {}
	virtual void print(::java::awt::Graphics* g) {}
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) {}
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) {return false;}
	virtual void setBackground(::java::awt::Color* c) {}
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {}
	virtual void setEnabled(bool e) {}
	virtual void setFont(::java::awt::Font* f) {}
	virtual void setForeground(::java::awt::Color* c) {}
	virtual void setVisible(bool v) {}
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) {}
	virtual void updateCursorImmediately() {}
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) {return false;}
	static const int32_t SET_LOCATION = 1;
	static const int32_t SET_SIZE = 2;
	static const int32_t SET_BOUNDS = 3;
	static const int32_t SET_CLIENT_SIZE = 4;
	static const int32_t RESET_OPERATION = 5;
	static const int32_t NO_EMBEDDED_CHECK = (1 << 14);
	static const int32_t DEFAULT_OPERATION = SET_BOUNDS;
};

		} // peer
	} // awt
} // java

#pragma pop_macro("DEFAULT_OPERATION")
#pragma pop_macro("NO_EMBEDDED_CHECK")
#pragma pop_macro("RESET_OPERATION")
#pragma pop_macro("SET_BOUNDS")
#pragma pop_macro("SET_CLIENT_SIZE")
#pragma pop_macro("SET_LOCATION")
#pragma pop_macro("SET_SIZE")

#endif // _java_awt_peer_ComponentPeer_h_