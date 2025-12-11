#include <com/apple/laf/ScreenPopupFactory.h>

#include <com/apple/laf/ScreenPopupFactory$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <sun/swing/SwingAccessor$PopupFactoryAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

#undef FALSE
#undef OPAQUE
#undef TRANSLUCENT
#undef TRUE
#undef WINDOW_ALPHA
#undef WINDOW_DRAGGABLE_BACKGROUND
#undef WINDOW_FADE_DELEGATE
#undef WINDOW_SHADOW

using $ScreenPopupFactory$1 = ::com::apple::laf::ScreenPopupFactory$1;
using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JRootPane = ::javax::swing::JRootPane;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$PopupFactoryAccessor = ::sun::swing::SwingAccessor$PopupFactoryAccessor;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ScreenPopupFactory_FieldInfo_[] = {
	{"TRANSLUCENT", "Ljava/lang/Float;", nullptr, $STATIC | $FINAL, $staticField(ScreenPopupFactory, TRANSLUCENT)},
	{"OPAQUE", "Ljava/lang/Float;", nullptr, $STATIC | $FINAL, $staticField(ScreenPopupFactory, OPAQUE)},
	{"fIsActive", "Z", nullptr, 0, $field(ScreenPopupFactory, fIsActive)},
	{}
};

$MethodInfo _ScreenPopupFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ScreenPopupFactory::*)()>(&ScreenPopupFactory::init$))},
	{"getPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PUBLIC},
	{"getWindow", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Window*(*)($Component*)>(&ScreenPopupFactory::getWindow))},
	{"setActive", "(Z)V", nullptr, 0},
	{}
};

$InnerClassInfo _ScreenPopupFactory_InnerClassesInfo_[] = {
	{"com.apple.laf.ScreenPopupFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScreenPopupFactory_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.ScreenPopupFactory",
	"javax.swing.PopupFactory",
	nullptr,
	_ScreenPopupFactory_FieldInfo_,
	_ScreenPopupFactory_MethodInfo_,
	nullptr,
	nullptr,
	_ScreenPopupFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.ScreenPopupFactory$1"
};

$Object* allocate$ScreenPopupFactory($Class* clazz) {
	return $of($alloc(ScreenPopupFactory));
}

$Float* ScreenPopupFactory::TRANSLUCENT = nullptr;
$Float* ScreenPopupFactory::OPAQUE = nullptr;

void ScreenPopupFactory::init$() {
	$PopupFactory::init$();
	this->fIsActive = true;
}

void ScreenPopupFactory::setActive(bool b) {
	this->fIsActive = b;
}

$Window* ScreenPopupFactory::getWindow($Component* c) {
	$init(ScreenPopupFactory);
	$var($Component, w, c);
	while (!($instanceOf($Window, w)) && (w != nullptr)) {
		$assign(w, w->getParent());
	}
	return $cast($Window, w);
}

$Popup* ScreenPopupFactory::getPopup($Component* comp, $Component* invoker, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	if (invoker == nullptr) {
		$throwNew($IllegalArgumentException, "Popup.getPopup must be passed non-null contents"_s);
	}
	$var($Popup, popup, nullptr);
	if (this->fIsActive) {
		$assign(popup, $nc($($SwingAccessor::getPopupFactoryAccessor()))->getHeavyWeightPopup(this, comp, invoker, x, y));
	} else {
		$assign(popup, $PopupFactory::getPopup(comp, invoker, x, y));
	}
	$var($Window, w, getWindow(invoker));
	if (w == nullptr) {
		return popup;
	}
	if (!($instanceOf($RootPaneContainer, w))) {
		return popup;
	}
	$var($JRootPane, popupRootPane, $nc(($cast($RootPaneContainer, w)))->getRootPane());
	if (this->fIsActive) {
		$init($CPlatformWindow);
		$nc(popupRootPane)->putClientProperty($CPlatformWindow::WINDOW_ALPHA, ScreenPopupFactory::TRANSLUCENT);
		$init($Boolean);
		popupRootPane->putClientProperty($CPlatformWindow::WINDOW_SHADOW, $Boolean::TRUE);
		popupRootPane->putClientProperty($CPlatformWindow::WINDOW_FADE_DELEGATE, invoker);
		$nc(w)->setBackground($($UIManager::getColor("PopupMenu.translucentBackground"_s)));
		popupRootPane->putClientProperty($CPlatformWindow::WINDOW_DRAGGABLE_BACKGROUND, $Boolean::FALSE);
		$SwingUtilities::invokeLater($$new($ScreenPopupFactory$1, this, popupRootPane));
	} else {
		$init($CPlatformWindow);
		$nc(popupRootPane)->putClientProperty($CPlatformWindow::WINDOW_ALPHA, ScreenPopupFactory::OPAQUE);
		$init($Boolean);
		popupRootPane->putClientProperty($CPlatformWindow::WINDOW_SHADOW, $Boolean::FALSE);
	}
	return popup;
}

void clinit$ScreenPopupFactory($Class* class$) {
	$assignStatic(ScreenPopupFactory::TRANSLUCENT, $Float::valueOf(248.0f / 255.0f));
	$assignStatic(ScreenPopupFactory::OPAQUE, $Float::valueOf(1.0f));
}

ScreenPopupFactory::ScreenPopupFactory() {
}

$Class* ScreenPopupFactory::load$($String* name, bool initialize) {
	$loadClass(ScreenPopupFactory, name, initialize, &_ScreenPopupFactory_ClassInfo_, clinit$ScreenPopupFactory, allocate$ScreenPopupFactory);
	return class$;
}

$Class* ScreenPopupFactory::class$ = nullptr;

		} // laf
	} // apple
} // com