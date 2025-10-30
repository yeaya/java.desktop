#include <javax/swing/CellRendererPane$AccessibleCellRendererPane.h>

#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/CellRendererPane.h>
#include <jcpp.h>

#undef PANEL

using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $CellRendererPane = ::javax::swing::CellRendererPane;

namespace javax {
	namespace swing {

$FieldInfo _CellRendererPane$AccessibleCellRendererPane_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/CellRendererPane;", nullptr, $FINAL | $SYNTHETIC, $field(CellRendererPane$AccessibleCellRendererPane, this$0)},
	{}
};

$MethodInfo _CellRendererPane$AccessibleCellRendererPane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/CellRendererPane;)V", nullptr, $PROTECTED, $method(static_cast<void(CellRendererPane$AccessibleCellRendererPane::*)($CellRendererPane*)>(&CellRendererPane$AccessibleCellRendererPane::init$))},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CellRendererPane$AccessibleCellRendererPane_InnerClassesInfo_[] = {
	{"javax.swing.CellRendererPane$AccessibleCellRendererPane", "javax.swing.CellRendererPane", "AccessibleCellRendererPane", $PROTECTED},
	{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
	{}
};

$ClassInfo _CellRendererPane$AccessibleCellRendererPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.CellRendererPane$AccessibleCellRendererPane",
	"java.awt.Container$AccessibleAWTContainer",
	nullptr,
	_CellRendererPane$AccessibleCellRendererPane_FieldInfo_,
	_CellRendererPane$AccessibleCellRendererPane_MethodInfo_,
	nullptr,
	nullptr,
	_CellRendererPane$AccessibleCellRendererPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.CellRendererPane"
};

$Object* allocate$CellRendererPane$AccessibleCellRendererPane($Class* clazz) {
	return $of($alloc(CellRendererPane$AccessibleCellRendererPane));
}

void CellRendererPane$AccessibleCellRendererPane::init$($CellRendererPane* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* CellRendererPane$AccessibleCellRendererPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PANEL;
}

CellRendererPane$AccessibleCellRendererPane::CellRendererPane$AccessibleCellRendererPane() {
}

$Class* CellRendererPane$AccessibleCellRendererPane::load$($String* name, bool initialize) {
	$loadClass(CellRendererPane$AccessibleCellRendererPane, name, initialize, &_CellRendererPane$AccessibleCellRendererPane_ClassInfo_, allocate$CellRendererPane$AccessibleCellRendererPane);
	return class$;
}

$Class* CellRendererPane$AccessibleCellRendererPane::class$ = nullptr;

	} // swing
} // javax