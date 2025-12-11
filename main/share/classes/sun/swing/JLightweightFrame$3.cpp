#include <sun/swing/JLightweightFrame$3.h>

#include <java/awt/EventQueue.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <sun/swing/JLightweightFrame$3$1.h>
#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/LightweightContent.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JPanel = ::javax::swing::JPanel;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;
using $JLightweightFrame$3$1 = ::sun::swing::JLightweightFrame$3$1;
using $LightweightContent = ::sun::swing::LightweightContent;

namespace sun {
	namespace swing {

$FieldInfo _JLightweightFrame$3_FieldInfo_[] = {
	{"this$0", "Lsun/swing/JLightweightFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JLightweightFrame$3, this$0)},
	{}
};

$MethodInfo _JLightweightFrame$3_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/JLightweightFrame;)V", nullptr, 0, $method(static_cast<void(JLightweightFrame$3::*)($JLightweightFrame*)>(&JLightweightFrame$3::init$))},
	{"isPaintingOrigin", "()Z", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JLightweightFrame$3_EnclosingMethodInfo_ = {
	"sun.swing.JLightweightFrame",
	"initInterior",
	"()V"
};

$InnerClassInfo _JLightweightFrame$3_InnerClassesInfo_[] = {
	{"sun.swing.JLightweightFrame$3", nullptr, nullptr, 0},
	{"sun.swing.JLightweightFrame$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JLightweightFrame$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.JLightweightFrame$3",
	"javax.swing.JPanel",
	nullptr,
	_JLightweightFrame$3_FieldInfo_,
	_JLightweightFrame$3_MethodInfo_,
	nullptr,
	&_JLightweightFrame$3_EnclosingMethodInfo_,
	_JLightweightFrame$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.JLightweightFrame"
};

$Object* allocate$JLightweightFrame$3($Class* clazz) {
	return $of($alloc(JLightweightFrame$3));
}

void JLightweightFrame$3::init$($JLightweightFrame* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
}

void JLightweightFrame$3::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$init($JLightweightFrame);
	if (!$JLightweightFrame::copyBufferEnabled) {
		$nc(this->this$0->content)->paintLock();
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$JPanel::paint(g);
			$var($Rectangle, var$1, nullptr);
			if ($nc(g)->getClipBounds() != nullptr) {
				$assign(var$1, g->getClipBounds());
			} else {
				int32_t var$2 = $nc(this->this$0->contentPane)->getWidth();
				$assign(var$1, $new($Rectangle, 0, 0, var$2, $nc(this->this$0->contentPane)->getHeight()));
			}
			$var($Rectangle, clip, var$1);
			$nc(clip)->x = $Math::max(0, clip->x);
			clip->y = $Math::max(0, clip->y);
			clip->width = $Math::min($nc(this->this$0->contentPane)->getWidth(), clip->width);
			clip->height = $Math::min($nc(this->this$0->contentPane)->getHeight(), clip->height);
			$EventQueue::invokeLater($$new($JLightweightFrame$3$1, this, clip));
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			if (!$JLightweightFrame::copyBufferEnabled) {
				$nc(this->this$0->content)->paintUnlock();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool JLightweightFrame$3::isPaintingOrigin() {
	return true;
}

JLightweightFrame$3::JLightweightFrame$3() {
}

$Class* JLightweightFrame$3::load$($String* name, bool initialize) {
	$loadClass(JLightweightFrame$3, name, initialize, &_JLightweightFrame$3_ClassInfo_, allocate$JLightweightFrame$3);
	return class$;
}

$Class* JLightweightFrame$3::class$ = nullptr;

	} // swing
} // sun