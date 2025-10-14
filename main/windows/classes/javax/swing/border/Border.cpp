#include <javax/swing/border/Border.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace border {

$MethodInfo _Border_MethodInfo_[] = {
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC | $ABSTRACT},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Border_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.border.Border",
	nullptr,
	nullptr,
	nullptr,
	_Border_MethodInfo_
};

$Object* allocate$Border($Class* clazz) {
	return $of($alloc(Border));
}

$Class* Border::load$($String* name, bool initialize) {
	$loadClass(Border, name, initialize, &_Border_ClassInfo_, allocate$Border);
	return class$;
}

$Class* Border::class$ = nullptr;

		} // border
	} // swing
} // javax