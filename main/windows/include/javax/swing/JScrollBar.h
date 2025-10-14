#ifndef _javax_swing_JScrollBar_h_
#define _javax_swing_JScrollBar_h_
//$ class javax.swing.JScrollBar
//$ extends javax.swing.JComponent
//$ implements java.awt.Adjustable,javax.accessibility.Accessible

#include <java/awt/Adjustable.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class AdjustmentListener;
		}
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
		class BoundedRangeModel;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class ScrollBarUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JScrollBar : public ::javax::swing::JComponent, public ::java::awt::Adjustable, public ::javax::accessibility::Accessible {
	$class(JScrollBar, 0, ::javax::swing::JComponent, ::java::awt::Adjustable, ::javax::accessibility::Accessible)
public:
	JScrollBar();
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
	void init$(int32_t orientation, int32_t value, int32_t extent, int32_t min, int32_t max);
	void init$(int32_t orientation);
	void init$();
	virtual void addAdjustmentListener(::java::awt::event::AdjustmentListener* l) override;
	void checkOrientation(int32_t orientation);
	virtual void fireAdjustmentValueChanged(int32_t id, int32_t type, int32_t value);
	void fireAdjustmentValueChanged(int32_t id, int32_t type, int32_t value, bool isAdjusting);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::java::awt::event::AdjustmentListener>* getAdjustmentListeners();
	virtual int32_t getBlockIncrement(int32_t direction);
	virtual int32_t getBlockIncrement() override;
	virtual int32_t getMaximum() override;
	virtual ::java::awt::Dimension* getMaximumSize() override;
	virtual int32_t getMinimum() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::javax::swing::BoundedRangeModel* getModel();
	virtual int32_t getOrientation() override;
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual int32_t getUnitIncrement(int32_t direction);
	virtual int32_t getUnitIncrement() override;
	virtual int32_t getValue() override;
	virtual bool getValueIsAdjusting();
	virtual int32_t getVisibleAmount() override;
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::remove;
	virtual void removeAdjustmentListener(::java::awt::event::AdjustmentListener* l) override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setBlockIncrement(int32_t blockIncrement) override;
	virtual void setEnabled(bool x) override;
	virtual void setMaximum(int32_t maximum) override;
	virtual void setMinimum(int32_t minimum) override;
	virtual void setModel(::javax::swing::BoundedRangeModel* newModel);
	virtual void setOrientation(int32_t orientation);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::ScrollBarUI* ui);
	virtual void setUnitIncrement(int32_t unitIncrement) override;
	virtual void setValue(int32_t value) override;
	virtual void setValueIsAdjusting(bool b);
	virtual void setValues(int32_t newValue, int32_t newExtent, int32_t newMin, int32_t newMax);
	virtual void setVisibleAmount(int32_t extent) override;
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	::javax::swing::event::ChangeListener* fwdAdjustmentEvents = nullptr;
	::javax::swing::BoundedRangeModel* model = nullptr;
	int32_t orientation = 0;
	int32_t unitIncrement = 0;
	int32_t blockIncrement = 0;
};

	} // swing
} // javax

#endif // _javax_swing_JScrollBar_h_