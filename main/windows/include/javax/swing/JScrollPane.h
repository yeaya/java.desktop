#ifndef _javax_swing_JScrollPane_h_
#define _javax_swing_JScrollPane_h_
//$ class javax.swing.JScrollPane
//$ extends javax.swing.JComponent
//$ implements javax.swing.ScrollPaneConstants,javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/ScrollPaneConstants.h>

namespace java {
	namespace awt {
		class Component;
		class ComponentOrientation;
		class LayoutManager;
		class Rectangle;
	}
}
namespace java {
	namespace io {
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
		class JScrollBar;
		class JViewport;
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
			class ScrollPaneUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JScrollPane : public ::javax::swing::JComponent, public ::javax::swing::ScrollPaneConstants, public ::javax::accessibility::Accessible {
	$class(JScrollPane, 0, ::javax::swing::JComponent, ::javax::swing::ScrollPaneConstants, ::javax::accessibility::Accessible)
public:
	JScrollPane();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component* view, int32_t vsbPolicy, int32_t hsbPolicy);
	void init$(::java::awt::Component* view);
	void init$(int32_t vsbPolicy, int32_t hsbPolicy);
	void init$();
	virtual ::javax::swing::JScrollBar* createHorizontalScrollBar();
	virtual ::javax::swing::JScrollBar* createVerticalScrollBar();
	virtual ::javax::swing::JViewport* createViewport();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::JViewport* getColumnHeader();
	virtual ::java::awt::Component* getCorner($String* key);
	virtual ::javax::swing::JScrollBar* getHorizontalScrollBar();
	virtual int32_t getHorizontalScrollBarPolicy();
	virtual ::javax::swing::JViewport* getRowHeader();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual ::javax::swing::JScrollBar* getVerticalScrollBar();
	virtual int32_t getVerticalScrollBarPolicy();
	virtual ::javax::swing::JViewport* getViewport();
	virtual ::javax::swing::border::Border* getViewportBorder();
	virtual ::java::awt::Rectangle* getViewportBorderBounds();
	virtual bool isValidateRoot() override;
	virtual bool isWheelScrollingEnabled();
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	virtual void setColumnHeader(::javax::swing::JViewport* columnHeader);
	virtual void setColumnHeaderView(::java::awt::Component* view);
	virtual void setComponentOrientation(::java::awt::ComponentOrientation* co) override;
	virtual void setCorner($String* key, ::java::awt::Component* corner);
	virtual void setHorizontalScrollBar(::javax::swing::JScrollBar* horizontalScrollBar);
	virtual void setHorizontalScrollBarPolicy(int32_t policy);
	virtual void setLayout(::java::awt::LayoutManager* layout) override;
	virtual void setRowHeader(::javax::swing::JViewport* rowHeader);
	virtual void setRowHeaderView(::java::awt::Component* view);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::ScrollPaneUI* ui);
	virtual void setVerticalScrollBar(::javax::swing::JScrollBar* verticalScrollBar);
	virtual void setVerticalScrollBarPolicy(int32_t policy);
	virtual void setViewport(::javax::swing::JViewport* viewport);
	virtual void setViewportBorder(::javax::swing::border::Border* viewportBorder);
	virtual void setViewportView(::java::awt::Component* view);
	virtual void setWheelScrollingEnabled(bool handleWheel);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::border::Border* viewportBorder = nullptr;
	static $String* uiClassID;
	int32_t verticalScrollBarPolicy = 0;
	int32_t horizontalScrollBarPolicy = 0;
	::javax::swing::JViewport* viewport = nullptr;
	::javax::swing::JScrollBar* verticalScrollBar = nullptr;
	::javax::swing::JScrollBar* horizontalScrollBar = nullptr;
	::javax::swing::JViewport* rowHeader = nullptr;
	::javax::swing::JViewport* columnHeader = nullptr;
	::java::awt::Component* lowerLeft = nullptr;
	::java::awt::Component* lowerRight = nullptr;
	::java::awt::Component* upperLeft = nullptr;
	::java::awt::Component* upperRight = nullptr;
	bool wheelScrollState = false;
};

	} // swing
} // javax

#endif // _javax_swing_JScrollPane_h_