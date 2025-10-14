#ifndef _javax_swing_DefaultBoundedRangeModel_h_
#define _javax_swing_DefaultBoundedRangeModel_h_
//$ class javax.swing.DefaultBoundedRangeModel
//$ extends javax.swing.BoundedRangeModel
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/swing/BoundedRangeModel.h>

namespace java {
	namespace util {
		class EventListener;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class ChangeListener;
			class EventListenerList;
		}
	}
}

namespace javax {
	namespace swing {

class $import DefaultBoundedRangeModel : public ::javax::swing::BoundedRangeModel, public ::java::io::Serializable {
	$class(DefaultBoundedRangeModel, $NO_CLASS_INIT, ::javax::swing::BoundedRangeModel, ::java::io::Serializable)
public:
	DefaultBoundedRangeModel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t value, int32_t extent, int32_t min, int32_t max);
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void fireStateChanged();
	virtual $Array<::javax::swing::event::ChangeListener>* getChangeListeners();
	virtual int32_t getExtent() override;
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	virtual int32_t getMaximum() override;
	virtual int32_t getMinimum() override;
	virtual int32_t getValue() override;
	virtual bool getValueIsAdjusting() override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void setExtent(int32_t n) override;
	virtual void setMaximum(int32_t n) override;
	virtual void setMinimum(int32_t n) override;
	virtual void setRangeProperties(int32_t newValue, int32_t newExtent, int32_t newMin, int32_t newMax, bool adjusting) override;
	virtual void setValue(int32_t n) override;
	virtual void setValueIsAdjusting(bool b) override;
	virtual $String* toString() override;
	::javax::swing::event::ChangeEvent* changeEvent = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	int32_t value = 0;
	int32_t extent = 0;
	int32_t min = 0;
	int32_t max = 0;
	bool isAdjusting = false;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultBoundedRangeModel_h_