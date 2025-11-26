#ifndef _sun_awt_X11_XFileDialogPeer_h_
#define _sun_awt_X11_XFileDialogPeer_h_
//$ class sun.awt.X11.XFileDialogPeer
//$ extends sun.awt.X11.XDialogPeer
//$ implements java.awt.peer.FileDialogPeer,java.awt.event.ActionListener,java.awt.event.ItemListener,java.awt.KeyEventDispatcher,sun.awt.X11.XChoicePeerListener

#include <java/awt/KeyEventDispatcher.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/peer/FileDialogPeer.h>
#include <java/lang/Array.h>
#include <sun/awt/X11/XChoicePeerListener.h>
#include <sun/awt/X11/XDialogPeer.h>

#pragma push_macro("PATH_CHOICE_WIDTH")
#undef PATH_CHOICE_WIDTH

namespace java {
	namespace awt {
		class Button;
		class Choice;
		class Component;
		class Container;
		class Dialog;
		class FileDialog;
		class GridBagConstraints;
		class GridBagLayout;
		class Insets;
		class List;
		class Panel;
		class TextField;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ItemEvent;
			class KeyEvent;
		}
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
			class ListHelper;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XFileDialogPeer : public ::sun::awt::X11::XDialogPeer, public ::java::awt::peer::FileDialogPeer, public ::java::awt::event::ActionListener, public ::java::awt::event::ItemListener, public ::java::awt::KeyEventDispatcher, public ::sun::awt::X11::XChoicePeerListener {
	$class(XFileDialogPeer, 0, ::sun::awt::X11::XDialogPeer, ::java::awt::peer::FileDialogPeer, ::java::awt::event::ActionListener, ::java::awt::event::ItemListener, ::java::awt::KeyEventDispatcher, ::sun::awt::X11::XChoicePeerListener)
public:
	XFileDialogPeer();
	using ::sun::awt::X11::XDialogPeer::addDropTarget;
	using ::sun::awt::X11::XDialogPeer::handleKeyPress;
	using ::sun::awt::X11::XDialogPeer::getColorModel;
	using ::sun::awt::X11::XDialogPeer::getGraphics;
	using ::sun::awt::X11::XDialogPeer::init;
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
	void init$(::java::awt::FileDialog* target);
	virtual void actionPerformed(::java::awt::event::ActionEvent* actionEvent) override;
	virtual void addComponent(::java::awt::Component* comp, ::java::awt::GridBagLayout* gb, ::java::awt::GridBagConstraints* c, int32_t gridx, int32_t gridy, int32_t gridwidth, int32_t anchor, ::java::awt::Container* cont, int32_t weightx, int32_t weighty, int32_t fill, ::java::awt::Insets* in);
	virtual void addItemsToPathChoice($String* text);
	virtual bool dispatchKeyEvent(::java::awt::event::KeyEvent* keyEvent) override;
	virtual void dispose() override;
	virtual $StringArray* getDirList($String* dir);
	virtual $String* getFileName($String* str);
	virtual $String* getParentDirectory();
	virtual void handleCancel();
	virtual void handleFilter($String* f);
	virtual void handleQuitButton();
	virtual void handleSelection($String* file);
	void init(::java::awt::FileDialog* target);
	virtual void installStrings();
	virtual void itemStateChanged(::java::awt::event::ItemEvent* itemEvent) override;
	using ::sun::awt::X11::XDialogPeer::preInit;
	using ::sun::awt::X11::XDialogPeer::postInit;
	using ::sun::awt::X11::XDialogPeer::requestXFocus;
	using ::sun::awt::X11::XDialogPeer::requestWindowFocus;
	using ::sun::awt::X11::XDialogPeer::removeDropTarget;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void print(::java::awt::Graphics* g) override;
	virtual void reparent(::java::awt::peer::ContainerPeer* newNativeParent) override;
	virtual void repositionSecurityWarning() override;
	virtual bool requestFocus(::java::awt::Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, ::java::awt::event::FocusEvent$Cause* cause) override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) override;
	virtual void setDirectory($String* dir) override;
	virtual void setEnabled(bool value) override;
	virtual void setFile($String* file) override;
	virtual void setFilenameFilter(::java::io::FilenameFilter* filter) override;
	virtual void setFilterEntry($String* d, $String* f);
	virtual void setFilterField($String* str);
	using ::sun::awt::X11::XDialogPeer::setModalBlocked;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setModalBlocked(::java::awt::Dialog* d, bool blocked) override;
	virtual void setOpacity(float opacity) override;
	virtual void setOpaque(bool isOpaque) override;
	virtual void setResizable(bool resizable) override;
	virtual void setSelectionField($String* str);
	virtual void setTitle($String* title) override;
	virtual void setVisible(bool b) override;
	virtual void setZOrder(::java::awt::peer::ComponentPeer* above) override;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	virtual void unfurledChoiceClosing() override;
	virtual void unfurledChoiceOpening(::sun::awt::X11::ListHelper* choiceHelper) override;
	virtual void updateAlwaysOnTopState() override;
	virtual void updateCursorImmediately() override;
	virtual bool updateDirectoryByUserAction($String* str);
	virtual void updateFocusableWindowState() override;
	virtual bool updateGraphicsData(::java::awt::GraphicsConfiguration* gc) override;
	virtual void updateIconImages() override;
	virtual void updateMinimumSize() override;
	using ::sun::awt::X11::XDialogPeer::updateSizeHints;
	virtual void updateWindow() override;
	static ::sun::util::logging::PlatformLogger* log;
	::java::awt::FileDialog* target = nullptr;
	$String* file = nullptr;
	$String* dir = nullptr;
	$String* title = nullptr;
	int32_t mode = 0;
	::java::io::FilenameFilter* filter = nullptr;
	static const int32_t PATH_CHOICE_WIDTH = 20;
	$String* savedFile = nullptr;
	$String* savedDir = nullptr;
	$String* userDir = nullptr;
	::java::awt::Dialog* fileDialog = nullptr;
	::java::awt::GridBagLayout* gbl = nullptr;
	::java::awt::GridBagLayout* gblButtons = nullptr;
	::java::awt::GridBagConstraints* gbc = nullptr;
	::java::awt::TextField* filterField = nullptr;
	::java::awt::TextField* selectionField = nullptr;
	::java::awt::List* directoryList = nullptr;
	::java::awt::List* fileList = nullptr;
	::java::awt::Panel* buttons = nullptr;
	::java::awt::Button* openButton = nullptr;
	::java::awt::Button* filterButton = nullptr;
	::java::awt::Button* cancelButton = nullptr;
	::java::awt::Choice* pathChoice = nullptr;
	::java::awt::TextField* pathField = nullptr;
	::java::awt::Panel* pathPanel = nullptr;
	$String* cancelButtonText = nullptr;
	$String* enterFileNameLabelText = nullptr;
	$String* filesLabelText = nullptr;
	$String* foldersLabelText = nullptr;
	$String* pathLabelText = nullptr;
	$String* filterLabelText = nullptr;
	$String* openButtonText = nullptr;
	$String* saveButtonText = nullptr;
	$String* actionButtonText = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("PATH_CHOICE_WIDTH")

#endif // _sun_awt_X11_XFileDialogPeer_h_