#include <java/awt/ScrollPane$AccessibleAWTScrollPane.h>

#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/ScrollPane.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef SCROLL_PANE

using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ScrollPane = ::java::awt::ScrollPane;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

$FieldInfo _ScrollPane$AccessibleAWTScrollPane_FieldInfo_[] = {
	{"this$0", "Ljava/awt/ScrollPane;", nullptr, $FINAL | $SYNTHETIC, $field(ScrollPane$AccessibleAWTScrollPane, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ScrollPane$AccessibleAWTScrollPane, serialVersionUID)},
	{}
};

$MethodInfo _ScrollPane$AccessibleAWTScrollPane_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/ScrollPane;)V", nullptr, $PROTECTED, $method(static_cast<void(ScrollPane$AccessibleAWTScrollPane::*)($ScrollPane*)>(&ScrollPane$AccessibleAWTScrollPane::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ScrollPane$AccessibleAWTScrollPane_InnerClassesInfo_[] = {
	{"java.awt.ScrollPane$AccessibleAWTScrollPane", "java.awt.ScrollPane", "AccessibleAWTScrollPane", $PROTECTED},
	{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
	{}
};

$ClassInfo _ScrollPane$AccessibleAWTScrollPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.ScrollPane$AccessibleAWTScrollPane",
	"java.awt.Container$AccessibleAWTContainer",
	nullptr,
	_ScrollPane$AccessibleAWTScrollPane_FieldInfo_,
	_ScrollPane$AccessibleAWTScrollPane_MethodInfo_,
	nullptr,
	nullptr,
	_ScrollPane$AccessibleAWTScrollPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.ScrollPane"
};

$Object* allocate$ScrollPane$AccessibleAWTScrollPane($Class* clazz) {
	return $of($alloc(ScrollPane$AccessibleAWTScrollPane));
}

void ScrollPane$AccessibleAWTScrollPane::init$($ScrollPane* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* ScrollPane$AccessibleAWTScrollPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::SCROLL_PANE;
}

ScrollPane$AccessibleAWTScrollPane::ScrollPane$AccessibleAWTScrollPane() {
}

$Class* ScrollPane$AccessibleAWTScrollPane::load$($String* name, bool initialize) {
	$loadClass(ScrollPane$AccessibleAWTScrollPane, name, initialize, &_ScrollPane$AccessibleAWTScrollPane_ClassInfo_, allocate$ScrollPane$AccessibleAWTScrollPane);
	return class$;
}

$Class* ScrollPane$AccessibleAWTScrollPane::class$ = nullptr;

	} // awt
} // java