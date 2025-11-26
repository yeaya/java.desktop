#ifndef _sun_awt_X11_XChar2b_h_
#define _sun_awt_X11_XChar2b_h_
//$ class sun.awt.X11.XChar2b
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

class XChar2b : public ::sun::awt::X11::XWrapperBase {
	$class(XChar2b, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XChar2b();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int8_t get_byte1();
	virtual int8_t get_byte2();
	virtual void set_byte1(int8_t v);
	virtual void set_byte2(int8_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XChar2b_h_