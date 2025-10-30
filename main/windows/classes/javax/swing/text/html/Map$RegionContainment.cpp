#include <javax/swing/text/html/Map$RegionContainment.h>

#include <javax/swing/text/html/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::javax::swing::text::html::Map;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _Map$RegionContainment_MethodInfo_[] = {
	{"contains", "(IIII)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Map$RegionContainment_InnerClassesInfo_[] = {
	{"javax.swing.text.html.Map$RegionContainment", "javax.swing.text.html.Map", "RegionContainment", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Map$RegionContainment_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.text.html.Map$RegionContainment",
	nullptr,
	nullptr,
	nullptr,
	_Map$RegionContainment_MethodInfo_,
	nullptr,
	nullptr,
	_Map$RegionContainment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.Map"
};

$Object* allocate$Map$RegionContainment($Class* clazz) {
	return $of($alloc(Map$RegionContainment));
}

$Class* Map$RegionContainment::load$($String* name, bool initialize) {
	$loadClass(Map$RegionContainment, name, initialize, &_Map$RegionContainment_ClassInfo_, allocate$Map$RegionContainment);
	return class$;
}

$Class* Map$RegionContainment::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax