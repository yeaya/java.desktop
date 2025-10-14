#ifndef _javax_swing_JWindow_h_
#define _javax_swing_JWindow_h_
//$ class javax.swing.JWindow
//$ extends java.awt.Window
//$ implements javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler

#include <java/awt/Window.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/TransferHandler$HasGetTransferHandler.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Frame;
		class Graphics;
		class GraphicsConfiguration;
		class LayoutManager;
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
		class JRootPane;
		class TransferHandler;
	}
}

namespace javax {
	namespace swing {

class $export JWindow : public ::java::awt::Window, public ::javax::swing::RootPaneContainer, public ::javax::swing::TransferHandler$HasGetTransferHandler {
	$class(JWindow, $NO_CLASS_INIT, ::java::awt::Window, ::javax::swing::RootPaneContainer, ::javax::swing::TransferHandler$HasGetTransferHandler)
public:
	JWindow();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Window::add;
	using ::java::awt::Window::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::GraphicsConfiguration* gc);
	void init$(::java::awt::Frame* owner);
	void init$(::java::awt::Window* owner);
	void init$(::java::awt::Window* owner, ::java::awt::GraphicsConfiguration* gc);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual ::javax::swing::JRootPane* createRootPane();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Container* getContentPane() override;
	virtual ::java::awt::Component* getGlassPane() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::javax::swing::JLayeredPane* getLayeredPane() override;
	virtual ::javax::swing::JRootPane* getRootPane() override;
	virtual ::javax::swing::TransferHandler* getTransferHandler() override;
	using ::java::awt::Window::isFocusCycleRoot;
	virtual bool isRootPaneCheckingEnabled();
	using ::java::awt::Window::list;
	virtual $String* paramString() override;
	using ::java::awt::Window::remove;
	virtual void remove(::java::awt::Component* comp) override;
	using ::java::awt::Window::repaint;
	virtual void repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setContentPane(::java::awt::Container* contentPane) override;
	virtual void setGlassPane(::java::awt::Component* glassPane) override;
	virtual void setLayeredPane(::javax::swing::JLayeredPane* layeredPane) override;
	virtual void setLayout(::java::awt::LayoutManager* manager) override;
	virtual void setRootPane(::javax::swing::JRootPane* root);
	virtual void setRootPaneCheckingEnabled(bool enabled);
	virtual void setTransferHandler(::javax::swing::TransferHandler* newHandler);
	using ::java::awt::Window::show;
	virtual $String* toString() override;
	virtual void update(::java::awt::Graphics* g) override;
	virtual void windowInit();
	::javax::swing::JRootPane* rootPane = nullptr;
	bool rootPaneCheckingEnabled = false;
	::javax::swing::TransferHandler* transferHandler = nullptr;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JWindow_h_