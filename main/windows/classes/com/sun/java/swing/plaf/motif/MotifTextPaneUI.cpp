#include <com/sun/java/swing/plaf/motif/MotifTextPaneUI.h>

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
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <jcpp.h>

using $MotifTextUI = ::com::sun::java::swing::plaf::motif::MotifTextUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $BasicTextPaneUI = ::javax::swing::plaf::basic::BasicTextPaneUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifTextPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTextPaneUI::*)()>(&MotifTextPaneUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifTextPaneUI::createUI))},
	{}
};

$ClassInfo _MotifTextPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTextPaneUI",
	"javax.swing.plaf.basic.BasicTextPaneUI",
	nullptr,
	nullptr,
	_MotifTextPaneUI_MethodInfo_
};

$Object* allocate$MotifTextPaneUI($Class* clazz) {
	return $of($alloc(MotifTextPaneUI));
}

void MotifTextPaneUI::init$() {
	$BasicTextPaneUI::init$();
}

$ComponentUI* MotifTextPaneUI::createUI($JComponent* c) {
	$init(MotifTextPaneUI);
	return $new(MotifTextPaneUI);
}

$Caret* MotifTextPaneUI::createCaret() {
	return $MotifTextUI::createCaret();
}

MotifTextPaneUI::MotifTextPaneUI() {
}

$Class* MotifTextPaneUI::load$($String* name, bool initialize) {
	$loadClass(MotifTextPaneUI, name, initialize, &_MotifTextPaneUI_ClassInfo_, allocate$MotifTextPaneUI);
	return class$;
}

$Class* MotifTextPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com