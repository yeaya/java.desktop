#include <javax/swing/text/DefaultEditorKit$DefaultKeyTypedAction.h>

#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _DefaultEditorKit$DefaultKeyTypedAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultEditorKit$DefaultKeyTypedAction::*)()>(&DefaultEditorKit$DefaultKeyTypedAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultEditorKit$DefaultKeyTypedAction_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultEditorKit$DefaultKeyTypedAction", "javax.swing.text.DefaultEditorKit", "DefaultKeyTypedAction", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultEditorKit$DefaultKeyTypedAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultEditorKit$DefaultKeyTypedAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_DefaultEditorKit$DefaultKeyTypedAction_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultEditorKit$DefaultKeyTypedAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultEditorKit"
};

$Object* allocate$DefaultEditorKit$DefaultKeyTypedAction($Class* clazz) {
	return $of($alloc(DefaultEditorKit$DefaultKeyTypedAction));
}

void DefaultEditorKit$DefaultKeyTypedAction::init$() {
	$TextAction::init$("default-typed"_s);
}

void DefaultEditorKit$DefaultKeyTypedAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getTextComponent(e));
	if ((target != nullptr) && (e != nullptr)) {
		bool var$0 = (!target->isEditable());
		if (var$0 || (!target->isEnabled())) {
			return;
		}
		$var($String, content, e->getActionCommand());
		int32_t mod = e->getModifiers();
		if ((content != nullptr) && (content->length() > 0)) {
			bool isPrintableMask = true;
			$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
			if ($instanceOf($SunToolkit, tk)) {
				isPrintableMask = $nc(($cast($SunToolkit, tk)))->isPrintableCharacterModifiersMask(mod);
			}
			char16_t c = content->charAt(0);
			if ((isPrintableMask && (c >= 32) && (c != 127)) || (!isPrintableMask && (c >= 8204) && (c <= 8205))) {
				target->replaceSelection(content);
			}
		}
	}
}

DefaultEditorKit$DefaultKeyTypedAction::DefaultEditorKit$DefaultKeyTypedAction() {
}

$Class* DefaultEditorKit$DefaultKeyTypedAction::load$($String* name, bool initialize) {
	$loadClass(DefaultEditorKit$DefaultKeyTypedAction, name, initialize, &_DefaultEditorKit$DefaultKeyTypedAction_ClassInfo_, allocate$DefaultEditorKit$DefaultKeyTypedAction);
	return class$;
}

$Class* DefaultEditorKit$DefaultKeyTypedAction::class$ = nullptr;

		} // text
	} // swing
} // javax