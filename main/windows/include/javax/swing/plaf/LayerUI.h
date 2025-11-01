#ifndef _javax_swing_plaf_LayerUI_h_
#define _javax_swing_plaf_LayerUI_h_
//$ class javax.swing.plaf.LayerUI
//$ extends javax.swing.plaf.ComponentUI
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/plaf/ComponentUI.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
			class FocusEvent;
			class HierarchyEvent;
			class InputMethodEvent;
			class KeyEvent;
			class MouseEvent;
			class MouseWheelEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
		class PropertyChangeSupport;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JLayer;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import LayerUI : public ::javax::swing::plaf::ComponentUI, public ::java::io::Serializable {
	$class(LayerUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI, ::java::io::Serializable)
public:
	LayerUI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	virtual void applyPropertyChange(::java::beans::PropertyChangeEvent* evt, ::javax::swing::JLayer* l);
	virtual void doLayout(::javax::swing::JLayer* l);
	virtual void eventDispatched(::java::awt::AWTEvent* e, ::javax::swing::JLayer* l);
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners($String* propertyName);
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h, ::javax::swing::JLayer* l);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintImmediately(int32_t x, int32_t y, int32_t width, int32_t height, ::javax::swing::JLayer* l);
	virtual void processComponentEvent(::java::awt::event::ComponentEvent* e, ::javax::swing::JLayer* l);
	virtual void processFocusEvent(::java::awt::event::FocusEvent* e, ::javax::swing::JLayer* l);
	virtual void processHierarchyBoundsEvent(::java::awt::event::HierarchyEvent* e, ::javax::swing::JLayer* l);
	virtual void processHierarchyEvent(::java::awt::event::HierarchyEvent* e, ::javax::swing::JLayer* l);
	virtual void processInputMethodEvent(::java::awt::event::InputMethodEvent* e, ::javax::swing::JLayer* l);
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e, ::javax::swing::JLayer* l);
	virtual void processMouseEvent(::java::awt::event::MouseEvent* e, ::javax::swing::JLayer* l);
	virtual void processMouseMotionEvent(::java::awt::event::MouseEvent* e, ::javax::swing::JLayer* l);
	virtual void processMouseWheelEvent(::java::awt::event::MouseWheelEvent* e, ::javax::swing::JLayer* l);
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void removePropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	virtual $String* toString() override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void updateUI(::javax::swing::JLayer* l);
	::java::beans::PropertyChangeSupport* propertyChangeSupport = nullptr;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_LayerUI_h_