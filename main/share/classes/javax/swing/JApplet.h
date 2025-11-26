#ifndef _javax_swing_JApplet_h_
#define _javax_swing_JApplet_h_
//$ class javax.swing.JApplet
//$ extends java.applet.Applet
//$ implements javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler

#include <java/applet/Applet.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/TransferHandler$HasGetTransferHandler.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Graphics;
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
		class JMenuBar;
		class JRootPane;
		class TransferHandler;
	}
}

namespace javax {
	namespace swing {

class $export JApplet : public ::java::applet::Applet, public ::javax::swing::RootPaneContainer, public ::javax::swing::TransferHandler$HasGetTransferHandler {
	$class(JApplet, $NO_CLASS_INIT, ::java::applet::Applet, ::javax::swing::RootPaneContainer, ::javax::swing::TransferHandler$HasGetTransferHandler)
public:
	JApplet();
	using ::java::applet::Applet::add;
	using ::java::applet::Applet::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual ::javax::swing::JRootPane* createRootPane();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Container* getContentPane() override;
	virtual ::java::awt::Component* getGlassPane() override;
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::javax::swing::JMenuBar* getJMenuBar();
	virtual ::javax::swing::JLayeredPane* getLayeredPane() override;
	virtual ::javax::swing::JRootPane* getRootPane() override;
	virtual ::javax::swing::TransferHandler* getTransferHandler() override;
	virtual bool isRootPaneCheckingEnabled();
	using ::java::applet::Applet::list;
	virtual $String* paramString() override;
	using ::java::applet::Applet::remove;
	virtual void remove(::java::awt::Component* comp) override;
	using ::java::applet::Applet::repaint;
	virtual void repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setContentPane(::java::awt::Container* contentPane) override;
	virtual void setGlassPane(::java::awt::Component* glassPane) override;
	virtual void setJMenuBar(::javax::swing::JMenuBar* menuBar);
	virtual void setLayeredPane(::javax::swing::JLayeredPane* layeredPane) override;
	virtual void setLayout(::java::awt::LayoutManager* manager) override;
	virtual void setRootPane(::javax::swing::JRootPane* root);
	virtual void setRootPaneCheckingEnabled(bool enabled);
	virtual void setTransferHandler(::javax::swing::TransferHandler* newHandler);
	virtual $String* toString() override;
	virtual void update(::java::awt::Graphics* g) override;
	::javax::swing::JRootPane* rootPane = nullptr;
	bool rootPaneCheckingEnabled = false;
	::javax::swing::TransferHandler* transferHandler = nullptr;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JApplet_h_