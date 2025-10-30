#include <javax/accessibility/AccessibleContext.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/util/Locale.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext$1.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/accessibility/AccessibleIcon.h>
#include <javax/accessibility/AccessibleRelationSet.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/accessibility/AccessibleValue.h>
#include <sun/awt/AWTAccessor$AccessibleContextAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef ACCESSIBLE_ACTION_PROPERTY
#undef ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY
#undef ACCESSIBLE_CARET_PROPERTY
#undef ACCESSIBLE_CHILD_PROPERTY
#undef ACCESSIBLE_COMPONENT_BOUNDS_CHANGED
#undef ACCESSIBLE_DESCRIPTION_PROPERTY
#undef ACCESSIBLE_HYPERTEXT_OFFSET
#undef ACCESSIBLE_INVALIDATE_CHILDREN
#undef ACCESSIBLE_NAME_PROPERTY
#undef ACCESSIBLE_SELECTION_PROPERTY
#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_TABLE_CAPTION_CHANGED
#undef ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED
#undef ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED
#undef ACCESSIBLE_TABLE_MODEL_CHANGED
#undef ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED
#undef ACCESSIBLE_TABLE_ROW_HEADER_CHANGED
#undef ACCESSIBLE_TABLE_SUMMARY_CHANGED
#undef ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED
#undef ACCESSIBLE_TEXT_PROPERTY
#undef ACCESSIBLE_VALUE_PROPERTY
#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY

using $AccessibleIconArray = $Array<::javax::accessibility::AccessibleIcon>;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Locale = ::java::util::Locale;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext$1 = ::javax::accessibility::AccessibleContext$1;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;
using $AccessibleRelationSet = ::javax::accessibility::AccessibleRelationSet;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AccessibleValue = ::javax::accessibility::AccessibleValue;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AccessibleContextAccessor = ::sun::awt::AWTAccessor$AccessibleContextAccessor;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace accessibility {

$NamedAttribute AccessibleContext_Attribute_var$0[] = {
	{"description", 's', "Minimal information that all accessible objects return"},
	{}
};

$CompoundAttribute _AccessibleContext_Annotations_[] = {
	{"Ljava/beans/JavaBean;", AccessibleContext_Attribute_var$0},
	{}
};

$NamedAttribute AccessibleContext_Attribute_var$1[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets the accessible description for the component."},
	{}
};

$CompoundAttribute _AccessibleContext_MethodAnnotations_setAccessibleDescription22[] = {
	{"Ljava/beans/BeanProperty;", AccessibleContext_Attribute_var$1},
	{}
};

$NamedAttribute AccessibleContext_Attribute_var$2[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets the accessible name for the component."},
	{}
};

$CompoundAttribute _AccessibleContext_MethodAnnotations_setAccessibleName23[] = {
	{"Ljava/beans/BeanProperty;", AccessibleContext_Attribute_var$2},
	{}
};

$FieldInfo _AccessibleContext_FieldInfo_[] = {
	{"targetAppContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE | $VOLATILE, $field(AccessibleContext, targetAppContext)},
	{"ACCESSIBLE_NAME_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_NAME_PROPERTY)},
	{"ACCESSIBLE_DESCRIPTION_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_DESCRIPTION_PROPERTY)},
	{"ACCESSIBLE_STATE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_STATE_PROPERTY)},
	{"ACCESSIBLE_VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_VALUE_PROPERTY)},
	{"ACCESSIBLE_SELECTION_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_SELECTION_PROPERTY)},
	{"ACCESSIBLE_CARET_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_CARET_PROPERTY)},
	{"ACCESSIBLE_VISIBLE_DATA_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_VISIBLE_DATA_PROPERTY)},
	{"ACCESSIBLE_CHILD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_CHILD_PROPERTY)},
	{"ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY)},
	{"ACCESSIBLE_TABLE_CAPTION_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_TABLE_CAPTION_CHANGED)},
	{"ACCESSIBLE_TABLE_SUMMARY_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_TABLE_SUMMARY_CHANGED)},
	{"ACCESSIBLE_TABLE_MODEL_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_TABLE_MODEL_CHANGED)},
	{"ACCESSIBLE_TABLE_ROW_HEADER_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_TABLE_ROW_HEADER_CHANGED)},
	{"ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED)},
	{"ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED)},
	{"ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED)},
	{"ACCESSIBLE_ACTION_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_ACTION_PROPERTY)},
	{"ACCESSIBLE_HYPERTEXT_OFFSET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_HYPERTEXT_OFFSET)},
	{"ACCESSIBLE_TEXT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_TEXT_PROPERTY)},
	{"ACCESSIBLE_INVALIDATE_CHILDREN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_INVALIDATE_CHILDREN)},
	{"ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED)},
	{"ACCESSIBLE_COMPONENT_BOUNDS_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleContext, ACCESSIBLE_COMPONENT_BOUNDS_CHANGED)},
	{"accessibleParent", "Ljavax/accessibility/Accessible;", nullptr, $PROTECTED, $field(AccessibleContext, accessibleParent)},
	{"accessibleName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AccessibleContext, accessibleName)},
	{"accessibleDescription", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AccessibleContext, accessibleDescription)},
	{"accessibleChangeSupport", "Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE, $field(AccessibleContext, accessibleChangeSupport)},
	{"relationSet", "Ljavax/accessibility/AccessibleRelationSet;", nullptr, $PRIVATE, $field(AccessibleContext, relationSet)},
	{"nativeAXResource", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(AccessibleContext, nativeAXResource)},
	{}
};

$MethodInfo _AccessibleContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AccessibleContext::*)()>(&AccessibleContext::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleEditableText", "()Ljavax/accessibility/AccessibleEditableText;", nullptr, $PUBLIC},
	{"getAccessibleIcon", "()[Ljavax/accessibility/AccessibleIcon;", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleParent", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleRelationSet", "()Ljavax/accessibility/AccessibleRelationSet;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAccessibleTable", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC},
	{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC},
	{"getAccessibleValue", "()Ljavax/accessibility/AccessibleValue;", nullptr, $PUBLIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.IllegalComponentStateException"},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"setAccessibleDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AccessibleContext_MethodAnnotations_setAccessibleDescription22},
	{"setAccessibleName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _AccessibleContext_MethodAnnotations_setAccessibleName23},
	{"setAccessibleParent", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleContext_InnerClassesInfo_[] = {
	{"javax.accessibility.AccessibleContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AccessibleContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.accessibility.AccessibleContext",
	"java.lang.Object",
	nullptr,
	_AccessibleContext_FieldInfo_,
	_AccessibleContext_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleContext_InnerClassesInfo_,
	_AccessibleContext_Annotations_,
	nullptr,
	"javax.accessibility.AccessibleContext$1"
};

$Object* allocate$AccessibleContext($Class* clazz) {
	return $of($alloc(AccessibleContext));
}

$String* AccessibleContext::ACCESSIBLE_NAME_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_STATE_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_VALUE_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_SELECTION_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_CARET_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_CHILD_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_TABLE_CAPTION_CHANGED = nullptr;
$String* AccessibleContext::ACCESSIBLE_TABLE_SUMMARY_CHANGED = nullptr;
$String* AccessibleContext::ACCESSIBLE_TABLE_MODEL_CHANGED = nullptr;
$String* AccessibleContext::ACCESSIBLE_TABLE_ROW_HEADER_CHANGED = nullptr;
$String* AccessibleContext::ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED = nullptr;
$String* AccessibleContext::ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED = nullptr;
$String* AccessibleContext::ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED = nullptr;
$String* AccessibleContext::ACCESSIBLE_ACTION_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_HYPERTEXT_OFFSET = nullptr;
$String* AccessibleContext::ACCESSIBLE_TEXT_PROPERTY = nullptr;
$String* AccessibleContext::ACCESSIBLE_INVALIDATE_CHILDREN = nullptr;
$String* AccessibleContext::ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED = nullptr;
$String* AccessibleContext::ACCESSIBLE_COMPONENT_BOUNDS_CHANGED = nullptr;

void AccessibleContext::init$() {
	$set(this, accessibleParent, nullptr);
	$set(this, accessibleName, nullptr);
	$set(this, accessibleDescription, nullptr);
	$set(this, accessibleChangeSupport, nullptr);
	$set(this, relationSet, $new($AccessibleRelationSet));
}

$String* AccessibleContext::getAccessibleName() {
	return this->accessibleName;
}

void AccessibleContext::setAccessibleName($String* s) {
	$var($String, oldName, this->accessibleName);
	$set(this, accessibleName, s);
	firePropertyChange(AccessibleContext::ACCESSIBLE_NAME_PROPERTY, oldName, this->accessibleName);
}

$String* AccessibleContext::getAccessibleDescription() {
	return this->accessibleDescription;
}

void AccessibleContext::setAccessibleDescription($String* s) {
	$var($String, oldDescription, this->accessibleDescription);
	$set(this, accessibleDescription, s);
	firePropertyChange(AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY, oldDescription, this->accessibleDescription);
}

$Accessible* AccessibleContext::getAccessibleParent() {
	return this->accessibleParent;
}

void AccessibleContext::setAccessibleParent($Accessible* a) {
	$set(this, accessibleParent, a);
}

void AccessibleContext::addPropertyChangeListener($PropertyChangeListener* listener) {
	if (this->accessibleChangeSupport == nullptr) {
		$set(this, accessibleChangeSupport, $new($PropertyChangeSupport, this));
	}
	$nc(this->accessibleChangeSupport)->addPropertyChangeListener(listener);
}

void AccessibleContext::removePropertyChangeListener($PropertyChangeListener* listener) {
	if (this->accessibleChangeSupport != nullptr) {
		$nc(this->accessibleChangeSupport)->removePropertyChangeListener(listener);
	}
}

$AccessibleAction* AccessibleContext::getAccessibleAction() {
	return nullptr;
}

$AccessibleComponent* AccessibleContext::getAccessibleComponent() {
	return nullptr;
}

$AccessibleSelection* AccessibleContext::getAccessibleSelection() {
	return nullptr;
}

$AccessibleText* AccessibleContext::getAccessibleText() {
	return nullptr;
}

$AccessibleEditableText* AccessibleContext::getAccessibleEditableText() {
	return nullptr;
}

$AccessibleValue* AccessibleContext::getAccessibleValue() {
	return nullptr;
}

$AccessibleIconArray* AccessibleContext::getAccessibleIcon() {
	return nullptr;
}

$AccessibleRelationSet* AccessibleContext::getAccessibleRelationSet() {
	return this->relationSet;
}

$AccessibleTable* AccessibleContext::getAccessibleTable() {
	return nullptr;
}

void AccessibleContext::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (this->accessibleChangeSupport != nullptr) {
		if ($instanceOf($PropertyChangeEvent, newValue)) {
			$var($PropertyChangeEvent, pce, $cast($PropertyChangeEvent, newValue));
			$nc(this->accessibleChangeSupport)->firePropertyChange(pce);
		} else {
			$nc(this->accessibleChangeSupport)->firePropertyChange(propertyName, oldValue, newValue);
		}
	}
}

void clinit$AccessibleContext($Class* class$) {
	$assignStatic(AccessibleContext::ACCESSIBLE_NAME_PROPERTY, "AccessibleName"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY, "AccessibleDescription"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_STATE_PROPERTY, "AccessibleState"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_VALUE_PROPERTY, "AccessibleValue"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_SELECTION_PROPERTY, "AccessibleSelection"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_CARET_PROPERTY, "AccessibleCaret"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, "AccessibleVisibleData"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_CHILD_PROPERTY, "AccessibleChild"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY, "AccessibleActiveDescendant"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_TABLE_CAPTION_CHANGED, "accessibleTableCaptionChanged"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_TABLE_SUMMARY_CHANGED, "accessibleTableSummaryChanged"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_TABLE_MODEL_CHANGED, "accessibleTableModelChanged"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_TABLE_ROW_HEADER_CHANGED, "accessibleTableRowHeaderChanged"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED, "accessibleTableRowDescriptionChanged"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED, "accessibleTableColumnHeaderChanged"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED, "accessibleTableColumnDescriptionChanged"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_ACTION_PROPERTY, "accessibleActionProperty"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_HYPERTEXT_OFFSET, "AccessibleHypertextOffset"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_TEXT_PROPERTY, "AccessibleText"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_INVALIDATE_CHILDREN, "accessibleInvalidateChildren"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED, "accessibleTextAttributesChanged"_s);
	$assignStatic(AccessibleContext::ACCESSIBLE_COMPONENT_BOUNDS_CHANGED, "accessibleComponentBoundsChanged"_s);
	{
		$AWTAccessor::setAccessibleContextAccessor($$new($AccessibleContext$1));
	}
}

AccessibleContext::AccessibleContext() {
}

$Class* AccessibleContext::load$($String* name, bool initialize) {
	$loadClass(AccessibleContext, name, initialize, &_AccessibleContext_ClassInfo_, clinit$AccessibleContext, allocate$AccessibleContext);
	return class$;
}

$Class* AccessibleContext::class$ = nullptr;

	} // accessibility
} // javax