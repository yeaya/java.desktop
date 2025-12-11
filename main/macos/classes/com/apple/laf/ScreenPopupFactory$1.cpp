#include <com/apple/laf/ScreenPopupFactory$1.h>

#include <com/apple/laf/ScreenPopupFactory.h>
#include <java/lang/Math.h>
#include <javax/swing/JRootPane.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef WINDOW_SHADOW_REVALIDATE_NOW

using $ScreenPopupFactory = ::com::apple::laf::ScreenPopupFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRootPane = ::javax::swing::JRootPane;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ScreenPopupFactory$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/ScreenPopupFactory;", nullptr, $FINAL | $SYNTHETIC, $field(ScreenPopupFactory$1, this$0)},
	{"val$popupRootPane", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(ScreenPopupFactory$1, val$popupRootPane)},
	{}
};

$MethodInfo _ScreenPopupFactory$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/ScreenPopupFactory;Ljavax/swing/JRootPane;)V", "()V", 0, $method(static_cast<void(ScreenPopupFactory$1::*)($ScreenPopupFactory*,$JRootPane*)>(&ScreenPopupFactory$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScreenPopupFactory$1_EnclosingMethodInfo_ = {
	"com.apple.laf.ScreenPopupFactory",
	"getPopup",
	"(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;"
};

$InnerClassInfo _ScreenPopupFactory$1_InnerClassesInfo_[] = {
	{"com.apple.laf.ScreenPopupFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScreenPopupFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.ScreenPopupFactory$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_ScreenPopupFactory$1_FieldInfo_,
	_ScreenPopupFactory$1_MethodInfo_,
	nullptr,
	&_ScreenPopupFactory$1_EnclosingMethodInfo_,
	_ScreenPopupFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.ScreenPopupFactory"
};

$Object* allocate$ScreenPopupFactory$1($Class* clazz) {
	return $of($alloc(ScreenPopupFactory$1));
}

void ScreenPopupFactory$1::init$($ScreenPopupFactory* this$0, $JRootPane* val$popupRootPane) {
	$set(this, this$0, this$0);
	$set(this, val$popupRootPane, val$popupRootPane);
}

void ScreenPopupFactory$1::run() {
	$init($CPlatformWindow);
	$nc(this->val$popupRootPane)->putClientProperty($CPlatformWindow::WINDOW_SHADOW_REVALIDATE_NOW, $($Double::valueOf($Math::random())));
}

ScreenPopupFactory$1::ScreenPopupFactory$1() {
}

$Class* ScreenPopupFactory$1::load$($String* name, bool initialize) {
	$loadClass(ScreenPopupFactory$1, name, initialize, &_ScreenPopupFactory$1_ClassInfo_, allocate$ScreenPopupFactory$1);
	return class$;
}

$Class* ScreenPopupFactory$1::class$ = nullptr;

		} // laf
	} // apple
} // com