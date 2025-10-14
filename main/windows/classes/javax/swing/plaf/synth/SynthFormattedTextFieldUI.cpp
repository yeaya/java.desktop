#include <javax/swing/plaf/synth/SynthFormattedTextFieldUI.h>

#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthFormattedTextFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthFormattedTextFieldUI::*)()>(&SynthFormattedTextFieldUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthFormattedTextFieldUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthFormattedTextFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthFormattedTextFieldUI",
	"javax.swing.plaf.synth.SynthTextFieldUI",
	nullptr,
	nullptr,
	_SynthFormattedTextFieldUI_MethodInfo_
};

$Object* allocate$SynthFormattedTextFieldUI($Class* clazz) {
	return $of($alloc(SynthFormattedTextFieldUI));
}

void SynthFormattedTextFieldUI::init$() {
	$SynthTextFieldUI::init$();
}

$ComponentUI* SynthFormattedTextFieldUI::createUI($JComponent* c) {
	$init(SynthFormattedTextFieldUI);
	return $new(SynthFormattedTextFieldUI);
}

$String* SynthFormattedTextFieldUI::getPropertyPrefix() {
	return "FormattedTextField"_s;
}

void SynthFormattedTextFieldUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintFormattedTextFieldBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthFormattedTextFieldUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintFormattedTextFieldBorder(context, g, x, y, w, h);
}

SynthFormattedTextFieldUI::SynthFormattedTextFieldUI() {
}

$Class* SynthFormattedTextFieldUI::load$($String* name, bool initialize) {
	$loadClass(SynthFormattedTextFieldUI, name, initialize, &_SynthFormattedTextFieldUI_ClassInfo_, allocate$SynthFormattedTextFieldUI);
	return class$;
}

$Class* SynthFormattedTextFieldUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax