#include <javax/swing/text/JTextComponent$3$2.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/text/JTextComponent$3.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$3 = ::javax::swing::text::JTextComponent$3;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$3$2_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/JTextComponent$3;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3$2, this$1)},
	{}
};

$MethodInfo _JTextComponent$3$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent$3;)V", nullptr, 0, $method(static_cast<void(JTextComponent$3$2::*)($JTextComponent$3*)>(&JTextComponent$3$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextComponent$3$2_EnclosingMethodInfo_ = {
	"javax.swing.text.JTextComponent$3",
	"run",
	"()V"
};

$InnerClassInfo _JTextComponent$3$2_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$3", nullptr, nullptr, 0},
	{"javax.swing.text.JTextComponent$3$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextComponent$3$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$3$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_JTextComponent$3$2_FieldInfo_,
	_JTextComponent$3$2_MethodInfo_,
	nullptr,
	&_JTextComponent$3$2_EnclosingMethodInfo_,
	_JTextComponent$3$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$3$2($Class* clazz) {
	return $of($alloc(JTextComponent$3$2));
}

void JTextComponent$3$2::init$($JTextComponent$3* this$1) {
	$set(this, this$1, this$1);
}

void JTextComponent$3$2::run() {
	$nc(this->this$1->this$0)->setEnabled(true);
}

JTextComponent$3$2::JTextComponent$3$2() {
}

$Class* JTextComponent$3$2::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$3$2, name, initialize, &_JTextComponent$3$2_ClassInfo_, allocate$JTextComponent$3$2);
	return class$;
}

$Class* JTextComponent$3$2::class$ = nullptr;

		} // text
	} // swing
} // javax