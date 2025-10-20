#include <bug7072653$2.h>

#include <bug7072653.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

#undef POPUP

using $WindowArray = $Array<::java::awt::Window>;
using $bug7072653 = ::bug7072653;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $Window$Type = ::java::awt::Window$Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;

$FieldInfo _bug7072653$2_FieldInfo_[] = {
	{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug7072653$2, val$lookAndFeelString)},
	{}
};

$MethodInfo _bug7072653$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(bug7072653$2::*)($String*)>(&bug7072653$2::init$))},
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7072653$2_EnclosingMethodInfo_ = {
	"bug7072653",
	"setup",
	"(Ljava/lang/String;Ljava/awt/GraphicsDevice;)V"
};

$InnerClassInfo _bug7072653$2_InnerClassesInfo_[] = {
	{"bug7072653$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7072653$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7072653$2",
	"java.lang.Object",
	"javax.swing.event.PopupMenuListener",
	_bug7072653$2_FieldInfo_,
	_bug7072653$2_MethodInfo_,
	nullptr,
	&_bug7072653$2_EnclosingMethodInfo_,
	_bug7072653$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7072653"
};

$Object* allocate$bug7072653$2($Class* clazz) {
	return $of($alloc(bug7072653$2));
}

void bug7072653$2::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void bug7072653$2::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
}

void bug7072653$2::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t height = 0;
	{
		$var($WindowArray, arr$, $JFrame::getWindows());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Window, window, arr$->get(i$));
			{
				$init($Window$Type);
				if ($Window$Type::POPUP == $nc(window)->getType()) {
					if ($nc($(window->getOwner()))->isVisible()) {
						height = $nc($(window->getSize()))->height;
						break;
					}
				}
			}
		}
	}
	$init($bug7072653);
	$var($GraphicsConfiguration, gc, $nc($bug7072653::combobox)->getGraphicsConfiguration());
	$var($Insets, insets, $nc($($Toolkit::getDefaultToolkit()))->getScreenInsets(gc));
	int32_t gcHeight = $nc($($nc(gc)->getBounds()))->height;
	gcHeight = gcHeight - $nc(insets)->top - insets->bottom;
	if (height == gcHeight) {
		return;
	}
	$var($String, exception, $str({"Popup window height For LookAndFeel"_s, this->val$lookAndFeelString, " is wrong\nShould be "_s, $$str(gcHeight), ", Actually "_s, $$str(height)}));
	$throwNew($RuntimeException, exception);
}

void bug7072653$2::popupMenuCanceled($PopupMenuEvent* e) {
}

bug7072653$2::bug7072653$2() {
}

$Class* bug7072653$2::load$($String* name, bool initialize) {
	$loadClass(bug7072653$2, name, initialize, &_bug7072653$2_ClassInfo_, allocate$bug7072653$2);
	return class$;
}

$Class* bug7072653$2::class$ = nullptr;