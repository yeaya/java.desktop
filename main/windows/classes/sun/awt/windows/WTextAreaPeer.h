#ifndef _sun_awt_windows_WTextAreaPeer_h_
#define _sun_awt_windows_WTextAreaPeer_h_
//$ class sun.awt.windows.WTextAreaPeer
//$ extends sun.awt.windows.WTextComponentPeer
//$ implements java.awt.peer.TextAreaPeer

#include <java/awt/peer/TextAreaPeer.h>
#include <sun/awt/windows/WTextComponentPeer.h>

namespace java {
	namespace awt {
		class Dimension;
		class TextArea;
	}
}
namespace java {
	namespace awt {
		namespace im {
			class InputMethodRequests;
		}
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WComponentPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WTextAreaPeer : public ::sun::awt::windows::WTextComponentPeer, public ::java::awt::peer::TextAreaPeer {
	$class(WTextAreaPeer, $NO_CLASS_INIT, ::sun::awt::windows::WTextComponentPeer, ::java::awt::peer::TextAreaPeer)
public:
	WTextAreaPeer();
	using ::sun::awt::windows::WTextComponentPeer::getColorModel;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual int32_t getCaretPosition() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual int32_t getSelectionEnd() override;
	virtual int32_t getSelectionStart() override;
	virtual $String* getText() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::TextArea* target);
	virtual void create(::sun::awt::windows::WComponentPeer* parent) override;
	virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows, int32_t cols) override;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t rows, int32_t cols) override;
	virtual void insert($String* text, int32_t pos) override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void replaceRange($String* text, int32_t start, int32_t end) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void select(int32_t selStart, int32_t selEnd) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setCaretPosition(int32_t pos) override;
	virtual void setEditable(bool editable) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setText($String* text) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WTextAreaPeer_h_