#include <javax/swing/JTable$CellEditorRemover.h>

#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/TableCellEditor.h>
#include <jcpp.h>

#undef TRUE

using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellEditor = ::javax::swing::CellEditor;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;

namespace javax {
	namespace swing {

$FieldInfo _JTable$CellEditorRemover_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$CellEditorRemover, this$0)},
	{"focusManager", "Ljava/awt/KeyboardFocusManager;", nullptr, 0, $field(JTable$CellEditorRemover, focusManager)},
	{}
};

$MethodInfo _JTable$CellEditorRemover_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable;Ljava/awt/KeyboardFocusManager;)V", nullptr, $PUBLIC, $method(static_cast<void(JTable$CellEditorRemover::*)($JTable*,$KeyboardFocusManager*)>(&JTable$CellEditorRemover::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTable$CellEditorRemover_InnerClassesInfo_[] = {
	{"javax.swing.JTable$CellEditorRemover", "javax.swing.JTable", "CellEditorRemover", 0},
	{}
};

$ClassInfo _JTable$CellEditorRemover_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$CellEditorRemover",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_JTable$CellEditorRemover_FieldInfo_,
	_JTable$CellEditorRemover_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$CellEditorRemover_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$CellEditorRemover($Class* clazz) {
	return $of($alloc(JTable$CellEditorRemover));
}

void JTable$CellEditorRemover::init$($JTable* this$0, $KeyboardFocusManager* fm) {
	$set(this, this$0, this$0);
	$set(this, focusManager, fm);
}

void JTable$CellEditorRemover::propertyChange($PropertyChangeEvent* ev) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !this->this$0->isEditing();
	$init($Boolean);
	if (var$0 || !$equals(this->this$0->getClientProperty("terminateEditOnFocusLost"_s), $Boolean::TRUE)) {
		return;
	}
	$var($Component, c, $nc(this->focusManager)->getPermanentFocusOwner());
	while (c != nullptr) {
		if ($equals(c, this->this$0)) {
			return;
		} else if (($instanceOf($Window, c)) || ($instanceOf($Applet, c) && c->getParent() == nullptr)) {
			if (c == $SwingUtilities::getRoot(this->this$0)) {
				if (!$nc($(this->this$0->getCellEditor()))->stopCellEditing()) {
					$nc($(this->this$0->getCellEditor()))->cancelCellEditing();
				}
			}
			break;
		}
		$assign(c, c->getParent());
	}
}

JTable$CellEditorRemover::JTable$CellEditorRemover() {
}

$Class* JTable$CellEditorRemover::load$($String* name, bool initialize) {
	$loadClass(JTable$CellEditorRemover, name, initialize, &_JTable$CellEditorRemover_ClassInfo_, allocate$JTable$CellEditorRemover);
	return class$;
}

$Class* JTable$CellEditorRemover::class$ = nullptr;

	} // swing
} // javax