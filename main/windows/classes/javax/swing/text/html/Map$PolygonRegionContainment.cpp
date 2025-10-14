#include <javax/swing/text/html/Map$PolygonRegionContainment.h>

#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
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

using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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

$FieldInfo _Map$PolygonRegionContainment_FieldInfo_[] = {
	{"percentValues", "[F", nullptr, 0, $field(Map$PolygonRegionContainment, percentValues)},
	{"percentIndexs", "[I", nullptr, 0, $field(Map$PolygonRegionContainment, percentIndexs)},
	{"lastWidth", "I", nullptr, 0, $field(Map$PolygonRegionContainment, lastWidth)},
	{"lastHeight", "I", nullptr, 0, $field(Map$PolygonRegionContainment, lastHeight)},
	{}
};

$MethodInfo _Map$PolygonRegionContainment_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(Map$PolygonRegionContainment::*)($AttributeSet*)>(&Map$PolygonRegionContainment::init$))},
	{"contains", "(IIII)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Map$PolygonRegionContainment_InnerClassesInfo_[] = {
	{"javax.swing.text.html.Map$PolygonRegionContainment", "javax.swing.text.html.Map", "PolygonRegionContainment", $STATIC},
	{"javax.swing.text.html.Map$RegionContainment", "javax.swing.text.html.Map", "RegionContainment", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Map$PolygonRegionContainment_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.Map$PolygonRegionContainment",
	"java.awt.Polygon",
	"javax.swing.text.html.Map$RegionContainment",
	_Map$PolygonRegionContainment_FieldInfo_,
	_Map$PolygonRegionContainment_MethodInfo_,
	nullptr,
	nullptr,
	_Map$PolygonRegionContainment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.Map"
};

$Object* allocate$Map$PolygonRegionContainment($Class* clazz) {
	return $of($alloc(Map$PolygonRegionContainment));
}

int32_t Map$PolygonRegionContainment::hashCode() {
	 return this->$Polygon::hashCode();
}

bool Map$PolygonRegionContainment::equals(Object$* arg0) {
	 return this->$Polygon::equals(arg0);
}

$Object* Map$PolygonRegionContainment::clone() {
	 return this->$Polygon::clone();
}

$String* Map$PolygonRegionContainment::toString() {
	 return this->$Polygon::toString();
}

void Map$PolygonRegionContainment::finalize() {
	this->$Polygon::finalize();
}

void Map$PolygonRegionContainment::init$($AttributeSet* as) {
	$Polygon::init$();
	$init($HTML$Attribute);
	$var($ints, coords, $Map::extractCoords($($nc(as)->getAttribute($HTML$Attribute::COORDS))));
	if (coords == nullptr || $nc(coords)->length == 0 || $nc(coords)->length % 2 != 0) {
		$throwNew($RuntimeException, "Unable to parse polygon area"_s);
	} else {
		int32_t numPercents = 0;
		this->lastWidth = (this->lastHeight = -1);
		for (int32_t counter = coords->length - 1; counter >= 0; --counter) {
			if (coords->get(counter) < 0) {
				++numPercents;
			}
		}
		if (numPercents > 0) {
			$set(this, percentIndexs, $new($ints, numPercents));
			$set(this, percentValues, $new($floats, numPercents));
			{
				int32_t counter = coords->length - 1;
				int32_t pCounter = 0;
				for (; counter >= 0; --counter) {
					if (coords->get(counter) < 0) {
						$nc(this->percentValues)->set(pCounter, $div(coords->get(counter), -100.0f));
						$nc(this->percentIndexs)->set(pCounter, counter);
						++pCounter;
					}
				}
			}
		} else {
			$set(this, percentIndexs, nullptr);
			$set(this, percentValues, nullptr);
		}
		this->npoints = coords->length / 2;
		$set(this, xpoints, $new($ints, this->npoints));
		$set(this, ypoints, $new($ints, this->npoints));
		for (int32_t counter = 0; counter < this->npoints; ++counter) {
			$nc(this->xpoints)->set(counter, coords->get(counter + counter));
			$nc(this->ypoints)->set(counter, coords->get(counter + counter + 1));
		}
	}
}

bool Map$PolygonRegionContainment::contains(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (this->percentValues == nullptr || (this->lastWidth == width && this->lastHeight == height)) {
		return contains(x, y);
	}
	$set(this, bounds, nullptr);
	this->lastWidth = width;
	this->lastHeight = height;
	float fWidth = (float)width;
	float fHeight = (float)height;
	for (int32_t counter = $nc(this->percentValues)->length - 1; counter >= 0; --counter) {
		if ($nc(this->percentIndexs)->get(counter) % 2 == 0) {
			$nc(this->xpoints)->set($nc(this->percentIndexs)->get(counter) / 2, $cast(int32_t, ($nc(this->percentValues)->get(counter) * fWidth)));
		} else {
			$nc(this->ypoints)->set($nc(this->percentIndexs)->get(counter) / 2, $cast(int32_t, ($nc(this->percentValues)->get(counter) * fHeight)));
		}
	}
	return contains(x, y);
}

Map$PolygonRegionContainment::Map$PolygonRegionContainment() {
}

$Class* Map$PolygonRegionContainment::load$($String* name, bool initialize) {
	$loadClass(Map$PolygonRegionContainment, name, initialize, &_Map$PolygonRegionContainment_ClassInfo_, allocate$Map$PolygonRegionContainment);
	return class$;
}

$Class* Map$PolygonRegionContainment::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax