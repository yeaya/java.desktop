#include <javax/swing/plaf/basic/BasicLookAndFeel$AWTEventHelper.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <jcpp.h>

#undef MOUSE_EVENT_MASK
#undef MOUSE_PRESSED

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicLookAndFeel$AWTEventHelper_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicLookAndFeel$AWTEventHelper, this$0)},
	{}
};

$MethodInfo _BasicLookAndFeel$AWTEventHelper_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicLookAndFeel;)V", nullptr, 0, $method(static_cast<void(BasicLookAndFeel$AWTEventHelper::*)($BasicLookAndFeel*)>(&BasicLookAndFeel$AWTEventHelper::init$))},
	{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicLookAndFeel$AWTEventHelper_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicLookAndFeel$AWTEventHelper", "javax.swing.plaf.basic.BasicLookAndFeel", "AWTEventHelper", 0},
	{}
};

$ClassInfo _BasicLookAndFeel$AWTEventHelper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicLookAndFeel$AWTEventHelper",
	"java.lang.Object",
	"java.awt.event.AWTEventListener,java.security.PrivilegedAction",
	_BasicLookAndFeel$AWTEventHelper_FieldInfo_,
	_BasicLookAndFeel$AWTEventHelper_MethodInfo_,
	"Ljava/lang/Object;Ljava/awt/event/AWTEventListener;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	nullptr,
	_BasicLookAndFeel$AWTEventHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicLookAndFeel"
};

$Object* allocate$BasicLookAndFeel$AWTEventHelper($Class* clazz) {
	return $of($alloc(BasicLookAndFeel$AWTEventHelper));
}

int32_t BasicLookAndFeel$AWTEventHelper::hashCode() {
	 return this->$AWTEventListener::hashCode();
}

bool BasicLookAndFeel$AWTEventHelper::equals(Object$* arg0) {
	 return this->$AWTEventListener::equals(arg0);
}

$Object* BasicLookAndFeel$AWTEventHelper::clone() {
	 return this->$AWTEventListener::clone();
}

$String* BasicLookAndFeel$AWTEventHelper::toString() {
	 return this->$AWTEventListener::toString();
}

void BasicLookAndFeel$AWTEventHelper::finalize() {
	this->$AWTEventListener::finalize();
}

void BasicLookAndFeel$AWTEventHelper::init$($BasicLookAndFeel* this$0) {
	$beforeCallerSensitive();
	$set(this, this$0, this$0);
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>(this));
}

$Object* BasicLookAndFeel$AWTEventHelper::run() {
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if (this->this$0->invocator == nullptr) {
		$nc(tk)->addAWTEventListener(this, $AWTEvent::MOUSE_EVENT_MASK);
	} else {
		$nc(tk)->removeAWTEventListener(this->this$0->invocator);
	}
	return $of(nullptr);
}

void BasicLookAndFeel$AWTEventHelper::eventDispatched($AWTEvent* ev) {
	$useLocalCurrentObjectStackCache();
	int32_t eventID = $nc(ev)->getID();
	if (((int64_t)(eventID & (uint64_t)$AWTEvent::MOUSE_EVENT_MASK)) != 0) {
		$var($MouseEvent, me, $cast($MouseEvent, ev));
		if (me->isPopupTrigger()) {
			$var($MenuElementArray, elems, $nc($($MenuSelectionManager::defaultManager()))->getSelectedPath());
			if (elems != nullptr && elems->length != 0) {
				return;
			}
			$var($Object, c, me->getSource());
			$var($JComponent, src, nullptr);
			if ($instanceOf($JComponent, c)) {
				$assign(src, $cast($JComponent, c));
			} else if ($instanceOf($BasicSplitPaneDivider, c)) {
				$assign(src, $cast($JComponent, $nc(($cast($BasicSplitPaneDivider, c)))->getParent()));
			}
			if (src != nullptr) {
				if (src->getComponentPopupMenu() != nullptr) {
					$var($Point, pt, src->getPopupLocation(me));
					if (pt == nullptr) {
						$assign(pt, me->getPoint());
						$assign(pt, $SwingUtilities::convertPoint($cast($Component, c), pt, src));
					}
					$nc($(src->getComponentPopupMenu()))->show(src, $nc(pt)->x, pt->y);
					me->consume();
				}
			}
		}
	}
	if (eventID == $MouseEvent::MOUSE_PRESSED) {
		$var($Object, object, ev->getSource());
		if (!($instanceOf($Component, object))) {
			return;
		}
		$var($Component, component, $cast($Component, object));
		if (component != nullptr) {
			$var($Component, parent, component);
			while (parent != nullptr && !($instanceOf($Window, parent))) {
				if ($instanceOf($JInternalFrame, parent)) {
					try {
						$nc(($cast($JInternalFrame, parent)))->setSelected(true);
					} catch ($PropertyVetoException& e1) {
					}
				}
				$assign(parent, parent->getParent());
			}
		}
	}
}

BasicLookAndFeel$AWTEventHelper::BasicLookAndFeel$AWTEventHelper() {
}

$Class* BasicLookAndFeel$AWTEventHelper::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$AWTEventHelper, name, initialize, &_BasicLookAndFeel$AWTEventHelper_ClassInfo_, allocate$BasicLookAndFeel$AWTEventHelper);
	return class$;
}

$Class* BasicLookAndFeel$AWTEventHelper::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax