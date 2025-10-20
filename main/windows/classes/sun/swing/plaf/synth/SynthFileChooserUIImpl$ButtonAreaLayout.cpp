#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$ButtonAreaLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
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
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$ButtonAreaLayout_FieldInfo_[] = {
	{"hGap", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl$ButtonAreaLayout, hGap)},
	{"topMargin", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl$ButtonAreaLayout, topMargin)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$ButtonAreaLayout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthFileChooserUIImpl$ButtonAreaLayout::*)()>(&SynthFileChooserUIImpl$ButtonAreaLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUIImpl$ButtonAreaLayout_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$ButtonAreaLayout", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "ButtonAreaLayout", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$ButtonAreaLayout_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$ButtonAreaLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_SynthFileChooserUIImpl$ButtonAreaLayout_FieldInfo_,
	_SynthFileChooserUIImpl$ButtonAreaLayout_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUIImpl$ButtonAreaLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$ButtonAreaLayout($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$ButtonAreaLayout));
}

void SynthFileChooserUIImpl$ButtonAreaLayout::init$() {
	this->hGap = 5;
	this->topMargin = 17;
}

void SynthFileChooserUIImpl$ButtonAreaLayout::addLayoutComponent($String* string, $Component* comp) {
}

void SynthFileChooserUIImpl$ButtonAreaLayout::layoutContainer($Container* container) {
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

$Dimension* SynthFileChooserUIImpl$ButtonAreaLayout::minimumLayoutSize($Container* c) {
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

$Dimension* SynthFileChooserUIImpl$ButtonAreaLayout::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

void SynthFileChooserUIImpl$ButtonAreaLayout::removeLayoutComponent($Component* c) {
}

SynthFileChooserUIImpl$ButtonAreaLayout::SynthFileChooserUIImpl$ButtonAreaLayout() {
}

$Class* SynthFileChooserUIImpl$ButtonAreaLayout::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$ButtonAreaLayout, name, initialize, &_SynthFileChooserUIImpl$ButtonAreaLayout_ClassInfo_, allocate$SynthFileChooserUIImpl$ButtonAreaLayout);
	return class$;
}

$Class* SynthFileChooserUIImpl$ButtonAreaLayout::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun