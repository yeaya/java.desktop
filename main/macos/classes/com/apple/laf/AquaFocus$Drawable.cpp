#include <com/apple/laf/AquaFocus$Drawable.h>

#include <com/apple/laf/AquaFocus.h>
#include <java/awt/Graphics2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaFocus$Drawable_MethodInfo_[] = {
	{"draw", "(Ljava/awt/Graphics2D;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AquaFocus$Drawable_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFocus$Drawable", "com.apple.laf.AquaFocus", "Drawable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaFocus$Drawable_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.AquaFocus$Drawable",
	nullptr,
	nullptr,
	nullptr,
	_AquaFocus$Drawable_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFocus$Drawable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFocus"
};

$Object* allocate$AquaFocus$Drawable($Class* clazz) {
	return $of($alloc(AquaFocus$Drawable));
}

$Class* AquaFocus$Drawable::load$($String* name, bool initialize) {
	$loadClass(AquaFocus$Drawable, name, initialize, &_AquaFocus$Drawable_ClassInfo_, allocate$AquaFocus$Drawable);
	return class$;
}

$Class* AquaFocus$Drawable::class$ = nullptr;

		} // laf
	} // apple
} // com