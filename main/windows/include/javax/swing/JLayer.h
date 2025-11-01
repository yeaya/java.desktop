#ifndef _javax_swing_JLayer_h_
#define _javax_swing_JLayer_h_
//$ class javax.swing.JLayer
//$ extends javax.swing.JComponent
//$ implements javax.swing.Scrollable,java.beans.PropertyChangeListener,javax.accessibility.Accessible

#include <java/beans/PropertyChangeListener.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Scrollable.h>

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class Image;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class JLayer$LayerEventController;
		class JPanel;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class LayerUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JLayer : public ::javax::swing::JComponent, public ::javax::swing::Scrollable, public ::java::beans::PropertyChangeListener, public ::javax::accessibility::Accessible {
	$class(JLayer, 0, ::javax::swing::JComponent, ::javax::swing::Scrollable, ::java::beans::PropertyChangeListener, ::javax::accessibility::Accessible)
public:
	JLayer();
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
	void init$(::java::awt::Component* view);
	void init$(::java::awt::Component* view, ::javax::swing::plaf::LayerUI* ui);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual void addNotify() override;
	::javax::swing::JPanel* createGlassPane();
	virtual void doLayout() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::border::Border* getBorder() override;
	::javax::swing::JPanel* getGlassPane();
	int64_t getLayerEventMask();
	virtual ::java::awt::Dimension* getPreferredScrollableViewportSize() override;
	virtual int32_t getScrollableBlockIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual bool getScrollableTracksViewportHeight() override;
	virtual bool getScrollableTracksViewportWidth() override;
	virtual int32_t getScrollableUnitIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	::java::awt::Component* getView();
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual bool isOptimizedDrawingEnabled() override;
	virtual bool isPaintingOrigin() override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JComponent::paintImmediately;
	virtual void paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::JComponent::remove;
	virtual void remove(::java::awt::Component* comp) override;
	virtual void removeAll() override;
	virtual void removeNotify() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setBorder(::javax::swing::border::Border* border) override;
	void setGlassPane(::javax::swing::JPanel* glassPane);
	void setLayerEventMask(int64_t layerEventMask);
	virtual void setLayout(::java::awt::LayoutManager* mgr) override;
	using ::javax::swing::JComponent::setUI;
	void setUI(::javax::swing::plaf::LayerUI* ui);
	void setView(::java::awt::Component* view);
	virtual $String* toString() override;
	virtual void updateUI() override;
	::java::awt::Component* view = nullptr;
	::javax::swing::plaf::LayerUI* layerUI = nullptr;
	::javax::swing::JPanel* glassPane = nullptr;
	int64_t eventMask = 0;
	bool isPaintCalling = false;
	bool isPaintImmediatelyCalling = false;
	bool isImageUpdateCalling = false;
	static ::javax::swing::JLayer$LayerEventController* eventController;
};

	} // swing
} // javax

#endif // _javax_swing_JLayer_h_