#ifndef _javax_swing_JDialog_h_
#define _javax_swing_JDialog_h_
//$ class javax.swing.JDialog
//$ extends java.awt.Dialog
//$ implements javax.swing.WindowConstants,javax.swing.RootPaneContainer,javax.swing.TransferHandler$HasGetTransferHandler

#include <java/awt/Dialog.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/TransferHandler$HasGetTransferHandler.h>
#include <javax/swing/WindowConstants.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dialog$ModalityType;
		class Frame;
		class Graphics;
		class GraphicsConfiguration;
		class LayoutManager;
		class Window;
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

class $export JDialog : public ::java::awt::Dialog, public ::javax::swing::WindowConstants, public ::javax::swing::RootPaneContainer, public ::javax::swing::TransferHandler$HasGetTransferHandler {
	$class(JDialog, 0, ::java::awt::Dialog, ::javax::swing::WindowConstants, ::javax::swing::RootPaneContainer, ::javax::swing::TransferHandler$HasGetTransferHandler)
public:
	JDialog();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Dialog::isFocusCycleRoot;
	using ::java::awt::Dialog::add;
	using ::java::awt::Dialog::getMousePosition;
	using ::java::awt::Dialog::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::Frame* owner);
	void init$(::java::awt::Frame* owner, bool modal);
	void init$(::java::awt::Frame* owner, $String* title);
	void init$(::java::awt::Frame* owner, $String* title, bool modal);
	void init$(::java::awt::Frame* owner, $String* title, bool modal, ::java::awt::GraphicsConfiguration* gc);
	void init$(::java::awt::Dialog* owner);
	void init$(::java::awt::Dialog* owner, bool modal);
	void init$(::java::awt::Dialog* owner, $String* title);
	void init$(::java::awt::Dialog* owner, $String* title, bool modal);
	void init$(::java::awt::Dialog* owner, $String* title, bool modal, ::java::awt::GraphicsConfiguration* gc);
	void init$(::java::awt::Window* owner);
	void init$(::java::awt::Window* owner, ::java::awt::Dialog$ModalityType* modalityType);
	void init$(::java::awt::Window* owner, $String* title);
	void init$(::java::awt::Window* owner, $String* title, ::java::awt::Dialog$ModalityType* modalityType);
	void init$(::java::awt::Window* owner, $String* title, ::java::awt::Dialog$ModalityType* modalityType, ::java::awt::GraphicsConfiguration* gc);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual ::javax::swing::JRootPane* createRootPane();
	virtual void dialogInit();
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
	using ::java::awt::Dialog::remove;
	virtual void remove(::java::awt::Component* comp) override;
	using ::java::awt::Dialog::repaint;
	virtual void repaint(int64_t time, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setContentPane(::java::awt::Container* contentPane) override;
	virtual void setDefaultCloseOperation(int32_t operation);
	static void setDefaultLookAndFeelDecorated(bool defaultLookAndFeelDecorated);
	virtual void setGlassPane(::java::awt::Component* glassPane) override;
	virtual void setJMenuBar(::javax::swing::JMenuBar* menu);
	virtual void setLayeredPane(::javax::swing::JLayeredPane* layeredPane) override;
	virtual void setLayout(::java::awt::LayoutManager* manager) override;
	virtual void setRootPane(::javax::swing::JRootPane* root);
	virtual void setRootPaneCheckingEnabled(bool enabled);
	virtual void setTransferHandler(::javax::swing::TransferHandler* newHandler);
	using ::java::awt::Dialog::show;
	virtual $String* toString() override;
	virtual void update(::java::awt::Graphics* g) override;
	static $Object* defaultLookAndFeelDecoratedKey;
	int32_t defaultCloseOperation = 0;
	::javax::swing::JRootPane* rootPane = nullptr;
	bool rootPaneCheckingEnabled = false;
	::javax::swing::TransferHandler* transferHandler = nullptr;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JDialog_h_