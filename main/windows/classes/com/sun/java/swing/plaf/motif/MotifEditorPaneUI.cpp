#include <com/sun/java/swing/plaf/motif/MotifEditorPaneUI.h>

#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
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
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifEditorPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifEditorPaneUI::*)()>(&MotifEditorPaneUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifEditorPaneUI::createUI))},
	{}
};

$ClassInfo _MotifEditorPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifEditorPaneUI",
	"javax.swing.plaf.basic.BasicEditorPaneUI",
	nullptr,
	nullptr,
	_MotifEditorPaneUI_MethodInfo_
};

$Object* allocate$MotifEditorPaneUI($Class* clazz) {
	return $of($alloc(MotifEditorPaneUI));
}

void MotifEditorPaneUI::init$() {
	$BasicEditorPaneUI::init$();
}

$ComponentUI* MotifEditorPaneUI::createUI($JComponent* c) {
	$init(MotifEditorPaneUI);
	return $new(MotifEditorPaneUI);
}

$Caret* MotifEditorPaneUI::createCaret() {
	return $MotifTextUI::createCaret();
}

MotifEditorPaneUI::MotifEditorPaneUI() {
}

$Class* MotifEditorPaneUI::load$($String* name, bool initialize) {
	$loadClass(MotifEditorPaneUI, name, initialize, &_MotifEditorPaneUI_ClassInfo_, allocate$MotifEditorPaneUI);
	return class$;
}

$Class* MotifEditorPaneUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com