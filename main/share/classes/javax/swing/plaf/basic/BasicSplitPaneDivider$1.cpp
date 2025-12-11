#include <javax/swing/plaf/basic/BasicSplitPaneDivider$1.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Math.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JSplitPane = ::javax::swing::JSplitPane;
using $Border = ::javax::swing::border::Border;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneDivider$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneDivider$1, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneDivider$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneDivider;)V", nullptr, 0, $method(static_cast<void(BasicSplitPaneDivider$1::*)($BasicSplitPaneDivider*)>(&BasicSplitPaneDivider$1::init$))},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicSplitPaneDivider$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicSplitPaneDivider",
	"createLeftOneTouchButton",
	"()Ljavax/swing/JButton;"
};

$InnerClassInfo _BasicSplitPaneDivider$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicSplitPaneDivider$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneDivider$1",
	"javax.swing.JButton",
	nullptr,
	_BasicSplitPaneDivider$1_FieldInfo_,
	_BasicSplitPaneDivider$1_MethodInfo_,
	nullptr,
	&_BasicSplitPaneDivider$1_EnclosingMethodInfo_,
	_BasicSplitPaneDivider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneDivider"
};

$Object* allocate$BasicSplitPaneDivider$1($Class* clazz) {
	return $of($alloc(BasicSplitPaneDivider$1));
}

void BasicSplitPaneDivider$1::init$($BasicSplitPaneDivider* this$0) {
	$set(this, this$0, this$0);
	$JButton::init$();
}

void BasicSplitPaneDivider$1::setBorder($Border* b) {
}

void BasicSplitPaneDivider$1::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->splitPane != nullptr) {
		$var($ints, xs, $new($ints, 3));
		$var($ints, ys, $new($ints, 3));
		int32_t blockSize = 0;
		$nc(g)->setColor($(this->getBackground()));
		int32_t var$0 = this->getWidth();
		g->fillRect(0, 0, var$0, this->getHeight());
		$init($Color);
		g->setColor($Color::black);
		if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
			blockSize = $Math::min(getHeight(), this->this$0->oneTouchSize);
			xs->set(0, blockSize);
			xs->set(1, 0);
			xs->set(2, blockSize << 1);
			ys->set(0, 0);
			ys->set(1, ys->set(2, blockSize));
			g->drawPolygon(xs, ys, 3);
		} else {
			blockSize = $Math::min(getWidth(), this->this$0->oneTouchSize);
			xs->set(0, xs->set(2, blockSize));
			xs->set(1, 0);
			ys->set(0, 0);
			ys->set(1, blockSize);
			ys->set(2, blockSize << 1);
		}
		g->fillPolygon(xs, ys, 3);
	}
}

bool BasicSplitPaneDivider$1::isFocusTraversable() {
	return false;
}

BasicSplitPaneDivider$1::BasicSplitPaneDivider$1() {
}

$Class* BasicSplitPaneDivider$1::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneDivider$1, name, initialize, &_BasicSplitPaneDivider$1_ClassInfo_, allocate$BasicSplitPaneDivider$1);
	return class$;
}

$Class* BasicSplitPaneDivider$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax