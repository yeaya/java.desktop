#ifndef _javax_swing_JMenuBar_h_
#define _javax_swing_JMenuBar_h_
//$ class javax.swing.JMenuBar
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
		class Graphics;
		class Insets;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
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
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JMenu;
		class KeyStroke;
		class MenuSelectionManager;
		class SingleSelectionModel;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class MenuBarUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JMenuBar : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible, public ::javax::swing::MenuElement {
	$class(JMenuBar, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible, ::javax::swing::MenuElement)
public:
	JMenuBar();
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
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::swing::JMenu* add(::javax::swing::JMenu* c);
	virtual void addNotify() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Component* getComponent() override;
	virtual ::java::awt::Component* getComponentAtIndex(int32_t i);
	virtual int32_t getComponentIndex(::java::awt::Component* c);
	virtual ::javax::swing::JMenu* getHelpMenu();
	virtual ::java::awt::Insets* getMargin();
	virtual ::javax::swing::JMenu* getMenu(int32_t index);
	virtual int32_t getMenuCount();
	virtual ::javax::swing::SingleSelectionModel* getSelectionModel();
	virtual $Array<::javax::swing::MenuElement>* getSubElements() override;
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual bool isBorderPainted();
	virtual bool isSelected();
	using ::javax::swing::JComponent::list;
	virtual void menuSelectionChanged(bool isIncluded) override;
	virtual void paintBorder(::java::awt::Graphics* g) override;
	virtual $String* paramString() override;
	static bool processBindingForKeyStrokeRecursive(::javax::swing::MenuElement* elem, ::javax::swing::KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed);
	virtual bool processKeyBinding(::javax::swing::KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed) override;
	using ::javax::swing::JComponent::processKeyEvent;
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e, $Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuSelectionManager* manager) override;
	using ::javax::swing::JComponent::processMouseEvent;
	virtual void processMouseEvent(::java::awt::event::MouseEvent* event, $Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuSelectionManager* manager) override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::JComponent::remove;
	virtual void removeNotify() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setBorderPainted(bool b);
	virtual void setHelpMenu(::javax::swing::JMenu* menu);
	virtual void setMargin(::java::awt::Insets* m);
	virtual void setSelected(::java::awt::Component* sel);
	virtual void setSelectionModel(::javax::swing::SingleSelectionModel* model);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::MenuBarUI* ui);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	::javax::swing::SingleSelectionModel* selectionModel = nullptr;
	bool paintBorder$ = false;
	::java::awt::Insets* margin = nullptr;
	static const bool TRACE = false;
	static const bool VERBOSE = false;
	static const bool DEBUG = false;
};

	} // swing
} // javax

#pragma pop_macro("DEBUG")
#pragma pop_macro("TRACE")
#pragma pop_macro("VERBOSE")

#endif // _javax_swing_JMenuBar_h_