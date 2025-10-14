#include <javax/swing/PopupFactory$HeavyWeightPopup$1.h>

#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/swing/PopupFactory$HeavyWeightPopup.h>
#include <javax/swing/PopupFactory.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $PopupFactory = ::javax::swing::PopupFactory;
using $PopupFactory$HeavyWeightPopup = ::javax::swing::PopupFactory$HeavyWeightPopup;

namespace javax {
	namespace swing {

$FieldInfo _PopupFactory$HeavyWeightPopup$1_FieldInfo_[] = {
	{"val$w", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(PopupFactory$HeavyWeightPopup$1, val$w)},
	{}
};

$MethodInfo _PopupFactory$HeavyWeightPopup$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(static_cast<void(PopupFactory$HeavyWeightPopup$1::*)($Window*)>(&PopupFactory$HeavyWeightPopup$1::init$))},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PopupFactory$HeavyWeightPopup$1_EnclosingMethodInfo_ = {
	"javax.swing.PopupFactory$HeavyWeightPopup",
	"recycleHeavyWeightPopup",
	"(Ljavax/swing/PopupFactory$HeavyWeightPopup;)V"
};

$InnerClassInfo _PopupFactory$HeavyWeightPopup$1_InnerClassesInfo_[] = {
	{"javax.swing.PopupFactory$HeavyWeightPopup", "javax.swing.PopupFactory", "HeavyWeightPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$HeavyWeightPopup$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PopupFactory$HeavyWeightPopup$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.PopupFactory$HeavyWeightPopup$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_PopupFactory$HeavyWeightPopup$1_FieldInfo_,
	_PopupFactory$HeavyWeightPopup$1_MethodInfo_,
	nullptr,
	&_PopupFactory$HeavyWeightPopup$1_EnclosingMethodInfo_,
	_PopupFactory$HeavyWeightPopup$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.PopupFactory"
};

$Object* allocate$PopupFactory$HeavyWeightPopup$1($Class* clazz) {
	return $of($alloc(PopupFactory$HeavyWeightPopup$1));
}

void PopupFactory$HeavyWeightPopup$1::init$($Window* val$w) {
	$set(this, val$w, val$w);
	$WindowAdapter::init$();
}

void PopupFactory$HeavyWeightPopup$1::windowClosed($WindowEvent* e) {
	$var($List, popups, nullptr);
	$load($PopupFactory$HeavyWeightPopup);
	$synchronized($PopupFactory$HeavyWeightPopup::class$) {
		$var($Map, heavyPopupCache2, $PopupFactory$HeavyWeightPopup::getHeavyWeightPopupCache());
		$assign(popups, $cast($List, $nc(heavyPopupCache2)->remove(this->val$w)));
	}
	if (popups != nullptr) {
		for (int32_t counter = popups->size() - 1; counter >= 0; --counter) {
			$nc(($cast($PopupFactory$HeavyWeightPopup, $(popups->get(counter)))))->_dispose();
		}
	}
}

PopupFactory$HeavyWeightPopup$1::PopupFactory$HeavyWeightPopup$1() {
}

$Class* PopupFactory$HeavyWeightPopup$1::load$($String* name, bool initialize) {
	$loadClass(PopupFactory$HeavyWeightPopup$1, name, initialize, &_PopupFactory$HeavyWeightPopup$1_ClassInfo_, allocate$PopupFactory$HeavyWeightPopup$1);
	return class$;
}

$Class* PopupFactory$HeavyWeightPopup$1::class$ = nullptr;

	} // swing
} // javax