#ifndef _sun_awt_NullComponentPeer_h_
#define _sun_awt_NullComponentPeer_h_
//$ class sun.awt.NullComponentPeer
//$ extends java.awt.peer.LightweightPeer
//$ implements java.awt.peer.CanvasPeer,java.awt.peer.PanelPeer

#include <java/awt/peer/CanvasPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/awt/peer/PanelPeer.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Color;
		class Component;
		class Cursor;
		class Dimension;
		class Event;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class Insets;
		class Point;
		class Rectangle;
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
			class ComponentPeer;
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

namespace sun {
	namespace awt {

class $export NullComponentPeer : public ::java::awt::peer::LightweightPeer, public ::java::awt::peer::CanvasPeer, public ::java::awt::peer::PanelPeer {
	$class(NullComponentPeer, $NO_CLASS_INIT, ::java::awt::peer::LightweightPeer, ::java::awt::peer::CanvasPeer, ::java::awt::peer::PanelPeer)
public:
	NullComponentPeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout() override;
	virtual void beginValidate() override;
	virtual bool canDetermineObscurity() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void disable();
	virtual void dispose() override;
	virtual void enable();
	virtual void endLayout() override;
	virtual void endValidate() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::GraphicsConfiguration* getAppropriateGraphicsConfiguration(::java::awt::GraphicsConfiguration* gc) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool handleEvent(::java::awt::Event* e);
	virtual void handleEvent(::java::awt::AWTEvent* arg0) override;
	virtual bool handlesWheelScrolling() override;
	virtual void hide();
	virtual ::java::awt::Insets* insets();
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isPaintPending();
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual ::java::awt::Dimension* minimumSize();
	virtual void paint(::java::awt::Graphics* g) override;
	virtual ::java::awt::Dimension* preferredSize();
	virtual void print(::java::awt::Graphics* g) override;
	virtual void repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setCursor(::java::awt::Cursor* cursor);
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual void show();
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
};

	} // awt
} // sun

#endif // _sun_awt_NullComponentPeer_h_