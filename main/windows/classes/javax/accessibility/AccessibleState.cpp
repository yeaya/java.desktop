#include <javax/accessibility/AccessibleState.h>

#include <javax/accessibility/AccessibleBundle.h>
#include <jcpp.h>

#undef ACTIVE
#undef ARMED
#undef BUSY
#undef CHECKED
#undef COLLAPSED
#undef EDITABLE
#undef ENABLED
#undef EXPANDABLE
#undef EXPANDED
#undef FOCUSABLE
#undef FOCUSED
#undef HORIZONTAL
#undef ICONIFIED
#undef INDETERMINATE
#undef MANAGES_DESCENDANTS
#undef MODAL
#undef MULTISELECTABLE
#undef MULTI_LINE
#undef OPAQUE
#undef PRESSED
#undef RESIZABLE
#undef SELECTABLE
#undef SELECTED
#undef SHOWING
#undef SINGLE_LINE
#undef TRANSIENT
#undef TRUNCATED
#undef VERTICAL
#undef VISIBLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleState_FieldInfo_[] = {
	{"ACTIVE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, ACTIVE)},
	{"PRESSED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, PRESSED)},
	{"ARMED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, ARMED)},
	{"BUSY", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, BUSY)},
	{"CHECKED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, CHECKED)},
	{"EDITABLE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, EDITABLE)},
	{"EXPANDABLE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, EXPANDABLE)},
	{"COLLAPSED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, COLLAPSED)},
	{"EXPANDED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, EXPANDED)},
	{"ENABLED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, ENABLED)},
	{"FOCUSABLE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, FOCUSABLE)},
	{"FOCUSED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, FOCUSED)},
	{"ICONIFIED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, ICONIFIED)},
	{"MODAL", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, MODAL)},
	{"OPAQUE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, OPAQUE)},
	{"RESIZABLE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, RESIZABLE)},
	{"MULTISELECTABLE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, MULTISELECTABLE)},
	{"SELECTABLE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, SELECTABLE)},
	{"SELECTED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, SELECTED)},
	{"SHOWING", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, SHOWING)},
	{"VISIBLE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, VISIBLE)},
	{"VERTICAL", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, VERTICAL)},
	{"HORIZONTAL", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, HORIZONTAL)},
	{"SINGLE_LINE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, SINGLE_LINE)},
	{"MULTI_LINE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, MULTI_LINE)},
	{"TRANSIENT", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, TRANSIENT)},
	{"MANAGES_DESCENDANTS", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, MANAGES_DESCENDANTS)},
	{"INDETERMINATE", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, INDETERMINATE)},
	{"TRUNCATED", "Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleState, TRUNCATED)},
	{}
};

$MethodInfo _AccessibleState_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(AccessibleState::*)($String*)>(&AccessibleState::init$))},
	{}
};

$ClassInfo _AccessibleState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.accessibility.AccessibleState",
	"javax.accessibility.AccessibleBundle",
	nullptr,
	_AccessibleState_FieldInfo_,
	_AccessibleState_MethodInfo_
};

$Object* allocate$AccessibleState($Class* clazz) {
	return $of($alloc(AccessibleState));
}

AccessibleState* AccessibleState::ACTIVE = nullptr;
AccessibleState* AccessibleState::PRESSED = nullptr;
AccessibleState* AccessibleState::ARMED = nullptr;
AccessibleState* AccessibleState::BUSY = nullptr;
AccessibleState* AccessibleState::CHECKED = nullptr;
AccessibleState* AccessibleState::EDITABLE = nullptr;
AccessibleState* AccessibleState::EXPANDABLE = nullptr;
AccessibleState* AccessibleState::COLLAPSED = nullptr;
AccessibleState* AccessibleState::EXPANDED = nullptr;
AccessibleState* AccessibleState::ENABLED = nullptr;
AccessibleState* AccessibleState::FOCUSABLE = nullptr;
AccessibleState* AccessibleState::FOCUSED = nullptr;
AccessibleState* AccessibleState::ICONIFIED = nullptr;
AccessibleState* AccessibleState::MODAL = nullptr;
AccessibleState* AccessibleState::OPAQUE = nullptr;
AccessibleState* AccessibleState::RESIZABLE = nullptr;
AccessibleState* AccessibleState::MULTISELECTABLE = nullptr;
AccessibleState* AccessibleState::SELECTABLE = nullptr;
AccessibleState* AccessibleState::SELECTED = nullptr;
AccessibleState* AccessibleState::SHOWING = nullptr;
AccessibleState* AccessibleState::VISIBLE = nullptr;
AccessibleState* AccessibleState::VERTICAL = nullptr;
AccessibleState* AccessibleState::HORIZONTAL = nullptr;
AccessibleState* AccessibleState::SINGLE_LINE = nullptr;
AccessibleState* AccessibleState::MULTI_LINE = nullptr;
AccessibleState* AccessibleState::TRANSIENT = nullptr;
AccessibleState* AccessibleState::MANAGES_DESCENDANTS = nullptr;
AccessibleState* AccessibleState::INDETERMINATE = nullptr;
AccessibleState* AccessibleState::TRUNCATED = nullptr;

void AccessibleState::init$($String* key) {
	$AccessibleBundle::init$();
	$set(this, key, key);
}

void clinit$AccessibleState($Class* class$) {
	$assignStatic(AccessibleState::ACTIVE, $new(AccessibleState, "active"_s));
	$assignStatic(AccessibleState::PRESSED, $new(AccessibleState, "pressed"_s));
	$assignStatic(AccessibleState::ARMED, $new(AccessibleState, "armed"_s));
	$assignStatic(AccessibleState::BUSY, $new(AccessibleState, "busy"_s));
	$assignStatic(AccessibleState::CHECKED, $new(AccessibleState, "checked"_s));
	$assignStatic(AccessibleState::EDITABLE, $new(AccessibleState, "editable"_s));
	$assignStatic(AccessibleState::EXPANDABLE, $new(AccessibleState, "expandable"_s));
	$assignStatic(AccessibleState::COLLAPSED, $new(AccessibleState, "collapsed"_s));
	$assignStatic(AccessibleState::EXPANDED, $new(AccessibleState, "expanded"_s));
	$assignStatic(AccessibleState::ENABLED, $new(AccessibleState, "enabled"_s));
	$assignStatic(AccessibleState::FOCUSABLE, $new(AccessibleState, "focusable"_s));
	$assignStatic(AccessibleState::FOCUSED, $new(AccessibleState, "focused"_s));
	$assignStatic(AccessibleState::ICONIFIED, $new(AccessibleState, "iconified"_s));
	$assignStatic(AccessibleState::MODAL, $new(AccessibleState, "modal"_s));
	$assignStatic(AccessibleState::OPAQUE, $new(AccessibleState, "opaque"_s));
	$assignStatic(AccessibleState::RESIZABLE, $new(AccessibleState, "resizable"_s));
	$assignStatic(AccessibleState::MULTISELECTABLE, $new(AccessibleState, "multiselectable"_s));
	$assignStatic(AccessibleState::SELECTABLE, $new(AccessibleState, "selectable"_s));
	$assignStatic(AccessibleState::SELECTED, $new(AccessibleState, "selected"_s));
	$assignStatic(AccessibleState::SHOWING, $new(AccessibleState, "showing"_s));
	$assignStatic(AccessibleState::VISIBLE, $new(AccessibleState, "visible"_s));
	$assignStatic(AccessibleState::VERTICAL, $new(AccessibleState, "vertical"_s));
	$assignStatic(AccessibleState::HORIZONTAL, $new(AccessibleState, "horizontal"_s));
	$assignStatic(AccessibleState::SINGLE_LINE, $new(AccessibleState, "singleline"_s));
	$assignStatic(AccessibleState::MULTI_LINE, $new(AccessibleState, "multiline"_s));
	$assignStatic(AccessibleState::TRANSIENT, $new(AccessibleState, "transient"_s));
	$assignStatic(AccessibleState::MANAGES_DESCENDANTS, $new(AccessibleState, "managesDescendants"_s));
	$assignStatic(AccessibleState::INDETERMINATE, $new(AccessibleState, "indeterminate"_s));
	$assignStatic(AccessibleState::TRUNCATED, $new(AccessibleState, "truncated"_s));
}

AccessibleState::AccessibleState() {
}

$Class* AccessibleState::load$($String* name, bool initialize) {
	$loadClass(AccessibleState, name, initialize, &_AccessibleState_ClassInfo_, clinit$AccessibleState, allocate$AccessibleState);
	return class$;
}

$Class* AccessibleState::class$ = nullptr;

	} // accessibility
} // javax