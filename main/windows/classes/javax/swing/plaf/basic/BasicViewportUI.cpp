#include <javax/swing/plaf/basic/BasicViewportUI.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ViewportUI.h>
#include <jcpp.h>

#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ViewportUI = ::javax::swing::plaf::ViewportUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicViewportUI_FieldInfo_[] = {
	{"viewportUI", "Ljavax/swing/plaf/ViewportUI;", nullptr, $PRIVATE | $STATIC, $staticField(BasicViewportUI, viewportUI)},
	{}
};

$MethodInfo _BasicViewportUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicViewportUI::*)()>(&BasicViewportUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicViewportUI::createUI))},
	{"installDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicViewportUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicViewportUI",
	"javax.swing.plaf.ViewportUI",
	nullptr,
	_BasicViewportUI_FieldInfo_,
	_BasicViewportUI_MethodInfo_
};

$Object* allocate$BasicViewportUI($Class* clazz) {
	return $of($alloc(BasicViewportUI));
}

$ViewportUI* BasicViewportUI::viewportUI = nullptr;

void BasicViewportUI::init$() {
	$ViewportUI::init$();
}

$ComponentUI* BasicViewportUI::createUI($JComponent* c) {
	$init(BasicViewportUI);
	if (BasicViewportUI::viewportUI == nullptr) {
		$assignStatic(BasicViewportUI::viewportUI, $new(BasicViewportUI));
	}
	return BasicViewportUI::viewportUI;
}

void BasicViewportUI::installUI($JComponent* c) {
	$ViewportUI::installUI(c);
	installDefaults(c);
}

void BasicViewportUI::uninstallUI($JComponent* c) {
	uninstallDefaults(c);
	$ViewportUI::uninstallUI(c);
}

void BasicViewportUI::installDefaults($JComponent* c) {
	$LookAndFeel::installColorsAndFont(c, "Viewport.background"_s, "Viewport.foreground"_s, "Viewport.font"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(c, "opaque"_s, $Boolean::TRUE);
}

void BasicViewportUI::uninstallDefaults($JComponent* c) {
}

BasicViewportUI::BasicViewportUI() {
}

$Class* BasicViewportUI::load$($String* name, bool initialize) {
	$loadClass(BasicViewportUI, name, initialize, &_BasicViewportUI_ClassInfo_, allocate$BasicViewportUI);
	return class$;
}

$Class* BasicViewportUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax