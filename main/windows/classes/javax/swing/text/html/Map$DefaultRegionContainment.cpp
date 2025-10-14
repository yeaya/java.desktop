#include <javax/swing/text/html/Map$DefaultRegionContainment.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::javax::swing::text::html::Map;
using $Map$RegionContainment = ::javax::swing::text::html::Map$RegionContainment;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _Map$DefaultRegionContainment_FieldInfo_[] = {
	{"si", "Ljavax/swing/text/html/Map$DefaultRegionContainment;", nullptr, $STATIC, $staticField(Map$DefaultRegionContainment, si)},
	{}
};

$MethodInfo _Map$DefaultRegionContainment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Map$DefaultRegionContainment::*)()>(&Map$DefaultRegionContainment::init$))},
	{"contains", "(IIII)Z", nullptr, $PUBLIC},
	{"sharedInstance", "()Ljavax/swing/text/html/Map$DefaultRegionContainment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Map$DefaultRegionContainment*(*)()>(&Map$DefaultRegionContainment::sharedInstance))},
	{}
};

$InnerClassInfo _Map$DefaultRegionContainment_InnerClassesInfo_[] = {
	{"javax.swing.text.html.Map$DefaultRegionContainment", "javax.swing.text.html.Map", "DefaultRegionContainment", $STATIC},
	{"javax.swing.text.html.Map$RegionContainment", "javax.swing.text.html.Map", "RegionContainment", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Map$DefaultRegionContainment_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.Map$DefaultRegionContainment",
	"java.lang.Object",
	"javax.swing.text.html.Map$RegionContainment",
	_Map$DefaultRegionContainment_FieldInfo_,
	_Map$DefaultRegionContainment_MethodInfo_,
	nullptr,
	nullptr,
	_Map$DefaultRegionContainment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.Map"
};

$Object* allocate$Map$DefaultRegionContainment($Class* clazz) {
	return $of($alloc(Map$DefaultRegionContainment));
}


Map$DefaultRegionContainment* Map$DefaultRegionContainment::si = nullptr;

void Map$DefaultRegionContainment::init$() {
}

Map$DefaultRegionContainment* Map$DefaultRegionContainment::sharedInstance() {
	$init(Map$DefaultRegionContainment);
	if (Map$DefaultRegionContainment::si == nullptr) {
		$assignStatic(Map$DefaultRegionContainment::si, $new(Map$DefaultRegionContainment));
	}
	return Map$DefaultRegionContainment::si;
}

bool Map$DefaultRegionContainment::contains(int32_t x, int32_t y, int32_t width, int32_t height) {
	return (x <= width && x >= 0 && y >= 0 && y <= width);
}

void clinit$Map$DefaultRegionContainment($Class* class$) {
	$assignStatic(Map$DefaultRegionContainment::si, nullptr);
}

Map$DefaultRegionContainment::Map$DefaultRegionContainment() {
}

$Class* Map$DefaultRegionContainment::load$($String* name, bool initialize) {
	$loadClass(Map$DefaultRegionContainment, name, initialize, &_Map$DefaultRegionContainment_ClassInfo_, clinit$Map$DefaultRegionContainment, allocate$Map$DefaultRegionContainment);
	return class$;
}

$Class* Map$DefaultRegionContainment::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax