#include <com/apple/laf/AquaComboBoxUI$AquaCustomComboTextField.h>

#include <com/apple/laf/AquaComboBoxUI$AquaCustomComboTextField$1.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$AquaCustomComboTextField$1 = ::com::apple::laf::AquaComboBoxUI$AquaCustomComboTextField$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JTextField = ::javax::swing::JTextField;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI$AquaCustomComboTextField_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$AquaCustomComboTextField, this$0)},
	{}
};

$MethodInfo _AquaComboBoxUI$AquaCustomComboTextField_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaComboBoxUI$AquaCustomComboTextField::*)($AquaComboBoxUI*)>(&AquaComboBoxUI$AquaCustomComboTextField::init$))},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaComboBoxUI$AquaCustomComboTextField_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField", "com.apple.laf.AquaComboBoxUI", "AquaCustomComboTextField", 0},
	{"com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxUI$AquaCustomComboTextField_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField",
	"javax.swing.JTextField",
	nullptr,
	_AquaComboBoxUI$AquaCustomComboTextField_FieldInfo_,
	_AquaComboBoxUI$AquaCustomComboTextField_MethodInfo_,
	nullptr,
	nullptr,
	_AquaComboBoxUI$AquaCustomComboTextField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI"
};

$Object* allocate$AquaComboBoxUI$AquaCustomComboTextField($Class* clazz) {
	return $of($alloc(AquaComboBoxUI$AquaCustomComboTextField));
}

void AquaComboBoxUI$AquaCustomComboTextField::init$($AquaComboBoxUI* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JTextField::init$();
	$var($InputMap, inputMap, getInputMap());
	$nc(inputMap)->put($($KeyStroke::getKeyStroke("DOWN"_s)), this$0->highlightNextAction);
	inputMap->put($($KeyStroke::getKeyStroke("KP_DOWN"_s)), this$0->highlightNextAction);
	inputMap->put($($KeyStroke::getKeyStroke("UP"_s)), this$0->highlightPreviousAction);
	inputMap->put($($KeyStroke::getKeyStroke("KP_UP"_s)), this$0->highlightPreviousAction);
	inputMap->put($($KeyStroke::getKeyStroke("HOME"_s)), this$0->highlightFirstAction);
	inputMap->put($($KeyStroke::getKeyStroke("END"_s)), this$0->highlightLastAction);
	inputMap->put($($KeyStroke::getKeyStroke("PAGE_UP"_s)), this$0->highlightPageUpAction);
	inputMap->put($($KeyStroke::getKeyStroke("PAGE_DOWN"_s)), this$0->highlightPageDownAction);
	$init($JTextField);
	$var($Action, action, $nc($(getActionMap()))->get($JTextField::notifyAction));
	$var($KeyStroke, var$0, $KeyStroke::getKeyStroke("ENTER"_s));
	inputMap->put(var$0, $$new($AquaComboBoxUI$AquaCustomComboTextField$1, this, this$0, action));
}

void AquaComboBoxUI$AquaCustomComboTextField::setText($String* s) {
	if ($nc($(getText()))->equals(s)) {
		return;
	}
	$JTextField::setText(s);
}

AquaComboBoxUI$AquaCustomComboTextField::AquaComboBoxUI$AquaCustomComboTextField() {
}

$Class* AquaComboBoxUI$AquaCustomComboTextField::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI$AquaCustomComboTextField, name, initialize, &_AquaComboBoxUI$AquaCustomComboTextField_ClassInfo_, allocate$AquaComboBoxUI$AquaCustomComboTextField);
	return class$;
}

$Class* AquaComboBoxUI$AquaCustomComboTextField::class$ = nullptr;

		} // laf
	} // apple
} // com