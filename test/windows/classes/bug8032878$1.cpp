#include <bug8032878$1.h>

#include <bug8032878.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug8032878 = ::bug8032878;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug8032878$1_FieldInfo_[] = {
	{"this$0", "Lbug8032878;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032878$1, this$0)},
	{}
};

$MethodInfo _bug8032878$1_MethodInfo_[] = {
	{"<init>", "(Lbug8032878;)V", nullptr, 0, $method(static_cast<void(bug8032878$1::*)($bug8032878*)>(&bug8032878$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8032878$1_EnclosingMethodInfo_ = {
	"bug8032878",
	"checkResult",
	"()V"
};

$InnerClassInfo _bug8032878$1_InnerClassesInfo_[] = {
	{"bug8032878$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8032878$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8032878$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug8032878$1_FieldInfo_,
	_bug8032878$1_MethodInfo_,
	nullptr,
	&_bug8032878$1_EnclosingMethodInfo_,
	_bug8032878$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8032878"
};

$Object* allocate$bug8032878$1($Class* clazz) {
	return $of($alloc(bug8032878$1));
}

void bug8032878$1::init$($bug8032878* this$0) {
	$set(this, this$0, this$0);
}

void bug8032878$1::run() {
	$set(this->this$0, text, $nc(($cast($JTextComponent, $($nc($($nc(this->this$0->cb)->getEditor()))->getEditorComponent()))))->getText());
}

bug8032878$1::bug8032878$1() {
}

$Class* bug8032878$1::load$($String* name, bool initialize) {
	$loadClass(bug8032878$1, name, initialize, &_bug8032878$1_ClassInfo_, allocate$bug8032878$1);
	return class$;
}

$Class* bug8032878$1::class$ = nullptr;