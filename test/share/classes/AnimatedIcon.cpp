#include <AnimatedIcon.h>

#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef SOMEBITS

using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class AnimatedIcon$$Lambda$lambda$main$0 : public $Runnable {
	$class(AnimatedIcon$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		AnimatedIcon::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AnimatedIcon$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AnimatedIcon$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnimatedIcon$$Lambda$lambda$main$0::*)()>(&AnimatedIcon$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AnimatedIcon$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"AnimatedIcon$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* AnimatedIcon$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(AnimatedIcon$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AnimatedIcon$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _AnimatedIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AnimatedIcon::*)()>(&AnimatedIcon::init$))},
	{"isAnimated", "(Ljava/awt/image/BufferedImage;Ljavax/swing/JButton;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BufferedImage*,$JButton*)>(&AnimatedIcon::isAnimated))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&AnimatedIcon::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AnimatedIcon::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _AnimatedIcon_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"AnimatedIcon",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AnimatedIcon_MethodInfo_
};

$Object* allocate$AnimatedIcon($Class* clazz) {
	return $of($alloc(AnimatedIcon));
}

void AnimatedIcon::init$() {
}

void AnimatedIcon::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(AnimatedIcon$$Lambda$lambda$main$0)));
}

void AnimatedIcon::isAnimated($BufferedImage* bi, $JButton* button) {
	if (!$nc(button)->imageUpdate(bi, $ImageObserver::SOMEBITS, 0, 0, 1, 1)) {
		$throwNew($RuntimeException);
	}
}

void AnimatedIcon::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bi, $new($BufferedImage, 1, 1, 1));
	$var($ImageIcon, icon, $new($ImageIcon, static_cast<$Image*>(bi)));
	$var($JButton, button, $new($JButton, static_cast<$Icon*>(icon)));
	isAnimated(bi, button);
	$nc($(button->getModel()))->setPressed(true);
	$nc($(button->getModel()))->setArmed(true);
	isAnimated(bi, button);
	$nc($(button->getModel()))->setPressed(false);
	$nc($(button->getModel()))->setArmed(false);
	$nc($(button->getModel()))->setSelected(true);
	isAnimated(bi, button);
	$nc($(button->getModel()))->setSelected(false);
	$nc($(button->getModel()))->setRollover(true);
	button->setRolloverEnabled(true);
	isAnimated(bi, button);
	$nc($(button->getModel()))->setSelected(true);
	isAnimated(bi, button);
	button->setIcon(nullptr);
	button->setPressedIcon(icon);
	$nc($(button->getModel()))->setPressed(true);
	$nc($(button->getModel()))->setArmed(true);
	isAnimated(bi, button);
}

AnimatedIcon::AnimatedIcon() {
}

$Class* AnimatedIcon::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AnimatedIcon$$Lambda$lambda$main$0::classInfo$.name)) {
			return AnimatedIcon$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(AnimatedIcon, name, initialize, &_AnimatedIcon_ClassInfo_, allocate$AnimatedIcon);
	return class$;
}

$Class* AnimatedIcon::class$ = nullptr;