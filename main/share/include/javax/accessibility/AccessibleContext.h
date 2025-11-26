#ifndef _javax_accessibility_AccessibleContext_h_
#define _javax_accessibility_AccessibleContext_h_
//$ class javax.accessibility.AccessibleContext
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ACCESSIBLE_ACTION_PROPERTY")
#undef ACCESSIBLE_ACTION_PROPERTY
#pragma push_macro("ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY")
#undef ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY
#pragma push_macro("ACCESSIBLE_CARET_PROPERTY")
#undef ACCESSIBLE_CARET_PROPERTY
#pragma push_macro("ACCESSIBLE_CHILD_PROPERTY")
#undef ACCESSIBLE_CHILD_PROPERTY
#pragma push_macro("ACCESSIBLE_COMPONENT_BOUNDS_CHANGED")
#undef ACCESSIBLE_COMPONENT_BOUNDS_CHANGED
#pragma push_macro("ACCESSIBLE_DESCRIPTION_PROPERTY")
#undef ACCESSIBLE_DESCRIPTION_PROPERTY
#pragma push_macro("ACCESSIBLE_HYPERTEXT_OFFSET")
#undef ACCESSIBLE_HYPERTEXT_OFFSET
#pragma push_macro("ACCESSIBLE_INVALIDATE_CHILDREN")
#undef ACCESSIBLE_INVALIDATE_CHILDREN
#pragma push_macro("ACCESSIBLE_NAME_PROPERTY")
#undef ACCESSIBLE_NAME_PROPERTY
#pragma push_macro("ACCESSIBLE_SELECTION_PROPERTY")
#undef ACCESSIBLE_SELECTION_PROPERTY
#pragma push_macro("ACCESSIBLE_STATE_PROPERTY")
#undef ACCESSIBLE_STATE_PROPERTY
#pragma push_macro("ACCESSIBLE_TABLE_CAPTION_CHANGED")
#undef ACCESSIBLE_TABLE_CAPTION_CHANGED
#pragma push_macro("ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED")
#undef ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED
#pragma push_macro("ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED")
#undef ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED
#pragma push_macro("ACCESSIBLE_TABLE_MODEL_CHANGED")
#undef ACCESSIBLE_TABLE_MODEL_CHANGED
#pragma push_macro("ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED")
#undef ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED
#pragma push_macro("ACCESSIBLE_TABLE_ROW_HEADER_CHANGED")
#undef ACCESSIBLE_TABLE_ROW_HEADER_CHANGED
#pragma push_macro("ACCESSIBLE_TABLE_SUMMARY_CHANGED")
#undef ACCESSIBLE_TABLE_SUMMARY_CHANGED
#pragma push_macro("ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED")
#undef ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED
#pragma push_macro("ACCESSIBLE_TEXT_PROPERTY")
#undef ACCESSIBLE_TEXT_PROPERTY
#pragma push_macro("ACCESSIBLE_VALUE_PROPERTY")
#undef ACCESSIBLE_VALUE_PROPERTY
#pragma push_macro("ACCESSIBLE_VISIBLE_DATA_PROPERTY")
#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY

namespace java {
	namespace beans {
		class PropertyChangeListener;
		class PropertyChangeSupport;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleAction;
		class AccessibleComponent;
		class AccessibleEditableText;
		class AccessibleIcon;
		class AccessibleRelationSet;
		class AccessibleRole;
		class AccessibleSelection;
		class AccessibleStateSet;
		class AccessibleTable;
		class AccessibleText;
		class AccessibleValue;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace javax {
	namespace accessibility {

class $import AccessibleContext : public ::java::lang::Object {
	$class(AccessibleContext, 0, ::java::lang::Object)
public:
	AccessibleContext();
	void init$();
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual ::javax::accessibility::AccessibleAction* getAccessibleAction();
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) {return nullptr;}
	virtual int32_t getAccessibleChildrenCount() {return 0;}
	virtual ::javax::accessibility::AccessibleComponent* getAccessibleComponent();
	virtual $String* getAccessibleDescription();
	virtual ::javax::accessibility::AccessibleEditableText* getAccessibleEditableText();
	virtual $Array<::javax::accessibility::AccessibleIcon>* getAccessibleIcon();
	virtual int32_t getAccessibleIndexInParent() {return 0;}
	virtual $String* getAccessibleName();
	virtual ::javax::accessibility::Accessible* getAccessibleParent();
	virtual ::javax::accessibility::AccessibleRelationSet* getAccessibleRelationSet();
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() {return nullptr;}
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection();
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() {return nullptr;}
	virtual ::javax::accessibility::AccessibleTable* getAccessibleTable();
	virtual ::javax::accessibility::AccessibleText* getAccessibleText();
	virtual ::javax::accessibility::AccessibleValue* getAccessibleValue();
	virtual ::java::util::Locale* getLocale() {return nullptr;}
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void setAccessibleDescription($String* s);
	virtual void setAccessibleName($String* s);
	virtual void setAccessibleParent(::javax::accessibility::Accessible* a);
	$volatile(::sun::awt::AppContext*) targetAppContext = nullptr;
	static $String* ACCESSIBLE_NAME_PROPERTY;
	static $String* ACCESSIBLE_DESCRIPTION_PROPERTY;
	static $String* ACCESSIBLE_STATE_PROPERTY;
	static $String* ACCESSIBLE_VALUE_PROPERTY;
	static $String* ACCESSIBLE_SELECTION_PROPERTY;
	static $String* ACCESSIBLE_CARET_PROPERTY;
	static $String* ACCESSIBLE_VISIBLE_DATA_PROPERTY;
	static $String* ACCESSIBLE_CHILD_PROPERTY;
	static $String* ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY;
	static $String* ACCESSIBLE_TABLE_CAPTION_CHANGED;
	static $String* ACCESSIBLE_TABLE_SUMMARY_CHANGED;
	static $String* ACCESSIBLE_TABLE_MODEL_CHANGED;
	static $String* ACCESSIBLE_TABLE_ROW_HEADER_CHANGED;
	static $String* ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED;
	static $String* ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED;
	static $String* ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED;
	static $String* ACCESSIBLE_ACTION_PROPERTY;
	static $String* ACCESSIBLE_HYPERTEXT_OFFSET;
	static $String* ACCESSIBLE_TEXT_PROPERTY;
	static $String* ACCESSIBLE_INVALIDATE_CHILDREN;
	static $String* ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED;
	static $String* ACCESSIBLE_COMPONENT_BOUNDS_CHANGED;
	::javax::accessibility::Accessible* accessibleParent = nullptr;
	$String* accessibleName = nullptr;
	$String* accessibleDescription = nullptr;
	::java::beans::PropertyChangeSupport* accessibleChangeSupport = nullptr;
	::javax::accessibility::AccessibleRelationSet* relationSet = nullptr;
	$Object* nativeAXResource = nullptr;
};

	} // accessibility
} // javax

#pragma pop_macro("ACCESSIBLE_ACTION_PROPERTY")
#pragma pop_macro("ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY")
#pragma pop_macro("ACCESSIBLE_CARET_PROPERTY")
#pragma pop_macro("ACCESSIBLE_CHILD_PROPERTY")
#pragma pop_macro("ACCESSIBLE_COMPONENT_BOUNDS_CHANGED")
#pragma pop_macro("ACCESSIBLE_DESCRIPTION_PROPERTY")
#pragma pop_macro("ACCESSIBLE_HYPERTEXT_OFFSET")
#pragma pop_macro("ACCESSIBLE_INVALIDATE_CHILDREN")
#pragma pop_macro("ACCESSIBLE_NAME_PROPERTY")
#pragma pop_macro("ACCESSIBLE_SELECTION_PROPERTY")
#pragma pop_macro("ACCESSIBLE_STATE_PROPERTY")
#pragma pop_macro("ACCESSIBLE_TABLE_CAPTION_CHANGED")
#pragma pop_macro("ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED")
#pragma pop_macro("ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED")
#pragma pop_macro("ACCESSIBLE_TABLE_MODEL_CHANGED")
#pragma pop_macro("ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED")
#pragma pop_macro("ACCESSIBLE_TABLE_ROW_HEADER_CHANGED")
#pragma pop_macro("ACCESSIBLE_TABLE_SUMMARY_CHANGED")
#pragma pop_macro("ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED")
#pragma pop_macro("ACCESSIBLE_TEXT_PROPERTY")
#pragma pop_macro("ACCESSIBLE_VALUE_PROPERTY")
#pragma pop_macro("ACCESSIBLE_VISIBLE_DATA_PROPERTY")

#endif // _javax_accessibility_AccessibleContext_h_