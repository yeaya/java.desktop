#ifndef _sun_awt_X11_XOMCharSetList_h_
#define _sun_awt_X11_XOMCharSetList_h_
//$ class sun.awt.X11.XOMCharSetList
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

class XOMCharSetList : public ::sun::awt::X11::XWrapperBase {
	$class(XOMCharSetList, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XOMCharSetList();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_charset_count();
	virtual int64_t get_charset_list(int32_t index);
	virtual int64_t get_charset_list();
	virtual void set_charset_count(int32_t v);
	virtual void set_charset_list(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XOMCharSetList_h_