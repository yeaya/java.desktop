#ifndef _sun_awt_X11_XIMStringConversionText_h_
#define _sun_awt_X11_XIMStringConversionText_h_
//$ class sun.awt.X11.XIMStringConversionText
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

class XIMStringConversionText : public ::sun::awt::X11::XWrapperBase {
	$class(XIMStringConversionText, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XIMStringConversionText();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual bool get_encoding_is_wchar();
	virtual int64_t get_feedback(int32_t index);
	virtual int64_t get_feedback();
	virtual int16_t get_length();
	virtual int64_t get_string(int32_t index);
	virtual int64_t get_string();
	virtual void set_encoding_is_wchar(bool v);
	virtual void set_feedback(int64_t v);
	virtual void set_length(int16_t v);
	virtual void set_string(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XIMStringConversionText_h_