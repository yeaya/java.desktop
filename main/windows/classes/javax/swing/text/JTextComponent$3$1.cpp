#include <javax/swing/text/JTextComponent$3$1.h>

#include <java/awt/Component.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/text/JTextComponent$3.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $JComponent = ::javax::swing::JComponent;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$3 = ::javax::swing::text::JTextComponent$3;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$3$1_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/JTextComponent$3;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3$1, this$1)},
	{}
};

$MethodInfo _JTextComponent$3$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent$3;)V", nullptr, 0, $method(static_cast<void(JTextComponent$3$1::*)($JTextComponent$3*)>(&JTextComponent$3$1::init$))},
	{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _JTextComponent$3$1_EnclosingMethodInfo_ = {
	"javax.swing.text.JTextComponent$3",
	"run",
	"()V"
};

$InnerClassInfo _JTextComponent$3$1_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$3", nullptr, nullptr, 0},
	{"javax.swing.text.JTextComponent$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextComponent$3$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$3$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_JTextComponent$3$1_FieldInfo_,
	_JTextComponent$3$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
	&_JTextComponent$3$1_EnclosingMethodInfo_,
	_JTextComponent$3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$3$1($Class* clazz) {
	return $of($alloc(JTextComponent$3$1));
}

void JTextComponent$3$1::init$($JTextComponent$3* this$1) {
	$set(this, this$1, this$1);
}

$Object* JTextComponent$3$1::call() {
	bool rv = $nc(this->this$1->this$0)->isEnabled();
	if (rv) {
		$nc(this->this$1->this$0)->setEnabled(false);
	}
	return $of($Boolean::valueOf(rv));
}

JTextComponent$3$1::JTextComponent$3$1() {
}

$Class* JTextComponent$3$1::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$3$1, name, initialize, &_JTextComponent$3$1_ClassInfo_, allocate$JTextComponent$3$1);
	return class$;
}

$Class* JTextComponent$3$1::class$ = nullptr;

		} // text
	} // swing
} // javax