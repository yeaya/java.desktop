#ifndef _javax_swing_text_html_Map$RegionContainment_h_
#define _javax_swing_text_html_Map$RegionContainment_h_
//$ interface javax.swing.text.html.Map$RegionContainment
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class Map$RegionContainment : public ::java::lang::Object {
	$interface(Map$RegionContainment, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool contains(int32_t x, int32_t y, int32_t width, int32_t height) {return false;}
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_Map$RegionContainment_h_