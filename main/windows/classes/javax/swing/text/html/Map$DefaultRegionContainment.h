#ifndef _javax_swing_text_html_Map$DefaultRegionContainment_h_
#define _javax_swing_text_html_Map$DefaultRegionContainment_h_
//$ class javax.swing.text.html.Map$DefaultRegionContainment
//$ extends javax.swing.text.html.Map$RegionContainment

#include <javax/swing/text/html/Map$RegionContainment.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class Map$DefaultRegionContainment : public ::javax::swing::text::html::Map$RegionContainment {
	$class(Map$DefaultRegionContainment, 0, ::javax::swing::text::html::Map$RegionContainment)
public:
	Map$DefaultRegionContainment();
	void init$();
	virtual bool contains(int32_t x, int32_t y, int32_t width, int32_t height) override;
	static ::javax::swing::text::html::Map$DefaultRegionContainment* sharedInstance();
	static ::javax::swing::text::html::Map$DefaultRegionContainment* si;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_Map$DefaultRegionContainment_h_