#include <javax/swing/TransferHandler$SwingDragGestureRecognizer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $TransferHandler = ::javax::swing::TransferHandler;

namespace javax {
	namespace swing {

$MethodInfo _TransferHandler$SwingDragGestureRecognizer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragGestureListener;)V", nullptr, 0, $method(static_cast<void(TransferHandler$SwingDragGestureRecognizer::*)($DragGestureListener*)>(&TransferHandler$SwingDragGestureRecognizer::init$))},
	{"gestured", "(Ljavax/swing/JComponent;Ljava/awt/event/MouseEvent;II)V", nullptr, 0},
	{"registerListeners", "()V", nullptr, $PROTECTED},
	{"unregisterListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _TransferHandler$SwingDragGestureRecognizer_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$SwingDragGestureRecognizer", "javax.swing.TransferHandler", "SwingDragGestureRecognizer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransferHandler$SwingDragGestureRecognizer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TransferHandler$SwingDragGestureRecognizer",
	"java.awt.dnd.DragGestureRecognizer",
	nullptr,
	nullptr,
	_TransferHandler$SwingDragGestureRecognizer_MethodInfo_,
	nullptr,
	nullptr,
	_TransferHandler$SwingDragGestureRecognizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.TransferHandler"
};

$Object* allocate$TransferHandler$SwingDragGestureRecognizer($Class* clazz) {
	return $of($alloc(TransferHandler$SwingDragGestureRecognizer));
}

void TransferHandler$SwingDragGestureRecognizer::init$($DragGestureListener* dgl) {
	$DragGestureRecognizer::init$($($DragSource::getDefaultDragSource()), nullptr, 0, dgl);
}

void TransferHandler$SwingDragGestureRecognizer::gestured($JComponent* c, $MouseEvent* e, int32_t srcActions, int32_t action) {
	setComponent(c);
	setSourceActions(srcActions);
	appendEvent(e);
	fireDragGestureRecognized(action, $($nc(e)->getPoint()));
}

void TransferHandler$SwingDragGestureRecognizer::registerListeners() {
}

void TransferHandler$SwingDragGestureRecognizer::unregisterListeners() {
}

TransferHandler$SwingDragGestureRecognizer::TransferHandler$SwingDragGestureRecognizer() {
}

$Class* TransferHandler$SwingDragGestureRecognizer::load$($String* name, bool initialize) {
	$loadClass(TransferHandler$SwingDragGestureRecognizer, name, initialize, &_TransferHandler$SwingDragGestureRecognizer_ClassInfo_, allocate$TransferHandler$SwingDragGestureRecognizer);
	return class$;
}

$Class* TransferHandler$SwingDragGestureRecognizer::class$ = nullptr;

	} // swing
} // javax