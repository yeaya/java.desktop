#include <javax/swing/border/Border.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <jcpp.h>

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