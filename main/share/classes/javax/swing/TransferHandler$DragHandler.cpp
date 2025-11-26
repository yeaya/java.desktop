#include <javax/swing/TransferHandler$DragHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/dnd/DragSourceListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $DragSourceListener = ::java::awt::dnd::DragSourceListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $TransferHandler = ::javax::swing::TransferHandler;

namespace javax {
	namespace swing {

$FieldInfo _TransferHandler$DragHandler_FieldInfo_[] = {
	{"scrolls", "Z", nullptr, $PRIVATE, $field(TransferHandler$DragHandler, scrolls)},
	{}
};

$MethodInfo _TransferHandler$DragHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TransferHandler$DragHandler::*)()>(&TransferHandler$DragHandler::init$))},
	{"dragDropEnd", "(Ljava/awt/dnd/DragSourceDropEvent;)V", nullptr, $PUBLIC},
	{"dragEnter", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dragExit", "(Ljava/awt/dnd/DragSourceEvent;)V", nullptr, $PUBLIC},
	{"dragGestureRecognized", "(Ljava/awt/dnd/DragGestureEvent;)V", nullptr, $PUBLIC},
	{"dragOver", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dropActionChanged", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransferHandler$DragHandler_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$DragHandler", "javax.swing.TransferHandler", "DragHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransferHandler$DragHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TransferHandler$DragHandler",
	"java.lang.Object",
	"java.awt.dnd.DragGestureListener,java.awt.dnd.DragSourceListener",
	_TransferHandler$DragHandler_FieldInfo_,
	_TransferHandler$DragHandler_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler$DragHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$DragHandler($Class* clazz) {
	return $of($alloc(TransferHandler$DragHandler));
}

int32_t TransferHandler$DragHandler::hashCode() {
	 return this->$DragGestureListener::hashCode();
}

bool TransferHandler$DragHandler::equals(Object$* arg0) {
	 return this->$DragGestureListener::equals(arg0);
}

$Object* TransferHandler$DragHandler::clone() {
	 return this->$DragGestureListener::clone();
}

$String* TransferHandler$DragHandler::toString() {
	 return this->$DragGestureListener::toString();
}

void TransferHandler$DragHandler::finalize() {
	this->$DragGestureListener::finalize();
}

void TransferHandler$DragHandler::init$() {
}

void TransferHandler$DragHandler::dragGestureRecognized($DragGestureEvent* dge) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $cast($JComponent, $nc(dge)->getComponent()));
	$var($TransferHandler, th, $nc(c)->getTransferHandler());
	$var($Transferable, t, $nc(th)->createTransferable(c));
	if (t != nullptr) {
		this->scrolls = c->getAutoscrolls();
		c->setAutoscrolls(false);
		try {
			$var($Image, im, th->getDragImage());
			if (im == nullptr) {
				dge->startDrag(nullptr, t, this);
			} else {
				dge->startDrag(nullptr, im, $(th->getDragImageOffset()), t, this);
			}
			return;
		} catch ($RuntimeException& re) {
			c->setAutoscrolls(this->scrolls);
		}
	}
	th->exportDone(c, t, 0);
}

void TransferHandler$DragHandler::dragEnter($DragSourceDragEvent* dsde) {
}

void TransferHandler$DragHandler::dragOver($DragSourceDragEvent* dsde) {
}

void TransferHandler$DragHandler::dragExit($DragSourceEvent* dsde) {
}

void TransferHandler$DragHandler::dragDropEnd($DragSourceDropEvent* dsde) {
	$useLocalCurrentObjectStackCache();
	$var($DragSourceContext, dsc, $nc(dsde)->getDragSourceContext());
	$var($JComponent, c, $cast($JComponent, $nc(dsc)->getComponent()));
	if (dsde->getDropSuccess()) {
		$var($JComponent, var$0, c);
		$var($Transferable, var$1, dsc->getTransferable());
		$nc($($nc(c)->getTransferHandler()))->exportDone(var$0, var$1, dsde->getDropAction());
	} else {
		$nc($($nc(c)->getTransferHandler()))->exportDone(c, $(dsc->getTransferable()), 0);
	}
	$nc(c)->setAutoscrolls(this->scrolls);
}

void TransferHandler$DragHandler::dropActionChanged($DragSourceDragEvent* dsde) {
}

TransferHandler$DragHandler::TransferHandler$DragHandler() {
}

$Class* TransferHandler$DragHandler::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$DragHandler, name, initialize, &_TransferHandler$DragHandler_ClassInfo_, allocate$TransferHandler$DragHandler);
	return class$;
}

$Class* TransferHandler$DragHandler::class$ = nullptr;

	} // swing
} // javax