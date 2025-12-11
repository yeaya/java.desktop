#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonFactory$ConstrainedButton.h>

#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonFactory.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicOptionPaneUI$ButtonFactory$ConstrainedButton_FieldInfo_[] = {
	{"minimumWidth", "I", nullptr, 0, $field(BasicOptionPaneUI$ButtonFactory$ConstrainedButton, minimumWidth)},
	{}
};

$MethodInfo _BasicOptionPaneUI$ButtonFactory$ConstrainedButton_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(BasicOptionPaneUI$ButtonFactory$ConstrainedButton::*)($String*,int32_t)>(&BasicOptionPaneUI$ButtonFactory$ConstrainedButton::init$))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicOptionPaneUI$ButtonFactory$ConstrainedButton_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonFactory", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory$ConstrainedButton", "javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory", "ConstrainedButton", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicOptionPaneUI$ButtonFactory$ConstrainedButton_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory$ConstrainedButton",
	"javax.swing.JButton",
	nullptr,
	_BasicOptionPaneUI$ButtonFactory$ConstrainedButton_FieldInfo_,
	_BasicOptionPaneUI$ButtonFactory$ConstrainedButton_MethodInfo_,
	nullptr,
	nullptr,
	_BasicOptionPaneUI$ButtonFactory$ConstrainedButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicOptionPaneUI"
};

$Object* allocate$BasicOptionPaneUI$ButtonFactory$ConstrainedButton($Class* clazz) {
	return $of($alloc(BasicOptionPaneUI$ButtonFactory$ConstrainedButton));
}

void BasicOptionPaneUI$ButtonFactory$ConstrainedButton::init$($String* text, int32_t minimumWidth) {
	$JButton::init$(text);
	this->minimumWidth = minimumWidth;
}

$Dimension* BasicOptionPaneUI$ButtonFactory$ConstrainedButton::getMinimumSize() {
	$var($Dimension, min, $JButton::getMinimumSize());
	$nc(min)->width = $Math::max(min->width, this->minimumWidth);
	return min;
}

$Dimension* BasicOptionPaneUI$ButtonFactory$ConstrainedButton::getPreferredSize() {
	$var($Dimension, pref, $JButton::getPreferredSize());
	$nc(pref)->width = $Math::max(pref->width, this->minimumWidth);
	return pref;
}

BasicOptionPaneUI$ButtonFactory$ConstrainedButton::BasicOptionPaneUI$ButtonFactory$ConstrainedButton() {
}

$Class* BasicOptionPaneUI$ButtonFactory$ConstrainedButton::load$($String* name, bool initialize) {
	$loadClass(BasicOptionPaneUI$ButtonFactory$ConstrainedButton, name, initialize, &_BasicOptionPaneUI$ButtonFactory$ConstrainedButton_ClassInfo_, allocate$BasicOptionPaneUI$ButtonFactory$ConstrainedButton);
	return class$;
}

$Class* BasicOptionPaneUI$ButtonFactory$ConstrainedButton::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax