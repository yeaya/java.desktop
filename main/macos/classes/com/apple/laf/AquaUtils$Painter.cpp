#include <com/apple/laf/AquaUtils$Painter.h>

#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaUtils$Painter_MethodInfo_[] = {
	{"paint", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaUtils$Painter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$Painter", "com.apple.laf.AquaUtils", "Painter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$Painter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.AquaUtils$Painter",
	nullptr,
	nullptr,
	nullptr,
	_AquaUtils$Painter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaUtils$Painter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$Painter($Class* clazz) {
	return $of($alloc(AquaUtils$Painter));
}

$Class* AquaUtils$Painter::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$Painter, name, initialize, &_AquaUtils$Painter_ClassInfo_, allocate$AquaUtils$Painter);
	return class$;
}

$Class* AquaUtils$Painter::class$ = nullptr;

		} // laf
	} // apple
} // com