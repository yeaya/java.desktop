#include <com/sun/java/swing/plaf/motif/MotifPasswordFieldUI.h>

#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicPasswordFieldUI.h>
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
using $BasicPasswordFieldUI = ::javax::swing::plaf::basic::BasicPasswordFieldUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifPasswordFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifPasswordFieldUI::*)()>(&MotifPasswordFieldUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifPasswordFieldUI::createUI))},
	{}
};

$ClassInfo _MotifPasswordFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifPasswordFieldUI",
	"javax.swing.plaf.basic.BasicPasswordFieldUI",
	nullptr,
	nullptr,
	_MotifPasswordFieldUI_MethodInfo_
};

$Object* allocate$MotifPasswordFieldUI($Class* clazz) {
	return $of($alloc(MotifPasswordFieldUI));
}

void MotifPasswordFieldUI::init$() {
	$BasicPasswordFieldUI::init$();
}

$ComponentUI* MotifPasswordFieldUI::createUI($JComponent* c) {
	$init(MotifPasswordFieldUI);
	return $new(MotifPasswordFieldUI);
}

$Caret* MotifPasswordFieldUI::createCaret() {
	return $MotifTextUI::createCaret();
}

MotifPasswordFieldUI::MotifPasswordFieldUI() {
}

$Class* MotifPasswordFieldUI::load$($String* name, bool initialize) {
	$loadClass(MotifPasswordFieldUI, name, initialize, &_MotifPasswordFieldUI_ClassInfo_, allocate$MotifPasswordFieldUI);
	return class$;
}

$Class* MotifPasswordFieldUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com