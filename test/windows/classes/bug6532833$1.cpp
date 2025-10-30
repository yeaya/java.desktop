#include <bug6532833$1.h>

#include <bug6532833.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner.h>
#include <jcpp.h>

#undef RIGHT_TO_LEFT

using $JSpinnerArray = $Array<::javax::swing::JSpinner>;
using $bug6532833 = ::bug6532833;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;

$MethodInfo _bug6532833$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6532833$1::*)()>(&bug6532833$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6532833$1_EnclosingMethodInfo_ = {
	"bug6532833",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6532833$1_InnerClassesInfo_[] = {
	{"bug6532833$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6532833$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6532833$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6532833$1_MethodInfo_,
	nullptr,
	&_bug6532833$1_EnclosingMethodInfo_,
	_bug6532833$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6532833"
};

$Object* allocate$bug6532833$1($Class* clazz) {
	return $of($alloc(bug6532833$1));
}

void bug6532833$1::init$() {
}

void bug6532833$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JSpinnerArray, spinners, $new($JSpinnerArray, 2));
	for (int32_t i = 0; i < spinners->length; ++i) {
		$var($JSpinner, spinner, $new($JSpinner));
		spinner->setValue($($Integer::valueOf(2010)));
		$var($Component, arrowUp, spinner->getComponent(0));
		$var($Component, arrowDown, spinner->getComponent(1));
		$var($LayoutManager, layout, spinner->getLayout());
		$nc(layout)->removeLayoutComponent(arrowUp);
		layout->removeLayoutComponent(arrowDown);
		if (i == 1) {
			$init($ComponentOrientation);
			spinner->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
		}
		spinners->set(i, spinner);
	}
	$var($JFrame, frame, $new($JFrame));
	{
		$var($JSpinnerArray, arr$, spinners);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($JSpinner, spinner, arr$->get(i$));
			{
				$nc($(frame->getContentPane()))->add(static_cast<$Component*>(spinner));
			}
		}
	}
	frame->pack();
	{
		$var($JSpinnerArray, arr$, spinners);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($JSpinner, spinner, arr$->get(i$));
			{
				$var($Insets, insets, $nc(spinner)->getInsets());
				int32_t var$0 = spinner->getWidth();
				if (var$0 != $nc(insets)->left + insets->right + $nc($(spinner->getEditor()))->getWidth()) {
					$throwNew($RuntimeException, "Spinner editor width is invalid"_s);
				}
			}
		}
	}
	frame->dispose();
}

bug6532833$1::bug6532833$1() {
}

$Class* bug6532833$1::load$($String* name, bool initialize) {
	$loadClass(bug6532833$1, name, initialize, &_bug6532833$1_ClassInfo_, allocate$bug6532833$1);
	return class$;
}

$Class* bug6532833$1::class$ = nullptr;