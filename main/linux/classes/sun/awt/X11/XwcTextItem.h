#ifndef _sun_awt_X11_XwcTextItem_h_
#define _sun_awt_X11_XwcTextItem_h_
//$ class sun.awt.X11.XwcTextItem
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

class XwcTextItem : public ::sun::awt::X11::XWrapperBase {
	$class(XwcTextItem, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XwcTextItem();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int64_t get_chars(int32_t index);
	virtual int64_t get_chars();
	virtual int32_t get_delta();
	virtual int64_t get_font_set(int32_t index);
	virtual int64_t get_font_set();
	virtual int32_t get_nchars();
	virtual void set_chars(int64_t v);
	virtual void set_delta(int32_t v);
	virtual void set_font_set(int64_t v);
	virtual void set_nchars(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XwcTextItem_h_