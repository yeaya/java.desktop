#include <java/awt/Label$AccessibleAWTLabel.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Label.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef LABEL

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Label = ::java::awt::Label;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

$FieldInfo _Label$AccessibleAWTLabel_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Label;", nullptr, $FINAL | $SYNTHETIC, $field(Label$AccessibleAWTLabel, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Label$AccessibleAWTLabel, serialVersionUID)},
	{}
};

$MethodInfo _Label$AccessibleAWTLabel_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Label;)V", nullptr, $PUBLIC, $method(static_cast<void(Label$AccessibleAWTLabel::*)($Label*)>(&Label$AccessibleAWTLabel::init$))},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Label$AccessibleAWTLabel_InnerClassesInfo_[] = {
	{"java.awt.Label$AccessibleAWTLabel", "java.awt.Label", "AccessibleAWTLabel", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _Label$AccessibleAWTLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Label$AccessibleAWTLabel",
	"java.awt.Component$AccessibleAWTComponent",
	nullptr,
	_Label$AccessibleAWTLabel_FieldInfo_,
	_Label$AccessibleAWTLabel_MethodInfo_,
	nullptr,
	nullptr,
	_Label$AccessibleAWTLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Label"
};

$Object* allocate$Label$AccessibleAWTLabel($Class* clazz) {
	return $of($alloc(Label$AccessibleAWTLabel));
}

void Label$AccessibleAWTLabel::init$($Label* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
}

$String* Label$AccessibleAWTLabel::getAccessibleName() {
	if (this->accessibleName != nullptr) {
		return this->accessibleName;
	} else if (this->this$0->getText() == nullptr) {
		return $Component$AccessibleAWTComponent::getAccessibleName();
	} else {
		return this->this$0->getText();
	}
}

$AccessibleRole* Label$AccessibleAWTLabel::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::LABEL;
}

Label$AccessibleAWTLabel::Label$AccessibleAWTLabel() {
}

$Class* Label$AccessibleAWTLabel::load$($String* name, bool initialize) {
	$loadClass(Label$AccessibleAWTLabel, name, initialize, &_Label$AccessibleAWTLabel_ClassInfo_, allocate$Label$AccessibleAWTLabel);
	return class$;
}

$Class* Label$AccessibleAWTLabel::class$ = nullptr;

	} // awt
} // java