#ifndef _javax_swing_JSlider_h_
#define _javax_swing_JSlider_h_
//$ class javax.swing.JSlider
//$ extends javax.swing.JComponent
//$ implements javax.swing.SwingConstants,javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>

namespace java {
	namespace awt {
		class Font;
		class Image;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Dictionary;
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
		class BoundedRangeModel;
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
			class SliderUI;
		}
	}
}

namespace javax {
	namespace swing {

class $export JSlider : public ::javax::swing::JComponent, public ::javax::swing::SwingConstants, public ::javax::accessibility::Accessible {
	$class(JSlider, 0, ::javax::swing::JComponent, ::javax::swing::SwingConstants, ::javax::accessibility::Accessible)
public:
	JSlider();
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
	void init$();
	void init$(int32_t orientation);
	void init$(int32_t min, int32_t max);
	void init$(int32_t min, int32_t max, int32_t value);
	void init$(int32_t orientation, int32_t min, int32_t max, int32_t value);
	void init$(::javax::swing::BoundedRangeModel* brm);
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l);
	void checkOrientation(int32_t orientation);
	virtual ::javax::swing::event::ChangeListener* createChangeListener();
	virtual ::java::util::Hashtable* createStandardLabels(int32_t increment);
	virtual ::java::util::Hashtable* createStandardLabels(int32_t increment, int32_t start);
	virtual void fireStateChanged();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual int32_t getExtent();
	virtual bool getInverted();
	virtual ::java::util::Dictionary* getLabelTable();
	virtual int32_t getMajorTickSpacing();
	virtual int32_t getMaximum();
	virtual int32_t getMinimum();
	virtual int32_t getMinorTickSpacing();
	virtual ::javax::swing::BoundedRangeModel* getModel();
	virtual int32_t getOrientation();
	virtual bool getPaintLabels();
	virtual bool getPaintTicks();
	virtual bool getPaintTrack();
	virtual bool getSnapToTicks();
	virtual bool getSnapToValue();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual int32_t getValue();
	virtual bool getValueIsAdjusting();
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) override;
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::remove;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setExtent(int32_t extent);
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setInverted(bool b);
	virtual void setLabelTable(::java::util::Dictionary* labels);
	virtual void setMajorTickSpacing(int32_t n);
	virtual void setMaximum(int32_t maximum);
	virtual void setMinimum(int32_t minimum);
	virtual void setMinorTickSpacing(int32_t n);
	virtual void setModel(::javax::swing::BoundedRangeModel* newModel);
	virtual void setOrientation(int32_t orientation);
	virtual void setPaintLabels(bool b);
	virtual void setPaintTicks(bool b);
	virtual void setPaintTrack(bool b);
	virtual void setSnapToTicks(bool b);
	virtual void setSnapToValue(bool b);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::SliderUI* ui);
	virtual void setValue(int32_t n);
	virtual void setValueIsAdjusting(bool b);
	virtual $String* toString() override;
	void updateLabelSizes();
	virtual void updateLabelUIs();
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	bool paintTicks = false;
	bool paintTrack = false;
	bool paintLabels = false;
	bool isInverted = false;
	::javax::swing::BoundedRangeModel* sliderModel = nullptr;
	int32_t majorTickSpacing = 0;
	int32_t minorTickSpacing = 0;
	bool snapToTicks = false;
	bool snapToValue = false;
	int32_t orientation = 0;
	::java::util::Dictionary* labelTable = nullptr;
	::javax::swing::event::ChangeListener* changeListener = nullptr;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSlider_h_