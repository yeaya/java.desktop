#include <javax/swing/plaf/basic/BasicOptionPaneUI$Actions.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef CLOSE
#undef CLOSED_OPTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI$Actions_FieldInfo_[] = {
	{"CLOSE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicOptionPaneUI$Actions, CLOSE)},
	{}
};

$MethodInfo _BasicOptionPaneUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicOptionPaneUI$Actions::*)($String*)>(&BasicOptionPaneUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicOptionPaneUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$Actions", "javax.swing.plaf.basic.BasicOptionPaneUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicOptionPaneUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicOptionPaneUI$Actions_FieldInfo_,
	_BasicOptionPaneUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicOptionPaneUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI"
};

$Object* allocate$BasicOptionPaneUI$Actions($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI$Actions));
}

$String* BasicOptionPaneUI$Actions::CLOSE = nullptr;

void BasicOptionPaneUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicOptionPaneUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (getName() == BasicOptionPaneUI$Actions::CLOSE) {
		$var($JOptionPane, optionPane, $cast($JOptionPane, $nc(e)->getSource()));
		$nc(optionPane)->setValue($($Integer::valueOf($JOptionPane::CLOSED_OPTION)));
	}
}

BasicOptionPaneUI$Actions::BasicOptionPaneUI$Actions() {
}

void clinit$BasicOptionPaneUI$Actions($Class* class$) {
	$assignStatic(BasicOptionPaneUI$Actions::CLOSE, "close"_s);
}

$Class* BasicOptionPaneUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI$Actions, name, initialize, &_BasicOptionPaneUI$Actions_ClassInfo_, clinit$BasicOptionPaneUI$Actions, allocate$BasicOptionPaneUI$Actions);
	return class$;
}

$Class* BasicOptionPaneUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax