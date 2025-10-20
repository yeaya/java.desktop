#include <javax/swing/plaf/basic/DragRecognitionSupport.h>

#include <java/awt/dnd/DragSource.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <jcpp.h>

#undef NONE

using $DragSource = ::java::awt::dnd::DragSource;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $DragRecognitionSupport$BeforeDrag = ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag;
using $AppContext = ::sun::awt::AppContext;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _DragRecognitionSupport_FieldInfo_[] = {
	{"motionThreshold", "I", nullptr, $PRIVATE, $field(DragRecognitionSupport, motionThreshold)},
	{"dndArmedEvent", "Ljava/awt/event/MouseEvent;", nullptr, $PRIVATE, $field(DragRecognitionSupport, dndArmedEvent)},
	{"component", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(DragRecognitionSupport, component)},
	{}
};

$MethodInfo _DragRecognitionSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DragRecognitionSupport::*)()>(&DragRecognitionSupport::init$))},
	{"clearState", "()V", nullptr, $PRIVATE, $method(static_cast<void(DragRecognitionSupport::*)()>(&DragRecognitionSupport::clearState))},
	{"getDragRecognitionSupport", "()Ljavax/swing/plaf/basic/DragRecognitionSupport;", nullptr, $PRIVATE | $STATIC, $method(static_cast<DragRecognitionSupport*(*)()>(&DragRecognitionSupport::getDragRecognitionSupport))},
	{"mapDragOperationFromModifiers", "(Ljava/awt/event/MouseEvent;Ljavax/swing/TransferHandler;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DragRecognitionSupport::*)($MouseEvent*,$TransferHandler*)>(&DragRecognitionSupport::mapDragOperationFromModifiers))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;Ljavax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($MouseEvent*,$DragRecognitionSupport$BeforeDrag*)>(&DragRecognitionSupport::mouseDragged))},
	{"mouseDraggedImpl", "(Ljava/awt/event/MouseEvent;Ljavax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DragRecognitionSupport::*)($MouseEvent*,$DragRecognitionSupport$BeforeDrag*)>(&DragRecognitionSupport::mouseDraggedImpl))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($MouseEvent*)>(&DragRecognitionSupport::mousePressed))},
	{"mousePressedImpl", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DragRecognitionSupport::*)($MouseEvent*)>(&DragRecognitionSupport::mousePressedImpl))},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)Ljava/awt/event/MouseEvent;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MouseEvent*(*)($MouseEvent*)>(&DragRecognitionSupport::mouseReleased))},
	{"mouseReleasedImpl", "(Ljava/awt/event/MouseEvent;)Ljava/awt/event/MouseEvent;", nullptr, $PRIVATE, $method(static_cast<$MouseEvent*(DragRecognitionSupport::*)($MouseEvent*)>(&DragRecognitionSupport::mouseReleasedImpl))},
	{}
};

$InnerClassInfo _DragRecognitionSupport_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag", "javax.swing.plaf.basic.DragRecognitionSupport", "BeforeDrag", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DragRecognitionSupport_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.DragRecognitionSupport",
	"java.lang.Object",
	nullptr,
	_DragRecognitionSupport_FieldInfo_,
	_DragRecognitionSupport_MethodInfo_,
	nullptr,
	nullptr,
	_DragRecognitionSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag"
};

$Object* allocate$DragRecognitionSupport($Class* clazz) {
	return $of($alloc(DragRecognitionSupport));
}

void DragRecognitionSupport::init$() {
}

DragRecognitionSupport* DragRecognitionSupport::getDragRecognitionSupport() {
	$useLocalCurrentObjectStackCache();
	$load(DragRecognitionSupport);
	$var(DragRecognitionSupport, support, $cast(DragRecognitionSupport, $nc($($AppContext::getAppContext()))->get(DragRecognitionSupport::class$)));
	if (support == nullptr) {
		$assign(support, $new(DragRecognitionSupport));
		$nc($($AppContext::getAppContext()))->put(DragRecognitionSupport::class$, support);
	}
	return support;
}

bool DragRecognitionSupport::mousePressed($MouseEvent* me) {
	return $nc($(getDragRecognitionSupport()))->mousePressedImpl(me);
}

$MouseEvent* DragRecognitionSupport::mouseReleased($MouseEvent* me) {
	return $nc($(getDragRecognitionSupport()))->mouseReleasedImpl(me);
}

bool DragRecognitionSupport::mouseDragged($MouseEvent* me, $DragRecognitionSupport$BeforeDrag* bd) {
	return $nc($(getDragRecognitionSupport()))->mouseDraggedImpl(me, bd);
}

void DragRecognitionSupport::clearState() {
	$set(this, dndArmedEvent, nullptr);
	$set(this, component, nullptr);
}

int32_t DragRecognitionSupport::mapDragOperationFromModifiers($MouseEvent* me, $TransferHandler* th) {
	if (th == nullptr || !$SwingUtilities::isLeftMouseButton(me)) {
		return $TransferHandler::NONE;
	}
	int32_t var$0 = $nc(me)->getModifiersEx();
	return $SunDragSourceContextPeer::convertModifiersToDropAction(var$0, $nc(th)->getSourceActions(this->component));
}

bool DragRecognitionSupport::mousePressedImpl($MouseEvent* me) {
	$set(this, component, $cast($JComponent, $nc(me)->getSource()));
	if (mapDragOperationFromModifiers(me, $($nc(this->component)->getTransferHandler())) != $TransferHandler::NONE) {
		this->motionThreshold = $DragSource::getDragThreshold();
		$set(this, dndArmedEvent, me);
		return true;
	}
	clearState();
	return false;
}

$MouseEvent* DragRecognitionSupport::mouseReleasedImpl($MouseEvent* me) {
	if (this->dndArmedEvent == nullptr) {
		return nullptr;
	}
	$var($MouseEvent, retEvent, nullptr);
	if ($equals($nc(me)->getSource(), this->component)) {
		$assign(retEvent, this->dndArmedEvent);
	}
	clearState();
	return retEvent;
}

bool DragRecognitionSupport::mouseDraggedImpl($MouseEvent* me, $DragRecognitionSupport$BeforeDrag* bd) {
	if (this->dndArmedEvent == nullptr) {
		return false;
	}
	if (!$equals($nc(me)->getSource(), this->component)) {
		clearState();
		return false;
	}
	int32_t var$0 = $nc(me)->getX();
	int32_t dx = $Math::abs(var$0 - $nc(this->dndArmedEvent)->getX());
	int32_t var$1 = $nc(me)->getY();
	int32_t dy = $Math::abs(var$1 - $nc(this->dndArmedEvent)->getY());
	if ((dx > this->motionThreshold) || (dy > this->motionThreshold)) {
		$var($TransferHandler, th, $nc(this->component)->getTransferHandler());
		int32_t action = mapDragOperationFromModifiers(me, th);
		if (action != $TransferHandler::NONE) {
			if (bd != nullptr) {
				bd->dragStarting(this->dndArmedEvent);
			}
			$nc(th)->exportAsDrag(this->component, this->dndArmedEvent, action);
			clearState();
		}
	}
	return true;
}

DragRecognitionSupport::DragRecognitionSupport() {
}

$Class* DragRecognitionSupport::load$($String* name, bool initialize) {
	$loadClass(DragRecognitionSupport, name, initialize, &_DragRecognitionSupport_ClassInfo_, allocate$DragRecognitionSupport);
	return class$;
}

$Class* DragRecognitionSupport::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax