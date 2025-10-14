#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$2.h>

#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
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
#include <javax/swing/Action.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Action = ::javax::swing::Action;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifInternalFrameTitlePane$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MotifInternalFrameTitlePane$2, this$0)},
	{}
};

$MethodInfo _MotifInternalFrameTitlePane$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;)V", nullptr, 0, $method(static_cast<void(MotifInternalFrameTitlePane$2::*)($MotifInternalFrameTitlePane*)>(&MotifInternalFrameTitlePane$2::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifInternalFrameTitlePane$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane",
	"assembleSystemMenu",
	"()V"
};

$InnerClassInfo _MotifInternalFrameTitlePane$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifInternalFrameTitlePane$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$2",
	"java.awt.event.MouseAdapter",
	nullptr,
	_MotifInternalFrameTitlePane$2_FieldInfo_,
	_MotifInternalFrameTitlePane$2_MethodInfo_,
	nullptr,
	&_MotifInternalFrameTitlePane$2_EnclosingMethodInfo_,
	_MotifInternalFrameTitlePane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane"
};

$Object* allocate$MotifInternalFrameTitlePane$2($Class* clazz) {
	return $of($alloc(MotifInternalFrameTitlePane$2));
}

void MotifInternalFrameTitlePane$2::init$($MotifInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void MotifInternalFrameTitlePane$2::mousePressed($MouseEvent* evt) {
	try {
		$nc($($MotifInternalFrameTitlePane::access$000(this->this$0)))->setSelected(true);
	} catch ($PropertyVetoException&) {
		$catch();
	}
	if ($nc(evt)->getClickCount() == 2) {
		$var($Object, var$0, evt->getSource());
		$nc($($MotifInternalFrameTitlePane::access$100(this->this$0)))->actionPerformed($$new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, nullptr, evt->getWhen(), 0));
		$nc(this->this$0->systemMenu)->setVisible(false);
	}
}

MotifInternalFrameTitlePane$2::MotifInternalFrameTitlePane$2() {
}

$Class* MotifInternalFrameTitlePane$2::load$($String* name, bool initialize) {
	$loadClass(MotifInternalFrameTitlePane$2, name, initialize, &_MotifInternalFrameTitlePane$2_ClassInfo_, allocate$MotifInternalFrameTitlePane$2);
	return class$;
}

$Class* MotifInternalFrameTitlePane$2::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com