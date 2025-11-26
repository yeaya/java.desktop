#ifndef _javax_swing_text_html_Map_h_
#define _javax_swing_text_html_Map_h_
//$ class javax.swing.text.html.Map
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Vector;
	}
}
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
				class Map$RegionContainment;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class Map : public ::java::io::Serializable {
	$class(Map, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	Map();
	void init$();
	void init$($String* name);
	virtual void addArea(::javax::swing::text::AttributeSet* as);
	virtual ::javax::swing::text::html::Map$RegionContainment* createRegionContainment(::javax::swing::text::AttributeSet* attributes);
	static $ints* extractCoords(Object$* stringCoords);
	virtual ::javax::swing::text::AttributeSet* getArea(int32_t x, int32_t y, int32_t width, int32_t height);
	virtual $Array<::javax::swing::text::AttributeSet>* getAreas();
	virtual $String* getName();
	virtual void removeArea(::javax::swing::text::AttributeSet* as);
	$String* name = nullptr;
	::java::util::Vector* areaAttributes = nullptr;
	::java::util::Vector* areas = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_Map_h_