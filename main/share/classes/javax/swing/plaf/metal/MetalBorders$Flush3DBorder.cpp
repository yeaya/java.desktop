#include <javax/swing/plaf/metal/MetalBorders$Flush3DBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalBorders$Flush3DBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalBorders$Flush3DBorder::*)()>(&MetalBorders$Flush3DBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalBorders$Flush3DBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$Flush3DBorder", "javax.swing.plaf.metal.MetalBorders", "Flush3DBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalBorders$Flush3DBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$Flush3DBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	nullptr,
	_MetalBorders$Flush3DBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$Flush3DBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$Flush3DBorder($Class* clazz) {
	return $of($alloc(MetalBorders$Flush3DBorder));
}

int32_t MetalBorders$Flush3DBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool MetalBorders$Flush3DBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* MetalBorders$Flush3DBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* MetalBorders$Flush3DBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void MetalBorders$Flush3DBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void MetalBorders$Flush3DBorder::init$() {
	$AbstractBorder::init$();
}

void MetalBorders$Flush3DBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc(c)->isEnabled()) {
		$MetalUtils::drawFlush3DBorder(g, x, y, w, h);
	} else {
		$MetalUtils::drawDisabledBorder(g, x, y, w, h);
	}
}

$Insets* MetalBorders$Flush3DBorder::getBorderInsets($Component* c, $Insets* newInsets) {
	$nc(newInsets)->set(2, 2, 2, 2);
	return newInsets;
}

MetalBorders$Flush3DBorder::MetalBorders$Flush3DBorder() {
}

$Class* MetalBorders$Flush3DBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$Flush3DBorder, name, initialize, &_MetalBorders$Flush3DBorder_ClassInfo_, allocate$MetalBorders$Flush3DBorder);
	return class$;
}

$Class* MetalBorders$Flush3DBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax