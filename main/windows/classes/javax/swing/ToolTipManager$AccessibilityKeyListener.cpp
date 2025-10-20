#include <javax/swing/ToolTipManager$AccessibilityKeyListener.h>

#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/Popup.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/event/MenuKeyEvent.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $KeyStroke = ::javax::swing::KeyStroke;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $Popup = ::javax::swing::Popup;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $MenuKeyEvent = ::javax::swing::event::MenuKeyEvent;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;

namespace javax {
	namespace swing {

$FieldInfo _ToolTipManager$AccessibilityKeyListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/ToolTipManager;", nullptr, $FINAL | $SYNTHETIC, $field(ToolTipManager$AccessibilityKeyListener, this$0)},
	{}
};

$MethodInfo _ToolTipManager$AccessibilityKeyListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/ToolTipManager;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolTipManager$AccessibilityKeyListener::*)($ToolTipManager*)>(&ToolTipManager$AccessibilityKeyListener::init$))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"menuKeyPressed", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{"menuKeyReleased", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{"menuKeyTyped", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ToolTipManager$AccessibilityKeyListener_InnerClassesInfo_[] = {
	{"javax.swing.ToolTipManager$AccessibilityKeyListener", "javax.swing.ToolTipManager", "AccessibilityKeyListener", $PRIVATE},
	{}
};

$ClassInfo _ToolTipManager$AccessibilityKeyListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ToolTipManager$AccessibilityKeyListener",
	"java.awt.event.KeyAdapter",
	"javax.swing.event.MenuKeyListener",
	_ToolTipManager$AccessibilityKeyListener_FieldInfo_,
	_ToolTipManager$AccessibilityKeyListener_MethodInfo_,
	nullptr,
	nullptr,
	_ToolTipManager$AccessibilityKeyListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.ToolTipManager"
};

$Object* allocate$ToolTipManager$AccessibilityKeyListener($Class* clazz) {
	return $of($alloc(ToolTipManager$AccessibilityKeyListener));
}

int32_t ToolTipManager$AccessibilityKeyListener::hashCode() {
	 return this->$KeyAdapter::hashCode();
}

bool ToolTipManager$AccessibilityKeyListener::equals(Object$* arg0) {
	 return this->$KeyAdapter::equals(arg0);
}

$Object* ToolTipManager$AccessibilityKeyListener::clone() {
	 return this->$KeyAdapter::clone();
}

$String* ToolTipManager$AccessibilityKeyListener::toString() {
	 return this->$KeyAdapter::toString();
}

void ToolTipManager$AccessibilityKeyListener::finalize() {
	this->$KeyAdapter::finalize();
}

void ToolTipManager$AccessibilityKeyListener::init$($ToolTipManager* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void ToolTipManager$AccessibilityKeyListener::keyPressed($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(e)->isConsumed()) {
		$var($JComponent, source, $cast($JComponent, e->getComponent()));
		$var($KeyStroke, keyStrokeForEvent, $KeyStroke::getKeyStrokeForEvent(e));
		if ($nc(this->this$0->hideTip)->equals(keyStrokeForEvent)) {
			if (this->this$0->tipWindow != nullptr) {
				this->this$0->hide(source);
				e->consume();
			}
		} else if ($nc(this->this$0->postTip)->equals(keyStrokeForEvent)) {
			this->this$0->show(source);
			e->consume();
		}
	}
}

void ToolTipManager$AccessibilityKeyListener::menuKeyTyped($MenuKeyEvent* e) {
}

void ToolTipManager$AccessibilityKeyListener::menuKeyPressed($MenuKeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$0->postTip)->equals($($KeyStroke::getKeyStrokeForEvent(e)))) {
		$var($MenuElementArray, path, $nc(e)->getPath());
		$var($MenuElement, element, $nc(path)->get(path->length - 1));
		$var($MenuSelectionManager, msm, e->getMenuSelectionManager());
		$var($MenuElementArray, selectedPath, $nc(msm)->getSelectedPath());
		$var($MenuElement, selectedElement, $nc(selectedPath)->get(selectedPath->length - 1));
		if ($nc($of(element))->equals(selectedElement)) {
			$var($JComponent, source, $cast($JComponent, element->getComponent()));
			this->this$0->show(source);
			e->consume();
		}
	}
}

void ToolTipManager$AccessibilityKeyListener::menuKeyReleased($MenuKeyEvent* e) {
}

ToolTipManager$AccessibilityKeyListener::ToolTipManager$AccessibilityKeyListener() {
}

$Class* ToolTipManager$AccessibilityKeyListener::load$($String* name, bool initialize) {
	$loadClass(ToolTipManager$AccessibilityKeyListener, name, initialize, &_ToolTipManager$AccessibilityKeyListener_ClassInfo_, allocate$ToolTipManager$AccessibilityKeyListener);
	return class$;
}

$Class* ToolTipManager$AccessibilityKeyListener::class$ = nullptr;

	} // swing
} // javax