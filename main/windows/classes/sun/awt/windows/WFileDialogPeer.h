#ifndef _sun_awt_windows_WFileDialogPeer_h_
#define _sun_awt_windows_WFileDialogPeer_h_
//$ class sun.awt.windows.WFileDialogPeer
//$ extends sun.awt.windows.WWindowPeer
//$ implements java.awt.peer.FileDialogPeer

#include <java/awt/peer/FileDialogPeer.h>
#include <java/lang/Array.h>
#include <sun/awt/windows/WWindowPeer.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Event;
		class FileDialog;
		class Font;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTarget;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent$Cause;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
		}
	}
}
namespace java {
	namespace io {
		class FilenameFilter;
	}
}
namespace java {
	namespace util {
		class List;
		class Vector;
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
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WFileDialogPeer : public ::sun::awt::windows::WWindowPeer, public ::java::awt::peer::FileDialogPeer {
	$class(WFileDialogPeer, 0, ::sun::awt::windows::WWindowPeer, ::java::awt::peer::FileDialogPeer)
public:
	WFileDialogPeer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::awt::windows::WWindowPeer::getColorModel;
	virtual void beginLayout() override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual void endLayout() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	void init$(::java::awt::FileDialog* target);
	void _dispose();
	void _hide();
	void _show();
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) override;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginValidate() override;
	void blockWindow(::sun::awt::windows::WWindowPeer* window);
	virtual void blockWindows(::java::util::List* toBlock) override;
	virtual void checkCreation() override;
	bool checkFilenameFilter($String* filename);
	virtual void create(::sun::awt::windows::WComponentPeer* parent) override;
	virtual void createScreenSurface(bool isResize) override;
	virtual void disable() override;
	virtual void disposeImpl() override;
	virtual void enable() override;
	virtual void endValidate() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	void handleCancel();
	bool handleEvent(::java::awt::Event* e);
	void handleSelected($chars* buffer);
	virtual void hide() override;
	static void initIDs();
	virtual void initialize() override;
	void invalidate(int32_t x, int32_t y, int32_t width, int32_t height);
	bool isMultipleMode();
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) override;
	using ::sun::awt::windows::WWindowPeer::replaceSurfaceData;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void replaceSurfaceData() override;
	virtual void repositionSecurityWarning() override;
	bool requestFocus(bool temporary, bool focusedWindowChangeAllowed);
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setDirectory($String* dir) override;
	virtual void setEnabled(bool b) override;
	virtual void setFile($String* file) override;
	virtual void setFilenameFilter(::java::io::FilenameFilter* filter) override;
	static void setFilterString($String* allFilter);
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	void setHWnd(int64_t hwnd);
	virtual void setModalBlocked(::java::awt::Dialog* dialog, bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual void show() override;
	virtual void start() override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	void unblockWindow(::sun::awt::windows::WWindowPeer* window);
	virtual void updateAlwaysOnTopState() override;
	virtual void updateCursorImmediately() override;
	virtual void updateFocusableWindowState() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateIconImages() override;
	virtual void updateMinimumSize() override;
	virtual void updateWindow() override;
	void updateWindow(::java::awt::image::BufferedImage* backBuffer);
	::sun::awt::windows::WComponentPeer* parent = nullptr;
	::java::io::FilenameFilter* fileFilter = nullptr;
	::java::util::Vector* blockedWindows = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WFileDialogPeer_h_