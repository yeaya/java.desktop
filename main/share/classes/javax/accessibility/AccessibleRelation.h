#ifndef _javax_accessibility_AccessibleRelation_h_
#define _javax_accessibility_AccessibleRelation_h_
//$ class javax.accessibility.AccessibleRelation
//$ extends javax.accessibility.AccessibleBundle

#include <java/lang/Array.h>
#include <javax/accessibility/AccessibleBundle.h>

#pragma push_macro("CHILD_NODE_OF")
#undef CHILD_NODE_OF
#pragma push_macro("CHILD_NODE_OF_PROPERTY")
#undef CHILD_NODE_OF_PROPERTY
#pragma push_macro("CONTROLLED_BY")
#undef CONTROLLED_BY
#pragma push_macro("CONTROLLED_BY_PROPERTY")
#undef CONTROLLED_BY_PROPERTY
#pragma push_macro("CONTROLLER_FOR")
#undef CONTROLLER_FOR
#pragma push_macro("CONTROLLER_FOR_PROPERTY")
#undef CONTROLLER_FOR_PROPERTY
#pragma push_macro("EMBEDDED_BY")
#undef EMBEDDED_BY
#pragma push_macro("EMBEDDED_BY_PROPERTY")
#undef EMBEDDED_BY_PROPERTY
#pragma push_macro("EMBEDS")
#undef EMBEDS
#pragma push_macro("EMBEDS_PROPERTY")
#undef EMBEDS_PROPERTY
#pragma push_macro("FLOWS_FROM")
#undef FLOWS_FROM
#pragma push_macro("FLOWS_FROM_PROPERTY")
#undef FLOWS_FROM_PROPERTY
#pragma push_macro("FLOWS_TO")
#undef FLOWS_TO
#pragma push_macro("FLOWS_TO_PROPERTY")
#undef FLOWS_TO_PROPERTY
#pragma push_macro("LABELED_BY")
#undef LABELED_BY
#pragma push_macro("LABELED_BY_PROPERTY")
#undef LABELED_BY_PROPERTY
#pragma push_macro("LABEL_FOR")
#undef LABEL_FOR
#pragma push_macro("LABEL_FOR_PROPERTY")
#undef LABEL_FOR_PROPERTY
#pragma push_macro("MEMBER_OF")
#undef MEMBER_OF
#pragma push_macro("MEMBER_OF_PROPERTY")
#undef MEMBER_OF_PROPERTY
#pragma push_macro("PARENT_WINDOW_OF")
#undef PARENT_WINDOW_OF
#pragma push_macro("PARENT_WINDOW_OF_PROPERTY")
#undef PARENT_WINDOW_OF_PROPERTY
#pragma push_macro("SUBWINDOW_OF")
#undef SUBWINDOW_OF
#pragma push_macro("SUBWINDOW_OF_PROPERTY")
#undef SUBWINDOW_OF_PROPERTY

namespace javax {
	namespace accessibility {

class $export AccessibleRelation : public ::javax::accessibility::AccessibleBundle {
	$class(AccessibleRelation, 0, ::javax::accessibility::AccessibleBundle)
public:
	AccessibleRelation();
	void init$($String* key);
	void init$($String* key, Object$* target);
	void init$($String* key, $ObjectArray* target);
	virtual $String* getKey();
	virtual $ObjectArray* getTarget();
	virtual void setTarget(Object$* target);
	virtual void setTarget($ObjectArray* target);
	$ObjectArray* target = nullptr;
	static $String* LABEL_FOR;
	static $String* LABELED_BY;
	static $String* MEMBER_OF;
	static $String* CONTROLLER_FOR;
	static $String* CONTROLLED_BY;
	static $String* FLOWS_TO;
	static $String* FLOWS_FROM;
	static $String* SUBWINDOW_OF;
	static $String* PARENT_WINDOW_OF;
	static $String* EMBEDS;
	static $String* EMBEDDED_BY;
	static $String* CHILD_NODE_OF;
	static $String* LABEL_FOR_PROPERTY;
	static $String* LABELED_BY_PROPERTY;
	static $String* MEMBER_OF_PROPERTY;
	static $String* CONTROLLER_FOR_PROPERTY;
	static $String* CONTROLLED_BY_PROPERTY;
	static $String* FLOWS_TO_PROPERTY;
	static $String* FLOWS_FROM_PROPERTY;
	static $String* SUBWINDOW_OF_PROPERTY;
	static $String* PARENT_WINDOW_OF_PROPERTY;
	static $String* EMBEDS_PROPERTY;
	static $String* EMBEDDED_BY_PROPERTY;
	static $String* CHILD_NODE_OF_PROPERTY;
};

	} // accessibility
} // javax

#pragma pop_macro("CHILD_NODE_OF")
#pragma pop_macro("CHILD_NODE_OF_PROPERTY")
#pragma pop_macro("CONTROLLED_BY")
#pragma pop_macro("CONTROLLED_BY_PROPERTY")
#pragma pop_macro("CONTROLLER_FOR")
#pragma pop_macro("CONTROLLER_FOR_PROPERTY")
#pragma pop_macro("EMBEDDED_BY")
#pragma pop_macro("EMBEDDED_BY_PROPERTY")
#pragma pop_macro("EMBEDS")
#pragma pop_macro("EMBEDS_PROPERTY")
#pragma pop_macro("FLOWS_FROM")
#pragma pop_macro("FLOWS_FROM_PROPERTY")
#pragma pop_macro("FLOWS_TO")
#pragma pop_macro("FLOWS_TO_PROPERTY")
#pragma pop_macro("LABELED_BY")
#pragma pop_macro("LABELED_BY_PROPERTY")
#pragma pop_macro("LABEL_FOR")
#pragma pop_macro("LABEL_FOR_PROPERTY")
#pragma pop_macro("MEMBER_OF")
#pragma pop_macro("MEMBER_OF_PROPERTY")
#pragma pop_macro("PARENT_WINDOW_OF")
#pragma pop_macro("PARENT_WINDOW_OF_PROPERTY")
#pragma pop_macro("SUBWINDOW_OF")
#pragma pop_macro("SUBWINDOW_OF_PROPERTY")

#endif // _javax_accessibility_AccessibleRelation_h_