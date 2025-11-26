#ifndef _sun_awt_X11_XGCValues_h_
#define _sun_awt_X11_XGCValues_h_
//$ class sun.awt.X11.XGCValues
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

class XGCValues : public ::sun::awt::X11::XWrapperBase {
	$class(XGCValues, $NO_CLASS_INIT, ::sun::awt::X11::XWrapperBase)
public:
	XGCValues();
	void init$(int64_t addr);
	void init$();
	virtual $Object* clone() override;
	virtual void dispose();
	virtual int32_t getDataSize() override;
	virtual $String* getFieldsAsString() override;
	virtual $String* getName() override;
	virtual int64_t getPData() override;
	static int32_t getSize();
	virtual int32_t get_arc_mode();
	virtual int64_t get_background();
	virtual int32_t get_cap_style();
	virtual int64_t get_clip_mask();
	virtual int32_t get_clip_x_origin();
	virtual int32_t get_clip_y_origin();
	virtual int32_t get_dash_offset();
	virtual int8_t get_dashes();
	virtual int32_t get_fill_rule();
	virtual int32_t get_fill_style();
	virtual int64_t get_font();
	virtual int64_t get_foreground();
	virtual int32_t get_function();
	virtual bool get_graphics_exposures();
	virtual int32_t get_join_style();
	virtual int32_t get_line_style();
	virtual int32_t get_line_width();
	virtual int64_t get_plane_mask();
	virtual int64_t get_stipple();
	virtual int32_t get_subwindow_mode();
	virtual int64_t get_tile();
	virtual int32_t get_ts_x_origin();
	virtual int32_t get_ts_y_origin();
	virtual void set_arc_mode(int32_t v);
	virtual void set_background(int64_t v);
	virtual void set_cap_style(int32_t v);
	virtual void set_clip_mask(int64_t v);
	virtual void set_clip_x_origin(int32_t v);
	virtual void set_clip_y_origin(int32_t v);
	virtual void set_dash_offset(int32_t v);
	virtual void set_dashes(int8_t v);
	virtual void set_fill_rule(int32_t v);
	virtual void set_fill_style(int32_t v);
	virtual void set_font(int64_t v);
	virtual void set_foreground(int64_t v);
	virtual void set_function(int32_t v);
	virtual void set_graphics_exposures(bool v);
	virtual void set_join_style(int32_t v);
	virtual void set_line_style(int32_t v);
	virtual void set_line_width(int32_t v);
	virtual void set_plane_mask(int64_t v);
	virtual void set_stipple(int64_t v);
	virtual void set_subwindow_mode(int32_t v);
	virtual void set_tile(int64_t v);
	virtual void set_ts_x_origin(int32_t v);
	virtual void set_ts_y_origin(int32_t v);
	virtual $String* toString() override;
	virtual void zero() override;
	::jdk::internal::misc::Unsafe* unsafe = nullptr;
	bool should_free_memory = false;
	int64_t pData = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XGCValues_h_