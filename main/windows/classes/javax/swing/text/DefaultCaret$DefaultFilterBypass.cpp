#include <javax/swing/text/DefaultCaret$DefaultFilterBypass.h>

#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/NavigationFilter$FilterBypass.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $NavigationFilter$FilterBypass = ::javax::swing::text::NavigationFilter$FilterBypass;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultCaret$DefaultFilterBypass_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultCaret;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCaret$DefaultFilterBypass, this$0)},
	{}
};

$MethodInfo _DefaultCaret$DefaultFilterBypass_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultCaret;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultCaret$DefaultFilterBypass::*)($DefaultCaret*)>(&DefaultCaret$DefaultFilterBypass::init$))},
	{"getCaret", "()Ljavax/swing/text/Caret;", nullptr, $PUBLIC},
	{"moveDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{"setDot", "(ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultCaret$DefaultFilterBypass_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultCaret$DefaultFilterBypass", "javax.swing.text.DefaultCaret", "DefaultFilterBypass", $PRIVATE},
	{"javax.swing.text.NavigationFilter$FilterBypass", "javax.swing.text.NavigationFilter", "FilterBypass", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultCaret$DefaultFilterBypass_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultCaret$DefaultFilterBypass",
	"javax.swing.text.NavigationFilter$FilterBypass",
	nullptr,
	_DefaultCaret$DefaultFilterBypass_FieldInfo_,
	_DefaultCaret$DefaultFilterBypass_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultCaret$DefaultFilterBypass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultCaret"
};

$Object* allocate$DefaultCaret$DefaultFilterBypass($Class* clazz) {
	return $of($alloc(DefaultCaret$DefaultFilterBypass));
}

void DefaultCaret$DefaultFilterBypass::init$($DefaultCaret* this$0) {
	$set(this, this$0, this$0);
	$NavigationFilter$FilterBypass::init$();
}

$Caret* DefaultCaret$DefaultFilterBypass::getCaret() {
	return this->this$0;
}

void DefaultCaret$DefaultFilterBypass::setDot(int32_t dot, $Position$Bias* bias) {
	this->this$0->handleSetDot(dot, bias);
}

void DefaultCaret$DefaultFilterBypass::moveDot(int32_t dot, $Position$Bias* bias) {
	this->this$0->handleMoveDot(dot, bias);
}

DefaultCaret$DefaultFilterBypass::DefaultCaret$DefaultFilterBypass() {
}

$Class* DefaultCaret$DefaultFilterBypass::load$($String* name, bool initialize) {
	$loadClass(DefaultCaret$DefaultFilterBypass, name, initialize, &_DefaultCaret$DefaultFilterBypass_ClassInfo_, allocate$DefaultCaret$DefaultFilterBypass);
	return class$;
}

$Class* DefaultCaret$DefaultFilterBypass::class$ = nullptr;

		} // text
	} // swing
} // javax