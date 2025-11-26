#include <javax/swing/text/NavigationFilter.h>

#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter$FilterBypass.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextUI = ::javax::swing::plaf::TextUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NavigationFilter$FilterBypass = ::javax::swing::text::NavigationFilter$FilterBypass;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _NavigationFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NavigationFilter::*)()>(&NavigationFilter::init$))},
	{"getNextVisualPositionFrom", "(Ljavax/swing/text/JTextComponent;ILjavax/swing/text/Position$Bias;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"moveDot", "(Ljavax/swing/text/NavigationFilter$FilterBypass;ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{"setDot", "(Ljavax/swing/text/NavigationFilter$FilterBypass;ILjavax/swing/text/Position$Bias;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NavigationFilter_InnerClassesInfo_[] = {
	{"javax.swing.text.NavigationFilter$FilterBypass", "javax.swing.text.NavigationFilter", "FilterBypass", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NavigationFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.NavigationFilter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NavigationFilter_MethodInfo_,
	nullptr,
	nullptr,
	_NavigationFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.NavigationFilter$FilterBypass"
};

$Object* allocate$NavigationFilter($Class* clazz) {
	return $of($alloc(NavigationFilter));
}

void NavigationFilter::init$() {
}

void NavigationFilter::setDot($NavigationFilter$FilterBypass* fb, int32_t dot, $Position$Bias* bias) {
	$nc(fb)->setDot(dot, bias);
}

void NavigationFilter::moveDot($NavigationFilter$FilterBypass* fb, int32_t dot, $Position$Bias* bias) {
	$nc(fb)->moveDot(dot, bias);
}

int32_t NavigationFilter::getNextVisualPositionFrom($JTextComponent* text, int32_t pos, $Position$Bias* bias, int32_t direction, $Position$BiasArray* biasRet) {
	return $nc($($cast($TextUI, $nc(text)->getUI())))->getNextVisualPositionFrom(text, pos, bias, direction, biasRet);
}

NavigationFilter::NavigationFilter() {
}

$Class* NavigationFilter::load$($String* name, bool initialize) {
	$loadClass(NavigationFilter, name, initialize, &_NavigationFilter_ClassInfo_, allocate$NavigationFilter);
	return class$;
}

$Class* NavigationFilter::class$ = nullptr;

		} // text
	} // swing
} // javax