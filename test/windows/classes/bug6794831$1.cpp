#include <bug6794831$1.h>

#include <bug6794831.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TYPE_INT_ARGB
#undef VERTICAL

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug6794831 = ::bug6794831;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JSlider = ::javax::swing::JSlider;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

$FieldInfo _bug6794831$1_FieldInfo_[] = {
	{"this$0", "Lbug6794831;", nullptr, $FINAL | $SYNTHETIC, $field(bug6794831$1, this$0)},
	{}
};

$MethodInfo _bug6794831$1_MethodInfo_[] = {
	{"<init>", "(Lbug6794831;)V", nullptr, 0, $method(static_cast<void(bug6794831$1::*)($bug6794831*)>(&bug6794831$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6794831$1_EnclosingMethodInfo_ = {
	"bug6794831",
	"run",
	"()V"
};

$InnerClassInfo _bug6794831$1_InnerClassesInfo_[] = {
	{"bug6794831$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6794831$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6794831$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6794831$1_FieldInfo_,
	_bug6794831$1_MethodInfo_,
	nullptr,
	&_bug6794831$1_EnclosingMethodInfo_,
	_bug6794831$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6794831"
};

$Object* allocate$bug6794831$1($Class* clazz) {
	return $of($alloc(bug6794831$1));
}

void bug6794831$1::init$($bug6794831* this$0) {
	$set(this, this$0, this$0);
}

void bug6794831$1::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				try {
					$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					$bug6794831::fail($(e->getMessage()));
				}
				$var($BufferedImage, image, $new($BufferedImage, 300, 200, $BufferedImage::TYPE_INT_ARGB));
				$var($JSlider, slider, $new($JSlider, 0, $Integer::MAX_VALUE - 1, 0));
				slider->setMajorTickSpacing(($Integer::MAX_VALUE - 1) / 4);
				slider->setPaintTicks(true);
				$nc(($cast($BasicSliderUI, $($cast($SliderUI, slider->getUI())))))->paintTicks($(image->getGraphics()));
				$assign(slider, $new($JSlider, 0, $Integer::MAX_VALUE - 1, 0));
				slider->setMinorTickSpacing(($Integer::MAX_VALUE - 1) / 4);
				slider->setPaintTicks(true);
				$nc(($cast($BasicSliderUI, $($cast($SliderUI, slider->getUI())))))->paintTicks($(image->getGraphics()));
				$assign(slider, $new($JSlider, 0, $Integer::MAX_VALUE - 1, 0));
				slider->setOrientation($JSlider::VERTICAL);
				slider->setMajorTickSpacing(($Integer::MAX_VALUE - 1) / 4);
				slider->setPaintTicks(true);
				$nc(($cast($BasicSliderUI, $($cast($SliderUI, slider->getUI())))))->paintTicks($(image->getGraphics()));
				$assign(slider, $new($JSlider, 0, $Integer::MAX_VALUE - 1, 0));
				slider->setOrientation($JSlider::VERTICAL);
				slider->setMinorTickSpacing(($Integer::MAX_VALUE - 1) / 4);
				slider->setPaintTicks(true);
				$nc(($cast($BasicSliderUI, $($cast($SliderUI, slider->getUI())))))->paintTicks($(image->getGraphics()));
				$nc(this->this$0->countDownLatch)->countDown();
			}
		}
	}
}

bug6794831$1::bug6794831$1() {
}

$Class* bug6794831$1::load$($String* name, bool initialize) {
	$loadClass(bug6794831$1, name, initialize, &_bug6794831$1_ClassInfo_, allocate$bug6794831$1);
	return class$;
}

$Class* bug6794831$1::class$ = nullptr;