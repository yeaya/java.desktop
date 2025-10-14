#include <javax/accessibility/AccessibleRelation.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleBundle.h>
#include <jcpp.h>

#undef CHILD_NODE_OF
#undef CHILD_NODE_OF_PROPERTY
#undef CONTROLLED_BY
#undef CONTROLLED_BY_PROPERTY
#undef CONTROLLER_FOR
#undef CONTROLLER_FOR_PROPERTY
#undef EMBEDDED_BY
#undef EMBEDDED_BY_PROPERTY
#undef EMBEDS
#undef EMBEDS_PROPERTY
#undef FLOWS_FROM
#undef FLOWS_FROM_PROPERTY
#undef FLOWS_TO
#undef FLOWS_TO_PROPERTY
#undef LABELED_BY
#undef LABELED_BY_PROPERTY
#undef LABEL_FOR
#undef LABEL_FOR_PROPERTY
#undef MEMBER_OF
#undef MEMBER_OF_PROPERTY
#undef PARENT_WINDOW_OF
#undef PARENT_WINDOW_OF_PROPERTY
#undef SUBWINDOW_OF
#undef SUBWINDOW_OF_PROPERTY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleRelation_FieldInfo_[] = {
	{"target", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(AccessibleRelation, target)},
	{"LABEL_FOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, LABEL_FOR)},
	{"LABELED_BY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, LABELED_BY)},
	{"MEMBER_OF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, MEMBER_OF)},
	{"CONTROLLER_FOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, CONTROLLER_FOR)},
	{"CONTROLLED_BY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, CONTROLLED_BY)},
	{"FLOWS_TO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, FLOWS_TO)},
	{"FLOWS_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, FLOWS_FROM)},
	{"SUBWINDOW_OF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, SUBWINDOW_OF)},
	{"PARENT_WINDOW_OF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, PARENT_WINDOW_OF)},
	{"EMBEDS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, EMBEDS)},
	{"EMBEDDED_BY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, EMBEDDED_BY)},
	{"CHILD_NODE_OF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, CHILD_NODE_OF)},
	{"LABEL_FOR_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, LABEL_FOR_PROPERTY)},
	{"LABELED_BY_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, LABELED_BY_PROPERTY)},
	{"MEMBER_OF_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, MEMBER_OF_PROPERTY)},
	{"CONTROLLER_FOR_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, CONTROLLER_FOR_PROPERTY)},
	{"CONTROLLED_BY_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, CONTROLLED_BY_PROPERTY)},
	{"FLOWS_TO_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, FLOWS_TO_PROPERTY)},
	{"FLOWS_FROM_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, FLOWS_FROM_PROPERTY)},
	{"SUBWINDOW_OF_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, SUBWINDOW_OF_PROPERTY)},
	{"PARENT_WINDOW_OF_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, PARENT_WINDOW_OF_PROPERTY)},
	{"EMBEDS_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, EMBEDS_PROPERTY)},
	{"EMBEDDED_BY_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, EMBEDDED_BY_PROPERTY)},
	{"CHILD_NODE_OF_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRelation, CHILD_NODE_OF_PROPERTY)},
	{}
};

$MethodInfo _AccessibleRelation_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleRelation::*)($String*)>(&AccessibleRelation::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleRelation::*)($String*,Object$*)>(&AccessibleRelation::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleRelation::*)($String*,$ObjectArray*)>(&AccessibleRelation::init$))},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTarget", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setTarget", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setTarget", "([Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AccessibleRelation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.accessibility.AccessibleRelation",
	"javax.accessibility.AccessibleBundle",
	nullptr,
	_AccessibleRelation_FieldInfo_,
	_AccessibleRelation_MethodInfo_
};

$Object* allocate$AccessibleRelation($Class* clazz) {
	return $of($alloc(AccessibleRelation));
}


$String* AccessibleRelation::LABEL_FOR = nullptr;

$String* AccessibleRelation::LABELED_BY = nullptr;

$String* AccessibleRelation::MEMBER_OF = nullptr;

$String* AccessibleRelation::CONTROLLER_FOR = nullptr;

$String* AccessibleRelation::CONTROLLED_BY = nullptr;

$String* AccessibleRelation::FLOWS_TO = nullptr;

$String* AccessibleRelation::FLOWS_FROM = nullptr;

$String* AccessibleRelation::SUBWINDOW_OF = nullptr;

$String* AccessibleRelation::PARENT_WINDOW_OF = nullptr;

$String* AccessibleRelation::EMBEDS = nullptr;

$String* AccessibleRelation::EMBEDDED_BY = nullptr;

$String* AccessibleRelation::CHILD_NODE_OF = nullptr;

$String* AccessibleRelation::LABEL_FOR_PROPERTY = nullptr;

$String* AccessibleRelation::LABELED_BY_PROPERTY = nullptr;

$String* AccessibleRelation::MEMBER_OF_PROPERTY = nullptr;

$String* AccessibleRelation::CONTROLLER_FOR_PROPERTY = nullptr;

$String* AccessibleRelation::CONTROLLED_BY_PROPERTY = nullptr;

$String* AccessibleRelation::FLOWS_TO_PROPERTY = nullptr;

$String* AccessibleRelation::FLOWS_FROM_PROPERTY = nullptr;

$String* AccessibleRelation::SUBWINDOW_OF_PROPERTY = nullptr;

$String* AccessibleRelation::PARENT_WINDOW_OF_PROPERTY = nullptr;

$String* AccessibleRelation::EMBEDS_PROPERTY = nullptr;

$String* AccessibleRelation::EMBEDDED_BY_PROPERTY = nullptr;

$String* AccessibleRelation::CHILD_NODE_OF_PROPERTY = nullptr;

void AccessibleRelation::init$($String* key) {
	$AccessibleBundle::init$();
	$set(this, target, $new($ObjectArray, 0));
	$set(this, key, key);
	$set(this, target, nullptr);
}

void AccessibleRelation::init$($String* key, Object$* target) {
	$AccessibleBundle::init$();
	$set(this, target, $new($ObjectArray, 0));
	$set(this, key, key);
	$set(this, target, $new($ObjectArray, 1));
	$nc(this->target)->set(0, target);
}

void AccessibleRelation::init$($String* key, $ObjectArray* target) {
	$AccessibleBundle::init$();
	$set(this, target, $new($ObjectArray, 0));
	$set(this, key, key);
	$set(this, target, target);
}

$String* AccessibleRelation::getKey() {
	return this->key;
}

$ObjectArray* AccessibleRelation::getTarget() {
	if (this->target == nullptr) {
		$set(this, target, $new($ObjectArray, 0));
	}
	$var($ObjectArray, retval, $new($ObjectArray, $nc(this->target)->length));
	for (int32_t i = 0; i < $nc(this->target)->length; ++i) {
		retval->set(i, $nc(this->target)->get(i));
	}
	return retval;
}

void AccessibleRelation::setTarget(Object$* target) {
	$set(this, target, $new($ObjectArray, 1));
	$nc(this->target)->set(0, target);
}

void AccessibleRelation::setTarget($ObjectArray* target) {
	$set(this, target, target);
}

void clinit$AccessibleRelation($Class* class$) {
	$assignStatic(AccessibleRelation::FLOWS_TO, "flowsTo"_s);
	$assignStatic(AccessibleRelation::FLOWS_FROM, "flowsFrom"_s);
	$assignStatic(AccessibleRelation::SUBWINDOW_OF, "subwindowOf"_s);
	$assignStatic(AccessibleRelation::PARENT_WINDOW_OF, "parentWindowOf"_s);
	$assignStatic(AccessibleRelation::EMBEDS, "embeds"_s);
	$assignStatic(AccessibleRelation::EMBEDDED_BY, "embeddedBy"_s);
	$assignStatic(AccessibleRelation::CHILD_NODE_OF, "childNodeOf"_s);
	$assignStatic(AccessibleRelation::LABEL_FOR_PROPERTY, "labelForProperty"_s);
	$assignStatic(AccessibleRelation::LABELED_BY_PROPERTY, "labeledByProperty"_s);
	$assignStatic(AccessibleRelation::MEMBER_OF_PROPERTY, "memberOfProperty"_s);
	$assignStatic(AccessibleRelation::CONTROLLER_FOR_PROPERTY, "controllerForProperty"_s);
	$assignStatic(AccessibleRelation::CONTROLLED_BY_PROPERTY, "controlledByProperty"_s);
	$assignStatic(AccessibleRelation::FLOWS_TO_PROPERTY, "flowsToProperty"_s);
	$assignStatic(AccessibleRelation::FLOWS_FROM_PROPERTY, "flowsFromProperty"_s);
	$assignStatic(AccessibleRelation::SUBWINDOW_OF_PROPERTY, "subwindowOfProperty"_s);
	$assignStatic(AccessibleRelation::PARENT_WINDOW_OF_PROPERTY, "parentWindowOfProperty"_s);
	$assignStatic(AccessibleRelation::EMBEDS_PROPERTY, "embedsProperty"_s);
	$assignStatic(AccessibleRelation::EMBEDDED_BY_PROPERTY, "embeddedByProperty"_s);
	$assignStatic(AccessibleRelation::CHILD_NODE_OF_PROPERTY, "childNodeOfProperty"_s);
	$assignStatic(AccessibleRelation::LABEL_FOR, $new($String, "labelFor"_s));
	$assignStatic(AccessibleRelation::LABELED_BY, $new($String, "labeledBy"_s));
	$assignStatic(AccessibleRelation::MEMBER_OF, $new($String, "memberOf"_s));
	$assignStatic(AccessibleRelation::CONTROLLER_FOR, $new($String, "controllerFor"_s));
	$assignStatic(AccessibleRelation::CONTROLLED_BY, $new($String, "controlledBy"_s));
}

AccessibleRelation::AccessibleRelation() {
}

$Class* AccessibleRelation::load$($String* name, bool initialize) {
	$loadClass(AccessibleRelation, name, initialize, &_AccessibleRelation_ClassInfo_, clinit$AccessibleRelation, allocate$AccessibleRelation);
	return class$;
}

$Class* AccessibleRelation::class$ = nullptr;

	} // accessibility
} // javax