#include <javax/swing/text/html/Map$CircleRegionContainment.h>

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

$FieldInfo _Map$CircleRegionContainment_FieldInfo_[] = {
	{"x", "I", nullptr, 0, $field(Map$CircleRegionContainment, x)},
	{"y", "I", nullptr, 0, $field(Map$CircleRegionContainment, y)},
	{"radiusSquared", "I", nullptr, 0, $field(Map$CircleRegionContainment, radiusSquared)},
	{"percentValues", "[F", nullptr, 0, $field(Map$CircleRegionContainment, percentValues)},
	{"lastWidth", "I", nullptr, 0, $field(Map$CircleRegionContainment, lastWidth)},
	{"lastHeight", "I", nullptr, 0, $field(Map$CircleRegionContainment, lastHeight)},
	{}
};

$MethodInfo _Map$CircleRegionContainment_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(Map$CircleRegionContainment::*)($AttributeSet*)>(&Map$CircleRegionContainment::init$))},
	{"contains", "(IIII)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Map$CircleRegionContainment_InnerClassesInfo_[] = {
	{"javax.swing.text.html.Map$CircleRegionContainment", "javax.swing.text.html.Map", "CircleRegionContainment", $STATIC},
	{"javax.swing.text.html.Map$RegionContainment", "javax.swing.text.html.Map", "RegionContainment", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Map$CircleRegionContainment_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.Map$CircleRegionContainment",
	"java.lang.Object",
	"javax.swing.text.html.Map$RegionContainment",
	_Map$CircleRegionContainment_FieldInfo_,
	_Map$CircleRegionContainment_MethodInfo_,
	nullptr,
	nullptr,
	_Map$CircleRegionContainment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.Map"
};

$Object* allocate$Map$CircleRegionContainment($Class* clazz) {
	return $of($alloc(Map$CircleRegionContainment));
}

void Map$CircleRegionContainment::init$($AttributeSet* as) {
	$useLocalCurrentObjectStackCache();
	$init($HTML$Attribute);
	$var($ints, coords, $Map::extractCoords($($nc(as)->getAttribute($HTML$Attribute::COORDS))));
	if (coords == nullptr || $nc(coords)->length != 3) {
		$throwNew($RuntimeException, "Unable to parse circular area"_s);
	}
	this->x = $nc(coords)->get(0);
	this->y = coords->get(1);
	this->radiusSquared = coords->get(2) * coords->get(2);
	if (coords->get(0) < 0 || coords->get(1) < 0 || coords->get(2) < 0) {
		this->lastWidth = (this->lastHeight = -1);
		$set(this, percentValues, $new($floats, 3));
		for (int32_t counter = 0; counter < 3; ++counter) {
			if (coords->get(counter) < 0) {
				$nc(this->percentValues)->set(counter, $div(coords->get(counter), -100.0f));
			} else {
				$nc(this->percentValues)->set(counter, -1.0f);
			}
		}
	} else {
		$set(this, percentValues, nullptr);
	}
}

bool Map$CircleRegionContainment::contains(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (this->percentValues != nullptr && (this->lastWidth != width || this->lastHeight != height)) {
		int32_t newRad = $Math::min(width, height) / 2;
		this->lastWidth = width;
		this->lastHeight = height;
		if ($nc(this->percentValues)->get(0) != -1.0f) {
			this->x = $cast(int32_t, ($nc(this->percentValues)->get(0) * width));
		}
		if ($nc(this->percentValues)->get(1) != -1.0f) {
			this->y = $cast(int32_t, ($nc(this->percentValues)->get(1) * height));
		}
		if ($nc(this->percentValues)->get(2) != -1.0f) {
			this->radiusSquared = $cast(int32_t, ($nc(this->percentValues)->get(2) * $Math::min(width, height)));
			this->radiusSquared *= this->radiusSquared;
		}
	}
	return (((x - this->x) * (x - this->x) + (y - this->y) * (y - this->y)) <= this->radiusSquared);
}

Map$CircleRegionContainment::Map$CircleRegionContainment() {
}

$Class* Map$CircleRegionContainment::load$($String* name, bool initialize) {
	$loadClass(Map$CircleRegionContainment, name, initialize, &_Map$CircleRegionContainment_ClassInfo_, allocate$Map$CircleRegionContainment);
	return class$;
}

$Class* Map$CircleRegionContainment::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax