#include <com/apple/laf/AquaScrollBarUI$1.h>

#include <apple/laf/JRSUIConstants$ScrollBarHit.h>
#include <apple/laf/JRSUIConstants$ScrollBarPart.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ARROW_MAX
#undef ARROW_MAX_INSIDE
#undef ARROW_MIN
#undef ARROW_MIN_INSIDE
#undef THUMB
#undef TRACK_MAX
#undef TRACK_MIN

using $JRSUIConstants$ScrollBarHit = ::apple::laf::JRSUIConstants$ScrollBarHit;
using $JRSUIConstants$ScrollBarPart = ::apple::laf::JRSUIConstants$ScrollBarPart;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaScrollBarUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaScrollBarUI$1::*)()>(&AquaScrollBarUI$1::init$))},
	{"getInstance", "()Ljava/util/Map;", "()Ljava/util/Map<Lapple/laf/JRSUIConstants$Hit;Lapple/laf/JRSUIConstants$ScrollBarPart;>;", $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaScrollBarUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaScrollBarUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaScrollBarUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaScrollBarUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"apple.laf.JRSUIConstants$Hit", "apple.laf.JRSUIConstants", "Hit", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$ScrollBarPart", "apple.laf.JRSUIConstants", "ScrollBarPart", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaScrollBarUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaScrollBarUI$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaScrollBarUI$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/util/Map<Lapple/laf/JRSUIConstants$Hit;Lapple/laf/JRSUIConstants$ScrollBarPart;>;>;",
	&_AquaScrollBarUI$1_EnclosingMethodInfo_,
	_AquaScrollBarUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaScrollBarUI"
};

$Object* allocate$AquaScrollBarUI$1($Class* clazz) {
	return $of($alloc(AquaScrollBarUI$1));
}

void AquaScrollBarUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaScrollBarUI$1::getInstance() {
	$var($Map, map, $new($HashMap, 7));
	$init($JRSUIConstants$ScrollBarHit);
	$init($JRSUIConstants$ScrollBarPart);
	map->put($JRSUIConstants$ScrollBarHit::ARROW_MAX, $JRSUIConstants$ScrollBarPart::ARROW_MAX);
	map->put($JRSUIConstants$ScrollBarHit::ARROW_MIN, $JRSUIConstants$ScrollBarPart::ARROW_MIN);
	map->put($JRSUIConstants$ScrollBarHit::ARROW_MAX_INSIDE, $JRSUIConstants$ScrollBarPart::ARROW_MAX_INSIDE);
	map->put($JRSUIConstants$ScrollBarHit::ARROW_MIN_INSIDE, $JRSUIConstants$ScrollBarPart::ARROW_MIN_INSIDE);
	map->put($JRSUIConstants$ScrollBarHit::TRACK_MAX, $JRSUIConstants$ScrollBarPart::TRACK_MAX);
	map->put($JRSUIConstants$ScrollBarHit::TRACK_MIN, $JRSUIConstants$ScrollBarPart::TRACK_MIN);
	map->put($JRSUIConstants$ScrollBarHit::THUMB, $JRSUIConstants$ScrollBarPart::THUMB);
	return $of(map);
}

AquaScrollBarUI$1::AquaScrollBarUI$1() {
}

$Class* AquaScrollBarUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaScrollBarUI$1, name, initialize, &_AquaScrollBarUI$1_ClassInfo_, allocate$AquaScrollBarUI$1);
	return class$;
}

$Class* AquaScrollBarUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com