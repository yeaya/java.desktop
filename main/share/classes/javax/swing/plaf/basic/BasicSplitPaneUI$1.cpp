#include <javax/swing/plaf/basic/BasicSplitPaneUI$1.h>

#include <java/awt/Canvas.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef HORIZONTAL_SPLIT

using $Canvas = ::java::awt::Canvas;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$1, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, 0, $method(static_cast<void(BasicSplitPaneUI$1::*)($BasicSplitPaneUI*)>(&BasicSplitPaneUI$1::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicSplitPaneUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicSplitPaneUI",
	"createDefaultNonContinuousLayoutDivider",
	"()Ljava/awt/Component;"
};

$InnerClassInfo _BasicSplitPaneUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicSplitPaneUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$1",
	"java.awt.Canvas",
	nullptr,
	_BasicSplitPaneUI$1_FieldInfo_,
	_BasicSplitPaneUI$1_MethodInfo_,
	nullptr,
	&_BasicSplitPaneUI$1_EnclosingMethodInfo_,
	_BasicSplitPaneUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$1($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$1));
}

void BasicSplitPaneUI$1::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
	$Canvas::init$();
}

void BasicSplitPaneUI$1::paint($Graphics* g) {
	bool var$0 = !this->this$0->isContinuousLayout();
	if (var$0 && this->this$0->getLastDragLocation() != -1) {
		$var($Dimension, size, $nc(this->this$0->splitPane)->getSize());
		$nc(g)->setColor(this->this$0->dividerDraggingColor);
		if (this->this$0->orientation == $JSplitPane::HORIZONTAL_SPLIT) {
			g->fillRect(0, 0, this->this$0->dividerSize - 1, $nc(size)->height - 1);
		} else {
			g->fillRect(0, 0, $nc(size)->width - 1, this->this$0->dividerSize - 1);
		}
	}
}

BasicSplitPaneUI$1::BasicSplitPaneUI$1() {
}

$Class* BasicSplitPaneUI$1::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$1, name, initialize, &_BasicSplitPaneUI$1_ClassInfo_, allocate$BasicSplitPaneUI$1);
	return class$;
}

$Class* BasicSplitPaneUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax