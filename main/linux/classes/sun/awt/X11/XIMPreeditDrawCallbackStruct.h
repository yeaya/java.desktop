#ifndef _sun_awt_X11_XIMPreeditDrawCallbackStruct_h_
#define _sun_awt_X11_XIMPreeditDrawCallbackStruct_h_
//$ class sun.awt.X11.XIMPreeditDrawCallbackStruct
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
			class XIMText;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XIMPreeditDrawCallbackStruct : public ::sun::awt::X11::XWrapperBase {
	$class(XIMPreeditDrawCallbackStruct, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XIMPreeditDrawCallbackStruct();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_caret();
	virtual int32_t get_chg_first();
	virtual int32_t get_chg_length();
	virtual ::sun::awt::X11::XIMText* get_text(int32_t index);
	virtual int64_t get_text();
	virtual void set_caret(int32_t v);
	virtual void set_chg_first(int32_t v);
	virtual void set_chg_length(int32_t v);
	virtual void set_text(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XIMPreeditDrawCallbackStruct_h_