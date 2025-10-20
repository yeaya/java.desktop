#include <javax/swing/plaf/synth/SynthPasswordFieldUI.h>

#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FieldView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PasswordView.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Element = ::javax::swing::text::Element;
using $FieldView = ::javax::swing::text::FieldView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $PasswordView = ::javax::swing::text::PasswordView;
using $PlainView = ::javax::swing::text::PlainView;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthPasswordFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthPasswordFieldUI::*)()>(&SynthPasswordFieldUI::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthPasswordFieldUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthPasswordFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthPasswordFieldUI",
	"javax.swing.plaf.synth.SynthTextFieldUI",
	nullptr,
	nullptr,
	_SynthPasswordFieldUI_MethodInfo_
};

$Object* allocate$SynthPasswordFieldUI($Class* clazz) {
	return $of($alloc(SynthPasswordFieldUI));
}

void SynthPasswordFieldUI::init$() {
	$SynthTextFieldUI::init$();
}

$ComponentUI* SynthPasswordFieldUI::createUI($JComponent* c) {
	$init(SynthPasswordFieldUI);
	return $new(SynthPasswordFieldUI);
}

$String* SynthPasswordFieldUI::getPropertyPrefix() {
	return "PasswordField"_s;
}

$View* SynthPasswordFieldUI::create($Element* elem) {
	return $new($PasswordView, elem);
}

void SynthPasswordFieldUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintPasswordFieldBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthPasswordFieldUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintPasswordFieldBorder(context, g, x, y, w, h);
}

void SynthPasswordFieldUI::installKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	$SynthTextFieldUI::installKeyboardActions();
	$var($ActionMap, map, $SwingUtilities::getUIActionMap($(getComponent())));
	$init($DefaultEditorKit);
	if (map != nullptr && map->get($DefaultEditorKit::selectWordAction) != nullptr) {
		$var($Action, a, map->get($DefaultEditorKit::selectLineAction));
		if (a != nullptr) {
			map->put($DefaultEditorKit::selectWordAction, a);
		}
	}
}

SynthPasswordFieldUI::SynthPasswordFieldUI() {
}

$Class* SynthPasswordFieldUI::load$($String* name, bool initialize) {
	$loadClass(SynthPasswordFieldUI, name, initialize, &_SynthPasswordFieldUI_ClassInfo_, allocate$SynthPasswordFieldUI);
	return class$;
}

$Class* SynthPasswordFieldUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax