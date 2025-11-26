#include <java/awt/event/HierarchyEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

#undef ANCESTOR_MOVED
#undef ANCESTOR_RESIZED
#undef DISPLAYABILITY_CHANGED
#undef HIERARCHY_CHANGED
#undef HIERARCHY_FIRST
#undef HIERARCHY_LAST
#undef PARENT_CHANGED
#undef SHOWING_CHANGED

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _HierarchyEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HierarchyEvent, serialVersionUID)},
	{"HIERARCHY_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HierarchyEvent, HIERARCHY_FIRST)},
	{"HIERARCHY_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HierarchyEvent, HIERARCHY_CHANGED)},
	{"ANCESTOR_MOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HierarchyEvent, ANCESTOR_MOVED)},
	{"ANCESTOR_RESIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HierarchyEvent, ANCESTOR_RESIZED)},
	{"HIERARCHY_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HierarchyEvent, HIERARCHY_LAST)},
	{"PARENT_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HierarchyEvent, PARENT_CHANGED)},
	{"DISPLAYABILITY_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HierarchyEvent, DISPLAYABILITY_CHANGED)},
	{"SHOWING_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(HierarchyEvent, SHOWING_CHANGED)},
	{"changed", "Ljava/awt/Component;", nullptr, 0, $field(HierarchyEvent, changed)},
	{"changedParent", "Ljava/awt/Container;", nullptr, 0, $field(HierarchyEvent, changedParent)},
	{"changeFlags", "J", nullptr, 0, $field(HierarchyEvent, changeFlags)},
	{}
};

$MethodInfo _HierarchyEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;ILjava/awt/Component;Ljava/awt/Container;)V", nullptr, $PUBLIC, $method(static_cast<void(HierarchyEvent::*)($Component*,int32_t,$Component*,$Container*)>(&HierarchyEvent::init$))},
	{"<init>", "(Ljava/awt/Component;ILjava/awt/Component;Ljava/awt/Container;J)V", nullptr, $PUBLIC, $method(static_cast<void(HierarchyEvent::*)($Component*,int32_t,$Component*,$Container*,int64_t)>(&HierarchyEvent::init$))},
	{"getChangeFlags", "()J", nullptr, $PUBLIC},
	{"getChanged", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getChangedParent", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HierarchyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.HierarchyEvent",
	"java.awt.AWTEvent",
	nullptr,
	_HierarchyEvent_FieldInfo_,
	_HierarchyEvent_MethodInfo_
};

$Object* allocate$HierarchyEvent($Class* clazz) {
	return $of($alloc(HierarchyEvent));
}

void HierarchyEvent::init$($Component* source, int32_t id, $Component* changed, $Container* changedParent) {
	$AWTEvent::init$(source, id);
	$set(this, changed, changed);
	$set(this, changedParent, changedParent);
}

void HierarchyEvent::init$($Component* source, int32_t id, $Component* changed, $Container* changedParent, int64_t changeFlags) {
	$AWTEvent::init$(source, id);
	$set(this, changed, changed);
	$set(this, changedParent, changedParent);
	this->changeFlags = changeFlags;
}

$Component* HierarchyEvent::getComponent() {
	return ($instanceOf($Component, this->source)) ? $cast($Component, this->source) : ($Component*)nullptr;
}

$Component* HierarchyEvent::getChanged() {
	return this->changed;
}

$Container* HierarchyEvent::getChangedParent() {
	return this->changedParent;
}

int64_t HierarchyEvent::getChangeFlags() {
	return this->changeFlags;
}

$String* HierarchyEvent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case HierarchyEvent::ANCESTOR_MOVED:
		{
			$assign(typeStr, $str({"ANCESTOR_MOVED ("_s, this->changed, ","_s, this->changedParent, ")"_s}));
			break;
		}
	case HierarchyEvent::ANCESTOR_RESIZED:
		{
			$assign(typeStr, $str({"ANCESTOR_RESIZED ("_s, this->changed, ","_s, this->changedParent, ")"_s}));
			break;
		}
	case HierarchyEvent::HIERARCHY_CHANGED:
		{
			{
				$assign(typeStr, "HIERARCHY_CHANGED ("_s);
				bool first = true;
				if (((int64_t)(this->changeFlags & (uint64_t)(int64_t)HierarchyEvent::PARENT_CHANGED)) != 0) {
					first = false;
					$plusAssign(typeStr, "PARENT_CHANGED"_s);
				}
				if (((int64_t)(this->changeFlags & (uint64_t)(int64_t)HierarchyEvent::DISPLAYABILITY_CHANGED)) != 0) {
					if (first) {
						first = false;
					} else {
						$plusAssign(typeStr, ","_s);
					}
					$plusAssign(typeStr, "DISPLAYABILITY_CHANGED"_s);
				}
				if (((int64_t)(this->changeFlags & (uint64_t)(int64_t)HierarchyEvent::SHOWING_CHANGED)) != 0) {
					if (first) {
						first = false;
					} else {
						$plusAssign(typeStr, ","_s);
					}
					$plusAssign(typeStr, "SHOWING_CHANGED"_s);
				}
				if (!first) {
					$plusAssign(typeStr, ","_s);
				}
				$plusAssign(typeStr, $$str({this->changed, ","_s, this->changedParent, ")"_s}));
				break;
			}
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	return typeStr;
}

HierarchyEvent::HierarchyEvent() {
}

$Class* HierarchyEvent::load$($String* name, bool initialize) {
	$loadClass(HierarchyEvent, name, initialize, &_HierarchyEvent_ClassInfo_, allocate$HierarchyEvent);
	return class$;
}

$Class* HierarchyEvent::class$ = nullptr;

		} // event
	} // awt
} // java