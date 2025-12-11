#include <javax/swing/plaf/metal/MetalSplitPaneDivider$2.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalSplitPaneDivider.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $ColorArray = $Array<::java::awt::Color>;
using $intArray2 = $Array<int32_t, 2>;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JSplitPane = ::javax::swing::JSplitPane;
using $Border = ::javax::swing::border::Border;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalSplitPaneDivider = ::javax::swing::plaf::metal::MetalSplitPaneDivider;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalSplitPaneDivider$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(MetalSplitPaneDivider$2, this$0)},
	{"buffer", "[[I", nullptr, 0, $field(MetalSplitPaneDivider$2, buffer)},
	{}
};

$MethodInfo _MetalSplitPaneDivider$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalSplitPaneDivider;)V", nullptr, 0, $method(static_cast<void(MetalSplitPaneDivider$2::*)($MetalSplitPaneDivider*)>(&MetalSplitPaneDivider$2::init$))},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalSplitPaneDivider$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalSplitPaneDivider",
	"createRightOneTouchButton",
	"()Ljavax/swing/JButton;"
};

$InnerClassInfo _MetalSplitPaneDivider$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalSplitPaneDivider$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalSplitPaneDivider$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalSplitPaneDivider$2",
	"javax.swing.JButton",
	nullptr,
	_MetalSplitPaneDivider$2_FieldInfo_,
	_MetalSplitPaneDivider$2_MethodInfo_,
	nullptr,
	&_MetalSplitPaneDivider$2_EnclosingMethodInfo_,
	_MetalSplitPaneDivider$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalSplitPaneDivider"
};

$Object* allocate$MetalSplitPaneDivider$2($Class* clazz) {
	return $of($alloc(MetalSplitPaneDivider$2));
}

void MetalSplitPaneDivider$2::init$($MetalSplitPaneDivider* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JButton::init$();
	$set(this, buffer, $new($intArray2, {
		$$new($ints, {
			2,
			2,
			2,
			2,
			2,
			2,
			2,
			2
		}),
		$$new($ints, {
			0,
			1,
			1,
			1,
			1,
			1,
			1,
			3
		}),
		$$new($ints, {
			0,
			0,
			1,
			1,
			1,
			1,
			3,
			0
		}),
		$$new($ints, {
			0,
			0,
			0,
			1,
			1,
			3,
			0,
			0
		}),
		$$new($ints, {
			0,
			0,
			0,
			0,
			3,
			0,
			0,
			0
		})
	}));
}

void MetalSplitPaneDivider$2::setBorder($Border* border) {
}

void MetalSplitPaneDivider$2::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JSplitPane, splitPane, this->this$0->getSplitPaneFromSuper());
	if (splitPane != nullptr) {
		int32_t oneTouchSize = this->this$0->getOneTouchSizeFromSuper();
		int32_t orientation = this->this$0->getOrientationFromSuper();
		int32_t blockSize = $Math::min(this->this$0->getDividerSize(), oneTouchSize);
		$var($ColorArray, colors, $new($ColorArray, {
			$(this->getBackground()),
			$(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlDarkShadow())),
			$(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlInfo())),
			$(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlHighlight()))
		}));
		$nc(g)->setColor($(this->getBackground()));
		if (isOpaque()) {
			int32_t var$0 = this->getWidth();
			g->fillRect(0, 0, var$0, this->getHeight());
		}
		if ($nc($(getModel()))->isPressed()) {
			colors->set(1, colors->get(2));
		}
		if (orientation == $JSplitPane::VERTICAL_SPLIT) {
			for (int32_t i = 1; i <= $nc($nc(this->buffer)->get(0))->length; ++i) {
				for (int32_t j = 1; j < blockSize; ++j) {
					if ($nc($nc(this->buffer)->get(j - 1))->get(i - 1) == 0) {
						continue;
					} else {
						g->setColor(colors->get($nc($nc(this->buffer)->get(j - 1))->get(i - 1)));
					}
					g->drawLine(i, j, i, j);
				}
			}
		} else {
			for (int32_t i = 1; i <= $nc($nc(this->buffer)->get(0))->length; ++i) {
				for (int32_t j = 1; j < blockSize; ++j) {
					if ($nc($nc(this->buffer)->get(j - 1))->get(i - 1) == 0) {
						continue;
					} else {
						g->setColor(colors->get($nc($nc(this->buffer)->get(j - 1))->get(i - 1)));
					}
					g->drawLine(j, i, j, i);
				}
			}
		}
	}
}

bool MetalSplitPaneDivider$2::isFocusTraversable() {
	return false;
}

MetalSplitPaneDivider$2::MetalSplitPaneDivider$2() {
}

$Class* MetalSplitPaneDivider$2::load$($String* name, bool initialize) {
	$loadClass(MetalSplitPaneDivider$2, name, initialize, &_MetalSplitPaneDivider$2_ClassInfo_, allocate$MetalSplitPaneDivider$2);
	return class$;
}

$Class* MetalSplitPaneDivider$2::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax