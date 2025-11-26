#ifndef _sun_awt_X11_XConfigureRequestEvent_h_
#define _sun_awt_X11_XConfigureRequestEvent_h_
//$ class sun.awt.X11.XConfigureRequestEvent
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

class XConfigureRequestEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XConfigureRequestEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XConfigureRequestEvent();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_above();
	virtual int32_t get_border_width();
	virtual int32_t get_detail();
	virtual int64_t get_display();
	virtual int32_t get_height();
	virtual int64_t get_parent();
	virtual bool get_send_event();
	virtual int64_t get_serial();
	virtual int32_t get_type();
	virtual int64_t get_value_mask();
	virtual int32_t get_width();
	virtual int64_t get_window();
	virtual int32_t get_x();
	virtual int32_t get_y();
	virtual void set_above(int64_t v);
	virtual void set_border_width(int32_t v);
	virtual void set_detail(int32_t v);
	virtual void set_display(int64_t v);
	virtual void set_height(int32_t v);
	virtual void set_parent(int64_t v);
	virtual void set_send_event(bool v);
	virtual void set_serial(int64_t v);
	virtual void set_type(int32_t v);
	virtual void set_value_mask(int64_t v);
	virtual void set_width(int32_t v);
	virtual void set_window(int64_t v);
	virtual void set_x(int32_t v);
	virtual void set_y(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XConfigureRequestEvent_h_