#include <javax/swing/plaf/synth/SynthDefaultLookup.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthDefaultLookup_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SynthDefaultLookup::*)()>(&SynthDefaultLookup::init$))},
	{"getDefault", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/ComponentUI;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthDefaultLookup_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthDefaultLookup",
	"sun.swing.DefaultLookup",
	nullptr,
	nullptr,
	_SynthDefaultLookup_MethodInfo_
};

$Object* allocate$SynthDefaultLookup($Class* clazz) {
	return $of($alloc(SynthDefaultLookup));
}

void SynthDefaultLookup::init$() {
	$DefaultLookup::init$();
}

$Object* SynthDefaultLookup::getDefault($JComponent* c, $ComponentUI* ui, $String* key) {
	if (!($instanceOf($SynthUI, ui))) {
		$var($Object, value, $DefaultLookup::getDefault(c, ui, key));
		return $of(value);
	}
	$var($SynthContext, context, $nc(($cast($SynthUI, ui)))->getContext(c));
	$var($Object, value, $nc($($nc(context)->getStyle()))->get(context, key));
	return $of(value);
}

SynthDefaultLookup::SynthDefaultLookup() {
}

$Class* SynthDefaultLookup::load$($String* name, bool initialize) {
	$loadClass(SynthDefaultLookup, name, initialize, &_SynthDefaultLookup_ClassInfo_, allocate$SynthDefaultLookup);
	return class$;
}

$Class* SynthDefaultLookup::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax