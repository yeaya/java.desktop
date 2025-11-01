#ifndef _sun_awt_windows_WListPeer_h_
#define _sun_awt_windows_WListPeer_h_
//$ class sun.awt.windows.WListPeer
//$ extends sun.awt.windows.WComponentPeer
//$ implements java.awt.peer.ListPeer

#include <java/awt/peer/ListPeer.h>
#include <java/lang/Array.h>
#include <sun/awt/windows/WComponentPeer.h>

namespace java {
	namespace awt {
		class Dimension;
		class Font;
		class FontMetrics;
		class List;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WListPeer : public ::sun::awt::windows::WComponentPeer, public ::java::awt::peer::ListPeer {
	$class(WListPeer, $NO_CLASS_INIT, ::sun::awt::windows::WComponentPeer, ::java::awt::peer::ListPeer)
public:
	WListPeer();
	using ::sun::awt::windows::WComponentPeer::getColorModel;
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
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::List* target);
	virtual void _setFont(::java::awt::Font* f) override;
	virtual void add($String* item, int32_t index) override;
	void addItem($String* item, int32_t index);
	void addItems($StringArray* items, int32_t index, int32_t width);
	void clear();
	virtual void create(::sun::awt::windows::WComponentPeer* parent) override;
	virtual void delItems(int32_t start, int32_t end) override;
	virtual void deselect(int32_t index) override;
	int32_t getMaxWidth();
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows) override;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t rows) override;
	virtual $ints* getSelectedIndexes() override;
	void handleAction(int32_t index, int64_t when, int32_t modifiers);
	void handleListChanged(int32_t index);
	virtual void initialize() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	bool isSelected(int32_t index);
	virtual void layout() override;
	virtual void makeVisible(int32_t index) override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void removeAll() override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void select(int32_t index) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setMultipleMode(bool b) override;
	void setMultipleSelections(bool v);
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual bool shouldClearRectBeforePaint() override;
	virtual $String* toString() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	void updateMaxItemWidth();
	::java::awt::FontMetrics* fm = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WListPeer_h_