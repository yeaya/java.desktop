#include <javax/swing/plaf/basic/BasicPasswordFieldUI.h>

#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FieldView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PasswordView.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Element = ::javax::swing::text::Element;
using $FieldView = ::javax::swing::text::FieldView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $PasswordView = ::javax::swing::text::PasswordView;
using $PlainView = ::javax::swing::text::PlainView;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicPasswordFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicPasswordFieldUI::*)()>(&BasicPasswordFieldUI::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, 0},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicPasswordFieldUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BasicPasswordFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicPasswordFieldUI",
	"javax.swing.plaf.basic.BasicTextFieldUI",
	nullptr,
	nullptr,
	_BasicPasswordFieldUI_MethodInfo_
};

$Object* allocate$BasicPasswordFieldUI($Class* clazz) {
	return $of($alloc(BasicPasswordFieldUI));
}

void BasicPasswordFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* BasicPasswordFieldUI::createUI($JComponent* c) {
	$init(BasicPasswordFieldUI);
	return $new(BasicPasswordFieldUI);
}

$String* BasicPasswordFieldUI::getPropertyPrefix() {
	return "PasswordField"_s;
}

void BasicPasswordFieldUI::installDefaults() {
	$BasicTextFieldUI::installDefaults();
	$var($String, prefix, getPropertyPrefix());
	$var($Character, echoChar, $cast($Character, $nc($($UIManager::getDefaults()))->get($$str({prefix, ".echoChar"_s}))));
	if (echoChar != nullptr) {
		$LookAndFeel::installProperty($(getComponent()), "echoChar"_s, echoChar);
	}
}

$View* BasicPasswordFieldUI::create($Element* elem) {
	return $new($PasswordView, elem);
}

$ActionMap* BasicPasswordFieldUI::createActionMap() {
	$var($ActionMap, map, $BasicTextFieldUI::createActionMap());
	$init($DefaultEditorKit);
	if ($nc(map)->get($DefaultEditorKit::selectWordAction) != nullptr) {
		$var($Action, a, map->get($DefaultEditorKit::selectLineAction));
		if (a != nullptr) {
			map->remove($DefaultEditorKit::selectWordAction);
			map->put($DefaultEditorKit::selectWordAction, a);
		}
	}
	return map;
}

BasicPasswordFieldUI::BasicPasswordFieldUI() {
}

$Class* BasicPasswordFieldUI::load$($String* name, bool initialize) {
	$loadClass(BasicPasswordFieldUI, name, initialize, &_BasicPasswordFieldUI_ClassInfo_, allocate$BasicPasswordFieldUI);
	return class$;
}

$Class* BasicPasswordFieldUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax