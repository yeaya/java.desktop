#include <javax/swing/plaf/metal/MetalBorders$TextFieldBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalBorders$Flush3DBorder.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalBorders$Flush3DBorder = ::javax::swing::plaf::metal::MetalBorders$Flush3DBorder;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalBorders$TextFieldBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$TextFieldBorder::*)()>(&MetalBorders$TextFieldBorder::init$))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$TextFieldBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$TextFieldBorder", "javax.swing.plaf.metal.MetalBorders", "TextFieldBorder", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$Flush3DBorder", "javax.swing.plaf.metal.MetalBorders", "Flush3DBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$TextFieldBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$TextFieldBorder",
	"javax.swing.plaf.metal.MetalBorders$Flush3DBorder",
	nullptr,
	nullptr,
	_MetalBorders$TextFieldBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$TextFieldBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$TextFieldBorder($Class* clazz) {
	return $of($alloc(MetalBorders$TextFieldBorder));
}

void MetalBorders$TextFieldBorder::init$() {
	$MetalBorders$Flush3DBorder::init$();
}

void MetalBorders$TextFieldBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (!($instanceOf($JTextComponent, c))) {
		if ($nc(c)->isEnabled()) {
			$MetalUtils::drawFlush3DBorder(g, x, y, w, h);
		} else {
			$MetalUtils::drawDisabledBorder(g, x, y, w, h);
		}
		return;
	}
	bool var$0 = $nc(c)->isEnabled();
	if (var$0 && $nc(($cast($JTextComponent, c)))->isEditable()) {
		$MetalUtils::drawFlush3DBorder(g, x, y, w, h);
	} else {
		$MetalUtils::drawDisabledBorder(g, x, y, w, h);
	}
}

MetalBorders$TextFieldBorder::MetalBorders$TextFieldBorder() {
}

$Class* MetalBorders$TextFieldBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$TextFieldBorder, name, initialize, &_MetalBorders$TextFieldBorder_ClassInfo_, allocate$MetalBorders$TextFieldBorder);
	return class$;
}

$Class* MetalBorders$TextFieldBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax