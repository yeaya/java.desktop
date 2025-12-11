#include <com/apple/laf/AquaImageFactory$5.h>

#include <apple/laf/JRSUIConstants$AlignmentHorizontal.h>
#include <apple/laf/JRSUIConstants$AlignmentVertical.h>
#include <apple/laf/JRSUIConstants$Direction.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaPainter.h>
#include <jcpp.h>

#undef ACTIVE
#undef CENTER
#undef DISCLOSURE_TRIANGLE
#undef DOWN

using $JRSUIConstants$AlignmentHorizontal = ::apple::laf::JRSUIConstants$AlignmentHorizontal;
using $JRSUIConstants$AlignmentVertical = ::apple::laf::JRSUIConstants$AlignmentVertical;
using $JRSUIConstants$Direction = ::apple::laf::JRSUIConstants$Direction;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaImageFactory$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaImageFactory$5::*)()>(&AquaImageFactory$5::init$))},
	{"initIconPainter", "(Lcom/apple/laf/AquaPainter;)V", "(Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaImageFactory$5_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaImageFactory",
	"getTreeExpandedIcon",
	"()Ljavax/swing/plaf/UIResource;"
};

$InnerClassInfo _AquaImageFactory$5_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaIcon$JRSUIControlSpec", "com.apple.laf.AquaIcon", "JRSUIControlSpec", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaImageFactory$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaImageFactory$5",
	"java.lang.Object",
	"com.apple.laf.AquaIcon$JRSUIControlSpec",
	nullptr,
	_AquaImageFactory$5_MethodInfo_,
	nullptr,
	&_AquaImageFactory$5_EnclosingMethodInfo_,
	_AquaImageFactory$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$5($Class* clazz) {
	return $of($alloc(AquaImageFactory$5));
}

void AquaImageFactory$5::init$() {
}

void AquaImageFactory$5::initIconPainter($AquaPainter* painter) {
	$init($JRSUIConstants$Widget);
	$nc($nc(painter)->state)->set($JRSUIConstants$Widget::DISCLOSURE_TRIANGLE);
	$init($JRSUIConstants$State);
	$nc(painter->state)->set($JRSUIConstants$State::ACTIVE);
	$init($JRSUIConstants$Direction);
	$nc(painter->state)->set($JRSUIConstants$Direction::DOWN);
	$init($JRSUIConstants$AlignmentHorizontal);
	$nc(painter->state)->set($JRSUIConstants$AlignmentHorizontal::CENTER);
	$init($JRSUIConstants$AlignmentVertical);
	$nc(painter->state)->set($JRSUIConstants$AlignmentVertical::CENTER);
}

AquaImageFactory$5::AquaImageFactory$5() {
}

$Class* AquaImageFactory$5::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$5, name, initialize, &_AquaImageFactory$5_ClassInfo_, allocate$AquaImageFactory$5);
	return class$;
}

$Class* AquaImageFactory$5::class$ = nullptr;

		} // laf
	} // apple
} // com