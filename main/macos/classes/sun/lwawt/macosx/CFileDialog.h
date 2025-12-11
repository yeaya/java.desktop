#ifndef _sun_lwawt_macosx_CFileDialog_h_
#define _sun_lwawt_macosx_CFileDialog_h_
//$ class sun.lwawt.macosx.CFileDialog
//$ extends java.awt.peer.FileDialogPeer

#include <java/awt/peer/FileDialogPeer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class BufferCapabilities;
		class BufferCapabilities$FlipContents;
		class Color;
		class Component;
		class Dialog;
		class Dimension;
		class FileDialog;
		class Font;
		class FontMetrics;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class Insets;
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
			class ComponentPeer;
			class ContainerPeer;
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
	namespace lwawt {
		namespace macosx {

class CFileDialog : public ::java::awt::peer::FileDialogPeer {
	$class(CFileDialog, $NO_CLASS_INIT, ::java::awt::peer::FileDialogPeer)
public:
	CFileDialog();
	void init$(::java::awt::FileDialog* target);
	virtual void applyShape(::sun::java2d::pipe::Region* shape) override;
	virtual void beginLayout() override;
	virtual void beginValidate() override;
	virtual void blockWindows(::java::util::List* windows) override;
	virtual bool canDetermineObscurity() override;
	virtual void coalescePaintEvent(::java::awt::event::PaintEvent* e) override;
	virtual void createBuffers(int32_t numBuffers, ::java::awt::BufferCapabilities* caps) override;
	virtual ::java::awt::Image* createImage(int32_t width, int32_t height) override;
	virtual ::java::awt::image::VolatileImage* createVolatileImage(int32_t width, int32_t height) override;
	virtual void destroyBuffers() override;
	virtual void dispose() override;
	virtual void endLayout() override;
	virtual void endValidate() override;
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
	virtual bool isFocusable() override;
	virtual bool isObscured() override;
	virtual bool isReparentSupported() override;
	virtual void layout() override;
	$StringArray* nativeRunFileDialog($String* title, int32_t mode, bool multipleMode, bool shouldNavigateApps, bool canChooseDirectories, bool hasFilenameFilter, $String* directory, $String* file);
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	bool queryFilenameFilter($String* inFilename);
	virtual void reparent(::java::awt::peer::ContainerPeer* newContainer) override;
	virtual void repositionSecurityWarning() override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setDirectory($String* dir) override;
	virtual void setEnabled(bool e) override;
	virtual void setFile($String* file) override;
	virtual void setFilenameFilter(::java::io::FilenameFilter* filter) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setModalBlocked(::java::awt::Dialog* blocker, bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizeable) override;
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool visible) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual void updateAlwaysOnTopState() override;
	virtual void updateCursorImmediately() override;
	virtual void updateFocusableWindowState() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateIconImages() override;
	virtual void updateMinimumSize() override;
	virtual void updateWindow() override;
	::java::awt::FileDialog* target = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CFileDialog_h_