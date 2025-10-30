#include <PopMenuUIExt.h>

#include <PopMenuUIExt$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <jcpp.h>

using $PopMenuUIExt$1 = ::PopMenuUIExt$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;

$FieldInfo _PopMenuUIExt_FieldInfo_[] = {
	{"popUp", "Ljavax/swing/Popup;", nullptr, $PRIVATE | $STATIC, $staticField(PopMenuUIExt, popUp)},
	{}
};

$MethodInfo _PopMenuUIExt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PopMenuUIExt::*)()>(&PopMenuUIExt::init$))},
	{"getPopup", "(Ljavax/swing/JPopupMenu;II)Ljavax/swing/Popup;", nullptr, $PUBLIC},
	{"getPopup", "()Ljavax/swing/Popup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Popup*(*)()>(&PopMenuUIExt::getPopup))},
	{}
};

$InnerClassInfo _PopMenuUIExt_InnerClassesInfo_[] = {
	{"PopMenuUIExt$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PopMenuUIExt_ClassInfo_ = {
	$ACC_SUPER,
	"PopMenuUIExt",
	"javax.swing.plaf.basic.BasicPopupMenuUI",
	nullptr,
	_PopMenuUIExt_FieldInfo_,
	_PopMenuUIExt_MethodInfo_,
	nullptr,
	nullptr,
	_PopMenuUIExt_InnerClassesInfo_,
	nullptr,
	nullptr,
	"PopMenuUIExt$1"
};

$Object* allocate$PopMenuUIExt($Class* clazz) {
	return $of($alloc(PopMenuUIExt));
}

$Popup* PopMenuUIExt::popUp = nullptr;

void PopMenuUIExt::init$() {
	$BasicPopupMenuUI::init$();
}

$Popup* PopMenuUIExt::getPopup($JPopupMenu* popup, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$PopupFactory::setSharedInstance($$new($PopMenuUIExt$1, this));
	$var($PopupFactory, factory, $PopupFactory::getSharedInstance());
	$assignStatic(PopMenuUIExt::popUp, $nc(factory)->getPopup($($nc(popup)->getInvoker()), popup, x, y));
	return PopMenuUIExt::popUp;
}

$Popup* PopMenuUIExt::getPopup() {
	$init(PopMenuUIExt);
	return PopMenuUIExt::popUp;
}

PopMenuUIExt::PopMenuUIExt() {
}

$Class* PopMenuUIExt::load$($String* name, bool initialize) {
	$loadClass(PopMenuUIExt, name, initialize, &_PopMenuUIExt_ClassInfo_, allocate$PopMenuUIExt);
	return class$;
}

$Class* PopMenuUIExt::class$ = nullptr;