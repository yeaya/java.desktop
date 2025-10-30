#include <com/sun/java/swing/plaf/motif/MotifTextAreaUI.h>

#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $MotifTextUI = ::com::sun::java::swing::plaf::motif::MotifTextUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextAreaUI = ::javax::swing::plaf::basic::BasicTextAreaUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifTextAreaUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTextAreaUI::*)()>(&MotifTextAreaUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifTextAreaUI::createUI))},
	{}
};

$ClassInfo _MotifTextAreaUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTextAreaUI",
	"javax.swing.plaf.basic.BasicTextAreaUI",
	nullptr,
	nullptr,
	_MotifTextAreaUI_MethodInfo_
};

$Object* allocate$MotifTextAreaUI($Class* clazz) {
	return $of($alloc(MotifTextAreaUI));
}

void MotifTextAreaUI::init$() {
	$BasicTextAreaUI::init$();
}

$ComponentUI* MotifTextAreaUI::createUI($JComponent* ta) {
	$init(MotifTextAreaUI);
	return $new(MotifTextAreaUI);
}

$Caret* MotifTextAreaUI::createCaret() {
	return $MotifTextUI::createCaret();
}

MotifTextAreaUI::MotifTextAreaUI() {
}

$Class* MotifTextAreaUI::load$($String* name, bool initialize) {
	$loadClass(MotifTextAreaUI, name, initialize, &_MotifTextAreaUI_ClassInfo_, allocate$MotifTextAreaUI);
	return class$;
}

$Class* MotifTextAreaUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com