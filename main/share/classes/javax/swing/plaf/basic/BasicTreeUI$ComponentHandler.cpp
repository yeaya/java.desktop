#include <javax/swing/plaf/basic/BasicTreeUI$ComponentHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/Timer.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $Timer = ::javax::swing::Timer;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$ComponentHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$ComponentHandler, this$0)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PROTECTED, $field(BasicTreeUI$ComponentHandler, timer)},
	{"scrollBar", "Ljavax/swing/JScrollBar;", nullptr, $PROTECTED, $field(BasicTreeUI$ComponentHandler, scrollBar)},
	{}
};

$MethodInfo _BasicTreeUI$ComponentHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$ComponentHandler::*)($BasicTreeUI*)>(&BasicTreeUI$ComponentHandler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"getScrollPane", "()Ljavax/swing/JScrollPane;", nullptr, $PROTECTED},
	{"startTimer", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$ComponentHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$ComponentHandler", "javax.swing.plaf.basic.BasicTreeUI", "ComponentHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$ComponentHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$ComponentHandler",
	"java.awt.event.ComponentAdapter",
	"java.awt.event.ActionListener",
	_BasicTreeUI$ComponentHandler_FieldInfo_,
	_BasicTreeUI$ComponentHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$ComponentHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$ComponentHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$ComponentHandler));
}

int32_t BasicTreeUI$ComponentHandler::hashCode() {
	 return this->$ComponentAdapter::hashCode();
}

bool BasicTreeUI$ComponentHandler::equals(Object$* arg0) {
	 return this->$ComponentAdapter::equals(arg0);
}

$Object* BasicTreeUI$ComponentHandler::clone() {
	 return this->$ComponentAdapter::clone();
}

$String* BasicTreeUI$ComponentHandler::toString() {
	 return this->$ComponentAdapter::toString();
}

void BasicTreeUI$ComponentHandler::finalize() {
	this->$ComponentAdapter::finalize();
}

void BasicTreeUI$ComponentHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
	$ComponentAdapter::init$();
}

void BasicTreeUI$ComponentHandler::componentMoved($ComponentEvent* e) {
	if (this->timer == nullptr) {
		$var($JScrollPane, scrollPane, getScrollPane());
		if (scrollPane == nullptr) {
			this->this$0->updateSize();
		} else {
			$set(this, scrollBar, $nc(scrollPane)->getVerticalScrollBar());
			if (this->scrollBar == nullptr || !$nc(this->scrollBar)->getValueIsAdjusting()) {
				bool var$0 = ($set(this, scrollBar, scrollPane->getHorizontalScrollBar())) != nullptr;
				if (var$0 && $nc(this->scrollBar)->getValueIsAdjusting()) {
					startTimer();
				} else {
					this->this$0->updateSize();
				}
			} else {
				startTimer();
			}
		}
	}
}

void BasicTreeUI$ComponentHandler::startTimer() {
	if (this->timer == nullptr) {
		$set(this, timer, $new($Timer, 200, this));
		$nc(this->timer)->setRepeats(true);
	}
	$nc(this->timer)->start();
}

$JScrollPane* BasicTreeUI$ComponentHandler::getScrollPane() {
	$var($Component, c, $nc(this->this$0->tree)->getParent());
	while (c != nullptr && !($instanceOf($JScrollPane, c))) {
		$assign(c, c->getParent());
	}
	if ($instanceOf($JScrollPane, c)) {
		return $cast($JScrollPane, c);
	}
	return nullptr;
}

void BasicTreeUI$ComponentHandler::actionPerformed($ActionEvent* ae) {
	if (this->scrollBar == nullptr || !$nc(this->scrollBar)->getValueIsAdjusting()) {
		if (this->timer != nullptr) {
			$nc(this->timer)->stop();
		}
		this->this$0->updateSize();
		$set(this, timer, nullptr);
		$set(this, scrollBar, nullptr);
	}
}

BasicTreeUI$ComponentHandler::BasicTreeUI$ComponentHandler() {
}

$Class* BasicTreeUI$ComponentHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$ComponentHandler, name, initialize, &_BasicTreeUI$ComponentHandler_ClassInfo_, allocate$BasicTreeUI$ComponentHandler);
	return class$;
}

$Class* BasicTreeUI$ComponentHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax