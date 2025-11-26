#ifndef _sun_awt_X11_XExtCodes_h_
#define _sun_awt_X11_XExtCodes_h_
//$ class sun.awt.X11.XExtCodes
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

class XExtCodes : public ::sun::awt::X11::XWrapperBase {
	$class(XExtCodes, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XExtCodes();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_extension();
	virtual int32_t get_first_error();
	virtual int32_t get_first_event();
	virtual int32_t get_major_opcode();
	virtual void set_extension(int32_t v);
	virtual void set_first_error(int32_t v);
	virtual void set_first_event(int32_t v);
	virtual void set_major_opcode(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XExtCodes_h_