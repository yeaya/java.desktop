#ifndef _sun_awt_ModalityEvent_h_
#define _sun_awt_ModalityEvent_h_
//$ class sun.awt.ModalityEvent
//$ extends java.awt.AWTEvent
//$ implements java.awt.ActiveEvent

#include <java/awt/AWTEvent.h>
#include <java/awt/ActiveEvent.h>

#pragma push_macro("MODALITY_POPPED")
#undef MODALITY_POPPED
#pragma push_macro("MODALITY_PUSHED")
#undef MODALITY_PUSHED

namespace sun {
	namespace awt {
		class ModalityListener;
	}
}

namespace sun {
	namespace awt {

class $export ModalityEvent : public ::java::awt::AWTEvent, public ::java::awt::ActiveEvent {
	$class(ModalityEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent, ::java::awt::ActiveEvent)
public:
	ModalityEvent();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* source, ::sun::awt::ModalityListener* listener, int32_t id);
	virtual void dispatch() override;
	virtual $String* toString() override;
	static const int32_t MODALITY_PUSHED = 1300;
	static const int32_t MODALITY_POPPED = 1301;
	::sun::awt::ModalityListener* listener = nullptr;
};

	} // awt
} // sun

#pragma pop_macro("MODALITY_POPPED")
#pragma pop_macro("MODALITY_PUSHED")

#endif // _sun_awt_ModalityEvent_h_