#include <javax/swing/event/InternalFrameEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef INTERNAL_FRAME_ACTIVATED
#undef INTERNAL_FRAME_CLOSED
#undef INTERNAL_FRAME_CLOSING
#undef INTERNAL_FRAME_DEACTIVATED
#undef INTERNAL_FRAME_DEICONIFIED
#undef INTERNAL_FRAME_FIRST
#undef INTERNAL_FRAME_ICONIFIED
#undef INTERNAL_FRAME_LAST
#undef INTERNAL_FRAME_OPENED

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _InternalFrameEvent_FieldInfo_[] = {
	{"INTERNAL_FRAME_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameEvent, INTERNAL_FRAME_FIRST)},
	{"INTERNAL_FRAME_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameEvent, INTERNAL_FRAME_LAST)},
	{"INTERNAL_FRAME_OPENED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameEvent, INTERNAL_FRAME_OPENED)},
	{"INTERNAL_FRAME_CLOSING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameEvent, INTERNAL_FRAME_CLOSING)},
	{"INTERNAL_FRAME_CLOSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameEvent, INTERNAL_FRAME_CLOSED)},
	{"INTERNAL_FRAME_ICONIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameEvent, INTERNAL_FRAME_ICONIFIED)},
	{"INTERNAL_FRAME_DEICONIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameEvent, INTERNAL_FRAME_DEICONIFIED)},
	{"INTERNAL_FRAME_ACTIVATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameEvent, INTERNAL_FRAME_ACTIVATED)},
	{"INTERNAL_FRAME_DEACTIVATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameEvent, INTERNAL_FRAME_DEACTIVATED)},
	{}
};

$MethodInfo _InternalFrameEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;I)V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameEvent::*)($JInternalFrame*,int32_t)>(&InternalFrameEvent::init$))},
	{"getInternalFrame", "()Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InternalFrameEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.InternalFrameEvent",
	"java.awt.AWTEvent",
	nullptr,
	_InternalFrameEvent_FieldInfo_,
	_InternalFrameEvent_MethodInfo_
};

$Object* allocate$InternalFrameEvent($Class* clazz) {
	return $of($alloc(InternalFrameEvent));
}

void InternalFrameEvent::init$($JInternalFrame* source, int32_t id) {
	$AWTEvent::init$(source, id);
}

$String* InternalFrameEvent::paramString() {
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case InternalFrameEvent::INTERNAL_FRAME_OPENED:
		{
			$assign(typeStr, "INTERNAL_FRAME_OPENED"_s);
			break;
		}
	case InternalFrameEvent::INTERNAL_FRAME_CLOSING:
		{
			$assign(typeStr, "INTERNAL_FRAME_CLOSING"_s);
			break;
		}
	case InternalFrameEvent::INTERNAL_FRAME_CLOSED:
		{
			$assign(typeStr, "INTERNAL_FRAME_CLOSED"_s);
			break;
		}
	case InternalFrameEvent::INTERNAL_FRAME_ICONIFIED:
		{
			$assign(typeStr, "INTERNAL_FRAME_ICONIFIED"_s);
			break;
		}
	case InternalFrameEvent::INTERNAL_FRAME_DEICONIFIED:
		{
			$assign(typeStr, "INTERNAL_FRAME_DEICONIFIED"_s);
			break;
		}
	case InternalFrameEvent::INTERNAL_FRAME_ACTIVATED:
		{
			$assign(typeStr, "INTERNAL_FRAME_ACTIVATED"_s);
			break;
		}
	case InternalFrameEvent::INTERNAL_FRAME_DEACTIVATED:
		{
			$assign(typeStr, "INTERNAL_FRAME_DEACTIVATED"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	return typeStr;
}

$JInternalFrame* InternalFrameEvent::getInternalFrame() {
	return ($instanceOf($JInternalFrame, this->source)) ? $cast($JInternalFrame, this->source) : ($JInternalFrame*)nullptr;
}

InternalFrameEvent::InternalFrameEvent() {
}

$Class* InternalFrameEvent::load$($String* name, bool initialize) {
	$loadClass(InternalFrameEvent, name, initialize, &_InternalFrameEvent_ClassInfo_, allocate$InternalFrameEvent);
	return class$;
}

$Class* InternalFrameEvent::class$ = nullptr;

		} // event
	} // swing
} // javax