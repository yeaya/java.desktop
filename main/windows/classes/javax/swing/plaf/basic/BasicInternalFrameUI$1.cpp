#include <javax/swing/plaf/basic/BasicInternalFrameUI$1.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicInternalFrameUI$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicInternalFrameUI$1::*)($String*)>(&BasicInternalFrameUI$1::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicInternalFrameUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicInternalFrameUI",
	"loadActionMap",
	"(Ljavax/swing/plaf/basic/LazyActionMap;)V"
};

$InnerClassInfo _BasicInternalFrameUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicInternalFrameUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameUI$1",
	"sun.swing.UIAction",
	nullptr,
	nullptr,
	_BasicInternalFrameUI$1_MethodInfo_,
	nullptr,
	&_BasicInternalFrameUI$1_EnclosingMethodInfo_,
	_BasicInternalFrameUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameUI"
};

$Object* allocate$BasicInternalFrameUI$1($Class* clazz) {
	return $of($alloc(BasicInternalFrameUI$1));
}

void BasicInternalFrameUI$1::init$($String* name) {
	$UIAction::init$(name);
}

void BasicInternalFrameUI$1::actionPerformed($ActionEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame, iFrame, $cast($JInternalFrame, $nc(evt)->getSource()));
	if ($instanceOf($BasicInternalFrameUI, $($cast($InternalFrameUI, $nc(iFrame)->getUI())))) {
		$var($JComponent, comp, $nc(($cast($BasicInternalFrameUI, $($cast($InternalFrameUI, iFrame->getUI())))))->getNorthPane());
		if ($instanceOf($BasicInternalFrameTitlePane, comp)) {
			$nc(($cast($BasicInternalFrameTitlePane, comp)))->showSystemMenu();
		}
	}
}

bool BasicInternalFrameUI$1::accept(Object$* sender) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JInternalFrame, sender)) {
		$var($JInternalFrame, iFrame, $cast($JInternalFrame, sender));
		if ($instanceOf($BasicInternalFrameUI, $($cast($InternalFrameUI, $nc(iFrame)->getUI())))) {
			return $nc(($cast($BasicInternalFrameUI, $($cast($InternalFrameUI, iFrame->getUI())))))->isKeyBindingActive();
		}
	}
	return false;
}

BasicInternalFrameUI$1::BasicInternalFrameUI$1() {
}

$Class* BasicInternalFrameUI$1::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameUI$1, name, initialize, &_BasicInternalFrameUI$1_ClassInfo_, allocate$BasicInternalFrameUI$1);
	return class$;
}

$Class* BasicInternalFrameUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax