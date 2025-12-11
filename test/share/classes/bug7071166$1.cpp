#include <bug7071166$1.h>

#include <bug7071166.h>
#include <java/awt/Container.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <jcpp.h>

#undef POSITIONS
#undef RELATED

using $bug7071166 = ::bug7071166;
using $Container = ::java::awt::Container;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;

$MethodInfo _bug7071166$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7071166$1::*)()>(&bug7071166$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7071166$1_EnclosingMethodInfo_ = {
	"bug7071166",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7071166$1_InnerClassesInfo_[] = {
	{"bug7071166$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7071166$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7071166$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7071166$1_MethodInfo_,
	nullptr,
	&_bug7071166$1_EnclosingMethodInfo_,
	_bug7071166$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7071166"
};

$Object* allocate$bug7071166$1($Class* clazz) {
	return $of($alloc(bug7071166$1));
}

void bug7071166$1::init$() {
}

void bug7071166$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($LayoutStyle, layoutStyle, $LayoutStyle::getInstance());
	$nc($System::out)->println($$str({"LayoutStyle: "_s, layoutStyle}));
	$init($bug7071166);
	for (int32_t i = 0; i < $nc($bug7071166::POSITIONS)->length; ++i) {
		int32_t position = $nc($bug7071166::POSITIONS)->get(i);
		try {
			$var($JComponent, var$0, static_cast<$JComponent*>($new($JButton)));
			$var($JComponent, var$1, static_cast<$JComponent*>($new($JButton)));
			$init($LayoutStyle$ComponentPlacement);
			$var($LayoutStyle$ComponentPlacement, var$2, $LayoutStyle$ComponentPlacement::RELATED);
			int32_t var$3 = position;
			$nc(layoutStyle)->getPreferredGap(var$0, var$1, var$2, var$3, $$new($Container));
			if (i > 3) {
				$throwNew($RuntimeException, $$str({"IllegalArgumentException is not thrown for position "_s, $$str(position)}));
			}
		} catch ($IllegalArgumentException& e) {
			if (i <= 3) {
				$throwNew($RuntimeException, $$str({"IllegalArgumentException is thrown for position "_s, $$str(position)}));
			}
		}
	}
}

bug7071166$1::bug7071166$1() {
}

$Class* bug7071166$1::load$($String* name, bool initialize) {
	$loadClass(bug7071166$1, name, initialize, &_bug7071166$1_ClassInfo_, allocate$bug7071166$1);
	return class$;
}

$Class* bug7071166$1::class$ = nullptr;