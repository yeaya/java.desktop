#include <javax/swing/plaf/basic/BasicTableHeaderUI$1.h>

#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableHeaderUI = ::javax::swing::plaf::TableHeaderUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTableHeaderUI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicTableHeaderUI$1::*)()>(&BasicTableHeaderUI$1::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"repaintHeader", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableHeaderUI$1::*)(Object$*)>(&BasicTableHeaderUI$1::repaintHeader))},
	{}
};

$EnclosingMethodInfo _BasicTableHeaderUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicTableHeaderUI",
	nullptr,
	nullptr
};

$InnerClassInfo _BasicTableHeaderUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableHeaderUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicTableHeaderUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableHeaderUI$1",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	nullptr,
	_BasicTableHeaderUI$1_MethodInfo_,
	nullptr,
	&_BasicTableHeaderUI$1_EnclosingMethodInfo_,
	_BasicTableHeaderUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableHeaderUI"
};

$Object* allocate$BasicTableHeaderUI$1($Class* clazz) {
	return $of($alloc(BasicTableHeaderUI$1));
}

void BasicTableHeaderUI$1::init$() {
}

void BasicTableHeaderUI$1::focusGained($FocusEvent* e) {
	repaintHeader($($nc(e)->getSource()));
}

void BasicTableHeaderUI$1::focusLost($FocusEvent* e) {
	repaintHeader($($nc(e)->getSource()));
}

void BasicTableHeaderUI$1::repaintHeader(Object$* source) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JTableHeader, source)) {
		$var($JTableHeader, th, $cast($JTableHeader, source));
		$load($BasicTableHeaderUI);
		$var($BasicTableHeaderUI, ui, $cast($BasicTableHeaderUI, $BasicLookAndFeel::getUIOfType($($nc(th)->getUI()), $BasicTableHeaderUI::class$)));
		if (ui == nullptr) {
			return;
		}
		$nc(th)->repaint($(th->getHeaderRect($nc(ui)->getSelectedColumnIndex())));
	}
}

BasicTableHeaderUI$1::BasicTableHeaderUI$1() {
}

$Class* BasicTableHeaderUI$1::load$($String* name, bool initialize) {
	$loadClass(BasicTableHeaderUI$1, name, initialize, &_BasicTableHeaderUI$1_ClassInfo_, allocate$BasicTableHeaderUI$1);
	return class$;
}

$Class* BasicTableHeaderUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax