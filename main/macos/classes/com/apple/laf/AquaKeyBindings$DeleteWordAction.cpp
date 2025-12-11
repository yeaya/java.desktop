#include <com/apple/laf/AquaKeyBindings$DeleteWordAction.h>

#include <com/apple/laf/AquaKeyBindings.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/Utilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaKeyBindings$DeleteWordAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaKeyBindings$DeleteWordAction::*)($String*)>(&AquaKeyBindings$DeleteWordAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"getEnd", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/text/Element;I)I", nullptr, $ABSTRACT, nullptr, "javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _AquaKeyBindings$DeleteWordAction_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaKeyBindings$DeleteWordAction", "com.apple.laf.AquaKeyBindings", "DeleteWordAction", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaKeyBindings$DeleteWordAction_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaKeyBindings$DeleteWordAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_AquaKeyBindings$DeleteWordAction_MethodInfo_,
	nullptr,
	nullptr,
	_AquaKeyBindings$DeleteWordAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaKeyBindings"
};

$Object* allocate$AquaKeyBindings$DeleteWordAction($Class* clazz) {
	return $of($alloc(AquaKeyBindings$DeleteWordAction));
}

void AquaKeyBindings$DeleteWordAction::init$($String* name) {
	$TextAction::init$(name);
}

void AquaKeyBindings$DeleteWordAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (e == nullptr) {
		return;
	}
	$var($JTextComponent, target, getTextComponent(e));
	if (target == nullptr) {
		return;
	}
	bool var$0 = !$nc(target)->isEditable();
	if (var$0 || !$nc(target)->isEnabled()) {
		$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
		return;
	}
	try {
		int32_t start = $nc(target)->getSelectionStart();
		$var($Element, line, $Utilities::getParagraphElement(target, start));
		int32_t end = getEnd(target, line, start);
		int32_t offs = $Math::min(start, end);
		int32_t len = $Math::abs(end - start);
		if (offs >= 0) {
			$nc($(target->getDocument()))->remove(offs, len);
			return;
		}
	} catch ($BadLocationException& ignore) {
	}
	$nc($($UIManager::getLookAndFeel()))->provideErrorFeedback(target);
}

AquaKeyBindings$DeleteWordAction::AquaKeyBindings$DeleteWordAction() {
}

$Class* AquaKeyBindings$DeleteWordAction::load$($String* name, bool initialize) {
	$loadClass(AquaKeyBindings$DeleteWordAction, name, initialize, &_AquaKeyBindings$DeleteWordAction_ClassInfo_, allocate$AquaKeyBindings$DeleteWordAction);
	return class$;
}

$Class* AquaKeyBindings$DeleteWordAction::class$ = nullptr;

		} // laf
	} // apple
} // com