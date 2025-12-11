#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$JTableExtension_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$JTableExtension, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$JTableExtension_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$JTableExtension::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$JTableExtension::init$))},
	{"ensureIndexIsVisible", "(I)V", nullptr, $PUBLIC},
	{"locationToIndex", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"removeSelectedIndex", "(I)V", nullptr, $PUBLIC},
	{"setSelectedIndex", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$JTableExtension_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$JTableExtension", "com.apple.laf.AquaFileChooserUI", "JTableExtension", 0},
	{}
};

$ClassInfo _AquaFileChooserUI$JTableExtension_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$JTableExtension",
	"javax.swing.JTable",
	nullptr,
	_AquaFileChooserUI$JTableExtension_FieldInfo_,
	_AquaFileChooserUI$JTableExtension_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$JTableExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$JTableExtension($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$JTableExtension));
}

void AquaFileChooserUI$JTableExtension::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JTable::init$();
}

void AquaFileChooserUI$JTableExtension::setSelectedIndex(int32_t index) {
	$nc($(getSelectionModel()))->setSelectionInterval(index, index);
}

void AquaFileChooserUI$JTableExtension::removeSelectedIndex(int32_t index) {
	$nc($(getSelectionModel()))->removeSelectionInterval(index, index);
}

void AquaFileChooserUI$JTableExtension::ensureIndexIsVisible(int32_t index) {
	$var($Rectangle, cellBounds, getCellRect(index, 0, false));
	if (cellBounds != nullptr) {
		scrollRectToVisible(cellBounds);
	}
}

int32_t AquaFileChooserUI$JTableExtension::locationToIndex($Point* location) {
	return rowAtPoint(location);
}

AquaFileChooserUI$JTableExtension::AquaFileChooserUI$JTableExtension() {
}

$Class* AquaFileChooserUI$JTableExtension::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$JTableExtension, name, initialize, &_AquaFileChooserUI$JTableExtension_ClassInfo_, allocate$AquaFileChooserUI$JTableExtension);
	return class$;
}

$Class* AquaFileChooserUI$JTableExtension::class$ = nullptr;

		} // laf
	} // apple
} // com