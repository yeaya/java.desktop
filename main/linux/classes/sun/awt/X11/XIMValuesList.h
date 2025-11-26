#ifndef _sun_awt_X11_XIMValuesList_h_
#define _sun_awt_X11_XIMValuesList_h_
//$ class sun.awt.X11.XIMValuesList
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

class XIMValuesList : public ::sun::awt::X11::XWrapperBase {
	$class(XIMValuesList, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XIMValuesList();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int16_t get_count_values();
	virtual int64_t get_supported_values(int32_t index);
	virtual int64_t get_supported_values();
	virtual void set_count_values(int16_t v);
	virtual void set_supported_values(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XIMValuesList_h_