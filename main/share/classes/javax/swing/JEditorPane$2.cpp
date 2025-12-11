#include <javax/swing/JEditorPane$2.h>

#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;

namespace javax {
	namespace swing {

$FieldInfo _JEditorPane$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$2, this$0)},
	{"val$reference", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$2, val$reference)},
	{}
};

$MethodInfo _JEditorPane$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JEditorPane;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(JEditorPane$2::*)($JEditorPane*,$String*)>(&JEditorPane$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JEditorPane$2_EnclosingMethodInfo_ = {
	"javax.swing.JEditorPane",
	"setPage",
	"(Ljava/net/URL;)V"
};

$InnerClassInfo _JEditorPane$2_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JEditorPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_JEditorPane$2_FieldInfo_,
	_JEditorPane$2_MethodInfo_,
	nullptr,
	&_JEditorPane$2_EnclosingMethodInfo_,
	_JEditorPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$2($Class* clazz) {
	return $of($alloc(JEditorPane$2));
}

void JEditorPane$2::init$($JEditorPane* this$0, $String* val$reference) {
	$set(this, this$0, this$0);
	$set(this, val$reference, val$reference);
}

void JEditorPane$2::run() {
	this->this$0->scrollToReference(this->val$reference);
}

JEditorPane$2::JEditorPane$2() {
}

$Class* JEditorPane$2::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$2, name, initialize, &_JEditorPane$2_ClassInfo_, allocate$JEditorPane$2);
	return class$;
}

$Class* JEditorPane$2::class$ = nullptr;

	} // swing
} // javax