#include <javax/swing/TransferHandler$SwingDropTarget.h>

#include <java/awt/Component.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetDropEvent.h>
#include <java/awt/dnd/DropTargetEvent.h>
#include <java/awt/dnd/DropTargetListener.h>
#include <java/util/EventListener.h>
#include <java/util/TooManyListenersException.h>
#include <javax/swing/TransferHandler$DropHandler.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetDropEvent = ::java::awt::dnd::DropTargetDropEvent;
using $DropTargetEvent = ::java::awt::dnd::DropTargetEvent;
using $DropTargetListener = ::java::awt::dnd::DropTargetListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $TooManyListenersException = ::java::util::TooManyListenersException;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$DropHandler = ::javax::swing::TransferHandler$DropHandler;
using $EventListenerList = ::javax::swing::event::EventListenerList;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler$SwingDropTarget_FieldInfo_[] = {
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PRIVATE, $field(TransferHandler$SwingDropTarget, listenerList)},
	{}
};

$MethodInfo _TransferHandler$SwingDropTarget_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(TransferHandler$SwingDropTarget::*)($Component*)>(&TransferHandler$SwingDropTarget::init$))},
	{"addDropTargetListener", "(Ljava/awt/dnd/DropTargetListener;)V", nullptr, $PUBLIC, nullptr, "java.util.TooManyListenersException"},
	{"dragEnter", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"dragExit", "(Ljava/awt/dnd/DropTargetEvent;)V", nullptr, $PUBLIC},
	{"dragOver", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"drop", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PUBLIC},
	{"dropActionChanged", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"removeDropTargetListener", "(Ljava/awt/dnd/DropTargetListener;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransferHandler$SwingDropTarget_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$SwingDropTarget", "javax.swing.TransferHandler", "SwingDropTarget", $STATIC},
	{}
};

$ClassInfo _TransferHandler$SwingDropTarget_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TransferHandler$SwingDropTarget",
	"java.awt.dnd.DropTarget",
	"javax.swing.plaf.UIResource",
	_TransferHandler$SwingDropTarget_FieldInfo_,
	_TransferHandler$SwingDropTarget_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler$SwingDropTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$SwingDropTarget($Class* clazz) {
	return $of($alloc(TransferHandler$SwingDropTarget));
}

int32_t TransferHandler$SwingDropTarget::hashCode() {
	 return this->$DropTarget::hashCode();
}

bool TransferHandler$SwingDropTarget::equals(Object$* arg0) {
	 return this->$DropTarget::equals(arg0);
}

$Object* TransferHandler$SwingDropTarget::clone() {
	 return this->$DropTarget::clone();
}

$String* TransferHandler$SwingDropTarget::toString() {
	 return this->$DropTarget::toString();
}

void TransferHandler$SwingDropTarget::finalize() {
	this->$DropTarget::finalize();
}

void TransferHandler$SwingDropTarget::init$($Component* c) {
	$DropTarget::init$(c, 3 | 0x40000000, nullptr);
	try {
		$DropTarget::addDropTargetListener($($TransferHandler::getDropTargetListener()));
	} catch ($TooManyListenersException& tmle) {
	}
}

void TransferHandler$SwingDropTarget::addDropTargetListener($DropTargetListener* dtl) {
	if (this->listenerList == nullptr) {
		$set(this, listenerList, $new($EventListenerList));
	}
	$load($DropTargetListener);
	$nc(this->listenerList)->add($DropTargetListener::class$, dtl);
}

void TransferHandler$SwingDropTarget::removeDropTargetListener($DropTargetListener* dtl) {
	if (this->listenerList != nullptr) {
		$load($DropTargetListener);
		$nc(this->listenerList)->remove($DropTargetListener::class$, dtl);
	}
}

void TransferHandler$SwingDropTarget::dragEnter($DropTargetDragEvent* e) {
	$DropTarget::dragEnter(e);
	if (this->listenerList != nullptr) {
		$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
		for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
			$load($DropTargetListener);
			if ($equals(listeners->get(i), $DropTargetListener::class$)) {
				$nc(($cast($DropTargetListener, listeners->get(i + 1))))->dragEnter(e);
			}
		}
	}
}

void TransferHandler$SwingDropTarget::dragOver($DropTargetDragEvent* e) {
	$DropTarget::dragOver(e);
	if (this->listenerList != nullptr) {
		$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
		for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
			$load($DropTargetListener);
			if ($equals(listeners->get(i), $DropTargetListener::class$)) {
				$nc(($cast($DropTargetListener, listeners->get(i + 1))))->dragOver(e);
			}
		}
	}
}

void TransferHandler$SwingDropTarget::dragExit($DropTargetEvent* e) {
	$useLocalCurrentObjectStackCache();
	$DropTarget::dragExit(e);
	if (this->listenerList != nullptr) {
		$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
		for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
			$load($DropTargetListener);
			if ($equals(listeners->get(i), $DropTargetListener::class$)) {
				$nc(($cast($DropTargetListener, listeners->get(i + 1))))->dragExit(e);
			}
		}
	}
	if (!isActive()) {
		$var($DropTargetListener, dtListener, $TransferHandler::getDropTargetListener());
		if (dtListener != nullptr && $instanceOf($TransferHandler$DropHandler, dtListener)) {
			$nc(($cast($TransferHandler$DropHandler, dtListener)))->cleanup(false);
		}
	}
}

void TransferHandler$SwingDropTarget::drop($DropTargetDropEvent* e) {
	$DropTarget::drop(e);
	if (this->listenerList != nullptr) {
		$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
		for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
			$load($DropTargetListener);
			if ($equals(listeners->get(i), $DropTargetListener::class$)) {
				$nc(($cast($DropTargetListener, listeners->get(i + 1))))->drop(e);
			}
		}
	}
}

void TransferHandler$SwingDropTarget::dropActionChanged($DropTargetDragEvent* e) {
	$DropTarget::dropActionChanged(e);
	if (this->listenerList != nullptr) {
		$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
		for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
			$load($DropTargetListener);
			if ($equals(listeners->get(i), $DropTargetListener::class$)) {
				$nc(($cast($DropTargetListener, listeners->get(i + 1))))->dropActionChanged(e);
			}
		}
	}
}

TransferHandler$SwingDropTarget::TransferHandler$SwingDropTarget() {
}

$Class* TransferHandler$SwingDropTarget::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$SwingDropTarget, name, initialize, &_TransferHandler$SwingDropTarget_ClassInfo_, allocate$TransferHandler$SwingDropTarget);
	return class$;
}

$Class* TransferHandler$SwingDropTarget::class$ = nullptr;

	} // swing
} // javax