#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthDesktopPaneUI$TaskBar = ::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthDesktopPaneUI$TaskBar$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar;", nullptr, $FINAL | $SYNTHETIC, $field(SynthDesktopPaneUI$TaskBar$1, this$0)},
	{}
};

$MethodInfo _SynthDesktopPaneUI$TaskBar$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar;III)V", nullptr, 0, $method(static_cast<void(SynthDesktopPaneUI$TaskBar$1::*)($SynthDesktopPaneUI$TaskBar*,int32_t,int32_t,int32_t)>(&SynthDesktopPaneUI$TaskBar$1::init$))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthDesktopPaneUI$TaskBar$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar",
	"<init>",
	"()V"
};

$InnerClassInfo _SynthDesktopPaneUI$TaskBar$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar", "javax.swing.plaf.synth.SynthDesktopPaneUI", "TaskBar", $STATIC},
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthDesktopPaneUI$TaskBar$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$1",
	"java.awt.FlowLayout",
	nullptr,
	_SynthDesktopPaneUI$TaskBar$1_FieldInfo_,
	_SynthDesktopPaneUI$TaskBar$1_MethodInfo_,
	nullptr,
	&_SynthDesktopPaneUI$TaskBar$1_EnclosingMethodInfo_,
	_SynthDesktopPaneUI$TaskBar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthDesktopPaneUI"
};

$Object* allocate$SynthDesktopPaneUI$TaskBar$1($Class* clazz) {
	return $of($alloc(SynthDesktopPaneUI$TaskBar$1));
}

void SynthDesktopPaneUI$TaskBar$1::init$($SynthDesktopPaneUI$TaskBar* this$0, int32_t align, int32_t hgap, int32_t vgap) {
	$set(this, this$0, this$0);
	$FlowLayout::init$(align, hgap, vgap);
}

void SynthDesktopPaneUI$TaskBar$1::layoutContainer($Container* target) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentArray, comps, $nc(target)->getComponents());
	int32_t n = $nc(comps)->length;
	if (n > 0) {
		int32_t prefWidth = 0;
		{
			$var($ComponentArray, arr$, comps);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, c, arr$->get(i$));
				{
					$nc(c)->setPreferredSize(nullptr);
					$var($Dimension, prefSize, c->getPreferredSize());
					if ($nc(prefSize)->width > prefWidth) {
						prefWidth = prefSize->width;
					}
				}
			}
		}
		$var($Insets, insets, target->getInsets());
		int32_t tw = target->getWidth() - $nc(insets)->left - insets->right;
		int32_t w = $Math::min(prefWidth, $Math::max(10, $div(tw, n)));
		{
			$var($ComponentArray, arr$, comps);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, c, arr$->get(i$));
				{
					$var($Dimension, prefSize, $nc(c)->getPreferredSize());
					c->setPreferredSize($$new($Dimension, w, $nc(prefSize)->height));
				}
			}
		}
	}
	$FlowLayout::layoutContainer(target);
}

SynthDesktopPaneUI$TaskBar$1::SynthDesktopPaneUI$TaskBar$1() {
}

$Class* SynthDesktopPaneUI$TaskBar$1::load$($String* name, bool initialize) {
	$loadClass(SynthDesktopPaneUI$TaskBar$1, name, initialize, &_SynthDesktopPaneUI$TaskBar$1_ClassInfo_, allocate$SynthDesktopPaneUI$TaskBar$1);
	return class$;
}

$Class* SynthDesktopPaneUI$TaskBar$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax