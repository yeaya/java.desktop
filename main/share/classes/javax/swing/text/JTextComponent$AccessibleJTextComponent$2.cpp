#include <javax/swing/text/JTextComponent$AccessibleJTextComponent$2.h>

#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$AccessibleJTextComponent$2_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/JTextComponent$AccessibleJTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$AccessibleJTextComponent$2, this$1)},
	{"val$pos", "Ljava/lang/Integer;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$AccessibleJTextComponent$2, val$pos)},
	{}
};

$MethodInfo _JTextComponent$AccessibleJTextComponent$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent$AccessibleJTextComponent;Ljava/lang/Integer;)V", "()V", 0, $method(static_cast<void(JTextComponent$AccessibleJTextComponent$2::*)($JTextComponent$AccessibleJTextComponent*,$Integer*)>(&JTextComponent$AccessibleJTextComponent$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextComponent$AccessibleJTextComponent$2_EnclosingMethodInfo_ = {
	"javax.swing.text.JTextComponent$AccessibleJTextComponent",
	"insertUpdate",
	"(Ljavax/swing/event/DocumentEvent;)V"
};

$InnerClassInfo _JTextComponent$AccessibleJTextComponent$2_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextComponent$AccessibleJTextComponent$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$AccessibleJTextComponent$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_JTextComponent$AccessibleJTextComponent$2_FieldInfo_,
	_JTextComponent$AccessibleJTextComponent$2_MethodInfo_,
	nullptr,
	&_JTextComponent$AccessibleJTextComponent$2_EnclosingMethodInfo_,
	_JTextComponent$AccessibleJTextComponent$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$AccessibleJTextComponent$2($Class* clazz) {
	return $of($alloc(JTextComponent$AccessibleJTextComponent$2));
}

void JTextComponent$AccessibleJTextComponent$2::init$($JTextComponent$AccessibleJTextComponent* this$1, $Integer* val$pos) {
	$set(this, this$1, this$1);
	$set(this, val$pos, val$pos);
}

void JTextComponent$AccessibleJTextComponent$2::run() {
	this->this$1->firePropertyChange("AccessibleText"_s, nullptr, this->val$pos);
}

JTextComponent$AccessibleJTextComponent$2::JTextComponent$AccessibleJTextComponent$2() {
}

$Class* JTextComponent$AccessibleJTextComponent$2::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$AccessibleJTextComponent$2, name, initialize, &_JTextComponent$AccessibleJTextComponent$2_ClassInfo_, allocate$JTextComponent$AccessibleJTextComponent$2);
	return class$;
}

$Class* JTextComponent$AccessibleJTextComponent$2::class$ = nullptr;

		} // text
	} // swing
} // javax