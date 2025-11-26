#ifndef _sun_awt_X11_XkbNamesNotifyEvent_h_
#define _sun_awt_X11_XkbNamesNotifyEvent_h_
//$ class sun.awt.X11.XkbNamesNotifyEvent
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

class XkbNamesNotifyEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XkbNamesNotifyEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XkbNamesNotifyEvent();
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
	virtual int32_t get_changed_groups();
	virtual int32_t get_changed_indicators();
	virtual int32_t get_changed_vmods();
	virtual int32_t get_device();
	virtual int64_t get_display();
	virtual int32_t get_first_key();
	virtual int32_t get_first_lvl();
	virtual int32_t get_first_type();
	virtual int32_t get_num_aliases();
	virtual int32_t get_num_keys();
	virtual int32_t get_num_lvls();
	virtual int32_t get_num_radio_groups();
	virtual int32_t get_num_types();
	virtual bool get_send_event();
	virtual int64_t get_serial();
	virtual int64_t get_time();
	virtual int32_t get_type();
	virtual int32_t get_xkb_type();
	virtual void set_changed(int32_t v);
	virtual void set_changed_groups(int32_t v);
	virtual void set_changed_indicators(int32_t v);
	virtual void set_changed_vmods(int32_t v);
	virtual void set_device(int32_t v);
	virtual void set_display(int64_t v);
	virtual void set_first_key(int32_t v);
	virtual void set_first_lvl(int32_t v);
	virtual void set_first_type(int32_t v);
	virtual void set_num_aliases(int32_t v);
	virtual void set_num_keys(int32_t v);
	virtual void set_num_lvls(int32_t v);
	virtual void set_num_radio_groups(int32_t v);
	virtual void set_num_types(int32_t v);
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

#endif // _sun_awt_X11_XkbNamesNotifyEvent_h_