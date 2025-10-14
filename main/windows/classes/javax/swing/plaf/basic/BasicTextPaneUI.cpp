#include <javax/swing/plaf/basic/BasicTextPaneUI.h>

#include <java/beans/PropertyChangeEvent.h>
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
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTextPaneUI::*)()>(&BasicTextPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicTextPaneUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BasicTextPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextPaneUI",
	"javax.swing.plaf.basic.BasicEditorPaneUI",
	nullptr,
	nullptr,
	_BasicTextPaneUI_MethodInfo_
};

$Object* allocate$BasicTextPaneUI($Class* clazz) {
	return $of($alloc(BasicTextPaneUI));
}

$ComponentUI* BasicTextPaneUI::createUI($JComponent* c) {
	$init(BasicTextPaneUI);
	return $new(BasicTextPaneUI);
}

void BasicTextPaneUI::init$() {
	$BasicEditorPaneUI::init$();
}

$String* BasicTextPaneUI::getPropertyPrefix() {
	return "TextPane"_s;
}

void BasicTextPaneUI::installUI($JComponent* c) {
	$BasicEditorPaneUI::installUI(c);
}

void BasicTextPaneUI::propertyChange($PropertyChangeEvent* evt) {
	$BasicEditorPaneUI::propertyChange(evt);
}

BasicTextPaneUI::BasicTextPaneUI() {
}

$Class* BasicTextPaneUI::load$($String* name, bool initialize) {
	$loadClass(BasicTextPaneUI, name, initialize, &_BasicTextPaneUI_ClassInfo_, allocate$BasicTextPaneUI);
	return class$;
}

$Class* BasicTextPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax