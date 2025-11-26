#include <javax/swing/plaf/synth/SynthSplitPaneUI$1.h>

#include <java/awt/Canvas.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/plaf/synth/SynthSplitPaneUI.h>
#include <jcpp.h>

using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthSplitPaneUI = ::javax::swing::plaf::synth::SynthSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthSplitPaneUI$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthSplitPaneUI$1, this$0)},
	{}
};

$MethodInfo _SynthSplitPaneUI$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthSplitPaneUI;)V", nullptr, 0, $method(static_cast<void(SynthSplitPaneUI$1::*)($SynthSplitPaneUI*)>(&SynthSplitPaneUI$1::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthSplitPaneUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthSplitPaneUI",
	"createDefaultNonContinuousLayoutDivider",
	"()Ljava/awt/Component;"
};

$InnerClassInfo _SynthSplitPaneUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthSplitPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthSplitPaneUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthSplitPaneUI$1",
	"java.awt.Canvas",
	nullptr,
	_SynthSplitPaneUI$1_FieldInfo_,
	_SynthSplitPaneUI$1_MethodInfo_,
	nullptr,
	&_SynthSplitPaneUI$1_EnclosingMethodInfo_,
	_SynthSplitPaneUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthSplitPaneUI"
};

$Object* allocate$SynthSplitPaneUI$1($Class* clazz) {
	return $of($alloc(SynthSplitPaneUI$1));
}

void SynthSplitPaneUI$1::init$($SynthSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
	$Canvas::init$();
}

void SynthSplitPaneUI$1::paint($Graphics* g) {
	$var($Graphics, var$0, g);
	int32_t var$1 = getWidth();
	this->this$0->paintDragDivider(var$0, 0, 0, var$1, getHeight());
}

SynthSplitPaneUI$1::SynthSplitPaneUI$1() {
}

$Class* SynthSplitPaneUI$1::load$($String* name, bool initialize) {
	$loadClass(SynthSplitPaneUI$1, name, initialize, &_SynthSplitPaneUI$1_ClassInfo_, allocate$SynthSplitPaneUI$1);
	return class$;
}

$Class* SynthSplitPaneUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax