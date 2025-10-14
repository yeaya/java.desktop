#include <javax/swing/text/DefaultFormatter$DefaultNavigationFilter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter$FilterBypass.h>
#include <javax/swing/text/NavigationFilter.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JTextField = ::javax::swing::JTextField;
using $TextUI = ::javax::swing::plaf::TextUI;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;
using $NavigationFilter$FilterBypass = ::javax::swing::text::NavigationFilter$FilterBypass;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultFormatter$DefaultNavigationFilter_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultFormatter$DefaultNavigationFilter, this$0)},
	{}
};

$MethodInfo _DefaultFormatter$DefaultNavigationFilter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/DefaultFormatter;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultFormatter$DefaultNavigationFilter::*)($DefaultFormatter*)>(&DefaultFormatter$DefaultNavigationFilter::init$))},
	{"getNextVisualPositionFrom", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"moveDot", "(Ljavax/swing/text/NavigationFilter$FilterBypass;ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{"setDot", "(Ljavax/swing/text/NavigationFilter$FilterBypass;ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultFormatter$DefaultNavigationFilter_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultFormatter$DefaultNavigationFilter", "javax.swing.text.DefaultFormatter", "DefaultNavigationFilter", $PRIVATE},
	{}
};

$ClassInfo _DefaultFormatter$DefaultNavigationFilter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultFormatter$DefaultNavigationFilter",
	"javax.swing.text.NavigationFilter",
	"java.io.Serializable",
	_DefaultFormatter$DefaultNavigationFilter_FieldInfo_,
	_DefaultFormatter$DefaultNavigationFilter_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultFormatter$DefaultNavigationFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultFormatter"
};

$Object* allocate$DefaultFormatter$DefaultNavigationFilter($Class* clazz) {
	return $of($alloc(DefaultFormatter$DefaultNavigationFilter));
}

int32_t DefaultFormatter$DefaultNavigationFilter::hashCode() {
	 return this->$NavigationFilter::hashCode();
}

bool DefaultFormatter$DefaultNavigationFilter::equals(Object$* arg0) {
	 return this->$NavigationFilter::equals(arg0);
}

$Object* DefaultFormatter$DefaultNavigationFilter::clone() {
	 return this->$NavigationFilter::clone();
}

$String* DefaultFormatter$DefaultNavigationFilter::toString() {
	 return this->$NavigationFilter::toString();
}

void DefaultFormatter$DefaultNavigationFilter::finalize() {
	this->$NavigationFilter::finalize();
}

void DefaultFormatter$DefaultNavigationFilter::init$($DefaultFormatter* this$0) {
	$set(this, this$0, this$0);
	$NavigationFilter::init$();
}

void DefaultFormatter$DefaultNavigationFilter::setDot($NavigationFilter$FilterBypass* fb, int32_t dot, $Position$Bias* bias) {
	$var($JTextComponent, tc, $DefaultFormatter::access$000(this->this$0));
	if ($nc(tc)->composedTextExists()) {
		$nc(fb)->setDot(dot, bias);
	} else {
		this->this$0->setDot(fb, dot, bias);
	}
}

void DefaultFormatter$DefaultNavigationFilter::moveDot($NavigationFilter$FilterBypass* fb, int32_t dot, $Position$Bias* bias) {
	$var($JTextComponent, tc, $DefaultFormatter::access$100(this->this$0));
	if ($nc(tc)->composedTextExists()) {
		$nc(fb)->moveDot(dot, bias);
	} else {
		this->this$0->moveDot(fb, dot, bias);
	}
}

int32_t DefaultFormatter$DefaultNavigationFilter::getNextVisualPositionFrom($JTextComponent* text, int32_t pos, $Position$Bias* bias, int32_t direction, $Position$BiasArray* biasRet) {
	if ($nc(text)->composedTextExists()) {
		return $nc($($cast($TextUI, text->getUI())))->getNextVisualPositionFrom(text, pos, bias, direction, biasRet);
	} else {
		return this->this$0->getNextVisualPositionFrom(text, pos, bias, direction, biasRet);
	}
}

DefaultFormatter$DefaultNavigationFilter::DefaultFormatter$DefaultNavigationFilter() {
}

$Class* DefaultFormatter$DefaultNavigationFilter::load$($String* name, bool initialize) {
	$loadClass(DefaultFormatter$DefaultNavigationFilter, name, initialize, &_DefaultFormatter$DefaultNavigationFilter_ClassInfo_, allocate$DefaultFormatter$DefaultNavigationFilter);
	return class$;
}

$Class* DefaultFormatter$DefaultNavigationFilter::class$ = nullptr;

		} // text
	} // swing
} // javax