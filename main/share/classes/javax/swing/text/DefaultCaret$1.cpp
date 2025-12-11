#include <javax/swing/text/DefaultCaret$1.h>

#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultCaret$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultCaret;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCaret$1, this$0)},
	{}
};

$MethodInfo _DefaultCaret$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultCaret;)V", nullptr, 0, $method(static_cast<void(DefaultCaret$1::*)($DefaultCaret*)>(&DefaultCaret$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultCaret$1_EnclosingMethodInfo_ = {
	"javax.swing.text.DefaultCaret",
	"changeCaretPosition",
	"(ILjavax/swing/text/Position$Bias;)V"
};

$InnerClassInfo _DefaultCaret$1_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultCaret$1", nullptr, nullptr, 0},
	{"javax.swing.text.Position$Bias", "javax.swing.text.Position", "Bias", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DefaultCaret$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultCaret$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_DefaultCaret$1_FieldInfo_,
	_DefaultCaret$1_MethodInfo_,
	nullptr,
	&_DefaultCaret$1_EnclosingMethodInfo_,
	_DefaultCaret$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultCaret"
};

$Object* allocate$DefaultCaret$1($Class* clazz) {
	return $of($alloc(DefaultCaret$1));
}

void DefaultCaret$1::init$($DefaultCaret* this$0) {
	$set(this, this$0, this$0);
}

void DefaultCaret$1::run() {
	this->this$0->repaintNewCaret();
}

DefaultCaret$1::DefaultCaret$1() {
}

$Class* DefaultCaret$1::load$($String* name, bool initialize) {
	$loadClass(DefaultCaret$1, name, initialize, &_DefaultCaret$1_ClassInfo_, allocate$DefaultCaret$1);
	return class$;
}

$Class* DefaultCaret$1::class$ = nullptr;

		} // text
	} // swing
} // javax