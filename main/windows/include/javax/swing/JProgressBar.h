#ifndef _javax_swing_JProgressBar_h_
#define _javax_swing_JProgressBar_h_
//$ class javax.swing.JProgressBar
//$ extends javax.swing.JComponent
//$ implements javax.swing.SwingConstants,javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>

#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace text {
		class Format;
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
			class ProgressBarUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JProgressBar : public ::javax::swing::JComponent, public ::javax::swing::SwingConstants, public ::javax::accessibility::Accessible {
	$class(JProgressBar, 0, ::javax::swing::JComponent, ::javax::swing::SwingConstants, ::javax::accessibility::Accessible)
public:
	JProgressBar();
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
	void init$(int32_t orient);
	void init$(int32_t min, int32_t max);
	void init$(int32_t orient, int32_t min, int32_t max);
	void init$(::javax::swing::BoundedRangeModel* newModel);
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l);
	virtual ::javax::swing::event::ChangeListener* createChangeListener();
	virtual void fireStateChanged();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual int32_t getMaximum();
	virtual int32_t getMinimum();
	virtual ::javax::swing::BoundedRangeModel* getModel();
	virtual int32_t getOrientation();
	virtual double getPercentComplete();
	virtual $String* getString();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual int32_t getValue();
	virtual bool isBorderPainted();
	virtual bool isIndeterminate();
	virtual bool isStringPainted();
	using ::javax::swing::JComponent::list;
	virtual void paintBorder(::java::awt::Graphics* g) override;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::remove;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void setBorderPainted(bool b);
	virtual void setIndeterminate(bool newValue);
	virtual void setMaximum(int32_t n);
	virtual void setMinimum(int32_t n);
	virtual void setModel(::javax::swing::BoundedRangeModel* newModel);
	virtual void setOrientation(int32_t newOrientation);
	virtual void setString($String* s);
	virtual void setStringPainted(bool b);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::ProgressBarUI* ui);
	virtual void setValue(int32_t n);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	int32_t orientation = 0;
	bool paintBorder$ = false;
	::javax::swing::BoundedRangeModel* model = nullptr;
	$String* progressString = nullptr;
	bool paintString = false;
	static const int32_t defaultMinimum = 0;
	static const int32_t defaultMaximum = 100;
	static const int32_t defaultOrientation = HORIZONTAL;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	::javax::swing::event::ChangeListener* changeListener = nullptr;
	::java::text::Format* format = nullptr;
	bool indeterminate = false;
};

	} // swing
} // javax

#pragma pop_macro("HORIZONTAL")

#endif // _javax_swing_JProgressBar_h_