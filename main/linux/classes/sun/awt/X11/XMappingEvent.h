#ifndef _sun_awt_X11_XMappingEvent_h_
#define _sun_awt_X11_XMappingEvent_h_
//$ class sun.awt.X11.XMappingEvent
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

class XMappingEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XMappingEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XMappingEvent();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_count();
	virtual int64_t get_display();
	virtual int32_t get_first_keycode();
	virtual int32_t get_request();
	virtual bool get_send_event();
	virtual int64_t get_serial();
	virtual int32_t get_type();
	virtual int64_t get_window();
	virtual void set_count(int32_t v);
	virtual void set_display(int64_t v);
	virtual void set_first_keycode(int32_t v);
	virtual void set_request(int32_t v);
	virtual void set_send_event(bool v);
	virtual void set_serial(int64_t v);
	virtual void set_type(int32_t v);
	virtual void set_window(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMappingEvent_h_