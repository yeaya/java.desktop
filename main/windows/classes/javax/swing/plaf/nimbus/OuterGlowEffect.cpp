#include <javax/swing/plaf/nimbus/OuterGlowEffect.h>

#include <java/awt/Color.h>
#include <javax/swing/plaf/nimbus/DropShadowEffect.h>
#include <javax/swing/plaf/nimbus/ShadowEffect.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DropShadowEffect = ::javax::swing::plaf::nimbus::DropShadowEffect;
using $ShadowEffect = ::javax::swing::plaf::nimbus::ShadowEffect;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _OuterGlowEffect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(OuterGlowEffect::*)()>(&OuterGlowEffect::init$))},
	{}
};

$ClassInfo _OuterGlowEffect_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.OuterGlowEffect",
	"javax.swing.plaf.nimbus.DropShadowEffect",
	nullptr,
	nullptr,
	_OuterGlowEffect_MethodInfo_
};

$Object* allocate$OuterGlowEffect($Class* clazz) {
	return $of($alloc(OuterGlowEffect));
}

void OuterGlowEffect::init$() {
	$DropShadowEffect::init$();
	this->distance = 0;
	$set(this, color, $new($Color, 255, 255, 211));
}

OuterGlowEffect::OuterGlowEffect() {
}

$Class* OuterGlowEffect::load$($String* name, bool initialize) {
	$loadClass(OuterGlowEffect, name, initialize, &_OuterGlowEffect_ClassInfo_, allocate$OuterGlowEffect);
	return class$;
}

$Class* OuterGlowEffect::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax