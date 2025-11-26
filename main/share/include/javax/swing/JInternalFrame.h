#ifndef _javax_swing_JInternalFrame_h_
#define _javax_swing_JInternalFrame_h_
//$ class javax.swing.JInternalFrame
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible,javax.swing.WindowConstants,javax.swing.RootPaneContainer

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/WindowConstants.h>

#pragma push_macro("CONTENT_PANE_PROPERTY")
#undef CONTENT_PANE_PROPERTY
#pragma push_macro("FRAME_ICON_PROPERTY")
#undef FRAME_ICON_PROPERTY
#pragma push_macro("GLASS_PANE_PROPERTY")
#undef GLASS_PANE_PROPERTY
#pragma push_macro("IS_CLOSED_PROPERTY")
#undef IS_CLOSED_PROPERTY
#pragma push_macro("IS_ICON_PROPERTY")
#undef IS_ICON_PROPERTY
#pragma push_macro("IS_MAXIMUM_PROPERTY")
#undef IS_MAXIMUM_PROPERTY
#pragma push_macro("IS_SELECTED_PROPERTY")
#undef IS_SELECTED_PROPERTY
#pragma push_macro("LAYERED_PANE_PROPERTY")
#undef LAYERED_PANE_PROPERTY
#pragma push_macro("MENU_BAR_PROPERTY")
#undef MENU_BAR_PROPERTY
#pragma push_macro("PROPERTY_CHANGE_LISTENER_KEY")
#undef PROPERTY_CHANGE_LISTENER_KEY
#pragma push_macro("ROOT_PANE_PROPERTY")
#undef ROOT_PANE_PROPERTY
#pragma push_macro("TITLE_PROPERTY")
#undef TITLE_PROPERTY

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Cursor;
		class Graphics;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JDesktopPane;
		class JInternalFrame$JDesktopIcon;
		class JLayeredPane;
		class JMenuBar;
		class JRootPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class InternalFrameListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class InternalFrameUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JInternalFrame : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible, public ::javax::swing::WindowConstants, public ::javax::swing::RootPaneContainer {
	$class(JInternalFrame, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible, ::javax::swing::WindowConstants, ::javax::swing::RootPaneContainer)
public:
	JInternalFrame();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	using ::javax::swing::JComponent::isFocusCycleRoot;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* title);
	void init$($String* title, bool resizable);
	void init$($String* title, bool resizable, bool closable);
	void init$($String* title, bool resizable, bool closable, bool maximizable);
	void init$($String* title, bool resizable, bool closable, bool maximizable, bool iconifiable);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual void addInternalFrameListener(::javax::swing::event::InternalFrameListener* l);
	static void addPropertyChangeListenerIfNecessary();
	virtual void compWriteObjectNotify() override;
	virtual ::javax::swing::JRootPane* createRootPane();
	virtual void dispose();
	virtual void doDefaultCloseAction();
	virtual void fireInternalFrameEvent(int32_t id);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Container* getContentPane() override;
	virtual int32_t getDefaultCloseOperation();
	virtual ::javax::swing::JInternalFrame$JDesktopIcon* getDesktopIcon();
	virtual ::javax::swing::JDesktopPane* getDesktopPane();
	virtual ::java::awt::Container* getFocusCycleRootAncestor() override;
	virtual ::java::awt::Component* getFocusOwner();
	virtual ::javax::swing::Icon* getFrameIcon();
	virtual ::java::awt::Component* getGlassPane() override;
	virtual $Array<::javax::swing::event::InternalFrameListener>* getInternalFrameListeners();
	virtual ::javax::swing::JMenuBar* getJMenuBar();
	virtual ::java::awt::Cursor* getLastCursor();
	virtual int32_t getLayer();
	virtual ::javax::swing::JLayeredPane* getLayeredPane() override;
	virtual ::javax::swing::JMenuBar* getMenuBar();
	virtual ::java::awt::Component* getMostRecentFocusOwner();
	virtual ::java::awt::Rectangle* getNormalBounds();
	virtual ::javax::swing::JRootPane* getRootPane() override;
	virtual $String* getTitle();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	$String* getWarningString();
	virtual void hide() override;
	virtual bool isClosable();
	virtual bool isClosed();
	virtual bool isFocusCycleRoot() override;
	virtual bool isIcon();
	virtual bool isIconifiable();
	virtual bool isMaximizable();
	virtual bool isMaximum();
	virtual bool isResizable();
	virtual bool isRootPaneCheckingEnabled();
	virtual bool isSelected();
	virtual void moveToBack();
	virtual void moveToFront();
	virtual void pack();
	virtual void paintComponent(::java::awt::Graphics* g) override;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::remove;
	virtual void remove(::java::awt::Component* comp) override;
	virtual void removeInternalFrameListener(::javax::swing::event::InternalFrameListener* l);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void reshape(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void restoreSubcomponentFocus();
	virtual void setClosable(bool b);
	virtual void setClosed(bool b);
	virtual void setContentPane(::java::awt::Container* c) override;
	virtual void setCursor(::java::awt::Cursor* cursor) override;
	virtual void setDefaultCloseOperation(int32_t operation);
	virtual void setDesktopIcon(::javax::swing::JInternalFrame$JDesktopIcon* d);
	virtual void setFocusCycleRoot(bool focusCycleRoot) override;
	virtual void setFrameIcon(::javax::swing::Icon* icon);
	virtual void setGlassPane(::java::awt::Component* glass) override;
	virtual void setIcon(bool b);
	virtual void setIconifiable(bool b);
	virtual void setJMenuBar(::javax::swing::JMenuBar* m);
	void setLastFocusOwner(::java::awt::Component* component);
	virtual void setLayer(::java::lang::Integer* layer);
	virtual void setLayer(int32_t layer);
	virtual void setLayeredPane(::javax::swing::JLayeredPane* layered) override;
	virtual void setLayout(::java::awt::LayoutManager* manager) override;
	virtual void setMaximizable(bool b);
	virtual void setMaximum(bool b);
	virtual void setMenuBar(::javax::swing::JMenuBar* m);
	virtual void setNormalBounds(::java::awt::Rectangle* r);
	virtual void setResizable(bool b);
	virtual void setRootPane(::javax::swing::JRootPane* root);
	virtual void setRootPaneCheckingEnabled(bool enabled);
	virtual void setSelected(bool selected);
	virtual void setTitle($String* title);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::InternalFrameUI* ui);
	using ::javax::swing::JComponent::show;
	virtual void show() override;
	virtual void toBack();
	virtual void toFront();
	virtual $String* toString() override;
	static void updateLastFocusOwner(::java::awt::Component* component);
	virtual void updateUI() override;
	virtual void updateUIWhenHidden();
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	::javax::swing::JRootPane* rootPane = nullptr;
	bool rootPaneCheckingEnabled = false;
	bool closable = false;
	bool isClosed$ = false;
	bool maximizable = false;
	bool isMaximum$ = false;
	bool iconable = false;
	bool isIcon$ = false;
	bool resizable = false;
	bool isSelected$ = false;
	::javax::swing::Icon* frameIcon = nullptr;
	$String* title = nullptr;
	::javax::swing::JInternalFrame$JDesktopIcon* desktopIcon = nullptr;
	::java::awt::Cursor* lastCursor = nullptr;
	bool opened = false;
	::java::awt::Rectangle* normalBounds = nullptr;
	int32_t defaultCloseOperation = 0;
	::java::awt::Component* lastFocusOwner = nullptr;
	static $String* CONTENT_PANE_PROPERTY;
	static $String* MENU_BAR_PROPERTY;
	static $String* TITLE_PROPERTY;
	static $String* LAYERED_PANE_PROPERTY;
	static $String* ROOT_PANE_PROPERTY;
	static $String* GLASS_PANE_PROPERTY;
	static $String* FRAME_ICON_PROPERTY;
	static $String* IS_SELECTED_PROPERTY;
	static $String* IS_CLOSED_PROPERTY;
	static $String* IS_MAXIMUM_PROPERTY;
	static $String* IS_ICON_PROPERTY;
	static $Object* PROPERTY_CHANGE_LISTENER_KEY;
	bool isDragging = false;
	bool danger = false;
};

	} // swing
} // javax

#pragma pop_macro("CONTENT_PANE_PROPERTY")
#pragma pop_macro("FRAME_ICON_PROPERTY")
#pragma pop_macro("GLASS_PANE_PROPERTY")
#pragma pop_macro("IS_CLOSED_PROPERTY")
#pragma pop_macro("IS_ICON_PROPERTY")
#pragma pop_macro("IS_MAXIMUM_PROPERTY")
#pragma pop_macro("IS_SELECTED_PROPERTY")
#pragma pop_macro("LAYERED_PANE_PROPERTY")
#pragma pop_macro("MENU_BAR_PROPERTY")
#pragma pop_macro("PROPERTY_CHANGE_LISTENER_KEY")
#pragma pop_macro("ROOT_PANE_PROPERTY")
#pragma pop_macro("TITLE_PROPERTY")

#endif // _javax_swing_JInternalFrame_h_