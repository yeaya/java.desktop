#ifndef _javax_swing_JPopupMenu_h_
#define _javax_swing_JPopupMenu_h_
//$ class javax.swing.JPopupMenu
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible,javax.swing.MenuElement

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/MenuElement.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("TRACE")
#undef TRACE
#pragma push_macro("VERBOSE")
#undef VERBOSE

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Frame;
		class Graphics;
		class GraphicsConfiguration;
		class Insets;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class JMenuItem;
		class MenuSelectionManager;
		class Popup;
		class SingleSelectionModel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MenuKeyEvent;
			class MenuKeyListener;
			class PopupMenuListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class PopupMenuUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JPopupMenu : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible, public ::javax::swing::MenuElement {
	$class(JPopupMenu, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible, ::javax::swing::MenuElement)
public:
	JPopupMenu();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::getComponent;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* label);
	virtual ::javax::swing::JMenuItem* add(::javax::swing::JMenuItem* menuItem);
	virtual ::javax::swing::JMenuItem* add($String* s);
	virtual ::javax::swing::JMenuItem* add(::javax::swing::Action* a);
	virtual void addMenuKeyListener(::javax::swing::event::MenuKeyListener* l);
	virtual void addPopupMenuListener(::javax::swing::event::PopupMenuListener* l);
	virtual void addSeparator();
	virtual ::java::awt::Point* adjustPopupLocationToFitScreen(int32_t xPosition, int32_t yPosition);
	virtual bool alwaysOnTop() override;
	static bool canPopupOverlapTaskBar();
	virtual ::java::beans::PropertyChangeListener* createActionChangeListener(::javax::swing::JMenuItem* b);
	virtual ::javax::swing::JMenuItem* createActionComponent(::javax::swing::Action* a);
	void fireMenuKeyPressed(::javax::swing::event::MenuKeyEvent* event);
	void fireMenuKeyReleased(::javax::swing::event::MenuKeyEvent* event);
	void fireMenuKeyTyped(::javax::swing::event::MenuKeyEvent* event);
	virtual void firePopupMenuCanceled();
	virtual void firePopupMenuWillBecomeInvisible();
	virtual void firePopupMenuWillBecomeVisible();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Component* getComponent() override;
	virtual ::java::awt::Component* getComponentAtIndex(int32_t i);
	virtual int32_t getComponentIndex(::java::awt::Component* c);
	::java::awt::GraphicsConfiguration* getCurrentGraphicsConfiguration(::java::awt::Point* popupLocation);
	static bool getDefaultLightWeightPopupEnabled();
	static ::java::awt::Frame* getFrame(::java::awt::Component* c);
	virtual ::java::awt::Component* getInvoker();
	virtual $String* getLabel();
	virtual ::java::awt::Insets* getMargin();
	virtual $Array<::javax::swing::event::MenuKeyListener>* getMenuKeyListeners();
	virtual $Array<::javax::swing::event::PopupMenuListener>* getPopupMenuListeners();
	virtual ::javax::swing::JPopupMenu* getRootPopupMenu();
	virtual ::javax::swing::SingleSelectionModel* getSelectionModel();
	virtual $Array<::javax::swing::MenuElement>* getSubElements() override;
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual void insert(::javax::swing::Action* a, int32_t index);
	virtual void insert(::java::awt::Component* component, int32_t index);
	virtual bool isBorderPainted();
	virtual bool isLightWeightPopupEnabled();
	bool isPopupMenu();
	virtual bool isPopupTrigger(::java::awt::event::MouseEvent* e);
	virtual bool isSubPopupMenu(::javax::swing::JPopupMenu* popup);
	virtual bool isVisible() override;
	virtual void menuSelectionChanged(bool isIncluded) override;
	virtual void pack();
	virtual void paintBorder(::java::awt::Graphics* g) override;
	virtual $String* paramString() override;
	virtual void processFocusEvent(::java::awt::event::FocusEvent* evt) override;
	virtual void processKeyEvent(::java::awt::event::KeyEvent* evt) override;
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e, $Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuSelectionManager* manager) override;
	void processMenuKeyEvent(::javax::swing::event::MenuKeyEvent* e);
	using ::javax::swing::JComponent::processMouseEvent;
	virtual void processMouseEvent(::java::awt::event::MouseEvent* event, $Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuSelectionManager* manager) override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::JComponent::remove;
	virtual void remove(int32_t pos) override;
	virtual void removeMenuKeyListener(::javax::swing::event::MenuKeyListener* l);
	virtual void removePopupMenuListener(::javax::swing::event::PopupMenuListener* l);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setBorderPainted(bool b);
	static void setDefaultLightWeightPopupEnabled(bool aFlag);
	virtual void setInvoker(::java::awt::Component* invoker);
	virtual void setLabel($String* label);
	virtual void setLightWeightPopupEnabled(bool aFlag);
	using ::javax::swing::JComponent::setLocation;
	virtual void setLocation(int32_t x, int32_t y) override;
	virtual void setPopupSize(::java::awt::Dimension* d);
	virtual void setPopupSize(int32_t width, int32_t height);
	virtual void setSelected(::java::awt::Component* sel);
	virtual void setSelectionModel(::javax::swing::SingleSelectionModel* model);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::PopupMenuUI* ui);
	virtual void setVisible(bool b) override;
	using ::javax::swing::JComponent::show;
	virtual void show(::java::awt::Component* invoker, int32_t x, int32_t y);
	void showPopup();
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	static $Object* defaultLWPopupEnabledKey;
	static bool popupPostionFixDisabled;
	::java::awt::Component* invoker = nullptr;
	::javax::swing::Popup* popup = nullptr;
	::java::awt::Frame* frame = nullptr;
	int32_t desiredLocationX = 0;
	int32_t desiredLocationY = 0;
	$String* label = nullptr;
	bool paintBorder$ = false;
	::java::awt::Insets* margin = nullptr;
	bool lightWeightPopup = false;
	::javax::swing::SingleSelectionModel* selectionModel = nullptr;
	static $Object* classLock;
	static const bool TRACE = false;
	static const bool VERBOSE = false;
	static const bool DEBUG = false;
};

	} // swing
} // javax

#pragma pop_macro("DEBUG")
#pragma pop_macro("TRACE")
#pragma pop_macro("VERBOSE")

#endif // _javax_swing_JPopupMenu_h_