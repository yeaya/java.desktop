#include <javax/swing/plaf/basic/BasicComboPopup$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef NOBUTTON

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboPopup$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboPopup$1, this$0)},
	{}
};

$MethodInfo _BasicComboPopup$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboPopup;Ljavax/swing/ListModel;)V", nullptr, 0, $method(static_cast<void(BasicComboPopup$1::*)($BasicComboPopup*,$ListModel*)>(&BasicComboPopup$1::init$))},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicComboPopup$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicComboPopup",
	"createList",
	"()Ljavax/swing/JList;"
};

$InnerClassInfo _BasicComboPopup$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboPopup$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicComboPopup$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboPopup$1",
	"javax.swing.JList",
	nullptr,
	_BasicComboPopup$1_FieldInfo_,
	_BasicComboPopup$1_MethodInfo_,
	"Ljavax/swing/JList<Ljava/lang/Object;>;",
	&_BasicComboPopup$1_EnclosingMethodInfo_,
	_BasicComboPopup$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboPopup"
};

$Object* allocate$BasicComboPopup$1($Class* clazz) {
	return $of($alloc(BasicComboPopup$1));
}

void BasicComboPopup$1::init$($BasicComboPopup* this$0, $ListModel* dataModel) {
	$set(this, this$0, this$0);
	$JList::init$(dataModel);
}

void BasicComboPopup$1::processMouseEvent($MouseEvent* e$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($MouseEvent, e, e$renamed);
	if ($BasicGraphicsUtils::isMenuShortcutKeyDown(e)) {
		$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
		$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
		int32_t var$1 = e->getID();
		int64_t var$2 = e->getWhen();
		int32_t var$4 = e->getModifiersEx();
		int32_t var$3 = var$4 ^ $nc(toolkit)->getMenuShortcutKeyMaskEx();
		int32_t var$5 = e->getX();
		int32_t var$6 = e->getY();
		int32_t var$7 = e->getXOnScreen();
		int32_t var$8 = e->getYOnScreen();
		int32_t var$9 = e->getClickCount();
		$var($MouseEvent, newEvent, $new($MouseEvent, var$0, var$1, var$2, var$3, var$5, var$6, var$7, var$8, var$9, e->isPopupTrigger(), $MouseEvent::NOBUTTON));
		$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
		$nc(meAccessor)->setCausedByTouchEvent(newEvent, meAccessor->isCausedByTouchEvent(e));
		$assign(e, newEvent);
	}
	$JList::processMouseEvent(e);
}

BasicComboPopup$1::BasicComboPopup$1() {
}

$Class* BasicComboPopup$1::load$($String* name, bool initialize) {
	$loadClass(BasicComboPopup$1, name, initialize, &_BasicComboPopup$1_ClassInfo_, allocate$BasicComboPopup$1);
	return class$;
}

$Class* BasicComboPopup$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax