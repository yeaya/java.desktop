#include <javax/swing/text/html/Map.h>

#include <java/lang/NumberFormatException.h>
#include <java/util/StringTokenizer.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/Map$CircleRegionContainment.h>
#include <javax/swing/text/html/Map$DefaultRegionContainment.h>
#include <javax/swing/text/html/Map$PolygonRegionContainment.h>
#include <javax/swing/text/html/Map$RectangleRegionContainment.h>
#include <javax/swing/text/html/Map$RegionContainment.h>
#include <jcpp.h>

#undef SHAPE

using $AttributeSetArray = $Array<::javax::swing::text::AttributeSet>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $Map$CircleRegionContainment = ::javax::swing::text::html::Map$CircleRegionContainment;
using $Map$DefaultRegionContainment = ::javax::swing::text::html::Map$DefaultRegionContainment;
using $Map$PolygonRegionContainment = ::javax::swing::text::html::Map$PolygonRegionContainment;
using $Map$RectangleRegionContainment = ::javax::swing::text::html::Map$RectangleRegionContainment;
using $Map$RegionContainment = ::javax::swing::text::html::Map$RegionContainment;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _Map_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Map, name)},
	{"areaAttributes", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/AttributeSet;>;", $PRIVATE, $field(Map, areaAttributes)},
	{"areas", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/html/Map$RegionContainment;>;", $PRIVATE, $field(Map, areas)},
	{}
};

$MethodInfo _Map_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Map::*)()>(&Map::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Map::*)($String*)>(&Map::init$))},
	{"addArea", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"createRegionContainment", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/html/Map$RegionContainment;", nullptr, $PROTECTED},
	{"extractCoords", "(Ljava/lang/Object;)[I", nullptr, $PROTECTED | $STATIC, $method(static_cast<$ints*(*)(Object$*)>(&Map::extractCoords))},
	{"getArea", "(IIII)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getAreas", "()[Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"removeArea", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Map_InnerClassesInfo_[] = {
	{"javax.swing.text.html.Map$DefaultRegionContainment", "javax.swing.text.html.Map", "DefaultRegionContainment", $STATIC},
	{"javax.swing.text.html.Map$CircleRegionContainment", "javax.swing.text.html.Map", "CircleRegionContainment", $STATIC},
	{"javax.swing.text.html.Map$PolygonRegionContainment", "javax.swing.text.html.Map", "PolygonRegionContainment", $STATIC},
	{"javax.swing.text.html.Map$RectangleRegionContainment", "javax.swing.text.html.Map", "RectangleRegionContainment", $STATIC},
	{"javax.swing.text.html.Map$RegionContainment", "javax.swing.text.html.Map", "RegionContainment", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Map_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.Map",
	"java.lang.Object",
	"java.io.Serializable",
	_Map_FieldInfo_,
	_Map_MethodInfo_,
	nullptr,
	nullptr,
	_Map_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.Map$DefaultRegionContainment,javax.swing.text.html.Map$CircleRegionContainment,javax.swing.text.html.Map$PolygonRegionContainment,javax.swing.text.html.Map$RectangleRegionContainment,javax.swing.text.html.Map$RegionContainment"
};

$Object* allocate$Map($Class* clazz) {
	return $of($alloc(Map));
}

void Map::init$() {
}

void Map::init$($String* name) {
	$set(this, name, name);
}

$String* Map::getName() {
	return this->name;
}

void Map::addArea($AttributeSet* as) {
	if (as == nullptr) {
		return;
	}
	if (this->areaAttributes == nullptr) {
		$set(this, areaAttributes, $new($Vector, 2));
	}
	$nc(this->areaAttributes)->addElement($($nc(as)->copyAttributes()));
}

void Map::removeArea($AttributeSet* as) {
	$useLocalCurrentObjectStackCache();
	if (as != nullptr && this->areaAttributes != nullptr) {
		int32_t numAreas = (this->areas != nullptr) ? $nc(this->areas)->size() : 0;
		for (int32_t counter = $nc(this->areaAttributes)->size() - 1; counter >= 0; --counter) {
			if ($nc(($cast($AttributeSet, $($nc(this->areaAttributes)->elementAt(counter)))))->isEqual(as)) {
				$nc(this->areaAttributes)->removeElementAt(counter);
				if (counter < numAreas) {
					$nc(this->areas)->removeElementAt(counter);
				}
			}
		}
	}
}

$AttributeSetArray* Map::getAreas() {
	int32_t numAttributes = (this->areaAttributes != nullptr) ? $nc(this->areaAttributes)->size() : 0;
	if (numAttributes != 0) {
		$var($AttributeSetArray, retValue, $new($AttributeSetArray, numAttributes));
		$nc(this->areaAttributes)->copyInto(retValue);
		return retValue;
	}
	return nullptr;
}

$AttributeSet* Map::getArea(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	int32_t numAttributes = (this->areaAttributes != nullptr) ? $nc(this->areaAttributes)->size() : 0;
	if (numAttributes > 0) {
		int32_t numAreas = (this->areas != nullptr) ? $nc(this->areas)->size() : 0;
		if (this->areas == nullptr) {
			$set(this, areas, $new($Vector, numAttributes));
		}
		for (int32_t counter = 0; counter < numAttributes; ++counter) {
			if (counter >= numAreas) {
				$nc(this->areas)->addElement($(createRegionContainment($cast($AttributeSet, $($nc(this->areaAttributes)->elementAt(counter))))));
			}
			$var($Map$RegionContainment, rc, $cast($Map$RegionContainment, $nc(this->areas)->elementAt(counter)));
			if (rc != nullptr && rc->contains(x, y, width, height)) {
				return $cast($AttributeSet, $nc(this->areaAttributes)->elementAt(counter));
			}
		}
	}
	return nullptr;
}

$Map$RegionContainment* Map::createRegionContainment($AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$init($HTML$Attribute);
	$var($Object, shape, $nc(attributes)->getAttribute($HTML$Attribute::SHAPE));
	if (shape == nullptr) {
		$assign(shape, "rect"_s);
	}
	if ($instanceOf($String, shape)) {
		$var($String, shapeString, $nc(($cast($String, shape)))->toLowerCase());
		$var($Map$RegionContainment, rc, nullptr);
		try {
			if (shapeString->equals("rect"_s)) {
				$assign(rc, $new($Map$RectangleRegionContainment, attributes));
			} else if (shapeString->equals("circle"_s)) {
				$assign(rc, $new($Map$CircleRegionContainment, attributes));
			} else if (shapeString->equals("poly"_s)) {
				$assign(rc, $new($Map$PolygonRegionContainment, attributes));
			} else if (shapeString->equals("default"_s)) {
				$assign(rc, $Map$DefaultRegionContainment::sharedInstance());
			}
		} catch ($RuntimeException& re) {
			$assign(rc, nullptr);
		}
		return rc;
	}
	return nullptr;
}

$ints* Map::extractCoords(Object$* stringCoords) {
	$init(Map);
	$useLocalCurrentObjectStackCache();
	if (stringCoords == nullptr || !($instanceOf($String, stringCoords))) {
		return nullptr;
	}
	$var($StringTokenizer, st, $new($StringTokenizer, $cast($String, stringCoords), ", \t\n\r"_s));
	$var($ints, retValue, nullptr);
	int32_t numCoords = 0;
	while (st->hasMoreElements()) {
		$var($String, token, st->nextToken());
		int32_t scale = 0;
		if ($nc(token)->endsWith("%"_s)) {
			scale = -1;
			$assign(token, token->substring(0, token->length() - 1));
		} else {
			scale = 1;
		}
		try {
			int32_t intValue = $Integer::parseInt(token);
			if (retValue == nullptr) {
				$assign(retValue, $new($ints, 4));
			} else if (numCoords == $nc(retValue)->length) {
				$var($ints, temp, $new($ints, retValue->length * 2));
				$System::arraycopy(retValue, 0, temp, 0, retValue->length);
				$assign(retValue, temp);
			}
			$nc(retValue)->set(numCoords++, intValue * scale);
		} catch ($NumberFormatException& nfe) {
			return nullptr;
		}
	}
	if (numCoords > 0 && numCoords != $nc(retValue)->length) {
		$var($ints, temp, $new($ints, numCoords));
		$System::arraycopy(retValue, 0, temp, 0, numCoords);
		$assign(retValue, temp);
	}
	return retValue;
}

Map::Map() {
}

$Class* Map::load$($String* name, bool initialize) {
	$loadClass(Map, name, initialize, &_Map_ClassInfo_, allocate$Map);
	return class$;
}

$Class* Map::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax