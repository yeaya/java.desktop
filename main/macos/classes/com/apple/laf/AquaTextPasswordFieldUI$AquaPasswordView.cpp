#include <com/apple/laf/AquaTextPasswordFieldUI$AquaPasswordView.h>

#include <com/apple/laf/AquaTextPasswordFieldUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PasswordView.h>
#include <jcpp.h>

using $AquaTextPasswordFieldUI = ::com::apple::laf::AquaTextPasswordFieldUI;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $Element = ::javax::swing::text::Element;
using $PasswordView = ::javax::swing::text::PasswordView;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTextPasswordFieldUI$AquaPasswordView_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTextPasswordFieldUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTextPasswordFieldUI$AquaPasswordView, this$0)},
	{}
};

$MethodInfo _AquaTextPasswordFieldUI$AquaPasswordView_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTextPasswordFieldUI;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTextPasswordFieldUI$AquaPasswordView::*)($AquaTextPasswordFieldUI*,$Element*)>(&AquaTextPasswordFieldUI$AquaPasswordView::init$))},
	{"setupDefaultEchoCharacter", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaTextPasswordFieldUI$AquaPasswordView_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextPasswordFieldUI$AquaPasswordView", "com.apple.laf.AquaTextPasswordFieldUI", "AquaPasswordView", $PROTECTED},
	{}
};

$ClassInfo _AquaTextPasswordFieldUI$AquaPasswordView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTextPasswordFieldUI$AquaPasswordView",
	"javax.swing.text.PasswordView",
	nullptr,
	_AquaTextPasswordFieldUI$AquaPasswordView_FieldInfo_,
	_AquaTextPasswordFieldUI$AquaPasswordView_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTextPasswordFieldUI$AquaPasswordView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextPasswordFieldUI"
};

$Object* allocate$AquaTextPasswordFieldUI$AquaPasswordView($Class* clazz) {
	return $of($alloc(AquaTextPasswordFieldUI$AquaPasswordView));
}

void AquaTextPasswordFieldUI$AquaPasswordView::init$($AquaTextPasswordFieldUI* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$PasswordView::init$(elem);
	setupDefaultEchoCharacter();
}

void AquaTextPasswordFieldUI$AquaPasswordView::setupDefaultEchoCharacter() {
	$useLocalCurrentObjectStackCache();
	$var($Character, echoChar, $cast($Character, $nc($($UIManager::getDefaults()))->get($$str({$(this->this$0->getPropertyPrefix()), ".echoChar"_s}))));
	if (echoChar != nullptr) {
		$LookAndFeel::installProperty($($AquaTextPasswordFieldUI::access$000(this->this$0)), "echoChar"_s, echoChar);
	}
}

AquaTextPasswordFieldUI$AquaPasswordView::AquaTextPasswordFieldUI$AquaPasswordView() {
}

$Class* AquaTextPasswordFieldUI$AquaPasswordView::load$($String* name, bool initialize) {
	$loadClass(AquaTextPasswordFieldUI$AquaPasswordView, name, initialize, &_AquaTextPasswordFieldUI$AquaPasswordView_ClassInfo_, allocate$AquaTextPasswordFieldUI$AquaPasswordView);
	return class$;
}

$Class* AquaTextPasswordFieldUI$AquaPasswordView::class$ = nullptr;

		} // laf
	} // apple
} // com