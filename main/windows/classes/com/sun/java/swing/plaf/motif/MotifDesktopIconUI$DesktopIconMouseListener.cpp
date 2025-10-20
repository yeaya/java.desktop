#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconMouseListener.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifDesktopIconUI$DesktopIconMouseListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$DesktopIconMouseListener, this$0)},
	{}
};

$MethodInfo _MotifDesktopIconUI$DesktopIconMouseListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifDesktopIconUI$DesktopIconMouseListener::*)($MotifDesktopIconUI*)>(&MotifDesktopIconUI$DesktopIconMouseListener::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifDesktopIconUI$DesktopIconMouseListener_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconMouseListener", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "DesktopIconMouseListener", $PROTECTED},
	{}
};

$ClassInfo _MotifDesktopIconUI$DesktopIconMouseListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconMouseListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_MotifDesktopIconUI$DesktopIconMouseListener_FieldInfo_,
	_MotifDesktopIconUI$DesktopIconMouseListener_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDesktopIconUI$DesktopIconMouseListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
};

$Object* allocate$MotifDesktopIconUI$DesktopIconMouseListener($Class* clazz) {
	return $of($alloc(MotifDesktopIconUI$DesktopIconMouseListener));
}

void MotifDesktopIconUI$DesktopIconMouseListener::init$($MotifDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void MotifDesktopIconUI$DesktopIconMouseListener::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->getClickCount() > 1) {
		try {
			$nc($(this->this$0->getFrame()))->setIcon(false);
		} catch ($PropertyVetoException&) {
			$catch();
		}
		$nc(this->this$0->systemMenu)->setVisible(false);
		$nc($($nc($($nc($(this->this$0->getFrame()))->getDesktopPane()))->getDesktopManager()))->endDraggingFrame($cast($JComponent, $(e->getSource())));
	}
}

MotifDesktopIconUI$DesktopIconMouseListener::MotifDesktopIconUI$DesktopIconMouseListener() {
}

$Class* MotifDesktopIconUI$DesktopIconMouseListener::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopIconUI$DesktopIconMouseListener, name, initialize, &_MotifDesktopIconUI$DesktopIconMouseListener_ClassInfo_, allocate$MotifDesktopIconUI$DesktopIconMouseListener);
	return class$;
}

$Class* MotifDesktopIconUI$DesktopIconMouseListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com