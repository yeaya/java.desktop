#ifndef _javax_swing_JTabbedPane_h_
#define _javax_swing_JTabbedPane_h_
//$ class javax.swing.JTabbedPane
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible,javax.swing.SwingConstants

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>

#pragma push_macro("SCROLL_TAB_LAYOUT")
#undef SCROLL_TAB_LAYOUT
#pragma push_macro("WRAP_TAB_LAYOUT")
#undef WRAP_TAB_LAYOUT

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class List;
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
		class JTabbedPane$Page;
		class SingleSelectionModel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class TabbedPaneUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JTabbedPane : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible, public ::javax::swing::SwingConstants {
	$class(JTabbedPane, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible, ::javax::swing::SwingConstants)
public:
	JTabbedPane();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::getToolTipText;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::getComponentAt;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t tabPlacement);
	void init$(int32_t tabPlacement, int32_t tabLayoutPolicy);
	static ::javax::accessibility::AccessibleContext* access$000(::javax::swing::JTabbedPane* x0);
	static void access$100(::javax::swing::JTabbedPane* x0, $String* x1, Object$* x2, Object$* x3);
	virtual ::java::awt::Component* add(::java::awt::Component* component) override;
	virtual ::java::awt::Component* add($String* title, ::java::awt::Component* component) override;
	virtual ::java::awt::Component* add(::java::awt::Component* component, int32_t index) override;
	virtual void add(::java::awt::Component* component, Object$* constraints) override;
	virtual void add(::java::awt::Component* component, Object$* constraints, int32_t index) override;
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l);
	virtual void addTab($String* title, ::javax::swing::Icon* icon, ::java::awt::Component* component, $String* tip);
	virtual void addTab($String* title, ::javax::swing::Icon* icon, ::java::awt::Component* component);
	virtual void addTab($String* title, ::java::awt::Component* component);
	void changeAccessibleSelection(::javax::swing::JTabbedPane$Page* oldPage, $String* oldName, ::javax::swing::JTabbedPane$Page* newPage);
	void checkIndex(int32_t index);
	static void checkTabLayoutPolicy(int32_t tabLayoutPolicy);
	static void checkTabPlacement(int32_t tabPlacement);
	void clearAccessibleParent(::java::awt::Component* c);
	virtual void compWriteObjectNotify() override;
	virtual ::javax::swing::event::ChangeListener* createChangeListener();
	virtual void fireStateChanged();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Color* getBackgroundAt(int32_t index);
	virtual ::java::awt::Rectangle* getBoundsAt(int32_t index);
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual ::java::awt::Component* getComponentAt(int32_t index);
	virtual ::javax::swing::Icon* getDisabledIconAt(int32_t index);
	virtual int32_t getDisplayedMnemonicIndexAt(int32_t tabIndex);
	virtual ::java::awt::Color* getForegroundAt(int32_t index);
	virtual ::javax::swing::Icon* getIconAt(int32_t index);
	virtual int32_t getMnemonicAt(int32_t tabIndex);
	virtual ::javax::swing::SingleSelectionModel* getModel();
	virtual ::java::awt::Component* getSelectedComponent();
	virtual int32_t getSelectedIndex();
	virtual ::java::awt::Component* getTabComponentAt(int32_t index);
	virtual int32_t getTabCount();
	virtual int32_t getTabLayoutPolicy();
	virtual int32_t getTabPlacement();
	virtual int32_t getTabRunCount();
	virtual $String* getTitleAt(int32_t index);
	virtual $String* getToolTipText(::java::awt::event::MouseEvent* event) override;
	virtual $String* getToolTipTextAt(int32_t index);
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual int32_t indexAtLocation(int32_t x, int32_t y);
	virtual int32_t indexOfComponent(::java::awt::Component* component);
	virtual int32_t indexOfTab($String* title);
	virtual int32_t indexOfTab(::javax::swing::Icon* icon);
	virtual int32_t indexOfTabComponent(::java::awt::Component* tabComponent);
	virtual void insertTab($String* title, ::javax::swing::Icon* icon, ::java::awt::Component* component, $String* tip, int32_t index);
	virtual bool isEnabledAt(int32_t index);
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::JComponent::remove;
	virtual void remove(::java::awt::Component* component) override;
	virtual void remove(int32_t index) override;
	virtual void removeAll() override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l);
	virtual void removeTabAt(int32_t index);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setBackgroundAt(int32_t index, ::java::awt::Color* background);
	virtual void setComponentAt(int32_t index, ::java::awt::Component* component);
	virtual void setDisabledIconAt(int32_t index, ::javax::swing::Icon* disabledIcon);
	virtual void setDisplayedMnemonicIndexAt(int32_t tabIndex, int32_t mnemonicIndex);
	virtual void setEnabledAt(int32_t index, bool enabled);
	virtual void setForegroundAt(int32_t index, ::java::awt::Color* foreground);
	virtual void setIconAt(int32_t index, ::javax::swing::Icon* icon);
	virtual void setMnemonicAt(int32_t tabIndex, int32_t mnemonic);
	virtual void setModel(::javax::swing::SingleSelectionModel* model);
	virtual void setSelectedComponent(::java::awt::Component* c);
	virtual void setSelectedIndex(int32_t index);
	void setSelectedIndexImpl(int32_t index, bool doAccessibleChanges);
	virtual void setTabComponentAt(int32_t index, ::java::awt::Component* component);
	virtual void setTabLayoutPolicy(int32_t tabLayoutPolicy);
	virtual void setTabPlacement(int32_t tabPlacement);
	virtual void setTitleAt(int32_t index, $String* title);
	virtual void setToolTipTextAt(int32_t index, $String* toolTipText);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::TabbedPaneUI* ui);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t WRAP_TAB_LAYOUT = 0;
	static const int32_t SCROLL_TAB_LAYOUT = 1;
	static $String* uiClassID;
	int32_t tabPlacement = 0;
	int32_t tabLayoutPolicy = 0;
	::javax::swing::SingleSelectionModel* model = nullptr;
	bool haveRegistered = false;
	::javax::swing::event::ChangeListener* changeListener = nullptr;
	::java::util::List* pages = nullptr;
	::java::awt::Component* visComp = nullptr;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("SCROLL_TAB_LAYOUT")
#pragma pop_macro("WRAP_TAB_LAYOUT")

#endif // _javax_swing_JTabbedPane_h_