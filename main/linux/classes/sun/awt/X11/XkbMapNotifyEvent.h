#ifndef _sun_awt_X11_XkbMapNotifyEvent_h_
#define _sun_awt_X11_XkbMapNotifyEvent_h_
//$ class sun.awt.X11.XkbMapNotifyEvent
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

class XkbMapNotifyEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XkbMapNotifyEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XkbMapNotifyEvent();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_changed();
	virtual int32_t get_device();
	virtual int64_t get_display();
	virtual int32_t get_first_key_act();
	virtual int32_t get_first_key_behavior();
	virtual int32_t get_first_key_explicit();
	virtual int32_t get_first_key_sym();
	virtual int32_t get_first_modmap_key();
	virtual int32_t get_first_type();
	virtual int32_t get_first_vmodmap_key();
	virtual int32_t get_flags();
	virtual int32_t get_max_key_code();
	virtual int32_t get_min_key_code();
	virtual int32_t get_num_key_acts();
	virtual int32_t get_num_key_behaviors();
	virtual int32_t get_num_key_explicit();
	virtual int32_t get_num_key_syms();
	virtual int32_t get_num_modmap_keys();
	virtual int32_t get_num_types();
	virtual int32_t get_num_vmodmap_keys();
	virtual bool get_send_event();
	virtual int64_t get_serial();
	virtual int64_t get_time();
	virtual int32_t get_type();
	virtual int32_t get_vmods();
	virtual int32_t get_xkb_type();
	virtual void set_changed(int32_t v);
	virtual void set_device(int32_t v);
	virtual void set_display(int64_t v);
	virtual void set_first_key_act(int32_t v);
	virtual void set_first_key_behavior(int32_t v);
	virtual void set_first_key_explicit(int32_t v);
	virtual void set_first_key_sym(int32_t v);
	virtual void set_first_modmap_key(int32_t v);
	virtual void set_first_type(int32_t v);
	virtual void set_first_vmodmap_key(int32_t v);
	virtual void set_flags(int32_t v);
	virtual void set_max_key_code(int32_t v);
	virtual void set_min_key_code(int32_t v);
	virtual void set_num_key_acts(int32_t v);
	virtual void set_num_key_behaviors(int32_t v);
	virtual void set_num_key_explicit(int32_t v);
	virtual void set_num_key_syms(int32_t v);
	virtual void set_num_modmap_keys(int32_t v);
	virtual void set_num_types(int32_t v);
	virtual void set_num_vmodmap_keys(int32_t v);
	virtual void set_send_event(bool v);
	virtual void set_serial(int64_t v);
	virtual void set_time(int64_t v);
	virtual void set_type(int32_t v);
	virtual void set_vmods(int32_t v);
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

#endif // _sun_awt_X11_XkbMapNotifyEvent_h_