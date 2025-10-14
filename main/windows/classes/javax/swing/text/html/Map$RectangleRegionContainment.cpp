#include <javax/swing/text/html/Map$RectangleRegionContainment.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/Map.h>
#include <jcpp.h>

#undef COORDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $Map = ::javax::swing::text::html::Map;
using $Map$RegionContainment = ::javax::swing::text::html::Map$RegionContainment;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _Map$RectangleRegionContainment_FieldInfo_[] = {
	{"percents", "[F", nullptr, 0, $field(Map$RectangleRegionContainment, percents)},
	{"lastWidth", "I", nullptr, 0, $field(Map$RectangleRegionContainment, lastWidth)},
	{"lastHeight", "I", nullptr, 0, $field(Map$RectangleRegionContainment, lastHeight)},
	{"x0", "I", nullptr, 0, $field(Map$RectangleRegionContainment, x0)},
	{"y0", "I", nullptr, 0, $field(Map$RectangleRegionContainment, y0)},
	{"x1", "I", nullptr, 0, $field(Map$RectangleRegionContainment, x1)},
	{"y1", "I", nullptr, 0, $field(Map$RectangleRegionContainment, y1)},
	{}
};

$MethodInfo _Map$RectangleRegionContainment_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(Map$RectangleRegionContainment::*)($AttributeSet*)>(&Map$RectangleRegionContainment::init$))},
	{"contains", "(IIII)Z", nullptr, $PUBLIC},
	{"contains", "(II)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Map$RectangleRegionContainment_InnerClassesInfo_[] = {
	{"javax.swing.text.html.Map$RectangleRegionContainment", "javax.swing.text.html.Map", "RectangleRegionContainment", $STATIC},
	{"javax.swing.text.html.Map$RegionContainment", "javax.swing.text.html.Map", "RegionContainment", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Map$RectangleRegionContainment_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.Map$RectangleRegionContainment",
	"java.lang.Object",
	"javax.swing.text.html.Map$RegionContainment",
	_Map$RectangleRegionContainment_FieldInfo_,
	_Map$RectangleRegionContainment_MethodInfo_,
	nullptr,
	nullptr,
	_Map$RectangleRegionContainment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.Map"
};

$Object* allocate$Map$RectangleRegionContainment($Class* clazz) {
	return $of($alloc(Map$RectangleRegionContainment));
}

void Map$RectangleRegionContainment::init$($AttributeSet* as) {
	$init($HTML$Attribute);
	$var($ints, coords, $Map::extractCoords($($nc(as)->getAttribute($HTML$Attribute::COORDS))));
	$set(this, percents, nullptr);
	if (coords == nullptr || $nc(coords)->length != 4) {
		$throwNew($RuntimeException, "Unable to parse rectangular area"_s);
	} else {
		this->x0 = coords->get(0);
		this->y0 = coords->get(1);
		this->x1 = coords->get(2);
		this->y1 = coords->get(3);
		if (this->x0 < 0 || this->y0 < 0 || this->x1 < 0 || this->y1 < 0) {
			$set(this, percents, $new($floats, 4));
			this->lastWidth = (this->lastHeight = -1);
			for (int32_t counter = 0; counter < 4; ++counter) {
				if (coords->get(counter) < 0) {
					$nc(this->percents)->set(counter, $Math::abs(coords->get(counter)) / 100.0f);
				} else {
					$nc(this->percents)->set(counter, -1.0f);
				}
			}
		}
	}
}

bool Map$RectangleRegionContainment::contains(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (this->percents == nullptr) {
		return contains(x, y);
	}
	if (this->lastWidth != width || this->lastHeight != height) {
		this->lastWidth = width;
		this->lastHeight = height;
		if ($nc(this->percents)->get(0) != -1.0f) {
			this->x0 = $cast(int32_t, ($nc(this->percents)->get(0) * width));
		}
		if ($nc(this->percents)->get(1) != -1.0f) {
			this->y0 = $cast(int32_t, ($nc(this->percents)->get(1) * height));
		}
		if ($nc(this->percents)->get(2) != -1.0f) {
			this->x1 = $cast(int32_t, ($nc(this->percents)->get(2) * width));
		}
		if ($nc(this->percents)->get(3) != -1.0f) {
			this->y1 = $cast(int32_t, ($nc(this->percents)->get(3) * height));
		}
	}
	return contains(x, y);
}

bool Map$RectangleRegionContainment::contains(int32_t x, int32_t y) {
	return ((x >= this->x0 && x <= this->x1) && (y >= this->y0 && y <= this->y1));
}

Map$RectangleRegionContainment::Map$RectangleRegionContainment() {
}

$Class* Map$RectangleRegionContainment::load$($String* name, bool initialize) {
	$loadClass(Map$RectangleRegionContainment, name, initialize, &_Map$RectangleRegionContainment_ClassInfo_, allocate$Map$RectangleRegionContainment);
	return class$;
}

$Class* Map$RectangleRegionContainment::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax