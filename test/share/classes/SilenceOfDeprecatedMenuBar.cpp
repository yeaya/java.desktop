#include <SilenceOfDeprecatedMenuBar.h>

#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $SilenceOfDeprecatedMenuBar$DeprecatedFrame = ::SilenceOfDeprecatedMenuBar$DeprecatedFrame;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JFrame = ::javax::swing::JFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0 : public $Runnable {
	$class(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		SilenceOfDeprecatedMenuBar::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _SilenceOfDeprecatedMenuBar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SilenceOfDeprecatedMenuBar::*)()>(&SilenceOfDeprecatedMenuBar::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&SilenceOfDeprecatedMenuBar::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SilenceOfDeprecatedMenuBar::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&SilenceOfDeprecatedMenuBar::setLookAndFeel))},
	{}
};

$InnerClassInfo _SilenceOfDeprecatedMenuBar_InnerClassesInfo_[] = {
	{"SilenceOfDeprecatedMenuBar$DeprecatedFrame", "SilenceOfDeprecatedMenuBar", "DeprecatedFrame", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SilenceOfDeprecatedMenuBar_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"SilenceOfDeprecatedMenuBar",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_SilenceOfDeprecatedMenuBar_MethodInfo_,
	nullptr,
	nullptr,
	_SilenceOfDeprecatedMenuBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SilenceOfDeprecatedMenuBar$DeprecatedFrame,SilenceOfDeprecatedMenuBar$DeprecatedFrame$1"
};

$Object* allocate$SilenceOfDeprecatedMenuBar($Class* clazz) {
	return $of($alloc(SilenceOfDeprecatedMenuBar));
}

void SilenceOfDeprecatedMenuBar::init$() {
}

void SilenceOfDeprecatedMenuBar::main($StringArray* args) {
	$init(SilenceOfDeprecatedMenuBar);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0, laf)));
				$SwingUtilities::invokeAndWait($$new(SilenceOfDeprecatedMenuBar));
			}
		}
	}
}

void SilenceOfDeprecatedMenuBar::run() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($SilenceOfDeprecatedMenuBar$DeprecatedFrame));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($JMenuBar, bar, $new($JMenuBar));
			frame->setJMenuBar(bar);
			frame->setBounds(100, 100, 100, 100);
			frame->setLocationRelativeTo(nullptr);
			frame->setVisible(true);
			if (bar != frame->getJMenuBar()) {
				$throwNew($RuntimeException, "Wrong JMenuBar"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			frame->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SilenceOfDeprecatedMenuBar::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(SilenceOfDeprecatedMenuBar);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void SilenceOfDeprecatedMenuBar::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(SilenceOfDeprecatedMenuBar);
	setLookAndFeel(laf);
}

SilenceOfDeprecatedMenuBar::SilenceOfDeprecatedMenuBar() {
}

$Class* SilenceOfDeprecatedMenuBar::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::classInfo$.name)) {
			return SilenceOfDeprecatedMenuBar$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(SilenceOfDeprecatedMenuBar, name, initialize, &_SilenceOfDeprecatedMenuBar_ClassInfo_, allocate$SilenceOfDeprecatedMenuBar);
	return class$;
}

$Class* SilenceOfDeprecatedMenuBar::class$ = nullptr;