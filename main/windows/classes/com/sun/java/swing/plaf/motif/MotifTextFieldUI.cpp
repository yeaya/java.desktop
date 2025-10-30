#include <com/sun/java/swing/plaf/motif/MotifTextFieldUI.h>

#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $MotifTextUI = ::com::sun::java::swing::plaf::motif::MotifTextUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifTextFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTextFieldUI::*)()>(&MotifTextFieldUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifTextFieldUI::createUI))},
	{}
};

$ClassInfo _MotifTextFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTextFieldUI",
	"javax.swing.plaf.basic.BasicTextFieldUI",
	nullptr,
	nullptr,
	_MotifTextFieldUI_MethodInfo_
};

$Object* allocate$MotifTextFieldUI($Class* clazz) {
	return $of($alloc(MotifTextFieldUI));
}

void MotifTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* MotifTextFieldUI::createUI($JComponent* c) {
	$init(MotifTextFieldUI);
	return $new(MotifTextFieldUI);
}

$Caret* MotifTextFieldUI::createCaret() {
	return $MotifTextUI::createCaret();
}

MotifTextFieldUI::MotifTextFieldUI() {
}

$Class* MotifTextFieldUI::load$($String* name, bool initialize) {
	$loadClass(MotifTextFieldUI, name, initialize, &_MotifTextFieldUI_ClassInfo_, allocate$MotifTextFieldUI);
	return class$;
}

$Class* MotifTextFieldUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com