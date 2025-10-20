#include <javax/swing/plaf/basic/BasicToolBarUI$FrameListener.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$DragWindow.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $UIManager = ::javax::swing::UIManager;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$DragWindow = ::javax::swing::plaf::basic::BasicToolBarUI$DragWindow;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$FrameListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$FrameListener, this$0)},
	{}
};

$MethodInfo _BasicToolBarUI$FrameListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicToolBarUI$FrameListener::*)($BasicToolBarUI*)>(&BasicToolBarUI$FrameListener::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolBarUI$FrameListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$FrameListener", "javax.swing.plaf.basic.BasicToolBarUI", "FrameListener", $PROTECTED},
	{}
};

$ClassInfo _BasicToolBarUI$FrameListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$FrameListener",
	"java.awt.event.WindowAdapter",
	nullptr,
	_BasicToolBarUI$FrameListener_FieldInfo_,
	_BasicToolBarUI$FrameListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolBarUI$FrameListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$FrameListener($Class* clazz) {
	return $of($alloc(BasicToolBarUI$FrameListener));
}

void BasicToolBarUI$FrameListener::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void BasicToolBarUI$FrameListener::windowClosing($WindowEvent* w) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$0->toolBar)->isFloatable()) {
		if (this->this$0->dragWindow != nullptr) {
			$nc(this->this$0->dragWindow)->setVisible(false);
		}
		this->this$0->floating = false;
		if (this->this$0->floatingToolBar == nullptr) {
			$set(this->this$0, floatingToolBar, this->this$0->createFloatingWindow(this->this$0->toolBar));
		}
		if ($instanceOf($Window, this->this$0->floatingToolBar)) {
			$nc(($cast($Window, this->this$0->floatingToolBar)))->setVisible(false);
		}
		$nc($($nc(this->this$0->floatingToolBar)->getContentPane()))->remove(static_cast<$Component*>(this->this$0->toolBar));
		$var($String, constraint, this->this$0->constraintBeforeFloating);
		if ($nc(this->this$0->toolBar)->getOrientation() == $JToolBar::HORIZONTAL) {
			if (constraint == "West"_s || constraint == "East"_s) {
				$assign(constraint, "North"_s);
			}
		} else if (constraint == "North"_s || constraint == "South"_s) {
			$assign(constraint, "West"_s);
		}
		if (this->this$0->dockingSource == nullptr) {
			$set(this->this$0, dockingSource, $nc(this->this$0->toolBar)->getParent());
		}
		if (this->this$0->propertyListener != nullptr) {
			$UIManager::removePropertyChangeListener(this->this$0->propertyListener);
		}
		$nc(this->this$0->dockingSource)->add(static_cast<$Component*>(this->this$0->toolBar), $of(constraint));
		$nc(this->this$0->dockingSource)->invalidate();
		$var($Container, dockingSourceParent, $nc(this->this$0->dockingSource)->getParent());
		if (dockingSourceParent != nullptr) {
			dockingSourceParent->validate();
		}
		$nc(this->this$0->dockingSource)->repaint();
	}
}

BasicToolBarUI$FrameListener::BasicToolBarUI$FrameListener() {
}

$Class* BasicToolBarUI$FrameListener::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$FrameListener, name, initialize, &_BasicToolBarUI$FrameListener_ClassInfo_, allocate$BasicToolBarUI$FrameListener);
	return class$;
}

$Class* BasicToolBarUI$FrameListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax