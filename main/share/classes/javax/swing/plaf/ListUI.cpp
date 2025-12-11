#include <javax/swing/plaf/ListUI.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ListUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ListUI::*)()>(&ListUI::init$))},
	{"getCellBounds", "(Ljavax/swing/JList;II)Ljava/awt/Rectangle;", "(Ljavax/swing/JList<*>;II)Ljava/awt/Rectangle;", $PUBLIC | $ABSTRACT},
	{"indexToLocation", "(Ljavax/swing/JList;I)Ljava/awt/Point;", "(Ljavax/swing/JList<*>;I)Ljava/awt/Point;", $PUBLIC | $ABSTRACT},
	{"locationToIndex", "(Ljavax/swing/JList;Ljava/awt/Point;)I", "(Ljavax/swing/JList<*>;Ljava/awt/Point;)I", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ListUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.ListUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_ListUI_MethodInfo_
};

$Object* allocate$ListUI($Class* clazz) {
	return $of($alloc(ListUI));
}

void ListUI::init$() {
	$ComponentUI::init$();
}

ListUI::ListUI() {
}

$Class* ListUI::load$($String* name, bool initialize) {
	$loadClass(ListUI, name, initialize, &_ListUI_ClassInfo_, allocate$ListUI);
	return class$;
}

$Class* ListUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax