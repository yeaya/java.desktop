#include <javax/swing/plaf/nimbus/InnerGlowEffect.h>

#include <java/awt/Color.h>
#include <javax/swing/plaf/nimbus/InnerShadowEffect.h>
#include <javax/swing/plaf/nimbus/ShadowEffect.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InnerShadowEffect = ::javax::swing::plaf::nimbus::InnerShadowEffect;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _InnerGlowEffect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InnerGlowEffect::*)()>(&InnerGlowEffect::init$))},
	{}
};

$ClassInfo _InnerGlowEffect_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.InnerGlowEffect",
	"javax.swing.plaf.nimbus.InnerShadowEffect",
	nullptr,
	nullptr,
	_InnerGlowEffect_MethodInfo_
};

$Object* allocate$InnerGlowEffect($Class* clazz) {
	return $of($alloc(InnerGlowEffect));
}

void InnerGlowEffect::init$() {
	$InnerShadowEffect::init$();
	this->distance = 0;
	$set(this, color, $new($Color, 255, 255, 211));
}

InnerGlowEffect::InnerGlowEffect() {
}

$Class* InnerGlowEffect::load$($String* name, bool initialize) {
	$loadClass(InnerGlowEffect, name, initialize, &_InnerGlowEffect_ClassInfo_, allocate$InnerGlowEffect);
	return class$;
}

$Class* InnerGlowEffect::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax