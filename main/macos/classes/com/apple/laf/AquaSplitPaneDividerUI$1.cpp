#include <com/apple/laf/AquaSplitPaneDividerUI$1.h>

#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaUtils$LazyKeyedSingleton.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <jcpp.h>

#undef SCALE_SMOOTH

using $AquaImageFactory = ::com::apple::laf::AquaImageFactory;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$LazyKeyedSingleton = ::com::apple::laf::AquaUtils$LazyKeyedSingleton;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaSplitPaneDividerUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaSplitPaneDividerUI$1::*)()>(&AquaSplitPaneDividerUI$1::init$))},
	{"getInstance", "(Ljava/lang/Integer;)Ljava/awt/Image;", nullptr, $PROTECTED},
	{"getInstance", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _AquaSplitPaneDividerUI$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaSplitPaneDividerUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaSplitPaneDividerUI$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSplitPaneDividerUI$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$LazyKeyedSingleton", "com.apple.laf.AquaUtils", "LazyKeyedSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaSplitPaneDividerUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSplitPaneDividerUI$1",
	"com.apple.laf.AquaUtils$LazyKeyedSingleton",
	nullptr,
	nullptr,
	_AquaSplitPaneDividerUI$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$LazyKeyedSingleton<Ljava/lang/Integer;Ljava/awt/Image;>;",
	&_AquaSplitPaneDividerUI$1_EnclosingMethodInfo_,
	_AquaSplitPaneDividerUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSplitPaneDividerUI"
};

$Object* allocate$AquaSplitPaneDividerUI$1($Class* clazz) {
	return $of($alloc(AquaSplitPaneDividerUI$1));
}

void AquaSplitPaneDividerUI$1::init$() {
	$AquaUtils$LazyKeyedSingleton::init$();
}

$Image* AquaSplitPaneDividerUI$1::getInstance($Integer* direction) {
	$useLocalCurrentObjectStackCache();
	$var($Image, arrowImage, $AquaImageFactory::getArrowImageForDirection($nc(direction)->intValue()));
	int32_t h = ($nc(arrowImage)->getHeight(nullptr) * 5) / 7;
	int32_t w = (arrowImage->getWidth(nullptr) * 5) / 7;
	return $AquaUtils::generateLightenedImage($(arrowImage->getScaledInstance(w, h, $Image::SCALE_SMOOTH)), 50);
}

$Object* AquaSplitPaneDividerUI$1::getInstance(Object$* direction) {
	return $of(this->getInstance($cast($Integer, direction)));
}

AquaSplitPaneDividerUI$1::AquaSplitPaneDividerUI$1() {
}

$Class* AquaSplitPaneDividerUI$1::load$($String* name, bool initialize) {
	$loadClass(AquaSplitPaneDividerUI$1, name, initialize, &_AquaSplitPaneDividerUI$1_ClassInfo_, allocate$AquaSplitPaneDividerUI$1);
	return class$;
}

$Class* AquaSplitPaneDividerUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com