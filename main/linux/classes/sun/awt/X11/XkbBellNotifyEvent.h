#ifndef _sun_awt_X11_XkbBellNotifyEvent_h_
#define _sun_awt_X11_XkbBellNotifyEvent_h_
//$ class sun.awt.X11.XkbBellNotifyEvent
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

class XkbBellNotifyEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XkbBellNotifyEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XkbBellNotifyEvent();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_bell_class();
	virtual int32_t get_bell_id();
	virtual int32_t get_device();
	virtual int64_t get_display();
	virtual int32_t get_duration();
	virtual bool get_event_only();
	virtual int64_t get_name();
	virtual int32_t get_percent();
	virtual int32_t get_pitch();
	virtual bool get_send_event();
	virtual int64_t get_serial();
	virtual int64_t get_time();
	virtual int32_t get_type();
	virtual int64_t get_window();
	virtual int32_t get_xkb_type();
	virtual void set_bell_class(int32_t v);
	virtual void set_bell_id(int32_t v);
	virtual void set_device(int32_t v);
	virtual void set_display(int64_t v);
	virtual void set_duration(int32_t v);
	virtual void set_event_only(bool v);
	virtual void set_name(int64_t v);
	virtual void set_percent(int32_t v);
	virtual void set_pitch(int32_t v);
	virtual void set_send_event(bool v);
	virtual void set_serial(int64_t v);
	virtual void set_time(int64_t v);
	virtual void set_type(int32_t v);
	virtual void set_window(int64_t v);
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

#endif // _sun_awt_X11_XkbBellNotifyEvent_h_