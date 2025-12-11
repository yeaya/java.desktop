#include <javax/swing/plaf/metal/MetalSplitPaneDivider$1.h>

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

$FieldInfo _MetalSplitPaneDivider$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(MetalSplitPaneDivider$1, this$0)},
	{"buffer", "[[I", nullptr, 0, $field(MetalSplitPaneDivider$1, buffer)},
	{}
};

$MethodInfo _MetalSplitPaneDivider$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalSplitPaneDivider;)V", nullptr, 0, $method(static_cast<void(MetalSplitPaneDivider$1::*)($MetalSplitPaneDivider*)>(&MetalSplitPaneDivider$1::init$))},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalSplitPaneDivider$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalSplitPaneDivider",
	"createLeftOneTouchButton",
	"()Ljavax/swing/JButton;"
};

$InnerClassInfo _MetalSplitPaneDivider$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalSplitPaneDivider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalSplitPaneDivider$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalSplitPaneDivider$1",
	"javax.swing.JButton",
	nullptr,
	_MetalSplitPaneDivider$1_FieldInfo_,
	_MetalSplitPaneDivider$1_MethodInfo_,
	nullptr,
	&_MetalSplitPaneDivider$1_EnclosingMethodInfo_,
	_MetalSplitPaneDivider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalSplitPaneDivider"
};

$Object* allocate$MetalSplitPaneDivider$1($Class* clazz) {
	return $of($alloc(MetalSplitPaneDivider$1));
}

void MetalSplitPaneDivider$1::init$($MetalSplitPaneDivider* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JButton::init$();
	$set(this, buffer, $new($intArray2, {
		$$new($ints, {
			0,
			0,
			0,
			2,
			2,
			0,
			0,
			0,
			0
		}),
		$$new($ints, {
			0,
			0,
			2,
			1,
			1,
			1,
			0,
			0,
			0
		}),
		$$new($ints, {
			0,
			2,
			1,
			1,
			1,
			1,
			1,
			0,
			0
		}),
		$$new($ints, {
			2,
			1,
			1,
			1,
			1,
			1,
			1,
			1,
			0
		}),
		$$new($ints, {
			0,
			3,
			3,
			3,
			3,
			3,
			3,
			3,
			3
		})
	}));
}

void MetalSplitPaneDivider$1::setBorder($Border* b) {
}

void MetalSplitPaneDivider$1::paint($Graphics* g) {
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

bool MetalSplitPaneDivider$1::isFocusTraversable() {
	return false;
}

MetalSplitPaneDivider$1::MetalSplitPaneDivider$1() {
}

$Class* MetalSplitPaneDivider$1::load$($String* name, bool initialize) {
	$loadClass(MetalSplitPaneDivider$1, name, initialize, &_MetalSplitPaneDivider$1_ClassInfo_, allocate$MetalSplitPaneDivider$1);
	return class$;
}

$Class* MetalSplitPaneDivider$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax