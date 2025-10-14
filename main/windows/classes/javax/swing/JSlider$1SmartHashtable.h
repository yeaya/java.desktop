#ifndef _javax_swing_JSlider$1SmartHashtable_h_
#define _javax_swing_JSlider$1SmartHashtable_h_
//$ class javax.swing.JSlider$1SmartHashtable
//$ extends java.util.Hashtable
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/util/Hashtable.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JSlider;
	}
}

namespace javax {
	namespace swing {

class JSlider$1SmartHashtable : public ::java::util::Hashtable, public ::java::beans::PropertyChangeListener {
	$class(JSlider$1SmartHashtable, $NO_CLASS_INIT, ::java::util::Hashtable, ::java::beans::PropertyChangeListener)
public:
	JSlider$1SmartHashtable();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JSlider* this$0, int32_t increment, int32_t start);
	virtual void createLabels();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JSlider* this$0 = nullptr;
	int32_t increment = 0;
	int32_t start = 0;
	bool startAtMin = false;
};

	} // swing
} // javax

#endif // _javax_swing_JSlider$1SmartHashtable_h_