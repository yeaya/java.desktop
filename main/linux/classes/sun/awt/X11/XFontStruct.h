#ifndef _sun_awt_X11_XFontStruct_h_
#define _sun_awt_X11_XFontStruct_h_
//$ class sun.awt.X11.XFontStruct
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
			class XCharStruct;
			class XExtData;
			class XFontProp;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XFontStruct : public ::sun::awt::X11::XWrapperBase {
	$class(XFontStruct, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XFontStruct();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual bool get_all_chars_exist();
	virtual int32_t get_ascent();
	virtual int32_t get_descent();
	virtual int32_t get_direction();
	virtual ::sun::awt::X11::XExtData* get_ext_data(int32_t index);
	virtual int64_t get_ext_data();
	virtual int64_t get_fid();
	virtual ::sun::awt::X11::XCharStruct* get_max_bounds();
	virtual int32_t get_max_byte1();
	virtual int32_t get_max_char_or_byte2();
	virtual ::sun::awt::X11::XCharStruct* get_min_bounds();
	virtual int32_t get_min_byte1();
	virtual int32_t get_min_char_or_byte2();
	virtual int32_t get_n_properties();
	virtual ::sun::awt::X11::XCharStruct* get_per_char(int32_t index);
	virtual int64_t get_per_char();
	virtual ::sun::awt::X11::XFontProp* get_properties(int32_t index);
	virtual int64_t get_properties();
	virtual void set_all_chars_exist(bool v);
	virtual void set_ascent(int32_t v);
	virtual void set_descent(int32_t v);
	virtual void set_direction(int32_t v);
	virtual void set_ext_data(int64_t v);
	virtual void set_fid(int64_t v);
	virtual void set_max_byte1(int32_t v);
	virtual void set_max_char_or_byte2(int32_t v);
	virtual void set_min_byte1(int32_t v);
	virtual void set_min_char_or_byte2(int32_t v);
	virtual void set_n_properties(int32_t v);
	virtual void set_per_char(int64_t v);
	virtual void set_properties(int64_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XFontStruct_h_