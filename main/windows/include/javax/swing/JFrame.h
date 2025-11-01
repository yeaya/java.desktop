#ifndef _javax_swing_JFrame_h_
#define _javax_swing_JFrame_h_
//$ class javax.swing.JFrame
//$ extends java.awt.Frame
//$ implements javax.swing.WindowConstants,javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler

#include <java/awt/Frame.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/TransferHandler$HasGetTransferHandler.h>
#include <javax/swing/WindowConstants.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
		class LayoutManager;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JLayeredPane;
		class JMenuBar;
		class JRootPane;
		class TransferHandler;
	}
}

namespace javax {
	namespace swing {

class $import JFrame : public ::java::awt::Frame, public ::javax::swing::WindowConstants, public ::javax::swing::RootPaneContainer, public ::javax::swing::TransferHandler$HasGetTransferHandler {
	$class(JFrame, 0, ::java::awt::Frame, ::javax::swing::WindowConstants, ::javax::swing::RootPaneContainer, ::javax::swing::TransferHandler$HasGetTransferHandler)
public:
	JFrame();
	using ::java::awt::Frame::isFocusCycleRoot;
	using ::java::awt::Frame::add;
	using ::java::awt::Frame::getMousePosition;
	using ::java::awt::Frame::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::GraphicsConfiguration* gc);
	void init$($String* title);
	void init$($String* title, ::java::awt::GraphicsConfiguration* gc);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual ::javax::swing::JRootPane* createRootPane();
	virtual void frameInit();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Container* getContentPane() override;
	virtual int32_t getDefaultCloseOperation();
	virtual ::java::awt::Component* getGlassPane() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::javax::swing::JMenuBar* getJMenuBar();
	virtual ::javax::swing::JLayeredPane* getLayeredPane() override;
	virtual ::javax::swing::JRootPane* getRootPane() override;
	virtual ::javax::swing::TransferHandler* getTransferHandler() override;
	static bool isDefaultLookAndFeelDecorated();
	virtual bool isRootPaneCheckingEnabled();
	virtual $String* paramString() override;
	virtual void processWindowEvent(::java::awt::event::WindowEvent* e) override;
	using ::java::awt::Frame::remove;
	virtual void remove(::java::awt::Component* comp) override;
	using ::java::awt::Frame::repaint;
	virtual void repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setContentPane(::java::awt::Container* contentPane) override;
	using ::java::awt::Frame::setCursor;
	virtual void setDefaultCloseOperation(int32_t operation);
	static void setDefaultLookAndFeelDecorated(bool defaultLookAndFeelDecorated);
	virtual void setGlassPane(::java::awt::Component* glassPane) override;
	virtual void setIconImage(::java::awt::Image* image) override;
	virtual void setJMenuBar(::javax::swing::JMenuBar* menubar);
	virtual void setLayeredPane(::javax::swing::JLayeredPane* layeredPane) override;
	virtual void setLayout(::java::awt::LayoutManager* manager) override;
	virtual void setRootPane(::javax::swing::JRootPane* root);
	virtual void setRootPaneCheckingEnabled(bool enabled);
	virtual void setTransferHandler(::javax::swing::TransferHandler* newHandler);
	using ::java::awt::Frame::show;
	virtual $String* toString() override;
	virtual void update(::java::awt::Graphics* g) override;
	static $Object* defaultLookAndFeelDecoratedKey;
	int32_t defaultCloseOperation = 0;
	::javax::swing::TransferHandler* transferHandler = nullptr;
	::javax::swing::JRootPane* rootPane = nullptr;
	bool rootPaneCheckingEnabled = false;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JFrame_h_