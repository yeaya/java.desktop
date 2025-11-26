#ifndef _sun_awt_X11_XErrorEvent_h_
#define _sun_awt_X11_XErrorEvent_h_
//$ class sun.awt.X11.XErrorEvent
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

class XErrorEvent : public ::sun::awt::X11::XWrapperBase {
	$class(XErrorEvent, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XErrorEvent();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_display();
	virtual int8_t get_error_code();
	virtual int8_t get_minor_code();
	virtual int8_t get_request_code();
	virtual int64_t get_resourceid();
	virtual int64_t get_serial();
	virtual int32_t get_type();
	virtual void set_display(int64_t v);
	virtual void set_error_code(int8_t v);
	virtual void set_minor_code(int8_t v);
	virtual void set_request_code(int8_t v);
	virtual void set_resourceid(int64_t v);
	virtual void set_serial(int64_t v);
	virtual void set_type(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XErrorEvent_h_