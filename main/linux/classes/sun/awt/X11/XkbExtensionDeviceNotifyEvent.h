#ifndef _sun_awt_X11_XkbExtensionDeviceNotifyEvent_h_
#define _sun_awt_X11_XkbExtensionDeviceNotifyEvent_h_
//$ class sun.awt.X11.XkbExtensionDeviceNotifyEvent
//$ extends sun.awt.X11.XWrapperBase

#include <sun/awt/X11/XWrapperBase.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XkbExtensionDeviceNotifyEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XkbExtensionDeviceNotifyEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XkbExtensionDeviceNotifyEvent();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_device();
	virtual int64_t get_display();
	virtual int32_t get_first_btn();
	virtual int32_t get_led_class();
	virtual int32_t get_led_id();
	virtual int32_t get_led_state();
	virtual int32_t get_leds_defined();
	virtual int32_t get_num_btns();
	virtual int32_t get_reason();
	virtual bool get_send_event();
	virtual int64_t get_serial();
	virtual int32_t get_supported();
	virtual int64_t get_time();
	virtual int32_t get_type();
	virtual int32_t get_unsupported();
	virtual int32_t get_xkb_type();
	virtual void set_device(int32_t v);
	virtual void set_display(int64_t v);
	virtual void set_first_btn(int32_t v);
	virtual void set_led_class(int32_t v);
	virtual void set_led_id(int32_t v);
	virtual void set_led_state(int32_t v);
	virtual void set_leds_defined(int32_t v);
	virtual void set_num_btns(int32_t v);
	virtual void set_reason(int32_t v);
	virtual void set_send_event(bool v);
	virtual void set_serial(int64_t v);
	virtual void set_supported(int32_t v);
	virtual void set_time(int64_t v);
	virtual void set_type(int32_t v);
	virtual void set_unsupported(int32_t v);
	virtual void set_xkb_type(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XkbExtensionDeviceNotifyEvent_h_