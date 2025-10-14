#include <java/awt/TextArea$AccessibleAWTTextArea.h>

#include <java/awt/TextArea.h>
#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>
#include <java/awt/TextComponent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef MULTI_LINE

using $TextArea = ::java::awt::TextArea;
using $TextComponent = ::java::awt::TextComponent;
using $TextComponent$AccessibleAWTTextComponent = ::java::awt::TextComponent$AccessibleAWTTextComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

$FieldInfo _TextArea$AccessibleAWTTextArea_FieldInfo_[] = {
	{"this$0", "Ljava/awt/TextArea;", nullptr, $FINAL | $SYNTHETIC, $field(TextArea$AccessibleAWTTextArea, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextArea$AccessibleAWTTextArea, serialVersionUID)},
	{}
};

$MethodInfo _TextArea$AccessibleAWTTextArea_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/TextArea;)V", nullptr, $PROTECTED, $method(static_cast<void(TextArea$AccessibleAWTTextArea::*)($TextArea*)>(&TextArea$AccessibleAWTTextArea::init$))},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TextArea$AccessibleAWTTextArea_InnerClassesInfo_[] = {
	{"java.awt.TextArea$AccessibleAWTTextArea", "java.awt.TextArea", "AccessibleAWTTextArea", $PROTECTED},
	{"java.awt.TextComponent$AccessibleAWTTextComponent", "java.awt.TextComponent", "AccessibleAWTTextComponent", $PROTECTED},
	{}
};

$ClassInfo _TextArea$AccessibleAWTTextArea_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.TextArea$AccessibleAWTTextArea",
	"java.awt.TextComponent$AccessibleAWTTextComponent",
	nullptr,
	_TextArea$AccessibleAWTTextArea_FieldInfo_,
	_TextArea$AccessibleAWTTextArea_MethodInfo_,
	nullptr,
	nullptr,
	_TextArea$AccessibleAWTTextArea_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.TextArea"
};

$Object* allocate$TextArea$AccessibleAWTTextArea($Class* clazz) {
	return $of($alloc(TextArea$AccessibleAWTTextArea));
}

void TextArea$AccessibleAWTTextArea::init$($TextArea* this$0) {
	$set(this, this$0, this$0);
	$TextComponent$AccessibleAWTTextComponent::init$(this$0);
}

$AccessibleStateSet* TextArea$AccessibleAWTTextArea::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $TextComponent$AccessibleAWTTextComponent::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::MULTI_LINE);
	return states;
}

TextArea$AccessibleAWTTextArea::TextArea$AccessibleAWTTextArea() {
}

$Class* TextArea$AccessibleAWTTextArea::load$($String* name, bool initialize) {
	$loadClass(TextArea$AccessibleAWTTextArea, name, initialize, &_TextArea$AccessibleAWTTextArea_ClassInfo_, allocate$TextArea$AccessibleAWTTextArea);
	return class$;
}

$Class* TextArea$AccessibleAWTTextArea::class$ = nullptr;

	} // awt
} // java