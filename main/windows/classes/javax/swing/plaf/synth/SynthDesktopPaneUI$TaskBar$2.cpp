#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar$2.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $SynthDesktopPaneUI$TaskBar = ::javax::swing::plaf::synth::SynthDesktopPaneUI$TaskBar;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthDesktopPaneUI$TaskBar$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar;", nullptr, $FINAL | $SYNTHETIC, $field(SynthDesktopPaneUI$TaskBar$2, this$0)},
	{}
};

$MethodInfo _SynthDesktopPaneUI$TaskBar$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthDesktopPaneUI$TaskBar;I)V", nullptr, 0, $method(static_cast<void(SynthDesktopPaneUI$TaskBar$2::*)($SynthDesktopPaneUI$TaskBar*,int32_t)>(&SynthDesktopPaneUI$TaskBar$2::init$))},
	{"paintRaisedBevel", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _SynthDesktopPaneUI$TaskBar$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar",
	"<init>",
	"()V"
};

$InnerClassInfo _SynthDesktopPaneUI$TaskBar$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar", "javax.swing.plaf.synth.SynthDesktopPaneUI", "TaskBar", $STATIC},
	{"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthDesktopPaneUI$TaskBar$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthDesktopPaneUI$TaskBar$2",
	"javax.swing.border.BevelBorder",
	nullptr,
	_SynthDesktopPaneUI$TaskBar$2_FieldInfo_,
	_SynthDesktopPaneUI$TaskBar$2_MethodInfo_,
	nullptr,
	&_SynthDesktopPaneUI$TaskBar$2_EnclosingMethodInfo_,
	_SynthDesktopPaneUI$TaskBar$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthDesktopPaneUI"
};

$Object* allocate$SynthDesktopPaneUI$TaskBar$2($Class* clazz) {
	return $of($alloc(SynthDesktopPaneUI$TaskBar$2));
}

void SynthDesktopPaneUI$TaskBar$2::init$($SynthDesktopPaneUI$TaskBar* this$0, int32_t bevelType) {
	$set(this, this$0, this$0);
	$BevelBorder::init$(bevelType);
}

void SynthDesktopPaneUI$TaskBar$2::paintRaisedBevel($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	g->setColor($(getHighlightOuterColor(c)));
	g->drawLine(0, 0, 0, h - 2);
	g->drawLine(1, 0, w - 2, 0);
	g->setColor($(getShadowOuterColor(c)));
	g->drawLine(0, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, 0, w - 1, h - 2);
	g->translate(-x, -y);
	g->setColor(oldColor);
}

SynthDesktopPaneUI$TaskBar$2::SynthDesktopPaneUI$TaskBar$2() {
}

$Class* SynthDesktopPaneUI$TaskBar$2::load$($String* name, bool initialize) {
	$loadClass(SynthDesktopPaneUI$TaskBar$2, name, initialize, &_SynthDesktopPaneUI$TaskBar$2_ClassInfo_, allocate$SynthDesktopPaneUI$TaskBar$2);
	return class$;
}

$Class* SynthDesktopPaneUI$TaskBar$2::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax