#ifndef _javax_swing_text_html_Map$RectangleRegionContainment_h_
#define _javax_swing_text_html_Map$RectangleRegionContainment_h_
//$ class javax.swing.text.html.Map$RectangleRegionContainment
//$ extends javax.swing.text.html.Map$RegionContainment

#include <java/lang/Array.h>
#include <javax/swing/text/html/Map$RegionContainment.h>

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class Map$RectangleRegionContainment : public ::javax::swing::text::html::Map$RegionContainment {
	$class(Map$RectangleRegionContainment, $NO_CLASS_INIT, ::javax::swing::text::html::Map$RegionContainment)
public:
	Map$RectangleRegionContainment();
	void init$(::javax::swing::text::AttributeSet* as);
	virtual bool contains(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual bool contains(int32_t x, int32_t y);
	$floats* percents = nullptr;
	int32_t lastWidth = 0;
	int32_t lastHeight = 0;
	int32_t x0 = 0;
	int32_t y0 = 0;
	int32_t x1 = 0;
	int32_t y1 = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_Map$RectangleRegionContainment_h_