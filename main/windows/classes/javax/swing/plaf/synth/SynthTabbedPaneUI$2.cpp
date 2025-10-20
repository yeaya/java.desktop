#include <javax/swing/plaf/synth/SynthTabbedPaneUI$2.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Rectangle.h>
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
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <javax/swing/plaf/synth/SynthTabbedPaneUI.h>
#include <jcpp.h>

#undef BOTTOM
#undef LEFT
#undef RIGHT
#undef TOP

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$TabbedPaneLayout = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout;
using $SynthTabbedPaneUI = ::javax::swing::plaf::synth::SynthTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTabbedPaneUI$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTabbedPaneUI$2, this$0)},
	{}
};

$MethodInfo _SynthTabbedPaneUI$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)V", nullptr, 0, $method(static_cast<void(SynthTabbedPaneUI$2::*)($SynthTabbedPaneUI*)>(&SynthTabbedPaneUI$2::init$))},
	{"calculateLayoutInfo", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthTabbedPaneUI$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthTabbedPaneUI",
	"createLayoutManager",
	"()Ljava/awt/LayoutManager;"
};

$InnerClassInfo _SynthTabbedPaneUI$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTabbedPaneUI$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabbedPaneLayout", $PUBLIC},
	{}
};

$ClassInfo _SynthTabbedPaneUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthTabbedPaneUI$2",
	"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout",
	nullptr,
	_SynthTabbedPaneUI$2_FieldInfo_,
	_SynthTabbedPaneUI$2_MethodInfo_,
	nullptr,
	&_SynthTabbedPaneUI$2_EnclosingMethodInfo_,
	_SynthTabbedPaneUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTabbedPaneUI"
};

$Object* allocate$SynthTabbedPaneUI$2($Class* clazz) {
	return $of($alloc(SynthTabbedPaneUI$2));
}

void SynthTabbedPaneUI$2::init$($SynthTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTabbedPaneUI$TabbedPaneLayout::init$(this$0);
}

void SynthTabbedPaneUI$2::calculateLayoutInfo() {
	$useLocalCurrentObjectStackCache();
	$BasicTabbedPaneUI$TabbedPaneLayout::calculateLayoutInfo();
	if (this->this$0->tabOverlap != 0) {
		int32_t tabCount = $nc($($SynthTabbedPaneUI::access$600(this->this$0)))->getTabCount();
		bool ltr = $nc($($nc($($SynthTabbedPaneUI::access$700(this->this$0)))->getComponentOrientation()))->isLeftToRight();
		for (int32_t i = $SynthTabbedPaneUI::access$800(this->this$0) - 1; i >= 0; --i) {
			int32_t start = $nc($($SynthTabbedPaneUI::access$900(this->this$0)))->get(i);
			int32_t next = $nc($($SynthTabbedPaneUI::access$1000(this->this$0)))->get((i == $SynthTabbedPaneUI::access$1100(this->this$0) - 1) ? 0 : i + 1);
			int32_t end = (next != 0 ? next - 1 : tabCount - 1);
			for (int32_t j = start + 1; j <= end; ++j) {
				int32_t xshift = 0;
				int32_t yshift = 0;
				switch ($nc($($SynthTabbedPaneUI::access$1200(this->this$0)))->getTabPlacement()) {
				case $JTabbedPane::TOP:
					{}
				case $JTabbedPane::BOTTOM:
					{
						xshift = ltr ? this->this$0->tabOverlap : -this->this$0->tabOverlap;
						break;
					}
				case $JTabbedPane::LEFT:
					{}
				case $JTabbedPane::RIGHT:
					{
						yshift = this->this$0->tabOverlap;
						break;
					}
				default:
					{}
				}
				$nc($nc($($SynthTabbedPaneUI::access$1300(this->this$0)))->get(j))->x += xshift;
				$nc($nc($($SynthTabbedPaneUI::access$1400(this->this$0)))->get(j))->y += yshift;
				$nc($nc($($SynthTabbedPaneUI::access$1500(this->this$0)))->get(j))->width += $Math::abs(xshift);
				$nc($nc($($SynthTabbedPaneUI::access$1600(this->this$0)))->get(j))->height += $Math::abs(yshift);
			}
		}
	}
}

SynthTabbedPaneUI$2::SynthTabbedPaneUI$2() {
}

$Class* SynthTabbedPaneUI$2::load$($String* name, bool initialize) {
	$loadClass(SynthTabbedPaneUI$2, name, initialize, &_SynthTabbedPaneUI$2_ClassInfo_, allocate$SynthTabbedPaneUI$2);
	return class$;
}

$Class* SynthTabbedPaneUI$2::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax