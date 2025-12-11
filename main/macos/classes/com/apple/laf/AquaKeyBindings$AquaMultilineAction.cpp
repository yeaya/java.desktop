#include <com/apple/laf/AquaKeyBindings$AquaMultilineAction.h>

#include <com/apple/laf/AquaKeyBindings.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaKeyBindings$AquaMultilineAction_FieldInfo_[] = {
	{"targetActionName", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaKeyBindings$AquaMultilineAction, targetActionName)},
	{"proxyActionName", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaKeyBindings$AquaMultilineAction, proxyActionName)},
	{}
};

$MethodInfo _AquaKeyBindings$AquaMultilineAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaKeyBindings$AquaMultilineAction::*)($String*,$String*,$String*)>(&AquaKeyBindings$AquaMultilineAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaKeyBindings$AquaMultilineAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaKeyBindings$AquaMultilineAction", "com.apple.laf.AquaKeyBindings", "AquaMultilineAction", $STATIC},
	{}
};

$ClassInfo _AquaKeyBindings$AquaMultilineAction_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaKeyBindings$AquaMultilineAction",
	"javax.swing.text.TextAction",
	nullptr,
	_AquaKeyBindings$AquaMultilineAction_FieldInfo_,
	_AquaKeyBindings$AquaMultilineAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaKeyBindings$AquaMultilineAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaKeyBindings"
};

$Object* allocate$AquaKeyBindings$AquaMultilineAction($Class* clazz) {
	return $of($alloc(AquaKeyBindings$AquaMultilineAction));
}

void AquaKeyBindings$AquaMultilineAction::init$($String* actionName, $String* targetActionName, $String* proxyActionName) {
	$TextAction::init$(actionName);
	$set(this, targetActionName, targetActionName);
	$set(this, proxyActionName, proxyActionName);
}

void AquaKeyBindings$AquaMultilineAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, c, getTextComponent(e));
	$var($ActionMap, actionMap, $nc(c)->getActionMap());
	$var($Action, targetAction, $nc(actionMap)->get(this->targetActionName));
	int32_t startPosition = c->getCaretPosition();
	$nc(targetAction)->actionPerformed(e);
	if (startPosition != c->getCaretPosition()) {
		return;
	}
	$var($Action, proxyAction, actionMap->get(this->proxyActionName));
	$nc(proxyAction)->actionPerformed(e);
}

AquaKeyBindings$AquaMultilineAction::AquaKeyBindings$AquaMultilineAction() {
}

$Class* AquaKeyBindings$AquaMultilineAction::load$($String* name, bool initialize) {
	$loadClass(AquaKeyBindings$AquaMultilineAction, name, initialize, &_AquaKeyBindings$AquaMultilineAction_ClassInfo_, allocate$AquaKeyBindings$AquaMultilineAction);
	return class$;
}

$Class* AquaKeyBindings$AquaMultilineAction::class$ = nullptr;

		} // laf
	} // apple
} // com