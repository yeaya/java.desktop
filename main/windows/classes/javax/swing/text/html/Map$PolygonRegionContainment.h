#ifndef _javax_swing_text_html_Map$PolygonRegionContainment_h_
#define _javax_swing_text_html_Map$PolygonRegionContainment_h_
//$ class javax.swing.text.html.Map$PolygonRegionContainment
//$ extends java.awt.Polygon
//$ implements javax.swing.text.html.Map$RegionContainment

#include <java/awt/Polygon.h>
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

class Map$PolygonRegionContainment : public ::java::awt::Polygon, public ::javax::swing::text::html::Map$RegionContainment {
	$class(Map$PolygonRegionContainment, $NO_CLASS_INIT, ::java::awt::Polygon, ::javax::swing::text::html::Map$RegionContainment)
public:
	Map$PolygonRegionContainment();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Polygon::contains;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::AttributeSet* as);
	virtual bool contains(int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	$floats* percentValues = nullptr;
	$ints* percentIndexs = nullptr;
	int32_t lastWidth = 0;
	int32_t lastHeight = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_Map$PolygonRegionContainment_h_