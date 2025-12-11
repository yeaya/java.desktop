#include <com/apple/laf/AquaFileChooserUI$FileListMouseListener.h>

#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaFileView.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
using $AquaFileView = ::com::apple::laf::AquaFileView;
using $Point = ::java::awt::Point;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$FileListMouseListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$FileListMouseListener, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$FileListMouseListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$FileListMouseListener::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$FileListMouseListener::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$FileListMouseListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$FileListMouseListener", "com.apple.laf.AquaFileChooserUI", "FileListMouseListener", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$FileListMouseListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$FileListMouseListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_AquaFileChooserUI$FileListMouseListener_FieldInfo_,
	_AquaFileChooserUI$FileListMouseListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$FileListMouseListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$FileListMouseListener($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$FileListMouseListener));
}

void AquaFileChooserUI$FileListMouseListener::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void AquaFileChooserUI$FileListMouseListener::mouseClicked($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, $nc(e)->getPoint());
	int32_t row = $nc(this->this$0->fFileList)->rowAtPoint(p);
	int32_t column = $nc(this->this$0->fFileList)->columnAtPoint(p);
	if ((column == -1) || (row == -1)) {
		return;
	}
	$var($File, clickedFile, ($cast($File, $nc(this->this$0->fFileList)->getValueAt(row, 0))));
	if (this->this$0->isSelectableForMode($(this->this$0->getFileChooser()), clickedFile)) {
		this->this$0->setFileName($($nc(this->this$0->fileView)->getName(clickedFile)));
	}
}

AquaFileChooserUI$FileListMouseListener::AquaFileChooserUI$FileListMouseListener() {
}

$Class* AquaFileChooserUI$FileListMouseListener::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$FileListMouseListener, name, initialize, &_AquaFileChooserUI$FileListMouseListener_ClassInfo_, allocate$AquaFileChooserUI$FileListMouseListener);
	return class$;
}

$Class* AquaFileChooserUI$FileListMouseListener::class$ = nullptr;

		} // laf
	} // apple
} // com