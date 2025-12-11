#include <com/apple/laf/AquaFileChooserUI$DoubleClickListener.h>

#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$DoubleClickListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DoubleClickListener, this$0)},
	{"list", "Lcom/apple/laf/AquaFileChooserUI$JTableExtension;", nullptr, 0, $field(AquaFileChooserUI$DoubleClickListener, list)},
	{}
};

$MethodInfo _AquaFileChooserUI$DoubleClickListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Lcom/apple/laf/AquaFileChooserUI$JTableExtension;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFileChooserUI$DoubleClickListener::*)($AquaFileChooserUI*,$AquaFileChooserUI$JTableExtension*)>(&AquaFileChooserUI$DoubleClickListener::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$DoubleClickListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$DoubleClickListener", "com.apple.laf.AquaFileChooserUI", "DoubleClickListener", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$DoubleClickListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$DoubleClickListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_AquaFileChooserUI$DoubleClickListener_FieldInfo_,
	_AquaFileChooserUI$DoubleClickListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$DoubleClickListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$DoubleClickListener($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$DoubleClickListener));
}

void AquaFileChooserUI$DoubleClickListener::init$($AquaFileChooserUI* this$0, $AquaFileChooserUI$JTableExtension* list) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
	$set(this, list, list);
}

void AquaFileChooserUI$DoubleClickListener::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->getClickCount() != 2) {
		return;
	}
	int32_t index = $nc(this->list)->locationToIndex($($nc(e)->getPoint()));
	if (index < 0) {
		return;
	}
	$var($File, f, $cast($File, $nc(($cast($AquaFileSystemModel, $($nc(this->list)->getModel()))))->getElementAt(index)));
	if (this->this$0->openDirectory(f)) {
		return;
	}
	if (!this->this$0->isSelectableInList(f)) {
		return;
	}
	$nc($(this->this$0->getFileChooser()))->approveSelection();
}

AquaFileChooserUI$DoubleClickListener::AquaFileChooserUI$DoubleClickListener() {
}

$Class* AquaFileChooserUI$DoubleClickListener::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$DoubleClickListener, name, initialize, &_AquaFileChooserUI$DoubleClickListener_ClassInfo_, allocate$AquaFileChooserUI$DoubleClickListener);
	return class$;
}

$Class* AquaFileChooserUI$DoubleClickListener::class$ = nullptr;

		} // laf
	} // apple
} // com