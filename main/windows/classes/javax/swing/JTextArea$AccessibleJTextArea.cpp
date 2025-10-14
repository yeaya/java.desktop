#include <javax/swing/JTextArea$AccessibleJTextArea.h>

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
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef MULTI_LINE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;

namespace javax {
	namespace swing {

$FieldInfo _JTextArea$AccessibleJTextArea_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTextArea;", nullptr, $FINAL | $SYNTHETIC, $field(JTextArea$AccessibleJTextArea, this$0)},
	{}
};

$MethodInfo _JTextArea$AccessibleJTextArea_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTextArea;)V", nullptr, $PROTECTED, $method(static_cast<void(JTextArea$AccessibleJTextArea::*)($JTextArea*)>(&JTextArea$AccessibleJTextArea::init$))},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextArea$AccessibleJTextArea_InnerClassesInfo_[] = {
	{"javax.swing.JTextArea$AccessibleJTextArea", "javax.swing.JTextArea", "AccessibleJTextArea", $PROTECTED},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
	{}
};

$ClassInfo _JTextArea$AccessibleJTextArea_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTextArea$AccessibleJTextArea",
	"javax.swing.text.JTextComponent$AccessibleJTextComponent",
	nullptr,
	_JTextArea$AccessibleJTextArea_FieldInfo_,
	_JTextArea$AccessibleJTextArea_MethodInfo_,
	nullptr,
	nullptr,
	_JTextArea$AccessibleJTextArea_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTextArea"
};

$Object* allocate$JTextArea$AccessibleJTextArea($Class* clazz) {
	return $of($alloc(JTextArea$AccessibleJTextArea));
}

void JTextArea$AccessibleJTextArea::init$($JTextArea* this$0) {
	$set(this, this$0, this$0);
	$JTextComponent$AccessibleJTextComponent::init$(this$0);
}

$AccessibleStateSet* JTextArea$AccessibleJTextArea::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $JTextComponent$AccessibleJTextComponent::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::MULTI_LINE);
	return states;
}

JTextArea$AccessibleJTextArea::JTextArea$AccessibleJTextArea() {
}

$Class* JTextArea$AccessibleJTextArea::load$($String* name, bool initialize) {
	$loadClass(JTextArea$AccessibleJTextArea, name, initialize, &_JTextArea$AccessibleJTextArea_ClassInfo_, allocate$JTextArea$AccessibleJTextArea);
	return class$;
}

$Class* JTextArea$AccessibleJTextArea::class$ = nullptr;

	} // swing
} // javax