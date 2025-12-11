#include <java/awt/EventDispatchThread$HierarchyEventFilter.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventFilter$FilterAction.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <sun/awt/ModalExclude.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef ACCEPT
#undef ACTION_FIRST
#undef ACTION_LAST
#undef MOUSE_FIRST
#undef MOUSE_LAST
#undef REJECT
#undef WINDOW_CLOSING

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventFilter$FilterAction = ::java::awt::EventFilter$FilterAction;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModalExclude = ::sun::awt::ModalExclude;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

$FieldInfo _EventDispatchThread$HierarchyEventFilter_FieldInfo_[] = {
	{"modalComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(EventDispatchThread$HierarchyEventFilter, modalComponent)},
	{}
};

$MethodInfo _EventDispatchThread$HierarchyEventFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(EventDispatchThread$HierarchyEventFilter::*)($Component*)>(&EventDispatchThread$HierarchyEventFilter::init$))},
	{"acceptEvent", "(Ljava/awt/AWTEvent;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EventDispatchThread$HierarchyEventFilter_InnerClassesInfo_[] = {
	{"java.awt.EventDispatchThread$HierarchyEventFilter", "java.awt.EventDispatchThread", "HierarchyEventFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EventDispatchThread$HierarchyEventFilter_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventDispatchThread$HierarchyEventFilter",
	"java.lang.Object",
	"java.awt.EventFilter",
	_EventDispatchThread$HierarchyEventFilter_FieldInfo_,
	_EventDispatchThread$HierarchyEventFilter_MethodInfo_,
	nullptr,
	nullptr,
	_EventDispatchThread$HierarchyEventFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventDispatchThread"
};

$Object* allocate$EventDispatchThread$HierarchyEventFilter($Class* clazz) {
	return $of($alloc(EventDispatchThread$HierarchyEventFilter));
}

void EventDispatchThread$HierarchyEventFilter::init$($Component* modalComponent) {
	$set(this, modalComponent, modalComponent);
}

$EventFilter$FilterAction* EventDispatchThread$HierarchyEventFilter::acceptEvent($AWTEvent* event) {
	$useLocalCurrentObjectStackCache();
	if (this->modalComponent != nullptr) {
		int32_t eventID = $nc(event)->getID();
		bool mouseEvent = (eventID >= $MouseEvent::MOUSE_FIRST) && (eventID <= $MouseEvent::MOUSE_LAST);
		bool actionEvent = (eventID >= $ActionEvent::ACTION_FIRST) && (eventID <= $ActionEvent::ACTION_LAST);
		bool windowClosingEvent = (eventID == $WindowEvent::WINDOW_CLOSING);
		if ($Component::isInstanceOf(this->modalComponent, "javax.swing.JInternalFrame"_s)) {
			$init($EventFilter$FilterAction);
			return windowClosingEvent ? $EventFilter$FilterAction::REJECT : $EventFilter$FilterAction::ACCEPT;
		}
		if (mouseEvent || actionEvent || windowClosingEvent) {
			$var($Object, o, event->getSource());
			if ($instanceOf($ModalExclude, o)) {
				$init($EventFilter$FilterAction);
				return $EventFilter$FilterAction::ACCEPT;
			} else if ($instanceOf($Component, o)) {
				$var($Component, c, $cast($Component, o));
				bool modalExcluded = false;
				if ($instanceOf($Container, this->modalComponent)) {
					while (c != this->modalComponent && c != nullptr) {
						if (($instanceOf($Window, c)) && ($SunToolkit::isModalExcluded($cast($Window, c)))) {
							modalExcluded = true;
							break;
						}
						$assign(c, c->getParent());
					}
				}
				if (!modalExcluded && (c != this->modalComponent)) {
					$init($EventFilter$FilterAction);
					return $EventFilter$FilterAction::REJECT;
				}
			}
		}
	}
	$init($EventFilter$FilterAction);
	return $EventFilter$FilterAction::ACCEPT;
}

EventDispatchThread$HierarchyEventFilter::EventDispatchThread$HierarchyEventFilter() {
}

$Class* EventDispatchThread$HierarchyEventFilter::load$($String* name, bool initialize) {
	$loadClass(EventDispatchThread$HierarchyEventFilter, name, initialize, &_EventDispatchThread$HierarchyEventFilter_ClassInfo_, allocate$EventDispatchThread$HierarchyEventFilter);
	return class$;
}

$Class* EventDispatchThread$HierarchyEventFilter::class$ = nullptr;

	} // awt
} // java