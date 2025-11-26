#ifndef _sun_awt_X11_XkbActionMessageEvent_h_
#define _sun_awt_X11_XkbActionMessageEvent_h_
//$ class sun.awt.X11.XkbActionMessageEvent
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

class XkbActionMessageEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XkbActionMessageEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XkbActionMessageEvent();
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
	virtual int32_t get_group();
	virtual bool get_key_event_follows();
	virtual int32_t get_keycode();
	virtual int8_t get_message(int32_t index);
	virtual int64_t get_message();
	virtual int32_t get_mods();
	virtual bool get_press();
	virtual bool get_send_event();
	virtual int64_t get_serial();
	virtual int64_t get_time();
	virtual int32_t get_type();
	virtual int32_t get_xkb_type();
	virtual void set_device(int32_t v);
	virtual void set_display(int64_t v);
	virtual void set_group(int32_t v);
	virtual void set_key_event_follows(bool v);
	virtual void set_keycode(int32_t v);
	virtual void set_message(int32_t index, int8_t v);
	virtual void set_mods(int32_t v);
	virtual void set_press(bool v);
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

#endif // _sun_awt_X11_XkbActionMessageEvent_h_