#ifndef _sun_awt_X11_XkbStateNotifyEvent_h_
#define _sun_awt_X11_XkbStateNotifyEvent_h_
//$ class sun.awt.X11.XkbStateNotifyEvent
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

class XkbStateNotifyEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XkbStateNotifyEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XkbStateNotifyEvent();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_base_group();
	virtual int32_t get_base_mods();
	virtual int32_t get_changed();
	virtual int8_t get_compat_grab_mods();
	virtual int8_t get_compat_lookup_mods();
	virtual int32_t get_compat_state();
	virtual int32_t get_device();
	virtual int64_t get_display();
	virtual int8_t get_event_type();
	virtual int8_t get_grab_mods();
	virtual int32_t get_group();
	virtual int32_t get_keycode();
	virtual int32_t get_latched_group();
	virtual int32_t get_latched_mods();
	virtual int32_t get_locked_group();
	virtual int32_t get_locked_mods();
	virtual int8_t get_lookup_mods();
	virtual int32_t get_mods();
	virtual int32_t get_ptr_buttons();
	virtual int8_t get_req_major();
	virtual int8_t get_req_minor();
	virtual bool get_send_event();
	virtual int64_t get_serial();
	virtual int64_t get_time();
	virtual int32_t get_type();
	virtual int32_t get_xkb_type();
	virtual void set_base_group(int32_t v);
	virtual void set_base_mods(int32_t v);
	virtual void set_changed(int32_t v);
	virtual void set_compat_grab_mods(int8_t v);
	virtual void set_compat_lookup_mods(int8_t v);
	virtual void set_compat_state(int32_t v);
	virtual void set_device(int32_t v);
	virtual void set_display(int64_t v);
	virtual void set_event_type(int8_t v);
	virtual void set_grab_mods(int8_t v);
	virtual void set_group(int32_t v);
	virtual void set_keycode(int32_t v);
	virtual void set_latched_group(int32_t v);
	virtual void set_latched_mods(int32_t v);
	virtual void set_locked_group(int32_t v);
	virtual void set_locked_mods(int32_t v);
	virtual void set_lookup_mods(int8_t v);
	virtual void set_mods(int32_t v);
	virtual void set_ptr_buttons(int32_t v);
	virtual void set_req_major(int8_t v);
	virtual void set_req_minor(int8_t v);
	virtual void set_send_event(bool v);
	virtual void set_serial(int64_t v);
	virtual void set_time(int64_t v);
	virtual void set_type(int32_t v);
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

#endif // _sun_awt_X11_XkbStateNotifyEvent_h_