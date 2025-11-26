#ifndef _sun_awt_X11_GtkFileDialogPeer_h_
#define _sun_awt_X11_GtkFileDialogPeer_h_
//$ class sun.awt.X11.GtkFileDialogPeer
//$ extends sun.awt.X11.XDialogPeer
//$ implements java.awt.peer.FileDialogPeer

#include <java/awt/peer/FileDialogPeer.h>
#include <java/lang/Array.h>
#include <sun/awt/X11/XDialogPeer.h>

namespace java {
	namespace awt {
		class FileDialog;
	}
}
namespace java {
	namespace io {
		class FilenameFilter;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class GtkFileDialogPeer : public ::sun::awt::X11::XDialogPeer, public ::java::awt::peer::FileDialogPeer {
	$class(GtkFileDialogPeer, 0, ::sun::awt::X11::XDialogPeer, ::java::awt::peer::FileDialogPeer)
public:
	GtkFileDialogPeer();
	using ::sun::awt::X11::XDialogPeer::addDropTarget;
	using ::sun::awt::X11::XDialogPeer::handleKeyPress;
	using ::sun::awt::X11::XDialogPeer::getColorModel;
	using ::sun::awt::X11::XDialogPeer::getGraphics;
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout() override;
	virtual void beginValidate() override;
	virtual void blockWindows(::java::util::List* toBlock) override;
	virtual bool canDetermineObscurity() override;
	virtual $Object* clone() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void endLayout() override;
	virtual void endValidate() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, ::java::awt::BufferCapabilities$FlipContents* flipAction) override;
	virtual ::java::awt::Image* getBackBuffer() override;
	virtual ::java::awt::image::ColorModel* getColorModel() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() override;
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void handleEvent(::java::awt::AWTEvent* e) override;
	virtual bool handlesWheelScrolling() override;
	virtual int32_t hashCode() override;
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	void init$(::java::awt::FileDialog* fd);
	virtual void dispose() override;
	bool filenameFilterCallback($String* fullname);
	static void initIDs();
	void lambda$setVisible$0();
	using ::sun::awt::X11::XDialogPeer::preInit;
	using ::sun::awt::X11::XDialogPeer::postInit;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	void quit();
	using ::sun::awt::X11::XDialogPeer::requestWindowFocus;
	using ::sun::awt::X11::XDialogPeer::requestXFocus;
	using ::sun::awt::X11::XDialogPeer::removeDropTarget;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void repositionSecurityWarning() override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void requestXFocus(int64_t time, bool timeProvided) override;
	void run($String* title, int32_t mode, $String* dir, $String* file, ::java::io::FilenameFilter* filter, bool isMultipleMode, int32_t x, int32_t y);
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setDirectory($String* dir) override;
	virtual void setEnabled(bool value) override;
	virtual void setFile($String* file) override;
	void setFileInternal($String* directory, $StringArray* filenames);
	virtual void setFilenameFilter(::java::io::FilenameFilter* filter) override;
	using ::sun::awt::X11::XDialogPeer::setModalBlocked;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setModalBlocked(::java::awt::Dialog* d, bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool b) override;
	bool setWindow(int64_t xid);
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	void showNativeDialog();
	virtual void toBack() override;
	virtual void toFront() override;
	using ::sun::awt::X11::XDialogPeer::updateSizeHints;
	virtual $String* toString() override;
	virtual void updateAlwaysOnTopState() override;
	virtual void updateCursorImmediately() override;
	virtual void updateFocusableWindowState() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateIconImages() override;
	virtual void updateMinimumSize() override;
	virtual void updateWindow() override;
	::java::awt::FileDialog* fd = nullptr;
	$volatile(int64_t) widget = 0;
	int64_t standaloneWindow = 0;
	$volatile(bool) quit$ = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_GtkFileDialogPeer_h_