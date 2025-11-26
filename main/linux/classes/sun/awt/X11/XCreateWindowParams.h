#ifndef _sun_awt_X11_XCreateWindowParams_h_
#define _sun_awt_X11_XCreateWindowParams_h_
//$ class sun.awt.X11.XCreateWindowParams
//$ extends java.util.HashMap

#include <java/lang/Array.h>
#include <java/util/HashMap.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XCreateWindowParams : public ::java::util::HashMap {
	$class(XCreateWindowParams, $NO_CLASS_INIT, ::java::util::HashMap)
public:
	XCreateWindowParams();
	void init$();
	void init$($ObjectArray* map);
	virtual ::sun::awt::X11::XCreateWindowParams* add(Object$* key, Object$* value);
	virtual ::sun::awt::X11::XCreateWindowParams* add(Object$* key, int32_t value);
	virtual ::sun::awt::X11::XCreateWindowParams* add(Object$* key, int64_t value);
	virtual ::sun::awt::X11::XCreateWindowParams* delete$(Object$* key);
	void init($ObjectArray* map);
	virtual ::sun::awt::X11::XCreateWindowParams* putIfNull(Object$* key, Object$* value);
	virtual ::sun::awt::X11::XCreateWindowParams* putIfNull(Object$* key, int32_t value);
	virtual ::sun::awt::X11::XCreateWindowParams* putIfNull(Object$* key, int64_t value);
	virtual $String* toString() override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XCreateWindowParams_h_