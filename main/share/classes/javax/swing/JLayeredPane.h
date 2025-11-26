#ifndef _javax_swing_JLayeredPane_h_
#define _javax_swing_JLayeredPane_h_
//$ class javax.swing.JLayeredPane
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

#pragma push_macro("DEFAULT_LAYER")
#undef DEFAULT_LAYER
#pragma push_macro("DRAG_LAYER")
#undef DRAG_LAYER
#pragma push_macro("FRAME_CONTENT_LAYER")
#undef FRAME_CONTENT_LAYER
#pragma push_macro("LAYER_PROPERTY")
#undef LAYER_PROPERTY
#pragma push_macro("MODAL_LAYER")
#undef MODAL_LAYER
#pragma push_macro("PALETTE_LAYER")
#undef PALETTE_LAYER
#pragma push_macro("POPUP_LAYER")
#undef POPUP_LAYER

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace javax {
	namespace swing {

class $export JLayeredPane : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JLayeredPane, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JLayeredPane();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getComponentCountInLayer(int32_t layer);
	virtual ::java::util::Hashtable* getComponentToLayer();
	virtual $Array<::java::awt::Component>* getComponentsInLayer(int32_t layer);
	virtual int32_t getIndexOf(::java::awt::Component* c);
	static int32_t getLayer(::javax::swing::JComponent* c);
	virtual int32_t getLayer(::java::awt::Component* c);
	static ::javax::swing::JLayeredPane* getLayeredPaneAbove(::java::awt::Component* c);
	virtual ::java::lang::Integer* getObjectForLayer(int32_t layer);
	virtual int32_t getPosition(::java::awt::Component* c);
	virtual int32_t highestLayer();
	virtual int32_t insertIndexForLayer(int32_t layer, int32_t position);
	int32_t insertIndexForLayer(::java::awt::Component* comp, int32_t layer, int32_t position);
	virtual bool isOptimizedDrawingEnabled() override;
	virtual int32_t lowestLayer();
	virtual void moveToBack(::java::awt::Component* c);
	virtual void moveToFront(::java::awt::Component* c);
	virtual void paint(::java::awt::Graphics* g) override;
	virtual $String* paramString() override;
	static void putLayer(::javax::swing::JComponent* c, int32_t layer);
	using ::javax::swing::JComponent::remove;
	virtual void remove(int32_t index) override;
	virtual void removeAll() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setLayer(::java::awt::Component* c, int32_t layer);
	virtual void setLayer(::java::awt::Component* c, int32_t layer, int32_t position);
	virtual void setPosition(::java::awt::Component* c, int32_t position);
	virtual $String* toString() override;
	void validateOptimizedDrawing();
	static ::java::lang::Integer* DEFAULT_LAYER;
	static ::java::lang::Integer* PALETTE_LAYER;
	static ::java::lang::Integer* MODAL_LAYER;
	static ::java::lang::Integer* POPUP_LAYER;
	static ::java::lang::Integer* DRAG_LAYER;
	static ::java::lang::Integer* FRAME_CONTENT_LAYER;
	static $String* LAYER_PROPERTY;
	::java::util::Hashtable* componentToLayer = nullptr;
	bool optimizedDrawingPossible = false;
};

	} // swing
} // javax

#pragma pop_macro("DEFAULT_LAYER")
#pragma pop_macro("DRAG_LAYER")
#pragma pop_macro("FRAME_CONTENT_LAYER")
#pragma pop_macro("LAYER_PROPERTY")
#pragma pop_macro("MODAL_LAYER")
#pragma pop_macro("PALETTE_LAYER")
#pragma pop_macro("POPUP_LAYER")

#endif // _javax_swing_JLayeredPane_h_