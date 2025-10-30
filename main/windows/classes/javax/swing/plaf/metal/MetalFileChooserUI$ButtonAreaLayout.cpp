#include <javax/swing/plaf/metal/MetalFileChooserUI$ButtonAreaLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $DimensionArray = $Array<::java::awt::Dimension>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$ButtonAreaLayout_FieldInfo_[] = {
	{"hGap", "I", nullptr, $PRIVATE, $field(MetalFileChooserUI$ButtonAreaLayout, hGap)},
	{"topMargin", "I", nullptr, $PRIVATE, $field(MetalFileChooserUI$ButtonAreaLayout, topMargin)},
	{}
};

$MethodInfo _MetalFileChooserUI$ButtonAreaLayout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI$ButtonAreaLayout::*)()>(&MetalFileChooserUI$ButtonAreaLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalFileChooserUI$ButtonAreaLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$ButtonAreaLayout", "javax.swing.plaf.metal.MetalFileChooserUI", "ButtonAreaLayout", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalFileChooserUI$ButtonAreaLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$ButtonAreaLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_MetalFileChooserUI$ButtonAreaLayout_FieldInfo_,
	_MetalFileChooserUI$ButtonAreaLayout_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI$ButtonAreaLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$ButtonAreaLayout($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$ButtonAreaLayout));
}

void MetalFileChooserUI$ButtonAreaLayout::init$() {
	this->hGap = 5;
	this->topMargin = 17;
}

void MetalFileChooserUI$ButtonAreaLayout::addLayoutComponent($String* string, $Component* comp) {
}

void MetalFileChooserUI$ButtonAreaLayout::layoutContainer($Container* container) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentArray, children, $nc(container)->getComponents());
	if (children != nullptr && children->length > 0) {
		int32_t numChildren = children->length;
		$var($DimensionArray, sizes, $new($DimensionArray, numChildren));
		$var($Insets, insets, container->getInsets());
		int32_t yLocation = $nc(insets)->top + this->topMargin;
		int32_t maxWidth = 0;
		for (int32_t counter = 0; counter < numChildren; ++counter) {
			sizes->set(counter, $($nc(children->get(counter))->getPreferredSize()));
			maxWidth = $Math::max(maxWidth, $nc(sizes->get(counter))->width);
		}
		int32_t xLocation = 0;
		int32_t xOffset = 0;
		if ($nc($(container->getComponentOrientation()))->isLeftToRight()) {
			xLocation = $nc($(container->getSize()))->width - insets->left - maxWidth;
			xOffset = this->hGap + maxWidth;
		} else {
			xLocation = insets->left;
			xOffset = -(this->hGap + maxWidth);
		}
		for (int32_t counter = numChildren - 1; counter >= 0; --counter) {
			$nc(children->get(counter))->setBounds(xLocation, yLocation, maxWidth, $nc(sizes->get(counter))->height);
			xLocation -= xOffset;
		}
	}
}

$Dimension* MetalFileChooserUI$ButtonAreaLayout::minimumLayoutSize($Container* c) {
	$useLocalCurrentObjectStackCache();
	if (c != nullptr) {
		$var($ComponentArray, children, c->getComponents());
		if (children != nullptr && children->length > 0) {
			int32_t numChildren = children->length;
			int32_t height = 0;
			$var($Insets, cInsets, c->getInsets());
			int32_t extraHeight = this->topMargin + $nc(cInsets)->top + cInsets->bottom;
			int32_t extraWidth = cInsets->left + cInsets->right;
			int32_t maxWidth = 0;
			for (int32_t counter = 0; counter < numChildren; ++counter) {
				$var($Dimension, aSize, $nc(children->get(counter))->getPreferredSize());
				height = $Math::max(height, $nc(aSize)->height);
				maxWidth = $Math::max(maxWidth, $nc(aSize)->width);
			}
			return $new($Dimension, extraWidth + numChildren * maxWidth + (numChildren - 1) * this->hGap, extraHeight + height);
		}
	}
	return $new($Dimension, 0, 0);
}

$Dimension* MetalFileChooserUI$ButtonAreaLayout::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

void MetalFileChooserUI$ButtonAreaLayout::removeLayoutComponent($Component* c) {
}

MetalFileChooserUI$ButtonAreaLayout::MetalFileChooserUI$ButtonAreaLayout() {
}

$Class* MetalFileChooserUI$ButtonAreaLayout::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$ButtonAreaLayout, name, initialize, &_MetalFileChooserUI$ButtonAreaLayout_ClassInfo_, allocate$MetalFileChooserUI$ButtonAreaLayout);
	return class$;
}

$Class* MetalFileChooserUI$ButtonAreaLayout::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax