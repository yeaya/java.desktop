#include <javax/swing/plaf/basic/BasicSplitPaneDivider$2.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $Border = ::javax::swing::border::Border;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneDivider$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneDivider$2, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneDivider$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneDivider;)V", nullptr, 0, $method(static_cast<void(BasicSplitPaneDivider$2::*)($BasicSplitPaneDivider*)>(&BasicSplitPaneDivider$2::init$))},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicSplitPaneDivider$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicSplitPaneDivider",
	"createRightOneTouchButton",
	"()Ljavax/swing/JButton;"
};

$InnerClassInfo _BasicSplitPaneDivider$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicSplitPaneDivider$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneDivider$2",
	"javax.swing.JButton",
	nullptr,
	_BasicSplitPaneDivider$2_FieldInfo_,
	_BasicSplitPaneDivider$2_MethodInfo_,
	nullptr,
	&_BasicSplitPaneDivider$2_EnclosingMethodInfo_,
	_BasicSplitPaneDivider$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneDivider"
};

$Object* allocate$BasicSplitPaneDivider$2($Class* clazz) {
	return $of($alloc(BasicSplitPaneDivider$2));
}

void BasicSplitPaneDivider$2::init$($BasicSplitPaneDivider* this$0) {
	$set(this, this$0, this$0);
	$JButton::init$();
}

void BasicSplitPaneDivider$2::setBorder($Border* border) {
}

void BasicSplitPaneDivider$2::paint($Graphics* g) {
	if (this->this$0->splitPane != nullptr) {
		$var($ints, xs, $new($ints, 3));
		$var($ints, ys, $new($ints, 3));
		int32_t blockSize = 0;
		$nc(g)->setColor($(this->getBackground()));
		int32_t var$0 = this->getWidth();
		g->fillRect(0, 0, var$0, this->getHeight());
		if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
			blockSize = $Math::min(getHeight(), this->this$0->oneTouchSize);
			xs->set(0, blockSize);
			xs->set(1, blockSize << 1);
			xs->set(2, 0);
			ys->set(0, blockSize);
			ys->set(1, ys->set(2, 0));
		} else {
			blockSize = $Math::min(getWidth(), this->this$0->oneTouchSize);
			xs->set(0, xs->set(2, 0));
			xs->set(1, blockSize);
			ys->set(0, 0);
			ys->set(1, blockSize);
			ys->set(2, blockSize << 1);
		}
		$init($Color);
		g->setColor($Color::black);
		g->fillPolygon(xs, ys, 3);
	}
}

bool BasicSplitPaneDivider$2::isFocusTraversable() {
	return false;
}

BasicSplitPaneDivider$2::BasicSplitPaneDivider$2() {
}

$Class* BasicSplitPaneDivider$2::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneDivider$2, name, initialize, &_BasicSplitPaneDivider$2_ClassInfo_, allocate$BasicSplitPaneDivider$2);
	return class$;
}

$Class* BasicSplitPaneDivider$2::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax