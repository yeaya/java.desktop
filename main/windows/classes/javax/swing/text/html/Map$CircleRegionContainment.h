#ifndef _javax_swing_text_html_Map$CircleRegionContainment_h_
#define _javax_swing_text_html_Map$CircleRegionContainment_h_
//$ class javax.swing.text.html.Map$CircleRegionContainment
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

class Map$CircleRegionContainment : public ::javax::swing::text::html::Map$RegionContainment {
	$class(Map$CircleRegionContainment, $NO_CLASS_INIT, ::javax::swing::text::html::Map$RegionContainment)
public:
	Map$CircleRegionContainment();
	void init$(::javax::swing::text::AttributeSet* as);
	virtual bool contains(int32_t x, int32_t y, int32_t width, int32_t height) override;
	int32_t x = 0;
	int32_t y = 0;
	int32_t radiusSquared = 0;
	$floats* percentValues = nullptr;
	int32_t lastWidth = 0;
	int32_t lastHeight = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_Map$CircleRegionContainment_h_