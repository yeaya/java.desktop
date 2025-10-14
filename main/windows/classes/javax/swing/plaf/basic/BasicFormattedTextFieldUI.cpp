#include <javax/swing/plaf/basic/BasicFormattedTextFieldUI.h>

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
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicFormattedTextFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicFormattedTextFieldUI::*)()>(&BasicFormattedTextFieldUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicFormattedTextFieldUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BasicFormattedTextFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFormattedTextFieldUI",
	"javax.swing.plaf.basic.BasicTextFieldUI",
	nullptr,
	nullptr,
	_BasicFormattedTextFieldUI_MethodInfo_
};

$Object* allocate$BasicFormattedTextFieldUI($Class* clazz) {
	return $of($alloc(BasicFormattedTextFieldUI));
}

void BasicFormattedTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* BasicFormattedTextFieldUI::createUI($JComponent* c) {
	$init(BasicFormattedTextFieldUI);
	return $new(BasicFormattedTextFieldUI);
}

$String* BasicFormattedTextFieldUI::getPropertyPrefix() {
	return "FormattedTextField"_s;
}

BasicFormattedTextFieldUI::BasicFormattedTextFieldUI() {
}

$Class* BasicFormattedTextFieldUI::load$($String* name, bool initialize) {
	$loadClass(BasicFormattedTextFieldUI, name, initialize, &_BasicFormattedTextFieldUI_ClassInfo_, allocate$BasicFormattedTextFieldUI);
	return class$;
}

$Class* BasicFormattedTextFieldUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax