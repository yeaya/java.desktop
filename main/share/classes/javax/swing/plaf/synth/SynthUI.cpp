#include <javax/swing/plaf/synth/SynthUI.h>

#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthUI_MethodInfo_[] = {
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SynthUI_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.plaf.synth.SynthUI",
	nullptr,
	"javax.swing.plaf.synth.SynthConstants",
	nullptr,
	_SynthUI_MethodInfo_
};

$Object* allocate$SynthUI($Class* clazz) {
	return $of($alloc(SynthUI));
}

$Class* SynthUI::load$($String* name, bool initialize) {
	$loadClass(SynthUI, name, initialize, &_SynthUI_ClassInfo_, allocate$SynthUI);
	return class$;
}

$Class* SynthUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax